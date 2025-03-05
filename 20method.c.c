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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
};

struct tuple2$2char$phvoid$p
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
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1void$ph* method_generics_types;
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static void sClass_finalize(struct sClass* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item);
static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self);
static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self);
static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self);
static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self);
static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sCurrentNode* __result_obj__241;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value260 = (void*)0;
char* __result_obj__242;
    __result_obj__242 = come_increment_ref_count(((char*)(__right_value260=__builtin_string(self->sname))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count2(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__243;
    __result_obj__243 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sCurrentNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__243 = come_decrement_ref_count2(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__243;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
char* class_name_354;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sClass* current_stack_355;
struct sVarTable* vtable_370;
struct map$2void$phvoid$ph* o2_saved_371;
char* it_374;
char* key_377;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sVar* value_378;
void* __right_value310 = (void*)0;
struct sType* type2_382;
void* __right_value311 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct tuple2$2char$phsType$ph* item_406;
void* __right_value317 = (void*)0;
struct sType* type3_409;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct tuple2$2char$phsType$ph* item2_412;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct map$2void$phvoid$ph* o2_saved_460;
char* it_461;
char* key_462;
void* __right_value334 = (void*)0;
struct sVar* value_463;
void* __right_value335 = (void*)0;
struct sType* type2_464;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct tuple2$2char$phsType$ph* item_465;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_466;
void* __right_value340 = (void*)0;
char* __dec_obj58;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__293;
    info->current_stack_num++;
    class_name_354=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_355=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),(char*)come_increment_ref_count(class_name_354),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_370=info->lv_table;
    while(vtable_370) {
        for(        o2_saved_371=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_370->mVars)),it_374=((char*)map$2void$phvoid$ph$p_begin((o2_saved_371)));        !map$2void$phvoid$ph$p_end((o2_saved_371));        it_374=((char*)map$2void$phvoid$ph$p_next((o2_saved_371)))        ){
            key_377=it_374;
            value_378=((struct sVar*)((void*)(__right_value278=map$2void$phvoid$ph$p_operator_load_element(vtable_370->mVars,((char*)(__right_value277=__builtin_string(key_377)))))));
            (__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value278,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_378->mType));
            type2_382->mPointerNum++;
            item_406=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_378->mCValueName)),(struct sType*)come_increment_ref_count(type2_382)));
            if(            value_378->mCValueName!=((void*)0)) {
                if(                strcmp(value_378->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_378->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_378->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_378->mType->mClass->mName,"va_list")||string_operator_equals(value_378->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_382->mArrayNum)==1) {
                    type3_409=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_382));
                    list$1sNode$ph$p_reset(type3_409->mArrayNum);
                    type3_409->mPointerNum=1;
                    type3_409->mOriginIsArray=(_Bool)1;
                    item2_412=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_378->mCValueName)),(struct sType*)come_increment_ref_count(type3_409)));
                    list$1void$ph$p_push_back(current_stack_355->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_412)));
                    value_378->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_409,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_412,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1void$ph$p_push_back(current_stack_355->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_406)));
                }
            }
            come_call_finalizer3(type2_382,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_406,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_371,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_370=vtable_370->mParent;
    }
    output_struct(current_stack_355,info);
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_354),(struct sClass*)come_increment_ref_count(current_stack_355));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_354,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_354);
    vtable_370=info->lv_table;
    while(vtable_370) {
        for(        o2_saved_460=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_370->mVars)),it_461=((char*)map$2void$phvoid$ph$p_begin((o2_saved_460)));        !map$2void$phvoid$ph$p_end((o2_saved_460));        it_461=((char*)map$2void$phvoid$ph$p_next((o2_saved_460)))        ){
            key_462=it_461;
            value_463=((struct sVar*)((void*)(__right_value334=map$2void$phvoid$ph$p_operator_load_element(vtable_370->mVars,key_462))));
            come_call_finalizer3(__right_value334,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_464=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_463->mType));
            item_465=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_463->mCValueName),(struct sType*)come_increment_ref_count(type2_464)));
            if(            value_463->mCValueName!=((void*)0)) {
                if(                strcmp(value_463->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_463->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_463->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_463->mType->mClass->mName,"va_list")||string_operator_equals(value_463->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_464->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_463->mCValueName,value_463->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_463->mCValueName,value_463->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_464,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_465,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_460,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_370=vtable_370->mParent;
    }
    come_value_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj58=come_value_466->c_value;
    come_value_466->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj59=come_value_466->type;
    come_value_466->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_354,(_Bool)0,info));
    come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_466->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_466->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_466));
    __result_obj__293 = (_Bool)1;
    (class_name_354 = come_decrement_ref_count2(class_name_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_355,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__293;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_356;
struct list_item$1void$ph* prev_it_357;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        prev_it_357=it_356;
        it_356=it_356->next;
        come_call_finalizer3(prev_it_357,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__244;
void* __right_value263 = (void*)0;
struct sClass* result_361;
void* __right_value264 = (void*)0;
char* __dec_obj23;
void* __right_value272 = (void*)0;
struct list$1void$ph* __dec_obj27;
void* __right_value273 = (void*)0;
char* __dec_obj28;
void* __right_value274 = (void*)0;
char* __dec_obj29;
struct sClass* __result_obj__249;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__244,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_361=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_361->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_361->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_361->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_361->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_361->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_361->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_361->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_361->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj23=result_361->mName;
        result_361->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_361->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_361->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj27=result_361->mFields;
        result_361->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj27,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj28=result_361->mParentClassName;
        result_361->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj29=result_361->mAttribute;
        result_361->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_361->mDynamic=self->mDynamic;
    }
    __result_obj__249 = come_increment_ref_count(result_361);
    come_call_finalizer3(result_361,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_358;
    result_358=0;
    result_358+=int_get_hash_key(((int)self->mStruct));
    result_358+=int_get_hash_key(((int)self->mFloat));
    result_358+=int_get_hash_key(((int)self->mUnion));
    result_358+=int_get_hash_key(((int)self->mGenerics));
    result_358+=int_get_hash_key(((int)self->mMethodGenerics));
    result_358+=int_get_hash_key(((int)self->mEnum));
    result_358+=int_get_hash_key(((int)self->mProtocol));
    result_358+=int_get_hash_key(((int)self->mNumber));
    result_358+=int_get_hash_key(((int)self->mName));
    result_358+=int_get_hash_key(((int)self->mGenericsNum));
    result_358+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_358+=int_get_hash_key(((int)self->mFields));
    result_358+=int_get_hash_key(((int)self->mParentClassName));
    result_358+=int_get_hash_key(((int)self->mAttribute));
    result_358+=int_get_hash_key(((int)self->mDynamic));
    return result_358;
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
struct list_item$1void$ph* it_359;
struct list_item$1void$ph* it2_360;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_359=left->head;
    it2_360=right->head;
    while(it_359!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_359->item, it2_360->item)) {
            return (_Bool)0;
        }
        it_359=it_359->next;
        it2_360=it2_360->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__245;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1void$ph* result_363;
struct list_item$1void$ph* it_364;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1void$ph* __result_obj__248;
    if(    self==((void*)0)) {
        __result_obj__245 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__245,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__245;
    }
    result_363=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1456, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_364=self->head;
    while(it_364!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_363,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_364->item)));
        }
        else {
            list$1void$ph$p_add(result_363,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_364->item)));
        }
        it_364=it_364->next;
    }
    __result_obj__248 = come_increment_ref_count(result_363);
    come_call_finalizer3(result_363,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__248,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__248;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_362;
    result_362=0;
    result_362+=int_get_hash_key(((int)self->head));
    result_362+=int_get_hash_key(((int)self->tail));
    result_362+=int_get_hash_key(((int)self->len));
    result_362+=int_get_hash_key(((int)self->it));
    return result_362;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__246;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__246,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__246;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_365;
void* __dec_obj24;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_366;
void* __dec_obj25;
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_367;
void* __dec_obj26;
struct list$1void$ph* __result_obj__247;
    if(    self->len==0) {
        litem_365=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value267=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1475, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_365->prev=((void*)0);
        litem_365->next=((void*)0);
        __dec_obj24=litem_365->item;
        litem_365->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj24,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_365;
        self->head=litem_365;
    }
    else if(    self->len==1) {
        litem_366=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1485, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=self->head;
        litem_366->next=((void*)0);
        __dec_obj25=litem_366->item;
        litem_366->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj25,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_366;
        self->head->next=litem_366;
    }
    else {
        litem_367=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value269=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1495, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->tail;
        litem_367->next=((void*)0);
        __dec_obj26=litem_367->item;
        litem_367->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_367;
        self->tail=litem_367;
    }
    self->len++;
    __result_obj__247 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__247;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_368;
struct list_item$1void$ph* prev_it_369;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        come_call_finalizer3(prev_it_369,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_372;
void* __result_obj__250;
void* __result_obj__251;
void* result_373;
void* __result_obj__252;
result_372 = (void*)0;
result_373 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_372,0,sizeof(void*));
        __result_obj__250 = result_372;
        return __result_obj__250;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__251 = self->key_list->it->item;
        return __result_obj__251;
    }
    memset(&result_373,0,sizeof(void*));
    __result_obj__252 = result_373;
    return __result_obj__252;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_375;
void* __result_obj__253;
void* __result_obj__254;
void* result_376;
void* __result_obj__255;
result_375 = (void*)0;
result_376 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_375,0,sizeof(void*));
        __result_obj__253 = result_375;
        return __result_obj__253;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__254 = self->key_list->it->item;
        return __result_obj__254;
    }
    memset(&result_376,0,sizeof(void*));
    __result_obj__255 = result_376;
    return __result_obj__255;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_379;
unsigned int hash_380;
unsigned int it_381;
void* __result_obj__256;
void* __result_obj__257;
void* __result_obj__258;
void* __result_obj__259;
default_value_379 = (void*)0;
    memset(&default_value_379,0,sizeof(void*));
    hash_380=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_381=hash_380;
    while((_Bool)1) {
        if(        self->item_existance[it_381]) {
            if(            come_call_equals((void*)0, self->keys[it_381], ((char*)key))) {
                __result_obj__256 = come_increment_ref_count(self->items[it_381]);
                come_call_finalizer3(default_value_379,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__256,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__256;
            }
            it_381++;
            if(            it_381>=self->size) {
                it_381=0;
            }
            else if(            it_381==hash_380) {
                __result_obj__257 = come_increment_ref_count(((struct sVar*)default_value_379));
                come_call_finalizer3(default_value_379,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__257,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__257;
            }
        }
        else {
            __result_obj__258 = come_increment_ref_count(((struct sVar*)default_value_379));
            come_call_finalizer3(default_value_379,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__258,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__258;
        }
    }
    __result_obj__259 = come_increment_ref_count(((struct sVar*)default_value_379));
    come_call_finalizer3(default_value_379,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__259,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__259;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__260;
void* __right_value279 = (void*)0;
struct sType* result_390;
void* __right_value280 = (void*)0;
struct sType* __dec_obj30;
void* __right_value281 = (void*)0;
struct sType* __dec_obj31;
void* __right_value282 = (void*)0;
struct list$1void$ph* __dec_obj32;
void* __right_value283 = (void*)0;
struct sType* __dec_obj33;
void* __right_value284 = (void*)0;
struct sType* __dec_obj34;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj35;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj36;
void* __right_value288 = (void*)0;
char* __dec_obj37;
void* __right_value289 = (void*)0;
char* __dec_obj38;
void* __right_value290 = (void*)0;
char* __dec_obj39;
void* __right_value298 = (void*)0;
struct list$1sNode$ph* __dec_obj43;
void* __right_value299 = (void*)0;
char* __dec_obj44;
void* __right_value300 = (void*)0;
struct list$1void$ph* __dec_obj45;
void* __right_value308 = (void*)0;
struct list$1char$ph* __dec_obj49;
void* __right_value309 = (void*)0;
struct sType* __dec_obj50;
struct sType* __result_obj__270;
    if(    self==(void*)0) {
        __result_obj__260 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__260,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__260;
    }
    result_390=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_390->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj30=result_390->mOriginalLoadVarType;
        result_390->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj31=result_390->mChannelType;
        result_390->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj32=result_390->mGenericsTypes;
        result_390->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj32,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj33=result_390->mNoSolvedGenericsType;
        result_390->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj34=result_390->mAnyOriginalType;
        result_390->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj35=result_390->mSizeNum;
        result_390->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj36=result_390->mAlignas;
        result_390->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj37=result_390->mTupleName;
        result_390->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj38=result_390->mAttribute;
        result_390->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_390->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_390->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_390->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_390->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_390->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_390->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_390->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_390->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_390->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_390->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_390->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_390->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_390->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_390->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_390->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_390->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_390->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_390->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_390->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_390->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_390->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_390->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_390->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_390->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_390->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj39=result_390->mAsmName;
        result_390->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_390->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_390->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj43=result_390->mArrayNum;
        result_390->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj43,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_390->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_390->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_390->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_390->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj44=result_390->mOriginalTypeName;
        result_390->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_390->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_390->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_390->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj45=result_390->mParamTypes;
        result_390->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj45,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj49=result_390->mParamNames;
        result_390->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj49,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj50=result_390->mResultType;
        result_390->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->mVarArgs=self->mVarArgs;
    }
    __result_obj__270 = come_increment_ref_count(result_390);
    come_call_finalizer3(result_390,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__270,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__270;
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
struct list_item$1sNode$ph* it_383;
struct list_item$1sNode$ph* prev_it_384;
    it_383=self->head;
    while(it_383!=((void*)0)) {
        prev_it_384=it_383;
        it_383=it_383->next;
        come_call_finalizer3(prev_it_384,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_385;
    result_385=0;
    result_385+=int_get_hash_key(((int)self->mClass));
    result_385+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_385+=int_get_hash_key(((int)self->mChannelType));
    result_385+=int_get_hash_key(((int)self->mGenericsTypes));
    result_385+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_385+=int_get_hash_key(((int)self->mAnyClass));
    result_385+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_385+=int_get_hash_key(((int)self->mSizeNum));
    result_385+=int_get_hash_key(((int)self->mAlignas));
    result_385+=int_get_hash_key(((int)self->mTupleName));
    result_385+=int_get_hash_key(((int)self->mAttribute));
    result_385+=int_get_hash_key(((int)self->mAllocaValue));
    result_385+=int_get_hash_key(((int)self->mUnsigned));
    result_385+=int_get_hash_key(((int)self->mShort));
    result_385+=int_get_hash_key(((int)self->mLong));
    result_385+=int_get_hash_key(((int)self->mLongLong));
    result_385+=int_get_hash_key(((int)self->mConstant));
    result_385+=int_get_hash_key(((int)self->mAtomic));
    result_385+=int_get_hash_key(((int)self->mRegister));
    result_385+=int_get_hash_key(((int)self->mVolatile));
    result_385+=int_get_hash_key(((int)self->mStatic));
    result_385+=int_get_hash_key(((int)self->mUniq));
    result_385+=int_get_hash_key(((int)self->mRecord));
    result_385+=int_get_hash_key(((int)self->mExtern));
    result_385+=int_get_hash_key(((int)self->mRestrict));
    result_385+=int_get_hash_key(((int)self->mImmutable));
    result_385+=int_get_hash_key(((int)self->mHeap));
    result_385+=int_get_hash_key(((int)self->mChannel));
    result_385+=int_get_hash_key(((int)self->mNoHeap));
    result_385+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_385+=int_get_hash_key(((int)self->mException));
    result_385+=int_get_hash_key(((int)self->mGenerate));
    result_385+=int_get_hash_key(((int)self->mCreateVTable));
    result_385+=int_get_hash_key(((int)self->mDynamic));
    result_385+=int_get_hash_key(((int)self->mInline));
    result_385+=int_get_hash_key(((int)self->mNullValue));
    result_385+=int_get_hash_key(((int)self->mGuardValue));
    result_385+=int_get_hash_key(((int)self->mAsmName));
    result_385+=int_get_hash_key(((int)self->mTypedef));
    result_385+=int_get_hash_key(((int)self->mMultipleTypes));
    result_385+=int_get_hash_key(((int)self->mOriginIsArray));
    result_385+=int_get_hash_key(((int)self->mArrayNum));
    result_385+=int_get_hash_key(((int)self->mPointerNum));
    result_385+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_385+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_385+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_385+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_385+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_385+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_385+=int_get_hash_key(((int)self->mArrayPointerType));
    result_385+=int_get_hash_key(((int)self->mLambdaArray));
    result_385+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_385+=int_get_hash_key(((int)self->mParamTypes));
    result_385+=int_get_hash_key(((int)self->mParamNames));
    result_385+=int_get_hash_key(((int)self->mResultType));
    result_385+=int_get_hash_key(((int)self->mVarArgs));
    return result_385;
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
struct list_item$1sNode$ph* it_386;
struct list_item$1sNode$ph* it2_387;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_386=left->head;
    it2_387=right->head;
    while(it_386!=((void*)0)) {
        if(        !sNode_equals(it_386->item,it2_387->item)) {
            return (_Bool)0;
        }
        it_386=it_386->next;
        it2_387=it2_387->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_388;
struct list_item$1char$ph* it2_389;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_388=left->head;
    it2_389=right->head;
    while(it_388!=((void*)0)) {
        if(        !string_equals(it_388->item,it2_389->item)) {
            return (_Bool)0;
        }
        it_388=it_388->next;
        it2_389=it2_389->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__261;
void* __right_value285 = (void*)0;
struct sNode* result_391;
struct sNode* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = come_increment_ref_count((void*)0);
        ((__result_obj__261) ? __result_obj__261 = come_decrement_ref_count2(__result_obj__261, ((struct sNode*)__result_obj__261)->finalize, ((struct sNode*)__result_obj__261)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__261;
    }
    result_391=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_391->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_391->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_391->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_391->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_391->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_391->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_391->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_391->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_391->kind=self->kind;
    }
    __result_obj__262 = come_increment_ref_count(result_391);
    ((result_391) ? result_391 = come_decrement_ref_count2(result_391, ((struct sNode*)result_391)->finalize, ((struct sNode*)result_391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__262) ? __result_obj__262 = come_decrement_ref_count2(__result_obj__262, ((struct sNode*)__result_obj__262)->finalize, ((struct sNode*)__result_obj__262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__262;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__263;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* result_392;
struct list_item$1sNode$ph* it_393;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sNode$ph* __result_obj__266;
    if(    self==((void*)0)) {
        __result_obj__263 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__263,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__263;
    }
    result_392=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1456, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_393=self->head;
    while(it_393!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_392,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_393->item)));
        }
        else {
            list$1sNode$ph$p_add(result_392,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_393->item)));
        }
        it_393=it_393->next;
    }
    __result_obj__266 = come_increment_ref_count(result_392);
    come_call_finalizer3(result_392,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__266,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__266;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__264;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value293 = (void*)0;
struct list_item$1sNode$ph* litem_394;
struct sNode* __dec_obj40;
void* __right_value294 = (void*)0;
struct list_item$1sNode$ph* litem_395;
struct sNode* __dec_obj41;
void* __right_value295 = (void*)0;
struct list_item$1sNode$ph* litem_396;
struct sNode* __dec_obj42;
struct list$1sNode$ph* __result_obj__265;
    if(    self->len==0) {
        litem_394=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value293=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1475, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=((void*)0);
        litem_394->next=((void*)0);
        __dec_obj40=litem_394->item;
        litem_394->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_394;
        self->head=litem_394;
    }
    else if(    self->len==1) {
        litem_395=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value294=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1485, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=self->head;
        litem_395->next=((void*)0);
        __dec_obj41=litem_395->item;
        litem_395->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_395;
        self->head->next=litem_395;
    }
    else {
        litem_396=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value295=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1495, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=self->tail;
        litem_396->next=((void*)0);
        __dec_obj42=litem_396->item;
        litem_396->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_396;
        self->tail=litem_396;
    }
    self->len++;
    __result_obj__265 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__265;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_397;
struct list_item$1sNode$ph* prev_it_398;
    it_397=self->head;
    while(it_397!=((void*)0)) {
        prev_it_398=it_397;
        it_397=it_397->next;
        come_call_finalizer3(prev_it_398,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__267;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1char$ph* result_399;
struct list_item$1char$ph* it_400;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __result_obj__269;
    if(    self==((void*)0)) {
        __result_obj__267 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__267,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__267;
    }
    result_399=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1456, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_400=self->head;
    while(it_400!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_399,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_400->item)));
        }
        else {
            list$1char$ph$p_add(result_399,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_400->item)));
        }
        it_400=it_400->next;
    }
    __result_obj__269 = come_increment_ref_count(result_399);
    come_call_finalizer3(result_399,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__269,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__269;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value303 = (void*)0;
struct list_item$1char$ph* litem_401;
char* __dec_obj46;
void* __right_value304 = (void*)0;
struct list_item$1char$ph* litem_402;
char* __dec_obj47;
void* __right_value305 = (void*)0;
struct list_item$1char$ph* litem_403;
char* __dec_obj48;
struct list$1char$ph* __result_obj__268;
    if(    self->len==0) {
        litem_401=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value303=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1475, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_401->prev=((void*)0);
        litem_401->next=((void*)0);
        __dec_obj46=litem_401->item;
        litem_401->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_401;
        self->head=litem_401;
    }
    else if(    self->len==1) {
        litem_402=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value304=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1485, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_402->prev=self->head;
        litem_402->next=((void*)0);
        __dec_obj47=litem_402->item;
        litem_402->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_402;
        self->head->next=litem_402;
    }
    else {
        litem_403=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value305=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1495, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_403->prev=self->tail;
        litem_403->next=((void*)0);
        __dec_obj48=litem_403->item;
        litem_403->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_403;
        self->tail=litem_403;
    }
    self->len++;
    __result_obj__268 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__268;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_404;
struct list_item$1char$ph* prev_it_405;
    it_404=self->head;
    while(it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        come_call_finalizer3(prev_it_405,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__271;
void* __right_value312 = (void*)0;
struct tuple2$2char$phsType$ph* result_407;
void* __right_value313 = (void*)0;
char* __dec_obj51;
void* __right_value314 = (void*)0;
struct sType* __dec_obj52;
struct tuple2$2char$phsType$ph* __result_obj__272;
    if(    self==(void*)0) {
        __result_obj__271 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__271,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__271;
    }
    result_407=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj51=result_407->v1;
        result_407->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj52=result_407->v2;
        result_407->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__272 = come_increment_ref_count(result_407);
    come_call_finalizer3(result_407,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__272,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__272;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_408;
    result_408=0;
    result_408+=int_get_hash_key(((int)self->v1));
    result_408+=int_get_hash_key(((int)self->v2));
    return result_408;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj53;
struct sType* __dec_obj54;
struct tuple2$2char$phsType$ph* __result_obj__273;
    __dec_obj53=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj54=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__273 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__273,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__273;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_410;
struct list_item$1sNode$ph* prev_it_411;
struct list$1sNode$ph* __result_obj__274;
    it_410=self->head;
    while(it_410!=((void*)0)) {
        prev_it_411=it_410;
        it_410=it_410->next;
        come_call_finalizer3(prev_it_411,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__274 = self;
    return __result_obj__274;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value321 = (void*)0;
struct list_item$1void$ph* litem_413;
void* __dec_obj55;
void* __right_value322 = (void*)0;
struct list_item$1void$ph* litem_414;
void* __dec_obj56;
void* __right_value323 = (void*)0;
struct list_item$1void$ph* litem_415;
void* __dec_obj57;
struct list$1void$ph* __result_obj__275;
    if(    self->len==0) {
        litem_413=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value321=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1545, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=((void*)0);
        litem_413->next=((void*)0);
        __dec_obj55=litem_413->item;
        litem_413->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_413;
        self->head=litem_413;
    }
    else if(    self->len==1) {
        litem_414=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value322=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1555, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->head;
        litem_414->next=((void*)0);
        __dec_obj56=litem_414->item;
        litem_414->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_414;
        self->head->next=litem_414;
    }
    else {
        litem_415=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value323=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1565, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->tail;
        litem_415->next=((void*)0);
        __dec_obj57=litem_415->item;
        litem_415->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_415;
        self->tail=litem_415;
    }
    self->len++;
    __result_obj__275 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__275;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_416;
int i_417;
    for(    i_416=0;    i_416<self->size;    i_416++    ){
        if(        self->item_existance[i_416]) {
            if(            1) {
                come_call_finalizer3(self->items[i_416],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_417=0;    i_417<self->size;    i_417++    ){
        if(        self->item_existance[i_417]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_417],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_418;
struct list_item$1void$p* prev_it_419;
    it_418=self->head;
    while(it_418!=((void*)0)) {
        prev_it_419=it_418;
        it_418=it_418->next;
        come_call_finalizer3(prev_it_419,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_433;
unsigned int it_434;
_Bool same_key_exist_451;
char* it2_454;
struct map$2void$phvoid$ph* __result_obj__291;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_433=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_434=hash_433;
    while((_Bool)1) {
        if(        self->item_existance[it_434]) {
            if(            come_call_equals((void*)0, self->keys[it_434], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_434]);
                    come_call_finalizer3(self->keys[it_434],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_434]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_434]);
                    self->keys[it_434]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_434],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_434]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_434]=item;
                }
                break;
            }
            it_434++;
            if(            it_434>=self->size) {
                it_434=0;
            }
            else if(            it_434==hash_433) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_434]=(_Bool)1;
            if(            1) {
                self->keys[it_434]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_434]=key;
            }
            if(            1) {
                self->items[it_434]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_434]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_451=(_Bool)0;
    for(    it2_454=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_454=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_454, key)) {
            same_key_exist_451=(_Bool)1;
        }
    }
    if(    !same_key_exist_451) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__291 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__291;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_420;
void* __right_value326 = (void*)0;
void** keys_421;
void* __right_value327 = (void*)0;
void** items_422;
void* __right_value328 = (void*)0;
_Bool* item_existance_423;
int len_424;
void* it_425;
void* default_value_426;
void* __right_value329 = (void*)0;
void* it2_427;
unsigned int hash_430;
int n_431;
void* default_value_432;
void* __right_value330 = (void*)0;
default_value_426 = (void*)0;
default_value_432 = (void*)0;
    size_420=self->size*10;
    keys_421=(void**)come_increment_ref_count(((void**)(__right_value326=(void**)come_calloc(1, sizeof(void*)*(1*(size_420)), "./comelang.h", 2990, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_422=(void**)come_increment_ref_count(((void**)(__right_value327=(void**)come_calloc(1, sizeof(void*)*(1*(size_420)), "./comelang.h", 2991, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_423=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value328=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_420)), "./comelang.h", 2992, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_424=0;
    for(    it_425=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_425=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_426,0,sizeof(void*));
        it2_427=((void*)(__right_value329=map$2void$phvoid$ph$p_at(self,it_425,(void*)come_increment_ref_count(default_value_426))));
        come_call_finalizer3(__right_value329,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_430=come_call_get_hash_key((void*)0, ((void*)it_425))%size_420;
        n_431=hash_430;
        while((_Bool)1) {
            if(            item_existance_423[n_431]) {
                n_431++;
                if(                n_431>=size_420) {
                    n_431=0;
                }
                else if(                n_431==hash_430) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_423[n_431]=(_Bool)1;
                keys_421[n_431]=it_425;
                items_422[n_431]=((void*)(__right_value330=map$2void$phvoid$ph$p_at(self,it_425,(void*)come_increment_ref_count(default_value_432))));
                come_call_finalizer3(__right_value330,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_424++;
                come_call_finalizer3(default_value_432,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_432,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_426,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_421;
    self->items=items_422;
    self->item_existance=item_existance_423;
    self->size=size_420;
    self->len=len_424;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_428;
unsigned int it_429;
void* __result_obj__276;
void* __result_obj__277;
void* __result_obj__278;
void* __result_obj__279;
    hash_428=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_429=hash_428;
    while((_Bool)1) {
        if(        self->item_existance[it_429]) {
            if(            come_call_equals((void*)0, self->keys[it_429], key)) {
                __result_obj__276 = come_increment_ref_count(self->items[it_429]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__276,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__276;
            }
            it_429++;
            if(            it_429>=self->size) {
                it_429=0;
            }
            else if(            it_429==hash_428) {
                __result_obj__277 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__277,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__277;
            }
        }
        else {
            __result_obj__278 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__278,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__278;
        }
    }
    __result_obj__279 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__279,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__279;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_435;
struct list_item$1void$p* it_436;
struct list$1void$p* __result_obj__283;
    it2_435=0;
    it_436=self->head;
    while(it_436!=((void*)0)) {
        if(        come_call_equals((void*)0, it_436->item, item)) {
            list$1void$p$p_delete(self,it2_435,it2_435+1);
            break;
        }
        it2_435++;
        it_436=it_436->next;
    }
    __result_obj__283 = self;
    return __result_obj__283;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_437;
struct list$1void$p* __result_obj__280;
struct list_item$1void$p* it_440;
int i_441;
struct list_item$1void$p* prev_it_442;
struct list_item$1void$p* it_443;
int i_444;
struct list_item$1void$p* prev_it_445;
struct list_item$1void$p* it_446;
struct list_item$1void$p* head_prev_it_447;
struct list_item$1void$p* tail_it_448;
int i_449;
struct list_item$1void$p* prev_it_450;
struct list$1void$p* __result_obj__282;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_437=tail;
        tail=head;
        head=tmp_437;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__280 = self;
        return __result_obj__280;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_440=self->head;
        i_441=0;
        while(it_440!=((void*)0)) {
            if(            i_441<tail) {
                prev_it_442=it_440;
                it_440=it_440->next;
                i_441++;
                come_call_finalizer3(prev_it_442,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_441==tail) {
                self->head=it_440;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_440=it_440->next;
                i_441++;
            }
        }
    }
    else if(    tail==self->len) {
        it_443=self->head;
        i_444=0;
        while(it_443!=((void*)0)) {
            if(            i_444==head) {
                self->tail=it_443->prev;
                self->tail->next=((void*)0);
            }
            if(            i_444>=head) {
                prev_it_445=it_443;
                it_443=it_443->next;
                i_444++;
                come_call_finalizer3(prev_it_445,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_443=it_443->next;
                i_444++;
            }
        }
    }
    else {
        it_446=self->head;
        head_prev_it_447=((void*)0);
        tail_it_448=((void*)0);
        i_449=0;
        while(it_446!=((void*)0)) {
            if(            i_449==head) {
                head_prev_it_447=it_446->prev;
            }
            if(            i_449==tail) {
                tail_it_448=it_446;
            }
            if(            i_449>=head&&i_449<tail) {
                prev_it_450=it_446;
                it_446=it_446->next;
                i_449++;
                come_call_finalizer3(prev_it_450,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_446=it_446->next;
                i_449++;
            }
        }
        if(        head_prev_it_447!=((void*)0)) {
            head_prev_it_447->next=tail_it_448;
        }
        if(        tail_it_448!=((void*)0)) {
            tail_it_448->prev=head_prev_it_447;
        }
    }
    __result_obj__282 = self;
    return __result_obj__282;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_438;
struct list_item$1void$p* prev_it_439;
struct list$1void$p* __result_obj__281;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__281 = self;
    return __result_obj__281;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_452;
void* __result_obj__284;
void* __result_obj__285;
void* result_453;
void* __result_obj__286;
result_452 = (void*)0;
result_453 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_452,0,sizeof(void*));
        __result_obj__284 = result_452;
        return __result_obj__284;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__285 = self->it->item;
        return __result_obj__285;
    }
    memset(&result_453,0,sizeof(void*));
    __result_obj__286 = result_453;
    return __result_obj__286;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_455;
void* __result_obj__287;
void* __result_obj__288;
void* result_456;
void* __result_obj__289;
result_455 = (void*)0;
result_456 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_455,0,sizeof(void*));
        __result_obj__287 = result_455;
        return __result_obj__287;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__288 = self->it->item;
        return __result_obj__288;
    }
    memset(&result_456,0,sizeof(void*));
    __result_obj__289 = result_456;
    return __result_obj__289;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value331 = (void*)0;
struct list_item$1void$p* litem_457;
void* __right_value332 = (void*)0;
struct list_item$1void$p* litem_458;
void* __right_value333 = (void*)0;
struct list_item$1void$p* litem_459;
struct list$1void$p* __result_obj__290;
    if(    self->len==0) {
        litem_457=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value331=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1545, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_457->prev=((void*)0);
        litem_457->next=((void*)0);
        litem_457->item=item;
        self->tail=litem_457;
        self->head=litem_457;
    }
    else if(    self->len==1) {
        litem_458=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value332=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1555, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=self->head;
        litem_458->next=((void*)0);
        litem_458->item=item;
        self->tail=litem_458;
        self->head->next=litem_458;
    }
    else {
        litem_459=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value333=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1565, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=self->tail;
        litem_459->next=((void*)0);
        litem_459->item=item;
        self->tail->next=litem_459;
        self->tail=litem_459;
    }
    self->len++;
    __result_obj__290 = self;
    return __result_obj__290;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value343 = (void*)0;
struct list_item$1CVALUE$ph* litem_467;
struct CVALUE* __dec_obj60;
void* __right_value344 = (void*)0;
struct list_item$1CVALUE$ph* litem_468;
struct CVALUE* __dec_obj61;
void* __right_value345 = (void*)0;
struct list_item$1CVALUE$ph* litem_469;
struct CVALUE* __dec_obj62;
struct list$1CVALUE$ph* __result_obj__292;
    if(    self->len==0) {
        litem_467=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value343=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1545, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_467->prev=((void*)0);
        litem_467->next=((void*)0);
        __dec_obj60=litem_467->item;
        litem_467->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_467;
        self->head=litem_467;
    }
    else if(    self->len==1) {
        litem_468=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value344=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1555, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_468->prev=self->head;
        litem_468->next=((void*)0);
        __dec_obj61=litem_468->item;
        litem_468->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_468;
        self->head->next=litem_468;
    }
    else {
        litem_469=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value345=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1565, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_469->prev=self->tail;
        litem_469->next=((void*)0);
        __dec_obj62=litem_469->item;
        litem_469->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_469;
        self->tail=litem_469;
    }
    self->len++;
    __result_obj__292 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__292;
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

struct sType* use_any_type(struct sType* type){
struct sType* __dec_obj63;
int i_470;
struct list$1void$ph* o2_saved_471;
struct sType* it_474;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __result_obj__302;
    if(    type->mAnyOriginalType) {
        __dec_obj63=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_470=0;
    for(    o2_saved_471=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_474=((struct sType*)list$1void$ph$p_begin((o2_saved_471)));    !list$1void$ph$p_end((o2_saved_471));    it_474=((struct sType*)list$1void$ph$p_next((o2_saved_471)))    ){
        list$1void$ph$p_operator_store_element(type->mGenericsTypes,i_470,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_474)))));
        i_470++;
    }
    come_call_finalizer3(o2_saved_471,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__302 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__302,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__302;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_472;
void* __result_obj__294;
void* __result_obj__295;
void* result_473;
void* __result_obj__296;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_472,0,sizeof(void*));
        __result_obj__294 = result_472;
        return __result_obj__294;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__295 = self->it->item;
        return __result_obj__295;
    }
    memset(&result_473,0,sizeof(void*));
    __result_obj__296 = result_473;
    return __result_obj__296;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_475;
void* __result_obj__297;
void* __result_obj__298;
void* result_476;
void* __result_obj__299;
result_475 = (void*)0;
result_476 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_475,0,sizeof(void*));
        __result_obj__297 = result_475;
        return __result_obj__297;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__298 = self->it->item;
        return __result_obj__298;
    }
    memset(&result_476,0,sizeof(void*));
    __result_obj__299 = result_476;
    return __result_obj__299;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
int len_477;
int i_478;
void* default_value_479;
struct list$1void$ph* __result_obj__300;
struct list_item$1void$ph* it_480;
int i_481;
void* __dec_obj64;
struct list$1void$ph* __result_obj__301;
default_value_479 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_477=self->len;
        for(        i_478=0;        i_478<position-len_477;        i_478++        ){
            memset(&default_value_479,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_479));
            come_call_finalizer3(default_value_479,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result_obj__300 = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        return __result_obj__300;
    }
    it_480=self->head;
    i_481=0;
    while(it_480!=((void*)0)) {
        if(        position==i_481) {
            __dec_obj64=it_480->item;
            it_480->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj64,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_480=it_480->next;
        i_481++;
    }
    __result_obj__301 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__301;
}

struct sType* remove_any_type(struct sType* type){
struct sType* __dec_obj65;
struct sType* __dec_obj66;
int i_482;
struct list$1void$ph* o2_saved_483;
struct sType* it_484;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* __result_obj__303;
    if(    type->mAnyOriginalType) {
        __dec_obj65=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj66=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_482=0;
    for(    o2_saved_483=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_484=((struct sType*)list$1void$ph$p_begin((o2_saved_483)));    !list$1void$ph$p_end((o2_saved_483));    it_484=((struct sType*)list$1void$ph$p_next((o2_saved_483)))    ){
        list$1void$ph$p_operator_store_element(type->mGenericsTypes,i_482,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_484)))));
        i_482++;
    }
    come_call_finalizer3(o2_saved_483,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__303 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value350 = (void*)0;
char* none_generics_name_485;
void* __right_value351 = (void*)0;
char* fun_name2_486;
void* __right_value352 = (void*)0;
char* fun_name3_487;
void* __right_value353 = (void*)0;
struct sGenericsFun* generics_fun_488;
_Bool generics_any_child_489;
void* __right_value354 = (void*)0;
struct sType* no_solved_type_490;
struct sType* __dec_obj67;
struct list$1void$ph* o2_saved_491;
struct sType* it_492;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* type2_493;
void* __right_value357 = (void*)0;
struct sType* type_before_494;
void* __right_value358 = (void*)0;
char* __dec_obj68;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_495=0;
_Bool err_496=0;
void* __right_value361 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_497=0;
char* Err_498=0;
void* __right_value362 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__307;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* type2_501;
void* __right_value369 = (void*)0;
struct sType* type_before_502;
void* __right_value370 = (void*)0;
char* __dec_obj71;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_503=0;
_Bool err_504=0;
void* __right_value373 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c2_505=0;
char* Err_506=0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__308;
void* __right_value377 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__312;
    none_generics_name_485=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_486=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_487=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_485,fun_name));
    generics_fun_488=((struct sGenericsFun*)((void*)(__right_value353=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_487,((void*)0)))));
    come_call_finalizer3(__right_value353,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_any_child_489=(_Bool)0;
    no_solved_type_490=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj67=no_solved_type_490;
        no_solved_type_490=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_491=(struct list$1void$ph*)come_increment_ref_count((no_solved_type_490->mGenericsTypes)),it_492=((struct sType*)list$1void$ph$p_begin((o2_saved_491)));        !list$1void$ph$p_end((o2_saved_491));        it_492=((struct sType*)list$1void$ph$p_next((o2_saved_491)))        ){
            if(            it_492->mAnyOriginalType) {
                generics_any_child_489=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_491,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_488) {
        if(        generics_fun_488->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_489)) {
            type2_493=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_490))));
            type_before_494=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj68=fun_name2_486;
            fun_name2_486=(char*)come_increment_ref_count(create_method_name(type2_493,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value360=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_486)),generics_fun_488,type2_493,info)));
            name_495=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_496=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value360,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_496) {
                multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value361=err_msg(info,"%s not found",fun_name3_487)));
                come_exception_var_c1_497=multiple_assign_var2->v1;
                Err_498=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                ((Err_498)?(puts(Err_498),exit(0)):(0));
                come_call_finalizer3(__right_value361,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__307 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value366=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 74, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_498 = come_decrement_ref_count2(Err_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_485 = come_decrement_ref_count2(none_generics_name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_486 = come_decrement_ref_count2(fun_name2_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_487 = come_decrement_ref_count2(fun_name3_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value366,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__307,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__307;
                (Err_498 = come_decrement_ref_count2(Err_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_494;
            come_call_finalizer3(type2_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_494,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_495 = come_decrement_ref_count2(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            type2_501=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_490))));
            type_before_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj71=fun_name2_486;
            fun_name2_486=(char*)come_increment_ref_count(create_method_name(type2_501,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value372=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_486)),generics_fun_488,type2_501,info)));
            name_503=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            err_504=multiple_assign_var3->v2;
            come_call_finalizer3(__right_value372,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_504) {
                multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value373=err_msg(info,"%s not found",fun_name3_487)));
                come_exception_var_c2_505=multiple_assign_var4->v1;
                Err_506=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_506)?(puts(Err_506),exit(0)):(0));
                come_call_finalizer3(__right_value373,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__308 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value376=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 90, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_506 = come_decrement_ref_count2(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_485 = come_decrement_ref_count2(none_generics_name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_486 = come_decrement_ref_count2(fun_name2_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_487 = come_decrement_ref_count2(fun_name3_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value376,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__308,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__308;
                (Err_506 = come_decrement_ref_count2(Err_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_502;
            come_call_finalizer3(type2_501,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__312 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value381=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 97, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_486)),generics_fun_488))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_485 = come_decrement_ref_count2(none_generics_name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_486 = come_decrement_ref_count2(fun_name2_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_487 = come_decrement_ref_count2(fun_name3_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(no_solved_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value381,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__312,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__312;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self){
struct tuple2$2char$phvoid$p* __result_obj__304;
void* __right_value363 = (void*)0;
struct tuple2$2char$phvoid$p* result_499;
void* __right_value364 = (void*)0;
char* __dec_obj69;
struct tuple2$2char$phvoid$p* __result_obj__305;
    if(    self==(void*)0) {
        __result_obj__304 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__304,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__304;
    }
    result_499=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj69=result_499->v1;
        result_499->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_499->v2=self->v2;
    }
    __result_obj__305 = come_increment_ref_count(result_499);
    come_call_finalizer3(result_499,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__305,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__305;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_500;
    result_500=0;
    result_500+=int_get_hash_key(((int)self->v1));
    result_500+=int_get_hash_key(((int)self->v2));
    return result_500;
}

static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj70;
struct tuple2$2char$phvoid$p* __result_obj__306;
    __dec_obj70=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__306 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__306,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__306;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self){
struct tuple2$2char$phsGenericsFun$p* __result_obj__309;
void* __right_value378 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_507;
void* __right_value379 = (void*)0;
char* __dec_obj72;
struct tuple2$2char$phsGenericsFun$p* __result_obj__310;
    if(    self==(void*)0) {
        __result_obj__309 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__309,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__309;
    }
    result_507=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj72=result_507->v1;
        result_507->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_507->v2=self->v2;
    }
    __result_obj__310 = come_increment_ref_count(result_507);
    come_call_finalizer3(result_507,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__310,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_508;
    result_508=0;
    result_508+=int_get_hash_key(((int)self->v1));
    result_508+=int_get_hash_key(((int)self->v2));
    return result_508;
}

static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right){
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
    if(    !list$1char$ph$p_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
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

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj73;
struct tuple2$2char$phsGenericsFun$p* __result_obj__311;
    __dec_obj73=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__311 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__311,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info){
void* __right_value382 = (void*)0;
char* fun_name3_510;
struct list$1void$ph* method_generics_types_before_511;
struct list$1void$ph* __dec_obj74;
void* __right_value383 = (void*)0;
struct sGenericsFun* generics_fun_512;
void* __right_value384 = (void*)0;
_Bool _if_conditional1;
void* __right_value385 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c3_513=0;
char* Err_514=0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__313;
struct list$1void$ph* __dec_obj75;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__314;
    static int num_method_generics_509=0;
    fun_name3_510=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_509++));
    method_generics_types_before_511=(struct list$1void$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj74=info->method_generics_types;
    info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj74,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_512=((struct sGenericsFun*)((void*)(__right_value383=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name,((void*)0)))));
    come_call_finalizer3(__right_value383,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    generics_fun_512) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_510)),generics_fun_512,info))),        _if_conditional1) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value385=err_msg(info,"%s not found",fun_name3_510)));
            come_exception_var_c3_513=multiple_assign_var5->v1;
            Err_514=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_514)?(puts(Err_514),exit(0)):(0));
            come_call_finalizer3(__right_value385,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__313 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value388=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 113, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name3_510 = come_decrement_ref_count2(fun_name3_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types_before_511,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value388,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__313,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__313;
            (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj75=info->method_generics_types;
    info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types_before_511);
    come_call_finalizer3(__dec_obj75,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__314 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value391=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 119, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_510)),generics_fun_512))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name3_510 = come_decrement_ref_count2(fun_name3_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types_before_511,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value391,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__314,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value396 = (void*)0;
struct sNode* current_stack_frame_node_515;
_Bool Value_517;
_Bool __result_obj__317;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_520;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* method_block2_521;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* method_block_type_522;
void* __right_value402 = (void*)0;
char* class_name_526;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sClass* current_stack_frame_struct_527;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c4_528=0;
char* Err_529=0;
_Bool __result_obj__320;
void* __right_value407 = (void*)0;
struct sType* result_type_530;
struct list$1void$ph* param_types_531;
struct list$1char$ph* param_names_532;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct buffer* all_alhabet_sname_533;
char* p_534;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
int i_535;
struct list$1void$ph* o2_saved_536;
struct sType* it_537;
struct sType* param_type_538;
void* __right_value412 = (void*)0;
char* param_name_539;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* param_name_540;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* param_name_541;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct buffer* source3_542;
char* p_543;
char* head_544;
int sline_545;
struct buffer* __dec_obj77;
void* __right_value419 = (void*)0;
struct sNode* node_546;
_Bool Value_547;
_Bool __result_obj__321;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* method_block_name_548;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value2_549;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sFun* fun2_550;
void* __right_value426 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c5_551=0;
char* Err_552=0;
_Bool __result_obj__322;
struct sType* method_block_type2_553;
void* __right_value427 = (void*)0;
char* __dec_obj78;
void* __right_value428 = (void*)0;
struct sType* __dec_obj79;
struct buffer* __dec_obj80;
void* __right_value429 = (void*)0;
struct sType* __dec_obj81;
_Bool contained_method_generics_method_block_554;
struct list$1void$ph* o2_saved_555;
struct sType* it_556;
void* __right_value430 = (void*)0;
_Bool __result_obj__324;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value393=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_515=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value393,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_517=node_compile(current_stack_frame_node_515,info);
    if(    !Value_517) {
        __result_obj__317 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__317;
    }
    else {
    }
    come_value_520=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_520));
    dec_stack_ptr(1,info);
    method_block2_521=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    method_block_type_522=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value400=list$1void$ph$p_operator_load_element(fun->mParamTypes,-1))))));
    come_call_finalizer3(__right_value400,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    class_name_526=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)((void*)(__right_value403=list$1void$ph$p_operator_load_element(method_block_type_522->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value404=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_526))));
    come_call_finalizer3(__right_value403,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__right_value404,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    current_stack_frame_struct_527=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value405=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_526))));
    come_call_finalizer3(__right_value405,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_522->mClass->mName,"lambda")) {
        multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value406=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c4_528=multiple_assign_var6->v1;
        Err_529=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        ((Err_529)?(puts(Err_529),exit(0)):(0));
        come_call_finalizer3(__right_value406,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__320 = (_Bool)0;
        (Err_529 = come_decrement_ref_count2(Err_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__320;
        (Err_529 = come_decrement_ref_count2(Err_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_530=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_522->mResultType));
    result_type_530->mStatic=(_Bool)0;
    param_types_531=method_block_type_522->mParamTypes;
    param_names_532=method_block_type_522->mParamNames;
    all_alhabet_sname_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    {
        p_534=info->sname;
        while(*p_534) {
            if(            xisalnum(*p_534)) {
                buffer_append_char(all_alhabet_sname_533,*p_534++);
            }
            else {
                p_534++;
            }
        }
    }
    buffer_append_format(method_block2_521,"%s method_block%d_%s(",((char*)(__right_value410=make_type_name_string(result_type_530,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value411=buffer_to_string(all_alhabet_sname_533))));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_535=0;
    for(    o2_saved_536=(param_types_531),it_537=((struct sType*)list$1void$ph$p_begin((o2_saved_536)));    !list$1void$ph$p_end((o2_saved_536));    it_537=((struct sType*)list$1void$ph$p_next((o2_saved_536)))    ){
        param_type_538=it_537;
        if(        i_535==0) {
            param_name_539=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_521,"%s",((char*)(__right_value413=make_define_var(param_type_538,param_name_539,(_Bool)0,info))));
            (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_539 = come_decrement_ref_count2(param_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_535==1) {
            param_name_540=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_521,"%s",((char*)(__right_value415=make_define_var_no_solved(param_type_538,param_name_540,(_Bool)0,(_Bool)0,info))));
            (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_540 = come_decrement_ref_count2(param_name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_541=(char*)come_increment_ref_count(xsprintf("it%d",i_535));
            buffer_append_format(method_block2_521,"%s",((char*)(__right_value417=make_define_var_no_solved(param_type_538,param_name_541,(_Bool)0,(_Bool)0,info))));
            (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_541 = come_decrement_ref_count2(param_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_535!=list$1void$ph$p_length(param_types_531)-1) {
            buffer_append_str(method_block2_521,",");
        }
        i_535++;
    }
    buffer_append_str(method_block2_521,")\n");
    buffer_append_str(method_block2_521,((char*)(__right_value418=buffer_to_string(method_block))));
    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_542=(struct buffer*)come_increment_ref_count(info->source);
    p_543=info->p;
    head_544=info->head;
    sline_545=info->sline;
    __dec_obj77=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_521);
    come_call_finalizer3(__dec_obj77,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_546=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_547=node_compile(node_546,info);
    if(    !Value_547) {
        __result_obj__321 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_546) ? node_546 = come_decrement_ref_count2(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__321;
    }
    else {
    }
    method_block_name_548=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value420=buffer_to_string(all_alhabet_sname_533)))));
    (__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_549=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    fun2_550=((struct sFun*)((void*)(__right_value425=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value424=__builtin_string(method_block_name_548))),((void*)0)))));
    (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value425,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun2_550==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value426=err_msg(info,"method block function not found(%s)",method_block_name_548)));
        come_exception_var_c5_551=multiple_assign_var7->v1;
        Err_552=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_552)?(puts(Err_552),exit(0)):(0));
        come_call_finalizer3(__right_value426,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__322 = (_Bool)1;
        (Err_552 = come_decrement_ref_count2(Err_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_546) ? node_546 = come_decrement_ref_count2(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_548 = come_decrement_ref_count2(method_block_name_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__322;
        (Err_552 = come_decrement_ref_count2(Err_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_553=fun2_550->mLambdaType;
    __dec_obj78=come_value2_549->c_value;
    come_value2_549->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_548));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj79=come_value2_549->type;
    come_value2_549->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_553));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_549->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_549));
    __dec_obj80=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_542);
    come_call_finalizer3(__dec_obj80,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_543;
    info->head=head_544;
    info->sline=sline_545;
    info->current_stack_frame_struct=current_stack_frame_struct_527;
    __dec_obj81=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_554=(_Bool)0;
    for(    o2_saved_555=(param_types_531),it_556=((struct sType*)list$1void$ph$p_begin((o2_saved_555)));    !list$1void$ph$p_end((o2_saved_555));    it_556=((struct sType*)list$1void$ph$p_next((o2_saved_555)))    ){
        if(        is_contained_method_generics_types(it_556,info)) {
            contained_method_generics_method_block_554=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_530,info)) {
        contained_method_generics_method_block_554=(_Bool)1;
    }
    if(    contained_method_generics_method_block_554) {
        map$2void$phvoid$ph$p_remove(info->funcs,((char*)(__right_value430=__builtin_string(method_block_name_548))));
        (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__324 = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node_515) ? current_stack_frame_node_515 = come_decrement_ref_count2(current_stack_frame_node_515, ((struct sNode*)current_stack_frame_node_515)->finalize, ((struct sNode*)current_stack_frame_node_515)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_521,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_522,sType_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_526 = come_decrement_ref_count2(class_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_530,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_542,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_546) ? node_546 = come_decrement_ref_count2(node_546, ((struct sNode*)node_546)->finalize, ((struct sNode*)node_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_548 = come_decrement_ref_count2(method_block_name_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value2_549,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__324;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__315;
void* __right_value394 = (void*)0;
struct sCurrentNode* result_516;
void* __right_value395 = (void*)0;
char* __dec_obj76;
struct sCurrentNode* __result_obj__316;
    if(    self==(void*)0) {
        __result_obj__315 = (void*)0;
        return __result_obj__315;
    }
    result_516=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_516->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_516->sname;
        result_516->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_516->sline_real=self->sline_real;
    }
    __result_obj__316 = result_516;
    come_call_finalizer3(result_516,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__316;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_518;
struct list_item$1CVALUE$ph* prev_it_519;
    it_518=self->head;
    while(it_518!=((void*)0)) {
        prev_it_519=it_518;
        it_518=it_518->next;
        come_call_finalizer3(prev_it_519,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_523;
int i_524;
void* __result_obj__318;
void* default_value_525;
void* __result_obj__319;
default_value_525 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_523=self->head;
    i_524=0;
    while(it_523!=((void*)0)) {
        if(        position==i_524) {
            __result_obj__318 = come_increment_ref_count(it_523->item);
            come_call_finalizer3(__result_obj__318,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__318;
        }
        it_523=it_523->next;
        i_524++;
    }
    memset(&default_value_525,0,sizeof(void*));
    __result_obj__319 = come_increment_ref_count(((struct sType*)default_value_525));
    come_call_finalizer3(default_value_525,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__319,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__319;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key){
unsigned int hash_557;
unsigned int it_558;
struct map$2void$phvoid$ph* __result_obj__323;
    hash_557=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_558=hash_557;
    while((_Bool)1) {
        if(        self->item_existance[it_558]) {
            if(            come_call_equals((void*)0, self->keys[it_558], key)) {
                list$1void$p$p_remove(self->key_list,self->keys[it_558]);
                self->item_existance[it_558]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_558],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_558]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_558],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_558]=((void*)0);
                self->len--;
                break;
            }
            it_558++;
            if(            it_558>=self->size) {
                it_558=0;
            }
            else if(            it_558==hash_557) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__323 = self;
    return __result_obj__323;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value433 = (void*)0;
char* __dec_obj83;
void* __right_value444 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj89;
void* __right_value445 = (void*)0;
struct buffer* __dec_obj90;
void* __right_value446 = (void*)0;
struct list$1void$ph* __dec_obj91;
struct sMethodCallNode* __result_obj__331;
    ((struct sNodeBase*)(__right_value431=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value431,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj82=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj83=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=self->params;
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    come_call_finalizer3(__dec_obj89,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj90=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj90,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj91=self->method_generics_types;
    self->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, method_generics_types));
    come_call_finalizer3(__dec_obj91,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__331,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
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
void* __right_value447 = (void*)0;
char* __result_obj__332;
    __result_obj__332 = come_increment_ref_count(((char*)(__right_value447=__builtin_string("sMethodCallNode"))));
    (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__332 = come_decrement_ref_count2(__result_obj__332, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__332;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_569;
struct list$1tuple2$2char$phsNode$ph$ph* params_570;
struct sNode* obj_571;
struct buffer* method_block_572;
int method_block_sline_573;
_Bool no_infference_method_generics_574;
struct list$1void$ph* method_generics_types_575;
_Bool recursive_576;
struct list$1void$ph* method_generics_types_before_577;
struct list$1void$ph* __dec_obj92;
void* __right_value448 = (void*)0;
struct list$1void$ph* __dec_obj93;
_Bool Value_578;
_Bool __result_obj__333;
void* __right_value449 = (void*)0;
struct CVALUE* obj_value_579;
void* __right_value450 = (void*)0;
struct sType* obj_type_580;
_Bool no_output_come_code_581;
struct sType* type_582;
void* __right_value451 = (void*)0;
char* none_generics_name_583;
void* __right_value452 = (void*)0;
char* fun_name2_584;
void* __right_value453 = (void*)0;
char* fun_name3_585;
void* __right_value454 = (void*)0;
struct sGenericsFun* generics_fun_586;
_Bool method_generics_587;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_588=0;
struct sGenericsFun* gfun_589=0;
char* generics_fun_name_590;
void* __right_value457 = (void*)0;
struct sFun* fun_591;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1CVALUE$ph* come_params_592;
_Bool no_output_come_code_593;
_Bool __result_obj__335;
void* __right_value460 = (void*)0;
struct CVALUE* method_block_node_594;
void* __right_value461 = (void*)0;
struct sType* method_block_lambda_type_598;
void* __right_value462 = (void*)0;
struct sType* method_block_result_type_599;
void* __right_value463 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_600;
struct sType* generics_fun_method_block_result_type_601;
int method_generics_num_602;
void* __right_value464 = (void*)0;
int n_603;
struct list$1void$ph* o2_saved_604;
struct sType* it_605;
int method_generics_num_606;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1CVALUE$ph* come_params_607;
int i_608;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_609;
struct tuple2$2char$phsNode$ph* it_612;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_615=0;
struct sNode* node_616=0;
_Bool Value_617;
_Bool __result_obj__344;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_618;
int method_generics_num_619;
_Bool generics_any_child_620;
struct sType* obj_type2_621;
struct sType* __dec_obj94;
struct list$1void$ph* o2_saved_622;
struct sType* it_623;
void* __right_value470 = (void*)0;
struct list$1void$ph* o2_saved_624;
struct sType* it_625;
int method_generics_num_626;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1CVALUE$ph* come_params_627;
int i_628;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_629;
struct tuple2$2char$phsNode$ph* it_630;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_631=0;
struct sNode* node_632=0;
_Bool Value_633;
_Bool __result_obj__345;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_634;
int method_generics_num_635;
void* __right_value476 = (void*)0;
int n_636;
struct list$1void$ph* o2_saved_637;
struct sType* it_638;
int method_generics_num_639;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sClass* klass_640;
_Bool calling_dynamic_method_641;
struct sType* lambda_type_642;
struct list$1void$ph* o2_saved_643;
struct tuple2$2char$phsType$ph* it_644;
struct tuple2$2char$phsType$ph* multiple_assign_var11 = (void*)0;
char* field_name_645=0;
struct sType* field_type_646=0;
void* __right_value479 = (void*)0;
struct sType* result_type_647;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1CVALUE$ph* come_params_648;
int i_649;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_650;
struct tuple2$2char$phsNode$ph* it_651;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_652=0;
struct sNode* node_653=0;
_Bool Value_654;
_Bool __result_obj__346;
void* __right_value482 = (void*)0;
struct CVALUE* come_value_655;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_1_656=0;
char* Err_657=0;
_Bool _if_conditional2;
_Bool __result_obj__347;
void* __right_value488 = (void*)0;
_Bool _if_conditional3;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct buffer* buf_658;
int j_659;
struct list$1CVALUE$ph* o2_saved_660;
struct CVALUE* it_663;
void* __right_value492 = (void*)0;
char* __dec_obj95;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct CVALUE* come_value2_666;
void* __right_value495 = (void*)0;
char* __dec_obj96;
void* __right_value496 = (void*)0;
struct sType* result_type2_667;
void* __right_value497 = (void*)0;
struct sType* __dec_obj97;
struct list$1void$ph* __dec_obj98;
struct sGenericsFun* generics_fun_668;
char* generics_fun_name_669;
struct sFun* fun_670;
void* __right_value498 = (void*)0;
char* __dec_obj99;
struct sClass* klass_671;
void* __right_value499 = (void*)0;
_Bool _while_condtional1;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __dec_obj100;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var14 = (void*)0;
char* name_672=0;
struct sGenericsFun* gfun_673=0;
char* __dec_obj101;
void* __right_value506 = (void*)0;
char* none_generics_name_674;
void* __right_value507 = (void*)0;
char* fun_name3_675;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var15 = (void*)0;
char* name_676=0;
struct sGenericsFun* gfun_677=0;
char* __dec_obj102;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_678=0;
struct sGenericsFun* gfun_679=0;
char* __dec_obj103;
int i_680;
void* __right_value512 = (void*)0;
char* new_fun_name_681;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* __dec_obj104;
struct sType* obj_array_type_682;
void* __right_value516 = (void*)0;
char* array_method_name_683;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __dec_obj105;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* __dec_obj106;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_2_684=0;
char* Err_685=0;
_Bool _if_conditional4;
_Bool __result_obj__354;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj107;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sClass* klass_686;
void* __right_value533 = (void*)0;
_Bool _while_condtional2;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* __dec_obj108;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var18 = (void*)0;
struct sFun* fun2_687=0;
char* real_fun_name_688=0;
char* __dec_obj109;
void* __right_value539 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var19 = (void*)0;
struct sFun* fun2_689=0;
char* real_fun_name_690=0;
char* __dec_obj110;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
char* original_obj_type_fun_name_691;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* __dec_obj111;
void* __right_value544 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_3_692=0;
char* Err_693=0;
_Bool _if_conditional5;
_Bool __result_obj__355;
void* __right_value545 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_4_694=0;
char* Err_695=0;
_Bool _if_conditional6;
_Bool __result_obj__356;
void* __right_value546 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_5_696=0;
char* Err_697=0;
_Bool _if_conditional7;
_Bool __result_obj__357;
void* __right_value547 = (void*)0;
struct sType* result_type_698;
_Bool in_exception_value_699;
void* __right_value555 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* new_node_700;
_Bool Value_702;
_Bool __result_obj__360;
_Bool __result_obj__361;
_Bool in_exception_value_703;
void* __right_value558 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* new_node_704;
_Bool Value_705;
_Bool __result_obj__362;
_Bool __result_obj__363;
void* __right_value561 = (void*)0;
struct sType* result_type2_706;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1void$ph* param_types_707;
struct list$1void$ph* o2_saved_708;
struct sType* it_709;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* it2_710;
struct sType* no_solved_obj_type_711;
void* __right_value566 = (void*)0;
struct sType* it3_712;
void* __right_value567 = (void*)0;
struct sType* any_type_713;
void* __right_value568 = (void*)0;
struct list$1void$ph* type_checking_param_types_714;
int n_715;
struct list$1void$ph* o2_saved_716;
struct sType* it_717;
struct sType* no_solved_obj_type_718;
void* __right_value569 = (void*)0;
struct sType* it3_719;
void* __right_value570 = (void*)0;
struct sType* any_type_720;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
_Bool _if_conditional8;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1CVALUE$ph* come_params_721;
int i_722;
_Bool first_param_726;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_727;
struct tuple2$2char$phsNode$ph* it_728;
struct tuple2$2char$phsNode$ph* multiple_assign_var23 = (void*)0;
char* label_729=0;
struct sNode* node_730=0;
int n_731;
struct list$1char$ph* o2_saved_732;
char* it_735;
_Bool Value_738;
_Bool __result_obj__371;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_739;
void* __right_value579 = (void*)0;
_Bool _if_conditional9;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_6_740=0;
char* Err_741=0;
_Bool _if_conditional10;
_Bool __result_obj__372;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
_Bool _if_conditional11;
void* __right_value587 = (void*)0;
int i_747;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_748;
struct tuple2$2char$phsNode$ph* it_749;
struct tuple2$2char$phsNode$ph* multiple_assign_var25 = (void*)0;
char* label_750=0;
struct sNode* node_751=0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_7_752=0;
char* Err_753=0;
_Bool _if_conditional12;
_Bool __result_obj__375;
void* __right_value593 = (void*)0;
_Bool _if_conditional13;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
_Bool _elif_conditional1;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_8_757=0;
char* Err_758=0;
_Bool _if_conditional14;
_Bool __result_obj__378;
void* __right_value598 = (void*)0;
_Bool _if_conditional15;
_Bool Value_759;
_Bool __result_obj__379;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_760;
void* __right_value600 = (void*)0;
_Bool _if_conditional16;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_9_761=0;
char* Err_762=0;
_Bool _if_conditional17;
_Bool __result_obj__380;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional18;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _if_conditional19;
struct sType* obj_array_type_763;
void* __right_value610 = (void*)0;
char* array_method_name_764;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct buffer* buf_765;
int i_766;
struct list$1sNode$ph* o2_saved_767;
struct sNode* it_770;
_Bool Value_773;
void* __right_value613 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_10_774=0;
char* Err_775=0;
_Bool _if_conditional20;
_Bool __result_obj__387;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_776;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct CVALUE* come_value_777;
void* __right_value617 = (void*)0;
char* __dec_obj122;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sType* __dec_obj123;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct buffer* buf_781;
int i_782;
struct list$1sNode$ph* o2_saved_783;
struct sNode* it_784;
_Bool Value_785;
void* __right_value628 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_11_786=0;
char* Err_787=0;
_Bool _if_conditional21;
_Bool __result_obj__389;
void* __right_value629 = (void*)0;
struct CVALUE* come_value_788;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct CVALUE* come_value_789;
void* __right_value632 = (void*)0;
char* __dec_obj127;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sType* __dec_obj128;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct buffer* buf_790;
int i_791;
struct list$1sNode$ph* o2_saved_792;
struct sNode* it_793;
_Bool Value_794;
void* __right_value640 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_12_795=0;
char* Err_796=0;
_Bool _if_conditional22;
_Bool __result_obj__390;
void* __right_value641 = (void*)0;
struct CVALUE* come_value_797;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_798;
void* __right_value644 = (void*)0;
char* __dec_obj129;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sType* __dec_obj130;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct buffer* buf_799;
int i_800;
struct list$1sNode$ph* o2_saved_801;
struct sNode* it_802;
_Bool Value_803;
void* __right_value652 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_13_804=0;
char* Err_805=0;
_Bool _if_conditional23;
_Bool __result_obj__391;
void* __right_value653 = (void*)0;
struct CVALUE* come_value_806;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct CVALUE* come_value_807;
void* __right_value656 = (void*)0;
char* __dec_obj131;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sType* __dec_obj132;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct buffer* buf_808;
int i_809;
struct list$1sNode$ph* o2_saved_810;
struct sNode* it_811;
_Bool Value_812;
void* __right_value664 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_14_813=0;
char* Err_814=0;
_Bool _if_conditional24;
_Bool __result_obj__392;
void* __right_value665 = (void*)0;
struct CVALUE* come_value_815;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct CVALUE* come_value_816;
void* __right_value668 = (void*)0;
char* __dec_obj133;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* __dec_obj134;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
char* default_param_817;
void* __right_value676 = (void*)0;
char* param_name_818;
void* __right_value677 = (void*)0;
_Bool _if_conditional25;
struct buffer* source_819;
char* p_820;
char* head_821;
int sline_822;
void* __right_value678 = (void*)0;
struct buffer* __dec_obj135;
void* __right_value679 = (void*)0;
struct sNode* node_823;
_Bool Value_824;
_Bool __result_obj__393;
struct buffer* __dec_obj136;
void* __right_value680 = (void*)0;
struct CVALUE* come_value_825;
void* __right_value681 = (void*)0;
_Bool _if_conditional26;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var34 = (void*)0;
_Bool come_exception_var_15_826=0;
char* Err_827=0;
_Bool _if_conditional27;
_Bool __result_obj__394;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
_Bool _if_conditional28;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
_Bool _if_conditional29;
void* __right_value691 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_16_828=0;
char* Err_829=0;
_Bool _if_conditional30;
_Bool __result_obj__395;
_Bool __result_obj__396;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* buf_830;
int j_831;
struct list$1CVALUE$ph* o2_saved_832;
struct CVALUE* it_833;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct CVALUE* come_value2_834;
void* __right_value696 = (void*)0;
char* __dec_obj137;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct sType* __dec_obj138;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
char* __dec_obj139;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* __dec_obj140;
void* __right_value703 = (void*)0;
char* __dec_obj141;
_Bool generics_any_child_835;
struct sType* obj_type2_836;
struct sType* __dec_obj142;
struct list$1void$ph* o2_saved_837;
struct sType* it_838;
struct sType* obj_type2_839;
void* __right_value704 = (void*)0;
struct sType* __dec_obj143;
void* __right_value705 = (void*)0;
struct sType* __dec_obj144;
void* __right_value706 = (void*)0;
struct sType* __dec_obj145;
void* __right_value707 = (void*)0;
struct sType* __dec_obj146;
void* __right_value708 = (void*)0;
struct sType* __dec_obj147;
void* __right_value709 = (void*)0;
char* __dec_obj148;
void* __right_value710 = (void*)0;
struct CVALUE* __dec_obj149;
void* __right_value711 = (void*)0;
struct list$1void$ph* __dec_obj150;
_Bool __result_obj__397;
    fun_name_569=(char*)come_increment_ref_count(self->fun_name);
    params_570=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_571=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_572=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_573=self->method_block_sline;
    no_infference_method_generics_574=self->no_infference_method_generics;
    method_generics_types_575=(struct list$1void$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_576=self->recursive;
    method_generics_types_before_577=((void*)0);
    __dec_obj92=method_generics_types_before_577;
    method_generics_types_before_577=(struct list$1void$ph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj92,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj93=info->method_generics_types;
    info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj93,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_578=node_compile(obj_571,info);
    if(    !Value_578) {
        __result_obj__333 = (_Bool)0;
        (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__333;
    }
    else {
    }
    obj_value_579=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_580=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_579->type));
    if(    !no_infference_method_generics_574) {
        no_output_come_code_581=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_582=(struct sType*)come_increment_ref_count(obj_type_580);
        none_generics_name_583=(char*)come_increment_ref_count(get_none_generics_name(type_582->mClass->mName));
        fun_name2_584=(char*)come_increment_ref_count(create_method_name(type_582,(_Bool)0,fun_name_569,info,(_Bool)1));
        fun_name3_585=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_583,fun_name_569));
        generics_fun_586=((struct sGenericsFun*)((void*)(__right_value454=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_585,((void*)0)))));
        come_call_finalizer3(__right_value454,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_586) {
            method_generics_587=list$1char$ph$p_length(generics_fun_586->mMethodGenericsTypeNames)>0;
            if(            method_generics_587&&list$1void$ph$p_length(info->method_generics_types)==0) {
                multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value456=make_generics_function(obj_type_580,(char*)come_increment_ref_count(__builtin_string(fun_name_569)),info,(_Bool)1)));
                name_588=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_589=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value456,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_590=(char*)come_increment_ref_count(name_588);
                fun_591=((struct sFun*)((void*)(__right_value457=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_590,((void*)0)))));
                come_call_finalizer3(__right_value457,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_params_592=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 354, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                method_block_572) {
                    no_output_come_code_593=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_572,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_592),fun_591,fun_name3_585,method_block_sline_573,info,(_Bool)1)) {
                        __result_obj__335 = (_Bool)0;
                        (name_588 = come_decrement_ref_count2(name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_590 = come_decrement_ref_count2(generics_fun_name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_params_592,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (none_generics_name_583 = come_decrement_ref_count2(none_generics_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_584 = come_decrement_ref_count2(fun_name2_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_585 = come_decrement_ref_count2(fun_name3_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__335;
                    }
                    info->no_output_come_code=no_output_come_code_593;
                    method_block_node_594=((struct CVALUE*)(__right_value460=list$1CVALUE$ph$p_operator_load_element(come_params_592,-1)));
                    come_call_finalizer3(__right_value460,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_598=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_594->type));
                    method_block_result_type_599=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_600=((struct sType*)((void*)(__right_value463=list$1void$ph$p_operator_load_element(generics_fun_586->mParamTypes,-1))));
                    come_call_finalizer3(__right_value463,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    generics_fun_method_block_result_type_601=generics_fun_method_block_lambda_type_600->mResultType;
                    if(                    generics_fun_method_block_result_type_601->mClass->mMethodGenerics) {
                        method_generics_num_602=generics_fun_method_block_result_type_601->mClass->mMethodGenericsNum;
                        list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_602,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_599)));
                    }
                    n_603=0;
                    for(                    o2_saved_604=(struct list$1void$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_600->mParamTypes)),it_605=((struct sType*)list$1void$ph$p_begin((o2_saved_604)));                    !list$1void$ph$p_end((o2_saved_604));                    it_605=((struct sType*)list$1void$ph$p_next((o2_saved_604)))                    ){
                        if(                        it_605->mClass->mMethodGenerics) {
                            method_generics_num_606=it_605->mClass->mMethodGenericsNum;
                            list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_606,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value465=list$1void$ph$p_operator_load_element(method_block_lambda_type_598->mParamTypes,n_603)))))));
                            come_call_finalizer3(__right_value465,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        }
                        n_603++;
                    }
                    come_call_finalizer3(o2_saved_604,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_607=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 383, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_608=0;
                    for(                    o2_saved_609=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_570)),it_612=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_609));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_609));                    it_612=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_609))                    ){
                        multiple_assign_var9=it_612;
                        label_615=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_616=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_608==0) {
                            list$1CVALUE$ph$p_push_back(come_params_607,(struct CVALUE*)come_increment_ref_count(obj_value_579));
                            i_608++;
                        }
                        else {
                            Value_617=node_compile(node_616,info);
                            if(                            !Value_617) {
                                __result_obj__344 = (_Bool)0;
                                (label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_616) ? node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_609,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_607,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_588 = come_decrement_ref_count2(name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_590 = come_decrement_ref_count2(generics_fun_name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_592,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_583 = come_decrement_ref_count2(none_generics_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_584 = come_decrement_ref_count2(fun_name2_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_585 = come_decrement_ref_count2(fun_name3_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__344;
                            }
                            else {
                            }
                            come_value_618=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUE$ph$p_push_back(come_params_607,(struct CVALUE*)come_increment_ref_count(come_value_618));
                            come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_615 = come_decrement_ref_count2(label_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_616) ? node_616 = come_decrement_ref_count2(node_616, ((struct sNode*)node_616)->finalize, ((struct sNode*)node_616)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_609,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_586->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_619=generics_fun_586->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            generics_any_child_620=(_Bool)0;
                            obj_type2_621=(struct sType*)come_increment_ref_count(obj_type_580);
                            if(                            obj_type2_621->mNoSolvedGenericsType) {
                                __dec_obj94=obj_type2_621;
                                obj_type2_621=(struct sType*)come_increment_ref_count(obj_type2_621->mNoSolvedGenericsType);
                                come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                                for(                                o2_saved_622=(struct list$1void$ph*)come_increment_ref_count((obj_type2_621->mGenericsTypes)),it_623=((struct sType*)list$1void$ph$p_begin((o2_saved_622)));                                !list$1void$ph$p_end((o2_saved_622));                                it_623=((struct sType*)list$1void$ph$p_next((o2_saved_622)))                                ){
                                    if(                                    it_623->mAnyOriginalType) {
                                        generics_any_child_620=(_Bool)1;
                                    }
                                }
                                come_call_finalizer3(o2_saved_622,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_619,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                            come_call_finalizer3(obj_type2_621,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    n_603=0;
                    for(                    o2_saved_624=(struct list$1void$ph*)come_increment_ref_count((generics_fun_586->mParamTypes)),it_625=((struct sType*)list$1void$ph$p_begin((o2_saved_624)));                    !list$1void$ph$p_end((o2_saved_624));                    it_625=((struct sType*)list$1void$ph$p_next((o2_saved_624)))                    ){
                        if(                        it_625->mClass->mMethodGenerics) {
                            method_generics_num_626=it_625->mClass->mMethodGenericsNum;
                            if(                            n_603<list$1CVALUE$ph$p_length(come_params_607)) {
                                list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_626,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value471=list$1CVALUE$ph$p_operator_load_element(come_params_607,n_603)))->type)));
                                come_call_finalizer3(__right_value471,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_603++;
                    }
                    come_call_finalizer3(o2_saved_624,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_599,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_607,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_627=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 433, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_628=0;
                    for(                    o2_saved_629=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_570)),it_630=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_629));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_629));                    it_630=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_629))                    ){
                        multiple_assign_var10=it_630;
                        label_631=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                        node_632=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
                        if(                        i_628==0) {
                            list$1CVALUE$ph$p_push_back(come_params_627,(struct CVALUE*)come_increment_ref_count(obj_value_579));
                            i_628++;
                        }
                        else {
                            Value_633=node_compile(node_632,info);
                            if(                            !Value_633) {
                                __result_obj__345 = (_Bool)0;
                                (label_631 = come_decrement_ref_count2(label_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_632) ? node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_629,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_588 = come_decrement_ref_count2(name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_590 = come_decrement_ref_count2(generics_fun_name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_592,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_583 = come_decrement_ref_count2(none_generics_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_584 = come_decrement_ref_count2(fun_name2_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_585 = come_decrement_ref_count2(fun_name3_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__345;
                            }
                            else {
                            }
                            come_value_634=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUE$ph$p_push_back(come_params_627,(struct CVALUE*)come_increment_ref_count(come_value_634));
                            come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_631 = come_decrement_ref_count2(label_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_632) ? node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_629,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_586->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_635=generics_fun_586->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_635,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_636=0;
                    for(                    o2_saved_637=(struct list$1void$ph*)come_increment_ref_count((generics_fun_586->mParamTypes)),it_638=((struct sType*)list$1void$ph$p_begin((o2_saved_637)));                    !list$1void$ph$p_end((o2_saved_637));                    it_638=((struct sType*)list$1void$ph$p_next((o2_saved_637)))                    ){
                        if(                        it_638->mClass->mMethodGenerics) {
                            method_generics_num_639=it_638->mClass->mMethodGenericsNum;
                            if(                            n_636<list$1CVALUE$ph$p_length(come_params_627)) {
                                list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_639,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value477=list$1CVALUE$ph$p_operator_load_element(come_params_627,n_636)))->type)));
                                come_call_finalizer3(__right_value477,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_636++;
                    }
                    come_call_finalizer3(o2_saved_637,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_627,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2void$phvoid$ph$p_remove(info->funcs,generics_fun_name_590);
                (name_588 = come_decrement_ref_count2(name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_590 = come_decrement_ref_count2(generics_fun_name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_params_592,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_581;
        come_call_finalizer3(type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        (none_generics_name_583 = come_decrement_ref_count2(none_generics_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_584 = come_decrement_ref_count2(fun_name2_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_585 = come_decrement_ref_count2(fun_name3_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_640=obj_type_580->mClass;
    calling_dynamic_method_641=(_Bool)0;
    lambda_type_642=((void*)0);
    for(    o2_saved_643=(struct list$1void$ph*)come_increment_ref_count((klass_640->mFields)),it_644=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_643)));    !list$1void$ph$p_end((o2_saved_643));    it_644=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_643)))    ){
        multiple_assign_var11=it_644;
        field_name_645=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        field_type_646=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        string_operator_equals(field_name_645,fun_name_569)&&string_operator_equals(field_type_646->mClass->mName,"lambda")) {
            calling_dynamic_method_641=(_Bool)1;
            lambda_type_642=field_type_646;
            (field_name_645 = come_decrement_ref_count2(field_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        (field_name_645 = come_decrement_ref_count2(field_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_643,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_641) {
        result_type_647=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_642->mResultType));
        result_type_647->mStatic=(_Bool)0;
        come_params_648=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 496, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_649=0;
        for(        o2_saved_650=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_570)),it_651=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_650));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_650));        it_651=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_650))        ){
            multiple_assign_var12=it_651;
            label_652=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_653=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            i_649==0) {
                list$1CVALUE$ph$p_push_back(come_params_648,(struct CVALUE*)come_increment_ref_count(obj_value_579));
                i_649++;
            }
            else {
                Value_654=node_compile(node_653,info);
                if(                !Value_654) {
                    __result_obj__346 = (_Bool)0;
                    (label_652 = come_decrement_ref_count2(label_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_653) ? node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_650,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_648,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__346;
                }
                else {
                }
                come_value_655=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value487=check_assign_type(((char*)(__right_value485=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value483=string_to_string(fun_name_569))),((char*)(__right_value484=int_to_string(i_649)))))),((struct sType*)((void*)(__right_value486=list$1void$ph$p_operator_load_element(lambda_type_642->mParamTypes,i_649-1)))),come_value_655->type,come_value_655,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_1_656=multiple_assign_var13->v1;
                Err_657=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                (_if_conditional2=(Err_657)),                (__right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value486,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value487,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result_obj__347 = (_Bool)1;
                    come_call_finalizer3(come_value_655,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_657 = come_decrement_ref_count2(Err_657, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_652 = come_decrement_ref_count2(label_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_653) ? node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_650,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_648,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__347;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)((void*)(__right_value488=list$1void$ph$p_operator_load_element(lambda_type_642->mParamTypes,i_649-1))))->mHeap&&come_value_655->type->mHeap)),                come_call_finalizer3(__right_value488,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)((void*)(__right_value489=list$1void$ph$p_operator_load_element(lambda_type_642->mParamTypes,i_649-1)))),come_value_655->type,come_value_655,info,(_Bool)1);
                    come_call_finalizer3(__right_value489,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_push_back(come_params_648,(struct CVALUE*)come_increment_ref_count(come_value_655));
                i_649++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_655,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_657 = come_decrement_ref_count2(Err_657, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_652 = come_decrement_ref_count2(label_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_653) ? node_653 = come_decrement_ref_count2(node_653, ((struct sNode*)node_653)->finalize, ((struct sNode*)node_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_650,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buf_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 528, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_format(buf_658,"%s->%s",obj_value_579->c_value,fun_name_569);
        buffer_append_str(buf_658,"(");
        j_659=0;
        for(        o2_saved_660=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_648)),it_663=list$1CVALUE$ph$p_begin((o2_saved_660));        !list$1CVALUE$ph$p_end((o2_saved_660));        it_663=list$1CVALUE$ph$p_next((o2_saved_660))        ){
            if(            j_659==0) {
                __dec_obj95=it_663->c_value;
                it_663->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_663->c_value));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_658,it_663->c_value);
            if(            j_659!=list$1CVALUE$ph$p_length(come_params_648)-1) {
                buffer_append_str(buf_658,",");
            }
            j_659++;
        }
        come_call_finalizer3(o2_saved_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_658,")");
        come_value2_666=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 548, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj96=come_value2_666->c_value;
        come_value2_666->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_658));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_667=(struct sType*)come_increment_ref_count(solve_generics(result_type_647,info->generics_type,info));
        __dec_obj97=come_value2_666->type;
        come_value2_666->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_667));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_666->type->mStatic=(_Bool)0;
        come_value2_666->var=((void*)0);
        if(        result_type2_667->mHeap) {
            append_object_to_right_values2(come_value2_666,(struct sType*)come_increment_ref_count(result_type2_667),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_666->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_666));
        come_call_finalizer3(info->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj98=info->method_generics_types;
        info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types_before_577);
        come_call_finalizer3(__dec_obj98,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_648,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_666,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_667,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_668=((void*)0);
        generics_fun_name_669=((void*)0);
        fun_670=((void*)0);
        if(        string_operator_equals(fun_name_569,"super")) {
            __dec_obj99=fun_name_569;
            fun_name_569=(char*)come_increment_ref_count(create_non_method_name(obj_type_580,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_671=obj_type_580->mClass;
            while((_while_condtional1=(((struct sClass*)((void*)(__right_value499=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_671->mParentClassName)))))),            come_call_finalizer3(__right_value499,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _while_condtional1) {
                klass_671=((struct sClass*)((void*)(__right_value500=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_671->mParentClassName))));
                come_call_finalizer3(__right_value500,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                __dec_obj100=generics_fun_name_669;
                generics_fun_name_669=(char*)come_increment_ref_count(create_method_name_using_class(klass_671,(_Bool)0,fun_name_569,info,(_Bool)1));
                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_670=((struct sFun*)((void*)(__right_value503=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value502=__builtin_string(generics_fun_name_669))),((void*)0)))));
                (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value503,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_670) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_580&&obj_type_580->mNoSolvedGenericsType&&list$1void$ph$p_length(obj_type_580->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var14=((struct tuple2$2char$phsGenericsFun$p*)(__right_value505=make_generics_function(obj_type_580,(char*)come_increment_ref_count(__builtin_string(fun_name_569)),info,(_Bool)1)));
                name_672=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_673=multiple_assign_var14->v2;
                come_call_finalizer3(__right_value505,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj101=generics_fun_name_669;
                generics_fun_name_669=(char*)come_increment_ref_count(name_672);
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_668=gfun_673;
                (name_672 = come_decrement_ref_count2(name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1void$ph$p_length(info->method_generics_types)>0) {
                none_generics_name_674=(char*)come_increment_ref_count(get_none_generics_name(obj_type_580->mClass->mName));
                fun_name3_675=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_674,fun_name_569));
                multiple_assign_var15=((struct tuple2$2char$phsGenericsFun$p*)(__right_value509=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_675)),(struct list$1void$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_676=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                gfun_677=multiple_assign_var15->v2;
                come_call_finalizer3(__right_value509,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj102=generics_fun_name_669;
                generics_fun_name_669=(char*)come_increment_ref_count(name_676);
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_668=gfun_677;
                (none_generics_name_674 = come_decrement_ref_count2(none_generics_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_675 = come_decrement_ref_count2(fun_name3_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_676 = come_decrement_ref_count2(name_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value511=make_generics_function(obj_type_580,(char*)come_increment_ref_count(__builtin_string(fun_name_569)),info,(_Bool)1)));
                name_678=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                gfun_679=multiple_assign_var16->v2;
                come_call_finalizer3(__right_value511,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj103=generics_fun_name_669;
                generics_fun_name_669=(char*)come_increment_ref_count(name_678);
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_668=gfun_679;
                (name_678 = come_decrement_ref_count2(name_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_680=128;            i_680>=1;            i_680--            ){
                new_fun_name_681=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_669,i_680));
                fun_670=((struct sFun*)((void*)(__right_value514=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value513=__builtin_string(new_fun_name_681)))))));
                (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value514,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_670!=((void*)0)) {
                    __dec_obj104=generics_fun_name_669;
                    generics_fun_name_669=(char*)come_increment_ref_count(__builtin_string(new_fun_name_681));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_681 = come_decrement_ref_count2(new_fun_name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_681 = come_decrement_ref_count2(new_fun_name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_670==((void*)0)) {
                obj_array_type_682=obj_type_580->mOriginalLoadVarType;
                if(                obj_array_type_682&&list$1sNode$ph$p_length(obj_array_type_682->mArrayNum)>0) {
                    array_method_name_683=(char*)come_increment_ref_count(create_method_name(obj_array_type_682,(_Bool)0,fun_name_569,info,(_Bool)0));
                    fun_670=((struct sFun*)((void*)(__right_value518=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value517=__builtin_string(array_method_name_683))),((void*)0)))));
                    (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value518,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    if(                    fun_670) {
                        __dec_obj105=generics_fun_name_669;
                        generics_fun_name_669=(char*)come_increment_ref_count(__builtin_string(array_method_name_683));
                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_670=((struct sFun*)((void*)(__right_value521=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value520=__builtin_string(generics_fun_name_669))),((void*)0)))));
                        (__right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value521,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        if(                        fun_670==((void*)0)) {
                            __dec_obj106=generics_fun_name_669;
                            generics_fun_name_669=(char*)come_increment_ref_count(create_method_name(obj_type_580,(_Bool)0,((char*)(__right_value522=__builtin_string(fun_name_569))),info,(_Bool)1));
                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_670=((struct sFun*)((void*)(__right_value525=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value524=__builtin_string(generics_fun_name_669))),((void*)0)))));
                            (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value525,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                            if(                            fun_670==((void*)0)) {
                                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value526=err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_669,info->come_fun->mName)));
                                come_exception_var_2_684=multiple_assign_var17->v1;
                                Err_685=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                                if(                                (_if_conditional4=(Err_685)),                                come_call_finalizer3(__right_value526,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional4) {
                                    __result_obj__354 = (_Bool)1;
                                    (Err_685 = come_decrement_ref_count2(Err_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_683 = come_decrement_ref_count2(array_method_name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__354;
                                }
                                else {
                                }
                                (Err_685 = come_decrement_ref_count2(Err_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_683 = come_decrement_ref_count2(array_method_name_683, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_670=((struct sFun*)((void*)(__right_value528=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value527=__builtin_string(generics_fun_name_669))),((void*)0)))));
                    (__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value528,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    if(                    fun_670==((void*)0)) {
                        __dec_obj107=generics_fun_name_669;
                        generics_fun_name_669=(char*)come_increment_ref_count(create_method_name(obj_type_580,(_Bool)0,((char*)(__right_value529=__builtin_string(fun_name_569))),info,(_Bool)1));
                        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                        (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_670=((struct sFun*)((void*)(__right_value532=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value531=__builtin_string(generics_fun_name_669))),((void*)0)))));
                        (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        if(                        fun_670==((void*)0)) {
                            klass_686=obj_type_580->mClass;
                            while((_while_condtional2=(((struct sClass*)((void*)(__right_value533=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_686->mParentClassName)))))),                            come_call_finalizer3(__right_value533,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                            _while_condtional2) {
                                klass_686=((struct sClass*)((void*)(__right_value534=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_686->mParentClassName))));
                                come_call_finalizer3(__right_value534,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                                __dec_obj108=generics_fun_name_669;
                                generics_fun_name_669=(char*)come_increment_ref_count(create_method_name_using_class(klass_686,(_Bool)0,fun_name_569,info,(_Bool)1));
                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_670=((struct sFun*)((void*)(__right_value537=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value536=__builtin_string(generics_fun_name_669))),((void*)0)))));
                                (__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(__right_value537,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                                if(                                fun_670) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_670==((void*)0)&&string_operator_equals(fun_name_569,"to_string")) {
                            multiple_assign_var18=((struct tuple2$2sFun$pchar$ph*)(__right_value538=create_to_string_automatically(obj_type_580,fun_name_569,info)));
                            fun2_687=multiple_assign_var18->v1;
                            real_fun_name_688=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            come_call_finalizer3(__right_value538,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_670=fun2_687;
                            __dec_obj109=generics_fun_name_669;
                            generics_fun_name_669=(char*)come_increment_ref_count(real_fun_name_688);
                            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_688 = come_decrement_ref_count2(real_fun_name_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_670==((void*)0)&&string_operator_equals(fun_name_569,"equals")) {
                            multiple_assign_var19=((struct tuple2$2sFun$pchar$ph*)(__right_value539=create_equals_automatically(obj_type_580,fun_name_569,info)));
                            fun2_689=multiple_assign_var19->v1;
                            real_fun_name_690=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                            come_call_finalizer3(__right_value539,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_670=fun2_689;
                            __dec_obj110=generics_fun_name_669;
                            generics_fun_name_669=(char*)come_increment_ref_count(real_fun_name_690);
                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_690 = come_decrement_ref_count2(real_fun_name_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_670==((void*)0)) {
                            original_obj_type_fun_name_691=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_580,(_Bool)0,((char*)(__right_value540=__builtin_string(fun_name_569))),info,(_Bool)1));
                            (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_670=((struct sFun*)((void*)(__right_value543=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value542=__builtin_string(original_obj_type_fun_name_691))),((void*)0)))));
                            (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                            if(                            fun_670) {
                                __dec_obj111=generics_fun_name_669;
                                generics_fun_name_669=(char*)come_increment_ref_count(original_obj_type_fun_name_691);
                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            (original_obj_type_fun_name_691 = come_decrement_ref_count2(original_obj_type_fun_name_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_670==((void*)0)) {
                            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value544=err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_669,info->come_fun->mName)));
                            come_exception_var_3_692=multiple_assign_var20->v1;
                            Err_693=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            if(                            (_if_conditional5=(Err_693)),                            come_call_finalizer3(__right_value544,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional5) {
                                __result_obj__355 = (_Bool)1;
                                (Err_693 = come_decrement_ref_count2(Err_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__355;
                            }
                            else {
                            }
                            (Err_693 = come_decrement_ref_count2(Err_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_670==((void*)0)) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value545=err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_669,info->come_fun->mName)));
            come_exception_var_4_694=multiple_assign_var21->v1;
            Err_695=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional6=(Err_695)),            come_call_finalizer3(__right_value545,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__356 = (_Bool)1;
                (Err_695 = come_decrement_ref_count2(Err_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__356;
            }
            else {
            }
            (Err_695 = come_decrement_ref_count2(Err_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1void$ph$p_length(fun_670->mParamTypes)==0) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value546=err_msg(info,"Method require function parametor")));
            come_exception_var_5_696=multiple_assign_var22->v1;
            Err_697=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional7=(Err_697)),            come_call_finalizer3(__right_value546,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result_obj__357 = (_Bool)1;
                (Err_697 = come_decrement_ref_count2(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__357;
            }
            else {
            }
            (Err_697 = come_decrement_ref_count2(Err_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_698=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_670->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_698->mException&&!info->in_exception_value) {
            in_exception_value_699=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 716, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value555=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMethodCallNode_finalize;
            _inf_value2->clone=(void*)sMethodCallNode_clone;
            _inf_value2->compile=(void*)sMethodCallNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMethodCallNode_terminated;
            _inf_value2->kind=(void*)sMethodCallNode_kind;
            new_node_700=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            come_call_finalizer3(__right_value555,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_702=node_compile(new_node_700,info);
            if(            !Value_702) {
                __result_obj__360 = (_Bool)0;
                ((new_node_700) ? new_node_700 = come_decrement_ref_count2(new_node_700, ((struct sNode*)new_node_700)->finalize, ((struct sNode*)new_node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__360;
            }
            else {
            }
            info->in_exception_value=in_exception_value_699;
            __result_obj__361 = (_Bool)1;
            ((new_node_700) ? new_node_700 = come_decrement_ref_count2(new_node_700, ((struct sNode*)new_node_700)->finalize, ((struct sNode*)new_node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__361;
            ((new_node_700) ? new_node_700 = come_decrement_ref_count2(new_node_700, ((struct sNode*)new_node_700)->finalize, ((struct sNode*)new_node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        result_type_698->mException&&!info->in_exception_value) {
            in_exception_value_703=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 728, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value558=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMethodCallNode_finalize;
            _inf_value3->clone=(void*)sMethodCallNode_clone;
            _inf_value3->compile=(void*)sMethodCallNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMethodCallNode_terminated;
            _inf_value3->kind=(void*)sMethodCallNode_kind;
            new_node_704=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            come_call_finalizer3(__right_value558,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_705=node_compile(new_node_704,info);
            if(            !Value_705) {
                __result_obj__362 = (_Bool)0;
                ((new_node_704) ? new_node_704 = come_decrement_ref_count2(new_node_704, ((struct sNode*)new_node_704)->finalize, ((struct sNode*)new_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__362;
            }
            else {
            }
            info->in_exception_value=in_exception_value_703;
            __result_obj__363 = (_Bool)1;
            ((new_node_704) ? new_node_704 = come_decrement_ref_count2(new_node_704, ((struct sNode*)new_node_704)->finalize, ((struct sNode*)new_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__363;
            ((new_node_704) ? new_node_704 = come_decrement_ref_count2(new_node_704, ((struct sNode*)new_node_704)->finalize, ((struct sNode*)new_node_704)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        result_type_698->mStatic=(_Bool)0;
        result_type2_706=(struct sType*)come_increment_ref_count(solve_generics(result_type_698,info->generics_type,info));
        param_types_707=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "20method.c", 743, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        for(        o2_saved_708=(struct list$1void$ph*)come_increment_ref_count((fun_670->mParamTypes)),it_709=((struct sType*)list$1void$ph$p_begin((o2_saved_708)));        !list$1void$ph$p_end((o2_saved_708));        it_709=((struct sType*)list$1void$ph$p_next((o2_saved_708)))        ){
            if(            it_709==((void*)0)) {
                list$1void$ph$p_push_back(param_types_707,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_709)));
            }
            else {
                it2_710=(struct sType*)come_increment_ref_count(solve_generics(it_709,info->generics_type,info));
                no_solved_obj_type_711=(struct sType*)come_increment_ref_count(obj_type_580->mNoSolvedGenericsType);
                it3_712=(struct sType*)come_increment_ref_count(solve_generics(it_709,no_solved_obj_type_711,info));
                any_type_713=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_712)));
                list$1void$ph$p_push_back(param_types_707,(struct sType*)come_increment_ref_count(it2_710));
                come_call_finalizer3(it2_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_obj_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(it3_712,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(any_type_713,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_708,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        type_checking_param_types_714=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types_707));
        if(        generics_fun_668) {
            n_715=0;
            for(            o2_saved_716=(struct list$1void$ph*)come_increment_ref_count((generics_fun_668->mParamTypes)),it_717=((struct sType*)list$1void$ph$p_begin((o2_saved_716)));            !list$1void$ph$p_end((o2_saved_716));            it_717=((struct sType*)list$1void$ph$p_next((o2_saved_716)))            ){
                if(                it_717==((void*)0)) {
                }
                else {
                    no_solved_obj_type_718=(struct sType*)come_increment_ref_count(obj_type_580->mNoSolvedGenericsType);
                    it3_719=(struct sType*)come_increment_ref_count(solve_generics(it_717,no_solved_obj_type_718,info));
                    any_type_720=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_719)));
                    if(                    (_if_conditional8=(string_operator_equals(((struct sType*)((void*)(__right_value571=list$1void$ph$p_operator_load_element(param_types_707,n_715))))->mClass->mName,"void")&&((struct sType*)((void*)(__right_value572=list$1void$ph$p_operator_load_element(param_types_707,n_715))))->mPointerNum==1)),                    come_call_finalizer3(__right_value571,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value572,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional8) {
                        list$1void$ph$p_replace(type_checking_param_types_714,n_715,(struct sType*)come_increment_ref_count(any_type_720));
                    }
                    come_call_finalizer3(no_solved_obj_type_718,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(it3_719,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(any_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                n_715++;
            }
            come_call_finalizer3(o2_saved_716,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_params_721=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 782, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        i_722=0;        i_722<list$1void$ph$p_length(fun_670->mParamTypes)-(((method_block_572)?(2):(0)));        i_722++        ){
            list$1CVALUE$ph$p_add(come_params_721,((void*)0));
        }
        first_param_726=(_Bool)1;
        for(        o2_saved_727=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_570)),it_728=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_727));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_727));        it_728=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_727))        ){
            multiple_assign_var23=it_728;
            label_729=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_730=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            first_param_726) {
                first_param_726=(_Bool)0;
            }
            else if(            label_729) {
                n_731=0;
                for(                o2_saved_732=(struct list$1char$ph*)come_increment_ref_count((fun_670->mParamNames)),it_735=list$1char$ph$p_begin((o2_saved_732));                !list$1char$ph$p_end((o2_saved_732));                it_735=list$1char$ph$p_next((o2_saved_732))                ){
                    if(                    string_operator_equals(label_729,it_735)) {
                        break;
                    }
                    n_731++;
                }
                come_call_finalizer3(o2_saved_732,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                Value_738=node_compile(node_730,info);
                if(                !Value_738) {
                    __result_obj__371 = (_Bool)0;
                    (label_729 = come_decrement_ref_count2(label_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_730) ? node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_727,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__371;
                }
                else {
                }
                come_value_739=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional9=(((struct sType*)((void*)(__right_value579=list$1void$ph$p_operator_load_element(param_types_707,n_731)))))),                come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional9) {
                    multiple_assign_var24=((struct tuple2$2bool$char$ph*)(__right_value584=check_assign_type(((char*)(__right_value582=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value580=string_to_string(fun_name_569))),((char*)(__right_value581=int_to_string(n_731)))))),((struct sType*)((void*)(__right_value583=list$1void$ph$p_operator_load_element(type_checking_param_types_714,n_731)))),come_value_739->type,come_value_739,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_6_740=multiple_assign_var24->v1;
                    Err_741=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                    if(                    (_if_conditional10=(Err_741)),                    (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value583,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value584,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional10) {
                        __result_obj__372 = (_Bool)1;
                        (Err_741 = come_decrement_ref_count2(Err_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_739,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_729 = come_decrement_ref_count2(label_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_730) ? node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_727,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__372;
                    }
                    else {
                    }
                    (Err_741 = come_decrement_ref_count2(Err_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional11=(((struct sType*)((void*)(__right_value585=list$1void$ph$p_operator_load_element(param_types_707,n_731))))&&((struct sType*)((void*)(__right_value586=list$1void$ph$p_operator_load_element(param_types_707,n_731))))->mHeap&&come_value_739->type->mHeap)),                come_call_finalizer3(__right_value585,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value586,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional11) {
                    std_move(((struct sType*)((void*)(__right_value587=list$1void$ph$p_operator_load_element(param_types_707,n_731)))),come_value_739->type,come_value_739,info,(_Bool)1);
                    come_call_finalizer3(__right_value587,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_721,n_731,(struct CVALUE*)come_increment_ref_count(come_value_739));
                come_call_finalizer3(come_value_739,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_729 = come_decrement_ref_count2(label_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_730) ? node_730 = come_decrement_ref_count2(node_730, ((struct sNode*)node_730)->finalize, ((struct sNode*)node_730)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_727,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        i_747=0;
        for(        o2_saved_748=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_570)),it_749=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_748));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_748));        it_749=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_748))        ){
            multiple_assign_var25=it_749;
            label_750=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            node_751=(struct sNode*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            i_747==0) {
                multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value592=check_assign_type(((char*)(__right_value590=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value588=string_to_string(fun_name_569))),((char*)(__right_value589=int_to_string(i_747)))))),((struct sType*)((void*)(__right_value591=list$1void$ph$p_operator_load_element(type_checking_param_types_714,i_747)))),obj_value_579->type,obj_value_579,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_752=multiple_assign_var26->v1;
                Err_753=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                if(                (_if_conditional12=(Err_753)),                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value591,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value592,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    __result_obj__375 = (_Bool)1;
                    (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_750 = come_decrement_ref_count2(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_748,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__375;
                }
                else {
                }
                if(                (_if_conditional13=(((struct sType*)((void*)(__right_value593=list$1void$ph$p_operator_load_element(param_types_707,i_747))))->mHeap&&obj_value_579->type->mHeap)),                come_call_finalizer3(__right_value593,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional13) {
                    std_move(((struct sType*)((void*)(__right_value594=list$1void$ph$p_operator_load_element(param_types_707,i_747)))),obj_value_579->type,obj_value_579,info,(_Bool)1);
                    come_call_finalizer3(__right_value594,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)((void*)(__right_value595=list$1void$ph$p_operator_load_element(param_types_707,i_747))))->mHeap&&!obj_value_579->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value595,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _elif_conditional1) {
                    multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value597=err_msg(info,"require heap parametor(%s)",((char*)(__right_value596=list$1char$ph$p_operator_load_element(fun_670->mParamNames,i_747))))));
                    come_exception_var_8_757=multiple_assign_var27->v1;
                    Err_758=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                    if(                    (_if_conditional14=(Err_758)),                    (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value597,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        __result_obj__378 = (_Bool)1;
                        (Err_758 = come_decrement_ref_count2(Err_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_750 = come_decrement_ref_count2(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_748,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__378;
                    }
                    else {
                    }
                    (Err_758 = come_decrement_ref_count2(Err_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph$p_replace(come_params_721,i_747,(struct CVALUE*)come_increment_ref_count(obj_value_579));
                i_747++;
                (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_750) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value598=list$1CVALUE$ph$p_operator_load_element(come_params_721,i_747)))==((void*)0))),                    come_call_finalizer3(__right_value598,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        break;
                    }
                    else {
                        i_747++;
                    }
                }
                Value_759=node_compile(node_751,info);
                if(                !Value_759) {
                    __result_obj__379 = (_Bool)0;
                    (label_750 = come_decrement_ref_count2(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_748,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__379;
                }
                else {
                }
                come_value_760=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional16=(((struct sType*)((void*)(__right_value600=list$1void$ph$p_operator_load_element(param_types_707,i_747)))))),                come_call_finalizer3(__right_value600,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional16) {
                    multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value605=check_assign_type(((char*)(__right_value603=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value601=string_to_string(fun_name_569))),((char*)(__right_value602=int_to_string(i_747)))))),((struct sType*)((void*)(__right_value604=list$1void$ph$p_operator_load_element(type_checking_param_types_714,i_747)))),come_value_760->type,come_value_760,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_9_761=multiple_assign_var28->v1;
                    Err_762=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    if(                    (_if_conditional17=(Err_762)),                    (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value604,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value605,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional17) {
                        __result_obj__380 = (_Bool)1;
                        (Err_762 = come_decrement_ref_count2(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_760,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_750 = come_decrement_ref_count2(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_748,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__380;
                    }
                    else {
                    }
                    (Err_762 = come_decrement_ref_count2(Err_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional18=(((struct sType*)((void*)(__right_value606=list$1void$ph$p_operator_load_element(param_types_707,i_747))))&&((struct sType*)((void*)(__right_value607=list$1void$ph$p_operator_load_element(param_types_707,i_747))))->mHeap&&come_value_760->type->mHeap)),                come_call_finalizer3(__right_value606,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value607,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional18) {
                    std_move(((struct sType*)((void*)(__right_value608=list$1void$ph$p_operator_load_element(param_types_707,i_747)))),come_value_760->type,come_value_760,info,(_Bool)1);
                    come_call_finalizer3(__right_value608,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_721,i_747,(struct CVALUE*)come_increment_ref_count(come_value_760));
                i_747++;
                come_call_finalizer3(come_value_760,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_750 = come_decrement_ref_count2(label_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_751) ? node_751 = come_decrement_ref_count2(node_751, ((struct sNode*)node_751)->finalize, ((struct sNode*)node_751)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_748,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional19=(((struct CVALUE*)(__right_value609=list$1CVALUE$ph$p_operator_load_element(come_params_721,i_747)))==((void*)0))),            come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                break;
            }
            else {
                i_747++;
            }
        }
        obj_array_type_763=obj_type_580->mOriginalLoadVarType;
        if(        obj_array_type_763&&list$1sNode$ph$p_length(obj_array_type_763->mArrayNum)>0) {
            array_method_name_764=(char*)come_increment_ref_count(create_method_name(obj_array_type_763,(_Bool)0,fun_name_569,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_669,array_method_name_764)) {
                if(                string_operator_equals(fun_name_569,"to_pointer")) {
                    buf_765=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 895, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_766=0;
                    for(                    o2_saved_767=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_763->mArrayNum)),it_770=list$1sNode$ph$p_begin((o2_saved_767));                    !list$1sNode$ph$p_end((o2_saved_767));                    it_770=list$1sNode$ph$p_next((o2_saved_767))                    ){
                        Value_773=node_compile(it_770,info);
                        if(                        !Value_773) {
                            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value613=err_msg(info,"invalid array num")));
                            come_exception_var_10_774=multiple_assign_var29->v1;
                            Err_775=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional20=(Err_775)),                            come_call_finalizer3(__right_value613,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional20) {
                                __result_obj__387 = (_Bool)1;
                                (Err_775 = come_decrement_ref_count2(Err_775, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_767,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_764 = come_decrement_ref_count2(array_method_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__387;
                            }
                            else {
                            }
                            (Err_775 = come_decrement_ref_count2(Err_775, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_776=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_765,"%s",come_value_776->c_value);
                        if(                        i_766!=list$1sNode$ph$p_length(obj_array_type_763->mArrayNum)-1) {
                            buffer_append_str(buf_765,"*");
                        }
                        i_766++;
                        come_call_finalizer3(come_value_776,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_767,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_777=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 916, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj122=come_value_777->c_value;
                    come_value_777->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_765));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_777->var=((void*)0);
                    __dec_obj123=come_value_777->type;
                    come_value_777->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 920, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_721,1,(struct CVALUE*)come_increment_ref_count(come_value_777));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_570,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 923, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_765,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_777,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_569,"length")) {
                    buf_781=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 926, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_782=0;
                    for(                    o2_saved_783=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_763->mArrayNum)),it_784=list$1sNode$ph$p_begin((o2_saved_783));                    !list$1sNode$ph$p_end((o2_saved_783));                    it_784=list$1sNode$ph$p_next((o2_saved_783))                    ){
                        Value_785=node_compile(it_784,info);
                        if(                        !Value_785) {
                            multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value628=err_msg(info,"invalid array num")));
                            come_exception_var_11_786=multiple_assign_var30->v1;
                            Err_787=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional21=(Err_787)),                            come_call_finalizer3(__right_value628,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional21) {
                                __result_obj__389 = (_Bool)1;
                                (Err_787 = come_decrement_ref_count2(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_783,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_764 = come_decrement_ref_count2(array_method_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__389;
                            }
                            else {
                            }
                            (Err_787 = come_decrement_ref_count2(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_788=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_781,"%s",come_value_788->c_value);
                        if(                        i_782!=list$1sNode$ph$p_length(obj_array_type_763->mArrayNum)-1) {
                            buffer_append_str(buf_781,"*");
                        }
                        i_782++;
                        come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_783,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_789=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 946, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj127=come_value_789->c_value;
                    come_value_789->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_781));
                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_789->var=((void*)0);
                    __dec_obj128=come_value_789->type;
                    come_value_789->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 950, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_721,1,(struct CVALUE*)come_increment_ref_count(come_value_789));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_570,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 953, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_789,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_569,"to_buffer")) {
                    buf_790=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 956, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_791=0;
                    for(                    o2_saved_792=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_763->mArrayNum)),it_793=list$1sNode$ph$p_begin((o2_saved_792));                    !list$1sNode$ph$p_end((o2_saved_792));                    it_793=list$1sNode$ph$p_next((o2_saved_792))                    ){
                        Value_794=node_compile(it_793,info);
                        if(                        !Value_794) {
                            multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value640=err_msg(info,"invalid array num")));
                            come_exception_var_12_795=multiple_assign_var31->v1;
                            Err_796=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                            if(                            (_if_conditional22=(Err_796)),                            come_call_finalizer3(__right_value640,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional22) {
                                __result_obj__390 = (_Bool)1;
                                (Err_796 = come_decrement_ref_count2(Err_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_792,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_764 = come_decrement_ref_count2(array_method_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__390;
                            }
                            else {
                            }
                            (Err_796 = come_decrement_ref_count2(Err_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_797=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_790,"%s",come_value_797->c_value);
                        if(                        i_791!=list$1sNode$ph$p_length(obj_array_type_763->mArrayNum)-1) {
                            buffer_append_str(buf_790,"*");
                        }
                        i_791++;
                        come_call_finalizer3(come_value_797,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_792,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_798=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 976, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj129=come_value_798->c_value;
                    come_value_798->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_790));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_798->var=((void*)0);
                    __dec_obj130=come_value_798->type;
                    come_value_798->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 980, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_721,1,(struct CVALUE*)come_increment_ref_count(come_value_798));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_570,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 983, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_798,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_569,"to_list")) {
                    buf_799=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 986, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_800=0;
                    for(                    o2_saved_801=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_763->mArrayNum)),it_802=list$1sNode$ph$p_begin((o2_saved_801));                    !list$1sNode$ph$p_end((o2_saved_801));                    it_802=list$1sNode$ph$p_next((o2_saved_801))                    ){
                        Value_803=node_compile(it_802,info);
                        if(                        !Value_803) {
                            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value652=err_msg(info,"invalid array num")));
                            come_exception_var_13_804=multiple_assign_var32->v1;
                            Err_805=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                            if(                            (_if_conditional23=(Err_805)),                            come_call_finalizer3(__right_value652,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional23) {
                                __result_obj__391 = (_Bool)1;
                                (Err_805 = come_decrement_ref_count2(Err_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_801,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_764 = come_decrement_ref_count2(array_method_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__391;
                            }
                            else {
                            }
                            (Err_805 = come_decrement_ref_count2(Err_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_806=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_799,"%s",come_value_806->c_value);
                        if(                        i_800!=list$1sNode$ph$p_length(obj_array_type_763->mArrayNum)-1) {
                            buffer_append_str(buf_799,"*");
                        }
                        i_800++;
                        come_call_finalizer3(come_value_806,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_801,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_807=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1006, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj131=come_value_807->c_value;
                    come_value_807->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_799));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_807->var=((void*)0);
                    __dec_obj132=come_value_807->type;
                    come_value_807->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1010, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_721,1,(struct CVALUE*)come_increment_ref_count(come_value_807));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_570,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1013, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_807,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_569,"to_vector")) {
                    buf_808=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1016, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_809=0;
                    for(                    o2_saved_810=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_763->mArrayNum)),it_811=list$1sNode$ph$p_begin((o2_saved_810));                    !list$1sNode$ph$p_end((o2_saved_810));                    it_811=list$1sNode$ph$p_next((o2_saved_810))                    ){
                        Value_812=node_compile(it_811,info);
                        if(                        !Value_812) {
                            multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value664=err_msg(info,"invalid array num")));
                            come_exception_var_14_813=multiple_assign_var33->v1;
                            Err_814=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                            if(                            (_if_conditional24=(Err_814)),                            come_call_finalizer3(__right_value664,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional24) {
                                __result_obj__392 = (_Bool)1;
                                (Err_814 = come_decrement_ref_count2(Err_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_810,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_808,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_764 = come_decrement_ref_count2(array_method_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__392;
                            }
                            else {
                            }
                            (Err_814 = come_decrement_ref_count2(Err_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_815=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_808,"%s",come_value_815->c_value);
                        if(                        i_809!=list$1sNode$ph$p_length(obj_array_type_763->mArrayNum)-1) {
                            buffer_append_str(buf_808,"*");
                        }
                        i_809++;
                        come_call_finalizer3(come_value_815,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_810,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_816=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1036, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj133=come_value_816->c_value;
                    come_value_816->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_808));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_816->var=((void*)0);
                    __dec_obj134=come_value_816->type;
                    come_value_816->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1040, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_721,1,(struct CVALUE*)come_increment_ref_count(come_value_816));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_570,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1043, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_808,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_816,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (array_method_name_764 = come_decrement_ref_count2(array_method_name_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2char$phsNode$ph$ph$p_length(params_570)<list$1void$ph$p_length(fun_670->mParamTypes)+(((method_block_572)?(-2):(0)))) {
            for(            ;            i_747<list$1void$ph$p_length(fun_670->mParamTypes)+(((method_block_572)?(-2):(0)));            i_747++            ){
                default_param_817=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value674=list$1char$ph$p_operator_load_element(fun_670->mParamDefaultParametors,i_747)))));
                (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_818=((char*)(__right_value676=list$1char$ph$p_operator_load_element(fun_670->mParamNames,i_747)));
                (__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional25=(default_param_817&&string_operator_not_equals(default_param_817,"")&&((struct CVALUE*)(__right_value677=list$1CVALUE$ph$p_operator_load_element(come_params_721,i_747)))==((void*)0))),                come_call_finalizer3(__right_value677,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    source_819=(struct buffer*)come_increment_ref_count(info->source);
                    p_820=info->p;
                    head_821=info->head;
                    sline_822=info->sline;
                    __dec_obj135=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_817));
                    come_call_finalizer3(__dec_obj135,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_823=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_824=node_compile(node_823,info);
                    if(                    !Value_824) {
                        __result_obj__393 = (_Bool)0;
                        come_call_finalizer3(source_819,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_817 = come_decrement_ref_count2(default_param_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__393;
                    }
                    else {
                    }
                    __dec_obj136=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_819);
                    come_call_finalizer3(__dec_obj136,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_820;
                    info->head=head_821;
                    info->sline=sline_822;
                    come_value_825=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional26=(((struct sType*)((void*)(__right_value681=list$1void$ph$p_operator_load_element(param_types_707,i_747)))))),                    come_call_finalizer3(__right_value681,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional26) {
                        multiple_assign_var34=((struct tuple2$2bool$char$ph*)(__right_value686=check_assign_type(((char*)(__right_value684=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value682=string_to_string(fun_name_569))),((char*)(__right_value683=int_to_string(i_747)))))),((struct sType*)((void*)(__right_value685=list$1void$ph$p_operator_load_element(type_checking_param_types_714,i_747)))),come_value_825->type,come_value_825,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_15_826=multiple_assign_var34->v1;
                        Err_827=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                        if(                        (_if_conditional27=(Err_827)),                        (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value685,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                        come_call_finalizer3(__right_value686,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional27) {
                            __result_obj__394 = (_Bool)1;
                            (Err_827 = come_decrement_ref_count2(Err_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(source_819,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(come_value_825,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            (default_param_817 = come_decrement_ref_count2(default_param_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__394;
                        }
                        else {
                        }
                        (Err_827 = come_decrement_ref_count2(Err_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional28=(((struct sType*)((void*)(__right_value687=list$1void$ph$p_operator_load_element(param_types_707,i_747))))&&((struct sType*)((void*)(__right_value688=list$1void$ph$p_operator_load_element(param_types_707,i_747))))->mHeap&&come_value_825->type->mHeap)),                    come_call_finalizer3(__right_value687,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value688,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional28) {
                        std_move(((struct sType*)((void*)(__right_value689=list$1void$ph$p_operator_load_element(param_types_707,i_747)))),come_value_825->type,come_value_825,info,(_Bool)1);
                        come_call_finalizer3(__right_value689,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    }
                    list$1CVALUE$ph$p_replace(come_params_721,i_747,(struct CVALUE*)come_increment_ref_count(come_value_825));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_819,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_823) ? node_823 = come_decrement_ref_count2(node_823, ((struct sNode*)node_823)->finalize, ((struct sNode*)node_823)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_825,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional29=(((struct CVALUE*)(__right_value690=list$1CVALUE$ph$p_operator_load_element(come_params_721,i_747)))==((void*)0))),                    come_call_finalizer3(__right_value690,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional29) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value691=err_msg(info,"require parametor(%s) %d",fun_670->mName,i_747)));
                        come_exception_var_16_828=multiple_assign_var35->v1;
                        Err_829=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        if(                        (_if_conditional30=(Err_829)),                        come_call_finalizer3(__right_value691,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional30) {
                            __result_obj__395 = (_Bool)1;
                            (Err_829 = come_decrement_ref_count2(Err_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_817 = come_decrement_ref_count2(default_param_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__395;
                        }
                        else {
                        }
                        (Err_829 = come_decrement_ref_count2(Err_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_817 = come_decrement_ref_count2(default_param_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_572) {
            if(            !compile_method_block(method_block_572,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_721),fun_670,fun_name_569,method_block_sline_573,info,(_Bool)0)) {
                __result_obj__396 = (_Bool)0;
                (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__396;
            }
        }
        buf_830=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1103, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_830,generics_fun_name_669);
        buffer_append_str(buf_830,"(");
        j_831=0;
        for(        o2_saved_832=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_721)),it_833=list$1CVALUE$ph$p_begin((o2_saved_832));        !list$1CVALUE$ph$p_end((o2_saved_832));        it_833=list$1CVALUE$ph$p_next((o2_saved_832))        ){
            buffer_append_str(buf_830,it_833->c_value);
            if(            j_831!=list$1CVALUE$ph$p_length(come_params_721)-1) {
                buffer_append_str(buf_830,",");
            }
            j_831++;
        }
        come_call_finalizer3(o2_saved_832,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_830,")");
        come_value2_834=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1122, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_value2_834->var=((void*)0);
        if(        obj_type_580->mAnyClass&&string_operator_equals(fun_name_569,"get_hash_key")) {
            __dec_obj137=come_value2_834->c_value;
            come_value2_834->c_value=(char*)come_increment_ref_count(xsprintf("come_call_get_hash_key((void*)0, %s)",obj_value_579->c_value));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj138=come_value2_834->type;
            come_value2_834->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1127, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_834->type->mUnsigned=(_Bool)1;
        }
        else if(        obj_type_580->mAnyClass&&string_operator_equals(fun_name_569,"equals")) {
            __dec_obj139=come_value2_834->c_value;
            come_value2_834->c_value=(char*)come_increment_ref_count(xsprintf("come_call_equals((void*)0, %s, %s)",obj_value_579->c_value,((struct CVALUE*)(__right_value699=list$1CVALUE$ph$p_operator_load_element(come_params_721,1)))->c_value));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(__right_value699,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj140=come_value2_834->type;
            come_value2_834->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1132, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_834->type->mUnsigned=(_Bool)1;
        }
        else {
            __dec_obj141=come_value2_834->c_value;
            come_value2_834->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_830));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            generics_any_child_835=(_Bool)0;
            obj_type2_836=(struct sType*)come_increment_ref_count(obj_type_580);
            if(            obj_type2_836->mNoSolvedGenericsType) {
                __dec_obj142=obj_type2_836;
                obj_type2_836=(struct sType*)come_increment_ref_count(obj_type2_836->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_837=(struct list$1void$ph*)come_increment_ref_count((obj_type2_836->mGenericsTypes)),it_838=((struct sType*)list$1void$ph$p_begin((o2_saved_837)));                !list$1void$ph$p_end((o2_saved_837));                it_838=((struct sType*)list$1void$ph$p_next((o2_saved_837)))                ){
                    if(                    it_838->mAnyOriginalType) {
                        generics_any_child_835=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_837,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            result_type2_706->mAnyOriginalType&&generics_fun_668&&obj_type_580->mNoSolvedGenericsType) {
                obj_type2_839=(struct sType*)come_increment_ref_count(obj_type_580->mNoSolvedGenericsType);
                __dec_obj143=result_type2_706;
                result_type2_706=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_668->mResultType,obj_type2_839,info));
                come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj144=come_value2_834->type;
                come_value2_834->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_706));
                come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_834->type->mStatic=(_Bool)0;
                if(                result_type2_706->mHeap) {
                    append_object_to_right_values2(come_value2_834,(struct sType*)come_increment_ref_count(result_type2_706),info,(_Bool)0);
                }
                come_call_finalizer3(obj_type2_839,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            generics_fun_668&&generics_any_child_835) {
                __dec_obj145=result_type2_706;
                result_type2_706=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_668->mResultType,obj_type2_836,info));
                come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj146=come_value2_834->type;
                come_value2_834->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_706));
                come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_834->type->mStatic=(_Bool)0;
                if(                result_type2_706->mHeap) {
                    append_object_to_right_values2(come_value2_834,(struct sType*)come_increment_ref_count(result_type2_706),info,(_Bool)0);
                }
            }
            else {
                __dec_obj147=come_value2_834->type;
                come_value2_834->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_706));
                come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_834->type->mStatic=(_Bool)0;
                if(                result_type2_706->mHeap) {
                    append_object_to_right_values2(come_value2_834,(struct sType*)come_increment_ref_count(result_type2_706),info,(_Bool)0);
                }
            }
            __dec_obj148=come_value2_834->c_value;
            come_value2_834->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_834->c_value,come_value2_834->type,info));
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj149=come_value2_834;
            come_value2_834=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_834),info));
            come_call_finalizer3(__dec_obj149,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(obj_type2_836,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        add_come_last_code(info,"%s",come_value2_834->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_834));
        if(        is_contained_method_generics_types(obj_type_580,info)&&generics_fun_name_669) {
            map$2void$phvoid$ph$p_remove(info->funcs,((char*)(__right_value711=__builtin_string(generics_fun_name_669))));
            (__right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(info->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj150=info->method_generics_types;
        info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types_before_577);
        come_call_finalizer3(__dec_obj150,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_670;
        (generics_fun_name_669 = come_decrement_ref_count2(generics_fun_name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_698,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_706,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_checking_param_types_714,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_721,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_830,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_834,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__397 = (_Bool)1;
    (fun_name_569 = come_decrement_ref_count2(fun_name_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_570,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((obj_571) ? obj_571 = come_decrement_ref_count2(obj_571, ((struct sNode*)obj_571)->finalize, ((struct sNode*)obj_571)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(method_block_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_575,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_577,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_580,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__397;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__325;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_561;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_562;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__330;
    if(    self==((void*)0)) {
        __result_obj__325 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__325,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__325;
    }
    result_561=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1456, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_562=self->head;
    while(it_562!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_561,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_562->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_561,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_562->item)));
        }
        it_562=it_562->next;
    }
    __result_obj__330 = come_increment_ref_count(result_561);
    come_call_finalizer3(result_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__330,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__330;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_559;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_560;
    it_559=self->head;
    while(it_559!=((void*)0)) {
        prev_it_560=it_559;
        it_559=it_559->next;
        come_call_finalizer3(prev_it_560,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__326;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__326 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__326,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value436 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_563;
struct tuple2$2char$phsNode$ph* __dec_obj84;
void* __right_value437 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_564;
struct tuple2$2char$phsNode$ph* __dec_obj85;
void* __right_value438 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_565;
struct tuple2$2char$phsNode$ph* __dec_obj86;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__327;
    if(    self->len==0) {
        litem_563=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value436=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1475, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_563->prev=((void*)0);
        litem_563->next=((void*)0);
        __dec_obj84=litem_563->item;
        litem_563->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_563;
        self->head=litem_563;
    }
    else if(    self->len==1) {
        litem_564=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value437=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1485, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_564->prev=self->head;
        litem_564->next=((void*)0);
        __dec_obj85=litem_564->item;
        litem_564->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_564;
        self->head->next=litem_564;
    }
    else {
        litem_565=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value438=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1495, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_565->prev=self->tail;
        litem_565->next=((void*)0);
        __dec_obj86=litem_565->item;
        litem_565->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_565;
        self->tail=litem_565;
    }
    self->len++;
    __result_obj__327 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__327;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__328;
void* __right_value439 = (void*)0;
struct tuple2$2char$phsNode$ph* result_566;
void* __right_value440 = (void*)0;
char* __dec_obj87;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj88;
struct tuple2$2char$phsNode$ph* __result_obj__329;
    if(    self==(void*)0) {
        __result_obj__328 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__328,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__328;
    }
    result_566=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj87=result_566->v1;
        result_566->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj88=result_566->v2;
        result_566->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__329 = come_increment_ref_count(result_566);
    come_call_finalizer3(result_566,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__329,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__329;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_567;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_568;
    it_567=self->head;
    while(it_567!=((void*)0)) {
        prev_it_568=it_567;
        it_567=it_567->next;
        come_call_finalizer3(prev_it_568,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        come_call_finalizer3(self->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__334;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__334 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__334,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_595;
int i_596;
struct CVALUE* __result_obj__336;
struct CVALUE* default_value_597;
struct CVALUE* __result_obj__337;
default_value_597 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_595=self->head;
    i_596=0;
    while(it_595!=((void*)0)) {
        if(        position==i_596) {
            __result_obj__336 = come_increment_ref_count(it_595->item);
            come_call_finalizer3(__result_obj__336,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__336;
        }
        it_595=it_595->next;
        i_596++;
    }
    memset(&default_value_597,0,sizeof(struct CVALUE*));
    __result_obj__337 = come_increment_ref_count(default_value_597);
    come_call_finalizer3(default_value_597,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__337,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__337;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_610;
struct tuple2$2char$phsNode$ph* __result_obj__338;
struct tuple2$2char$phsNode$ph* __result_obj__339;
struct tuple2$2char$phsNode$ph* result_611;
struct tuple2$2char$phsNode$ph* __result_obj__340;
result_610 = (void*)0;
result_611 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_610,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__338 = result_610;
        return __result_obj__338;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__339 = self->it->item;
        return __result_obj__339;
    }
    memset(&result_611,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__340 = result_611;
    return __result_obj__340;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_613;
struct tuple2$2char$phsNode$ph* __result_obj__341;
struct tuple2$2char$phsNode$ph* __result_obj__342;
struct tuple2$2char$phsNode$ph* result_614;
struct tuple2$2char$phsNode$ph* __result_obj__343;
result_613 = (void*)0;
result_614 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_613,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__341 = result_613;
        return __result_obj__341;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__342 = self->it->item;
        return __result_obj__342;
    }
    memset(&result_614,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__343 = result_614;
    return __result_obj__343;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_661;
struct CVALUE* __result_obj__348;
struct CVALUE* __result_obj__349;
struct CVALUE* result_662;
struct CVALUE* __result_obj__350;
result_661 = (void*)0;
result_662 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_661,0,sizeof(struct CVALUE*));
        __result_obj__348 = result_661;
        return __result_obj__348;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__349 = self->it->item;
        return __result_obj__349;
    }
    memset(&result_662,0,sizeof(struct CVALUE*));
    __result_obj__350 = result_662;
    return __result_obj__350;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_664;
struct CVALUE* __result_obj__351;
struct CVALUE* __result_obj__352;
struct CVALUE* result_665;
struct CVALUE* __result_obj__353;
result_664 = (void*)0;
result_665 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_664,0,sizeof(struct CVALUE*));
        __result_obj__351 = result_664;
        return __result_obj__351;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__352 = self->it->item;
        return __result_obj__352;
    }
    memset(&result_665,0,sizeof(struct CVALUE*));
    __result_obj__353 = result_665;
    return __result_obj__353;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__358;
void* __right_value548 = (void*)0;
struct sMethodCallNode* result_701;
void* __right_value549 = (void*)0;
char* __dec_obj112;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj113;
void* __right_value551 = (void*)0;
char* __dec_obj114;
void* __right_value552 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj115;
void* __right_value553 = (void*)0;
struct buffer* __dec_obj116;
void* __right_value554 = (void*)0;
struct list$1void$ph* __dec_obj117;
struct sMethodCallNode* __result_obj__359;
    if(    self==(void*)0) {
        __result_obj__358 = (void*)0;
        return __result_obj__358;
    }
    result_701=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_701->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result_701->sname;
        result_701->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj113=result_701->obj;
        result_701->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj114=result_701->fun_name;
        result_701->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj115=result_701->params;
        result_701->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj115,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj116=result_701->method_block;
        result_701->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj116,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj117=result_701->method_generics_types;
        result_701->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj117,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_701->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_701->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_701->fun=self->fun;
    }
    __result_obj__359 = result_701;
    come_call_finalizer3(result_701,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__359;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value575 = (void*)0;
struct list_item$1CVALUE$ph* litem_723;
struct CVALUE* __dec_obj118;
void* __right_value576 = (void*)0;
struct list_item$1CVALUE$ph* litem_724;
struct CVALUE* __dec_obj119;
void* __right_value577 = (void*)0;
struct list_item$1CVALUE$ph* litem_725;
struct CVALUE* __dec_obj120;
struct list$1CVALUE$ph* __result_obj__364;
    if(    self->len==0) {
        litem_723=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value575=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1475, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_723->prev=((void*)0);
        litem_723->next=((void*)0);
        __dec_obj118=litem_723->item;
        litem_723->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_723;
        self->head=litem_723;
    }
    else if(    self->len==1) {
        litem_724=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value576=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1485, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_724->prev=self->head;
        litem_724->next=((void*)0);
        __dec_obj119=litem_724->item;
        litem_724->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_724;
        self->head->next=litem_724;
    }
    else {
        litem_725=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value577=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1495, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_725->prev=self->tail;
        litem_725->next=((void*)0);
        __dec_obj120=litem_725->item;
        litem_725->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_725;
        self->tail=litem_725;
    }
    self->len++;
    __result_obj__364 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__364;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_733;
char* __result_obj__365;
char* __result_obj__366;
char* result_734;
char* __result_obj__367;
result_733 = (void*)0;
result_734 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_733,0,sizeof(char*));
        __result_obj__365 = result_733;
        return __result_obj__365;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__366 = self->it->item;
        return __result_obj__366;
    }
    memset(&result_734,0,sizeof(char*));
    __result_obj__367 = result_734;
    return __result_obj__367;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_736;
char* __result_obj__368;
char* __result_obj__369;
char* result_737;
char* __result_obj__370;
result_736 = (void*)0;
result_737 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_736,0,sizeof(char*));
        __result_obj__368 = result_736;
        return __result_obj__368;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__369 = self->it->item;
        return __result_obj__369;
    }
    memset(&result_737,0,sizeof(char*));
    __result_obj__370 = result_737;
    return __result_obj__370;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_742;
int i_743;
struct CVALUE* default_value_744;
struct list$1CVALUE$ph* __result_obj__373;
struct list_item$1CVALUE$ph* it_745;
int i_746;
struct CVALUE* __dec_obj121;
struct list$1CVALUE$ph* __result_obj__374;
default_value_744 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_742=self->len;
        for(        i_743=0;        i_743<position-len_742;        i_743++        ){
            memset(&default_value_744,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_744));
            come_call_finalizer3(default_value_744,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__373 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__373;
    }
    it_745=self->head;
    i_746=0;
    while(it_745!=((void*)0)) {
        if(        position==i_746) {
            __dec_obj121=it_745->item;
            it_745->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_745=it_745->next;
        i_746++;
    }
    __result_obj__374 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__374;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_754;
int i_755;
char* __result_obj__376;
char* default_value_756;
char* __result_obj__377;
default_value_756 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_754=self->head;
    i_755=0;
    while(it_754!=((void*)0)) {
        if(        position==i_755) {
            __result_obj__376 = come_increment_ref_count(it_754->item);
            (__result_obj__376 = come_decrement_ref_count2(__result_obj__376, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__376;
        }
        it_754=it_754->next;
        i_755++;
    }
    memset(&default_value_756,0,sizeof(char*));
    __result_obj__377 = come_increment_ref_count(default_value_756);
    (default_value_756 = come_decrement_ref_count2(default_value_756, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__377 = come_decrement_ref_count2(__result_obj__377, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__377;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_768;
struct sNode* __result_obj__381;
struct sNode* __result_obj__382;
struct sNode* result_769;
struct sNode* __result_obj__383;
result_768 = (void*)0;
result_769 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_768,0,sizeof(struct sNode*));
        __result_obj__381 = result_768;
        return __result_obj__381;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__382 = self->it->item;
        return __result_obj__382;
    }
    memset(&result_769,0,sizeof(struct sNode*));
    __result_obj__383 = result_769;
    return __result_obj__383;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_771;
struct sNode* __result_obj__384;
struct sNode* __result_obj__385;
struct sNode* result_772;
struct sNode* __result_obj__386;
result_771 = (void*)0;
result_772 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_771,0,sizeof(struct sNode*));
        __result_obj__384 = result_771;
        return __result_obj__384;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__385 = self->it->item;
        return __result_obj__385;
    }
    memset(&result_772,0,sizeof(struct sNode*));
    __result_obj__386 = result_772;
    return __result_obj__386;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value620 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_778;
struct tuple2$2char$phsNode$ph* __dec_obj124;
void* __right_value621 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_779;
struct tuple2$2char$phsNode$ph* __dec_obj125;
void* __right_value622 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_780;
struct tuple2$2char$phsNode$ph* __dec_obj126;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__388;
    if(    self->len==0) {
        litem_778=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value620=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1545, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_778->prev=((void*)0);
        litem_778->next=((void*)0);
        __dec_obj124=litem_778->item;
        litem_778->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_778;
        self->head=litem_778;
    }
    else if(    self->len==1) {
        litem_779=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value621=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1555, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_779->prev=self->head;
        litem_779->next=((void*)0);
        __dec_obj125=litem_779->item;
        litem_779->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_779;
        self->head->next=litem_779;
    }
    else {
        litem_780=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value622=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1565, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_780->prev=self->tail;
        litem_780->next=((void*)0);
        __dec_obj126=litem_780->item;
        litem_780->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_780;
        self->tail=litem_780;
    }
    self->len++;
    __result_obj__388 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__388;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, struct sInfo* info){
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value714 = (void*)0;
struct sNode* node_840;
void* __right_value715 = (void*)0;
struct sNode* __dec_obj151;
struct sNode* __result_obj__398;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1204, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value713=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1204, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMethodCallNode_finalize;
    _inf_value4->clone=(void*)sMethodCallNode_clone;
    _inf_value4->compile=(void*)sMethodCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMethodCallNode_terminated;
    _inf_value4->kind=(void*)sMethodCallNode_kind;
    node_840=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value713,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj151=node_840;
    node_840=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_840),info));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__398 = come_increment_ref_count(node_840);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_840) ? node_840 = come_decrement_ref_count2(node_840, ((struct sNode*)node_840)->finalize, ((struct sNode*)node_840)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__398) ? __result_obj__398 = come_decrement_ref_count2(__result_obj__398, ((struct sNode*)__result_obj__398)->finalize, ((struct sNode*)__result_obj__398)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__398;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_841;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
_Bool parse_method_generics_type_843;
char* p_844;
int sline_845;
void* __right_value721 = (void*)0;
char* word_846;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1void$ph* method_generics_types_847;
void* __right_value724 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_848=0;
char* Err_849=0;
void* __right_value725 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_850=0;
char* name_851=0;
_Bool err_852=0;
void* __right_value726 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c7_853=0;
char* Err_854=0;
void* __right_value727 = (void*)0;
char* p_855;
int sline_856;
_Bool err_flag_857;
void* __right_value728 = (void*)0;
char* label_858;
void* __right_value729 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
_Bool no_comma_859;
_Bool in_fun_param_860;
void* __right_value730 = (void*)0;
struct sNode* node_861;
void* __right_value731 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* method_block_862;
int method_block_sline_863;
char* head_864;
void* __right_value734 = (void*)0;
char* tail_865;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct buffer* __dec_obj157;
int len_866;
void* __right_value737 = (void*)0;
char* mem_867;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value741 = (void*)0;
struct sNode* node_868;
void* __right_value742 = (void*)0;
struct sNode* __dec_obj158;
struct sNode* __result_obj__400;
    params_841=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1213, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_841,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1214, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_843=(_Bool)0;
    {
        p_844=info->p;
        sline_845=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_846=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_846,info)) {
                    parse_method_generics_type_843=(_Bool)1;
                }
                (word_846 = come_decrement_ref_count2(word_846, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_844;
        info->sline=sline_845;
    }
    method_generics_types_847=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "20method.c", 1244, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    if(    parse_method_generics_type_843&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value724=err_msg(info,"unexpected source end")));
                come_exception_var_c6_848=multiple_assign_var36->v1;
                Err_849=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                ((Err_849)?(puts(Err_849),exit(0)):(0));
                come_call_finalizer3(__right_value724,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_849 = come_decrement_ref_count2(Err_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value725=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_850=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
                name_851=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                err_852=multiple_assign_var37->v3;
                come_call_finalizer3(__right_value725,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_852) {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value726=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c7_853=multiple_assign_var38->v1;
                    Err_854=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_854)?(puts(Err_854),exit(0)):(0));
                    come_call_finalizer3(__right_value726,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_854 = come_decrement_ref_count2(Err_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1void$ph$p_push_back(method_generics_types_847,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_850)));
                come_call_finalizer3(type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_851 = come_decrement_ref_count2(name_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            p_855=info->p;
            sline_856=info->sline;
            err_flag_857=(_Bool)0;
            label_858=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj154=label_858;
                label_858=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_857=(_Bool)1;
            }
            if(            err_flag_857==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj155=label_858;
                label_858=((void*)0);
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_855;
                info->sline=sline_856;
            }
            no_comma_859=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_860=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_861=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj156=node_861;
            node_861=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_861),info));
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_860;
            info->no_comma=no_comma_859;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_841,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1320, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_858),(struct sNode*)come_increment_ref_count(node_861))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_858 = come_decrement_ref_count2(label_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_861) ? node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_858 = come_decrement_ref_count2(label_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_861) ? node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_862=((void*)0);
    method_block_sline_863=0;
    if(    *info->p==123) {
        head_864=info->p;
        method_block_sline_863=info->sline;
        ((char*)(__right_value734=skip_block(info)));
        (__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_865=info->p;
        __dec_obj157=method_block_862;
        method_block_862=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1344, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj157,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_866=tail_865-head_864;
        mem_867=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_866+1)), "20method.c", 1347, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_867,head_864,len_866);
        mem_867[len_866]=0;
        buffer_append_str(method_block_862,mem_867);
        buffer_append_str(method_block_862,"\n");
        (mem_867 = come_decrement_ref_count2(mem_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1359, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value740=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1359, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_841),method_block_862,method_block_sline_863,method_generics_types_847,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_868=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value740,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj158=node_868;
    node_868=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_868),info));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__400 = come_increment_ref_count(node_868);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_841,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_847,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_862,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_868) ? node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count2(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__400;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_842;
    result_842=0;
    result_842+=int_get_hash_key(((int)self->v1));
    result_842+=int_get_hash_key(((int)self->v2));
    return result_842;
}

static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj152;
struct sNode* __dec_obj153;
struct tuple2$2char$phsNode$ph* __result_obj__399;
    __dec_obj152=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__399 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__399,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__399;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value745 = (void*)0;
struct sNode* __result_obj__401;
void* __right_value746 = (void*)0;
struct sNode* __result_obj__402;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1369, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value744=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1369, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        __result_obj__401 = come_increment_ref_count(((struct sNode*)(__right_value745=_inf_value6)));
        come_call_finalizer3(__right_value744,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value745) ? __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__401) ? __result_obj__401 = come_decrement_ref_count2(__result_obj__401, ((struct sNode*)__result_obj__401)->finalize, ((struct sNode*)__result_obj__401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__401;
    }
    __result_obj__402 = come_increment_ref_count(((struct sNode*)(__right_value746=string_node_v17(buf,head,head_sline,info))));
    ((__right_value746) ? __right_value746 = come_decrement_ref_count2(__right_value746, ((struct sNode*)__right_value746)->finalize, ((struct sNode*)__right_value746)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__402) ? __result_obj__402 = come_decrement_ref_count2(__result_obj__402, ((struct sNode*)__result_obj__402)->finalize, ((struct sNode*)__result_obj__402)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__402;
}

