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
int i_175;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result_obj__100;
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
    __result_obj__100 = self;
    return __result_obj__100;
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

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_181;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result_obj__103;
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
    __result_obj__103 = self;
    return __result_obj__103;
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

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_187;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result_obj__106;
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
    __result_obj__106 = self;
    return __result_obj__106;
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

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_193;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result_obj__109;
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
    __result_obj__109 = self;
    return __result_obj__109;
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

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_199;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result_obj__112;
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
    __result_obj__112 = self;
    return __result_obj__112;
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

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_205;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result_obj__115;
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
    __result_obj__115 = self;
    return __result_obj__115;
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

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_211;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result_obj__118;
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
    __result_obj__118 = self;
    return __result_obj__118;
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

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result_obj__121;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
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

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result_obj__124;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
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

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result_obj__127;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
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

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result_obj__130;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
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

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result_obj__133;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
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

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result_obj__136;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
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

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result_obj__139;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
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
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1457, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj20=litem_290->item;
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1467, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj21=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1477, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj22=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sCurrentNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__237,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value260 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value260=__builtin_string(self->sname))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__239;
    __result_obj__239 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sCurrentNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__239 = come_decrement_ref_count2(__result_obj__239, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__239;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
char* class_name_345;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sClass* current_stack_346;
struct sVarTable* vtable_361;
struct map$2void$phvoid$ph* o2_saved_362;
char* it_365;
char* key_368;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sVar* value_369;
void* __right_value310 = (void*)0;
struct sType* type2_373;
void* __right_value311 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct tuple2$2char$phsType$ph* item_397;
void* __right_value317 = (void*)0;
struct sType* type3_400;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct tuple2$2char$phsType$ph* item2_403;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct map$2void$phvoid$ph* o2_saved_451;
char* it_452;
char* key_453;
void* __right_value334 = (void*)0;
struct sVar* value_454;
void* __right_value335 = (void*)0;
struct sType* type2_455;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct tuple2$2char$phsType$ph* item_456;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value340 = (void*)0;
char* __dec_obj58;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* __dec_obj59;
_Bool __result_obj__289;
    info->current_stack_num++;
    class_name_345=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_346=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 425, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),class_name_345,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_361=info->lv_table;
    while(vtable_361) {
        for(        o2_saved_362=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_361->mVars)),it_365=((char*)map$2void$phvoid$ph$p_begin((o2_saved_362)));        !map$2void$phvoid$ph$p_end((o2_saved_362));        it_365=((char*)map$2void$phvoid$ph$p_next((o2_saved_362)))        ){
            key_368=it_365;
            value_369=((struct sVar*)((void*)(__right_value278=map$2void$phvoid$ph$p_operator_load_element(vtable_361->mVars,((char*)(__right_value277=__builtin_string(key_368)))))));
            (__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value278,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_373=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_369->mType));
            type2_373->mPointerNum++;
            item_397=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 438, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_369->mCValueName)),(struct sType*)come_increment_ref_count(type2_373)));
            if(            value_369->mCValueName!=((void*)0)) {
                if(                strcmp(value_369->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_369->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_369->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_369->mType->mClass->mName,"va_list")||string_operator_equals(value_369->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph$p_length(type2_373->mArrayNum)==1) {
                    type3_400=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_373));
                    list$1sNode$ph$p_reset(type3_400->mArrayNum);
                    type3_400->mPointerNum=1;
                    type3_400->mOriginIsArray=(_Bool)1;
                    item2_403=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 458, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(__builtin_string(value_369->mCValueName)),(struct sType*)come_increment_ref_count(type3_400)));
                    list$1void$ph$p_push_back(current_stack_346->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_403)));
                    value_369->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_403,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1void$ph$p_push_back(current_stack_346->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_397)));
                }
            }
            come_call_finalizer3(type2_373,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_397,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_362,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_361=vtable_361->mParent;
    }
    output_struct(current_stack_346,info);
    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(class_name_345),(struct sClass*)come_increment_ref_count(current_stack_346));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_345,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_345);
    vtable_361=info->lv_table;
    while(vtable_361) {
        for(        o2_saved_451=(struct map$2void$phvoid$ph*)come_increment_ref_count((vtable_361->mVars)),it_452=((char*)map$2void$phvoid$ph$p_begin((o2_saved_451)));        !map$2void$phvoid$ph$p_end((o2_saved_451));        it_452=((char*)map$2void$phvoid$ph$p_next((o2_saved_451)))        ){
            key_453=it_452;
            value_454=((struct sVar*)((void*)(__right_value334=map$2void$phvoid$ph$p_operator_load_element(vtable_361->mVars,key_453))));
            come_call_finalizer3(__right_value334,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type2_455=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_454->mType));
            item_456=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 487, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(value_454->mCValueName),(struct sType*)come_increment_ref_count(type2_455)));
            if(            value_454->mCValueName!=((void*)0)) {
                if(                strcmp(value_454->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_454->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_454->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_454->mType->mClass->mName,"va_list")||string_operator_equals(value_454->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_455->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_454->mCValueName,value_454->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_454->mCValueName,value_454->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_455,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_456,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_451,map$2void$phvoid$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        vtable_361=vtable_361->mParent;
    }
    come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj58=come_value_457->c_value;
    come_value_457->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj59=come_value_457->type;
    come_value_457->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 519, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_345,(_Bool)0,info));
    come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_457->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_457->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
    __result_obj__289 = (_Bool)1;
    (class_name_345 = come_decrement_ref_count2(class_name_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(current_stack_346,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_457,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__289;
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
struct list_item$1void$ph* it_347;
struct list_item$1void$ph* prev_it_348;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        prev_it_348=it_347;
        it_347=it_347->next;
        come_call_finalizer3(prev_it_348,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__240;
void* __right_value263 = (void*)0;
struct sClass* result_352;
void* __right_value264 = (void*)0;
char* __dec_obj23;
void* __right_value272 = (void*)0;
struct list$1void$ph* __dec_obj27;
void* __right_value273 = (void*)0;
char* __dec_obj28;
void* __right_value274 = (void*)0;
char* __dec_obj29;
struct sClass* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__240 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__240,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_352=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_352->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_352->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_352->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_352->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_352->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_352->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_352->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_352->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj23=result_352->mName;
        result_352->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_352->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_352->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj27=result_352->mFields;
        result_352->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj27,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj28=result_352->mParentClassName;
        result_352->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj29=result_352->mAttribute;
        result_352->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_352->mDynamic=self->mDynamic;
    }
    __result_obj__245 = come_increment_ref_count(result_352);
    come_call_finalizer3(result_352,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_349;
    result_349=0;
    result_349+=int_get_hash_key(((int)self->mStruct));
    result_349+=int_get_hash_key(((int)self->mFloat));
    result_349+=int_get_hash_key(((int)self->mUnion));
    result_349+=int_get_hash_key(((int)self->mGenerics));
    result_349+=int_get_hash_key(((int)self->mMethodGenerics));
    result_349+=int_get_hash_key(((int)self->mEnum));
    result_349+=int_get_hash_key(((int)self->mProtocol));
    result_349+=int_get_hash_key(((int)self->mNumber));
    result_349+=int_get_hash_key(((int)self->mName));
    result_349+=int_get_hash_key(((int)self->mGenericsNum));
    result_349+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_349+=int_get_hash_key(((int)self->mFields));
    result_349+=int_get_hash_key(((int)self->mParentClassName));
    result_349+=int_get_hash_key(((int)self->mAttribute));
    result_349+=int_get_hash_key(((int)self->mDynamic));
    return result_349;
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
struct list_item$1void$ph* it_350;
struct list_item$1void$ph* it2_351;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_350=left->head;
    it2_351=right->head;
    while(it_350!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_350->item, it2_351->item)) {
            return (_Bool)0;
        }
        it_350=it_350->next;
        it2_351=it2_351->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__241;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1void$ph* result_354;
struct list_item$1void$ph* it_355;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1void$ph* __result_obj__244;
    if(    self==((void*)0)) {
        __result_obj__241 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__241,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__241;
    }
    result_354=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_355=self->head;
    while(it_355!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_354,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_355->item)));
        }
        else {
            list$1void$ph$p_add(result_354,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_355->item)));
        }
        it_355=it_355->next;
    }
    __result_obj__244 = come_increment_ref_count(result_354);
    come_call_finalizer3(result_354,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__244,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__244;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_353;
    result_353=0;
    result_353+=int_get_hash_key(((int)self->head));
    result_353+=int_get_hash_key(((int)self->tail));
    result_353+=int_get_hash_key(((int)self->len));
    result_353+=int_get_hash_key(((int)self->it));
    return result_353;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__242;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__242 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__242,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__242;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_356;
void* __dec_obj24;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_357;
void* __dec_obj25;
void* __right_value269 = (void*)0;
struct list_item$1void$ph* litem_358;
void* __dec_obj26;
struct list$1void$ph* __result_obj__243;
    if(    self->len==0) {
        litem_356=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value267=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_356->prev=((void*)0);
        litem_356->next=((void*)0);
        __dec_obj24=litem_356->item;
        litem_356->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj24,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_356;
        self->head=litem_356;
    }
    else if(    self->len==1) {
        litem_357=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=self->head;
        litem_357->next=((void*)0);
        __dec_obj25=litem_357->item;
        litem_357->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj25,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_357;
        self->head->next=litem_357;
    }
    else {
        litem_358=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value269=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->tail;
        litem_358->next=((void*)0);
        __dec_obj26=litem_358->item;
        litem_358->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_358;
        self->tail=litem_358;
    }
    self->len++;
    __result_obj__243 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__243;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_359;
struct list_item$1void$ph* prev_it_360;
    it_359=self->head;
    while(it_359!=((void*)0)) {
        prev_it_360=it_359;
        it_359=it_359->next;
        come_call_finalizer3(prev_it_360,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_363;
void* __result_obj__246;
void* __result_obj__247;
void* result_364;
void* __result_obj__248;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_363,0,sizeof(void*));
        __result_obj__246 = result_363;
        return __result_obj__246;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__247 = self->key_list->it->item;
        return __result_obj__247;
    }
    memset(&result_364,0,sizeof(void*));
    __result_obj__248 = result_364;
    return __result_obj__248;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_366;
void* __result_obj__249;
void* __result_obj__250;
void* result_367;
void* __result_obj__251;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_366,0,sizeof(void*));
        __result_obj__249 = result_366;
        return __result_obj__249;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__250 = self->key_list->it->item;
        return __result_obj__250;
    }
    memset(&result_367,0,sizeof(void*));
    __result_obj__251 = result_367;
    return __result_obj__251;
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_370;
unsigned int hash_371;
unsigned int it_372;
void* __result_obj__252;
void* __result_obj__253;
void* __result_obj__254;
void* __result_obj__255;
default_value_370 = (void*)0;
    memset(&default_value_370,0,sizeof(void*));
    hash_371=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_372=hash_371;
    while((_Bool)1) {
        if(        self->item_existance[it_372]) {
            if(            come_call_equals((void*)0, self->keys[it_372], ((char*)key))) {
                __result_obj__252 = come_increment_ref_count(self->items[it_372]);
                come_call_finalizer3(default_value_370,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__252,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__252;
            }
            it_372++;
            if(            it_372>=self->size) {
                it_372=0;
            }
            else if(            it_372==hash_371) {
                __result_obj__253 = come_increment_ref_count(((struct sVar*)default_value_370));
                come_call_finalizer3(default_value_370,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__253,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__253;
            }
        }
        else {
            __result_obj__254 = come_increment_ref_count(((struct sVar*)default_value_370));
            come_call_finalizer3(default_value_370,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__254,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__254;
        }
    }
    __result_obj__255 = come_increment_ref_count(((struct sVar*)default_value_370));
    come_call_finalizer3(default_value_370,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__255,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__255;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__256;
void* __right_value279 = (void*)0;
struct sType* result_381;
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
struct sType* __result_obj__266;
    if(    self==(void*)0) {
        __result_obj__256 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__256,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__256;
    }
    result_381=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_381->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj30=result_381->mOriginalLoadVarType;
        result_381->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj31=result_381->mChannelType;
        result_381->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj32=result_381->mGenericsTypes;
        result_381->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj32,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj33=result_381->mNoSolvedGenericsType;
        result_381->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj34=result_381->mAnyOriginalType;
        result_381->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj35=result_381->mSizeNum;
        result_381->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj36=result_381->mAlignas;
        result_381->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj37=result_381->mTupleName;
        result_381->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj38=result_381->mAttribute;
        result_381->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_381->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_381->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_381->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_381->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_381->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_381->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_381->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_381->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_381->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_381->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_381->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_381->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_381->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_381->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_381->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_381->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_381->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_381->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_381->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_381->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_381->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_381->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_381->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_381->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_381->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj39=result_381->mAsmName;
        result_381->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_381->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_381->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj43=result_381->mArrayNum;
        result_381->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj43,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_381->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_381->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_381->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_381->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj44=result_381->mOriginalTypeName;
        result_381->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_381->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_381->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_381->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj45=result_381->mParamTypes;
        result_381->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj45,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj49=result_381->mParamNames;
        result_381->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj49,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj50=result_381->mResultType;
        result_381->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_381->mVarArgs=self->mVarArgs;
    }
    __result_obj__266 = come_increment_ref_count(result_381);
    come_call_finalizer3(result_381,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__266,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__266;
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
struct list_item$1sNode$ph* it_374;
struct list_item$1sNode$ph* prev_it_375;
    it_374=self->head;
    while(it_374!=((void*)0)) {
        prev_it_375=it_374;
        it_374=it_374->next;
        come_call_finalizer3(prev_it_375,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_376;
    result_376=0;
    result_376+=int_get_hash_key(((int)self->mClass));
    result_376+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_376+=int_get_hash_key(((int)self->mChannelType));
    result_376+=int_get_hash_key(((int)self->mGenericsTypes));
    result_376+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_376+=int_get_hash_key(((int)self->mAnyClass));
    result_376+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_376+=int_get_hash_key(((int)self->mSizeNum));
    result_376+=int_get_hash_key(((int)self->mAlignas));
    result_376+=int_get_hash_key(((int)self->mTupleName));
    result_376+=int_get_hash_key(((int)self->mAttribute));
    result_376+=int_get_hash_key(((int)self->mAllocaValue));
    result_376+=int_get_hash_key(((int)self->mUnsigned));
    result_376+=int_get_hash_key(((int)self->mShort));
    result_376+=int_get_hash_key(((int)self->mLong));
    result_376+=int_get_hash_key(((int)self->mLongLong));
    result_376+=int_get_hash_key(((int)self->mConstant));
    result_376+=int_get_hash_key(((int)self->mAtomic));
    result_376+=int_get_hash_key(((int)self->mRegister));
    result_376+=int_get_hash_key(((int)self->mVolatile));
    result_376+=int_get_hash_key(((int)self->mStatic));
    result_376+=int_get_hash_key(((int)self->mUniq));
    result_376+=int_get_hash_key(((int)self->mRecord));
    result_376+=int_get_hash_key(((int)self->mExtern));
    result_376+=int_get_hash_key(((int)self->mRestrict));
    result_376+=int_get_hash_key(((int)self->mImmutable));
    result_376+=int_get_hash_key(((int)self->mHeap));
    result_376+=int_get_hash_key(((int)self->mChannel));
    result_376+=int_get_hash_key(((int)self->mNoHeap));
    result_376+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_376+=int_get_hash_key(((int)self->mException));
    result_376+=int_get_hash_key(((int)self->mGenerate));
    result_376+=int_get_hash_key(((int)self->mCreateVTable));
    result_376+=int_get_hash_key(((int)self->mDynamic));
    result_376+=int_get_hash_key(((int)self->mInline));
    result_376+=int_get_hash_key(((int)self->mNullValue));
    result_376+=int_get_hash_key(((int)self->mGuardValue));
    result_376+=int_get_hash_key(((int)self->mAsmName));
    result_376+=int_get_hash_key(((int)self->mTypedef));
    result_376+=int_get_hash_key(((int)self->mMultipleTypes));
    result_376+=int_get_hash_key(((int)self->mOriginIsArray));
    result_376+=int_get_hash_key(((int)self->mArrayNum));
    result_376+=int_get_hash_key(((int)self->mPointerNum));
    result_376+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_376+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_376+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_376+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_376+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_376+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_376+=int_get_hash_key(((int)self->mArrayPointerType));
    result_376+=int_get_hash_key(((int)self->mLambdaArray));
    result_376+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_376+=int_get_hash_key(((int)self->mParamTypes));
    result_376+=int_get_hash_key(((int)self->mParamNames));
    result_376+=int_get_hash_key(((int)self->mResultType));
    result_376+=int_get_hash_key(((int)self->mVarArgs));
    return result_376;
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
struct list_item$1sNode$ph* it_377;
struct list_item$1sNode$ph* it2_378;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_377=left->head;
    it2_378=right->head;
    while(it_377!=((void*)0)) {
        if(        !sNode_equals(it_377->item,it2_378->item)) {
            return (_Bool)0;
        }
        it_377=it_377->next;
        it2_378=it2_378->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_379;
struct list_item$1char$ph* it2_380;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_379=left->head;
    it2_380=right->head;
    while(it_379!=((void*)0)) {
        if(        !string_equals(it_379->item,it2_380->item)) {
            return (_Bool)0;
        }
        it_379=it_379->next;
        it2_380=it2_380->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__257;
void* __right_value285 = (void*)0;
struct sNode* result_382;
struct sNode* __result_obj__258;
    if(    self==(void*)0) {
        __result_obj__257 = come_increment_ref_count((void*)0);
        ((__result_obj__257) ? __result_obj__257 = come_decrement_ref_count2(__result_obj__257, ((struct sNode*)__result_obj__257)->finalize, ((struct sNode*)__result_obj__257)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__257;
    }
    result_382=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_382->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_382->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_382->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_382->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_382->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_382->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_382->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_382->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_382->kind=self->kind;
    }
    __result_obj__258 = come_increment_ref_count(result_382);
    ((result_382) ? result_382 = come_decrement_ref_count2(result_382, ((struct sNode*)result_382)->finalize, ((struct sNode*)result_382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__258) ? __result_obj__258 = come_decrement_ref_count2(__result_obj__258, ((struct sNode*)__result_obj__258)->finalize, ((struct sNode*)__result_obj__258)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__258;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__259;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* result_383;
struct list_item$1sNode$ph* it_384;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1sNode$ph* __result_obj__262;
    if(    self==((void*)0)) {
        __result_obj__259 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__259,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__259;
    }
    result_383=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_384=self->head;
    while(it_384!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_383,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_384->item)));
        }
        else {
            list$1sNode$ph$p_add(result_383,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_384->item)));
        }
        it_384=it_384->next;
    }
    __result_obj__262 = come_increment_ref_count(result_383);
    come_call_finalizer3(result_383,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__262,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__262;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__260;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__260 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value293 = (void*)0;
struct list_item$1sNode$ph* litem_385;
struct sNode* __dec_obj40;
void* __right_value294 = (void*)0;
struct list_item$1sNode$ph* litem_386;
struct sNode* __dec_obj41;
void* __right_value295 = (void*)0;
struct list_item$1sNode$ph* litem_387;
struct sNode* __dec_obj42;
struct list$1sNode$ph* __result_obj__261;
    if(    self->len==0) {
        litem_385=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value293=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=((void*)0);
        litem_385->next=((void*)0);
        __dec_obj40=litem_385->item;
        litem_385->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_385;
        self->head=litem_385;
    }
    else if(    self->len==1) {
        litem_386=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value294=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=self->head;
        litem_386->next=((void*)0);
        __dec_obj41=litem_386->item;
        litem_386->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count2(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_386;
        self->head->next=litem_386;
    }
    else {
        litem_387=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value295=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=self->tail;
        litem_387->next=((void*)0);
        __dec_obj42=litem_387->item;
        litem_387->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_387;
        self->tail=litem_387;
    }
    self->len++;
    __result_obj__261 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__261;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_388;
struct list_item$1sNode$ph* prev_it_389;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        come_call_finalizer3(prev_it_389,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__263;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1char$ph* result_390;
struct list_item$1char$ph* it_391;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __result_obj__265;
    if(    self==((void*)0)) {
        __result_obj__263 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__263,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__263;
    }
    result_390=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_391=self->head;
    while(it_391!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_390,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_391->item)));
        }
        else {
            list$1char$ph$p_add(result_390,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_391->item)));
        }
        it_391=it_391->next;
    }
    __result_obj__265 = come_increment_ref_count(result_390);
    come_call_finalizer3(result_390,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__265,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__265;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value303 = (void*)0;
struct list_item$1char$ph* litem_392;
char* __dec_obj46;
void* __right_value304 = (void*)0;
struct list_item$1char$ph* litem_393;
char* __dec_obj47;
void* __right_value305 = (void*)0;
struct list_item$1char$ph* litem_394;
char* __dec_obj48;
struct list$1char$ph* __result_obj__264;
    if(    self->len==0) {
        litem_392=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value303=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_392->prev=((void*)0);
        litem_392->next=((void*)0);
        __dec_obj46=litem_392->item;
        litem_392->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_392;
        self->head=litem_392;
    }
    else if(    self->len==1) {
        litem_393=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value304=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_393->prev=self->head;
        litem_393->next=((void*)0);
        __dec_obj47=litem_393->item;
        litem_393->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_393;
        self->head->next=litem_393;
    }
    else {
        litem_394=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value305=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=self->tail;
        litem_394->next=((void*)0);
        __dec_obj48=litem_394->item;
        litem_394->item=(char*)come_increment_ref_count(item);
        __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_394;
        self->tail=litem_394;
    }
    self->len++;
    __result_obj__264 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_395;
struct list_item$1char$ph* prev_it_396;
    it_395=self->head;
    while(it_395!=((void*)0)) {
        prev_it_396=it_395;
        it_395=it_395->next;
        come_call_finalizer3(prev_it_396,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2char$phsType$ph* __result_obj__267;
void* __right_value312 = (void*)0;
struct tuple2$2char$phsType$ph* result_398;
void* __right_value313 = (void*)0;
char* __dec_obj51;
void* __right_value314 = (void*)0;
struct sType* __dec_obj52;
struct tuple2$2char$phsType$ph* __result_obj__268;
    if(    self==(void*)0) {
        __result_obj__267 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__267,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__267;
    }
    result_398=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj51=result_398->v1;
        result_398->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj52=result_398->v2;
        result_398->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__268 = come_increment_ref_count(result_398);
    come_call_finalizer3(result_398,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__268,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__268;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_399;
    result_399=0;
    result_399+=int_get_hash_key(((int)self->v1));
    result_399+=int_get_hash_key(((int)self->v2));
    return result_399;
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
struct tuple2$2char$phsType$ph* __result_obj__269;
    __dec_obj53=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj54=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__269 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__269,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__269;
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
struct list_item$1sNode$ph* it_401;
struct list_item$1sNode$ph* prev_it_402;
struct list$1sNode$ph* __result_obj__270;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        come_call_finalizer3(prev_it_402,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__270 = self;
    return __result_obj__270;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value321 = (void*)0;
struct list_item$1void$ph* litem_404;
void* __dec_obj55;
void* __right_value322 = (void*)0;
struct list_item$1void$ph* litem_405;
void* __dec_obj56;
void* __right_value323 = (void*)0;
struct list_item$1void$ph* litem_406;
void* __dec_obj57;
struct list$1void$ph* __result_obj__271;
    if(    self->len==0) {
        litem_404=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value321=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_404->prev=((void*)0);
        litem_404->next=((void*)0);
        __dec_obj55=litem_404->item;
        litem_404->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_404;
        self->head=litem_404;
    }
    else if(    self->len==1) {
        litem_405=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value322=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_405->prev=self->head;
        litem_405->next=((void*)0);
        __dec_obj56=litem_405->item;
        litem_405->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_405;
        self->head->next=litem_405;
    }
    else {
        litem_406=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value323=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_406->prev=self->tail;
        litem_406->next=((void*)0);
        __dec_obj57=litem_406->item;
        litem_406->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_406;
        self->tail=litem_406;
    }
    self->len++;
    __result_obj__271 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__271;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_407;
int i_408;
    for(    i_407=0;    i_407<self->size;    i_407++    ){
        if(        self->item_existance[i_407]) {
            if(            1) {
                come_call_finalizer3(self->items[i_407],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_408=0;    i_408<self->size;    i_408++    ){
        if(        self->item_existance[i_408]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_408],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_409;
struct list_item$1void$p* prev_it_410;
    it_409=self->head;
    while(it_409!=((void*)0)) {
        prev_it_410=it_409;
        it_409=it_409->next;
        come_call_finalizer3(prev_it_410,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_424;
unsigned int it_425;
_Bool same_key_exist_442;
char* it2_445;
struct map$2void$phvoid$ph* __result_obj__287;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_424=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_425=hash_424;
    while((_Bool)1) {
        if(        self->item_existance[it_425]) {
            if(            come_call_equals((void*)0, self->keys[it_425], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_425]);
                    come_call_finalizer3(self->keys[it_425],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_425]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_425]);
                    self->keys[it_425]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_425],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_425]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_425]=item;
                }
                break;
            }
            it_425++;
            if(            it_425>=self->size) {
                it_425=0;
            }
            else if(            it_425==hash_424) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_425]=(_Bool)1;
            if(            1) {
                self->keys[it_425]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_425]=key;
            }
            if(            1) {
                self->items[it_425]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_425]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_442=(_Bool)0;
    for(    it2_445=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_445=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_445, key)) {
            same_key_exist_442=(_Bool)1;
        }
    }
    if(    !same_key_exist_442) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__287 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__287;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_411;
void* __right_value326 = (void*)0;
void** keys_412;
void* __right_value327 = (void*)0;
void** items_413;
void* __right_value328 = (void*)0;
_Bool* item_existance_414;
int len_415;
void* it_416;
void* default_value_417;
void* __right_value329 = (void*)0;
void* it2_418;
unsigned int hash_421;
int n_422;
void* default_value_423;
void* __right_value330 = (void*)0;
default_value_417 = (void*)0;
default_value_423 = (void*)0;
    size_411=self->size*10;
    keys_412=(void**)come_increment_ref_count(((void**)(__right_value326=(void**)come_calloc(1, sizeof(void*)*(1*(size_411)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_413=(void**)come_increment_ref_count(((void**)(__right_value327=(void**)come_calloc(1, sizeof(void*)*(1*(size_411)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_414=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value328=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_411)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_415=0;
    for(    it_416=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_416=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_417,0,sizeof(void*));
        it2_418=((void*)(__right_value329=map$2void$phvoid$ph$p_at(self,it_416,(void*)come_increment_ref_count(default_value_417))));
        come_call_finalizer3(__right_value329,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_421=come_call_get_hash_key((void*)0, ((void*)it_416))%size_411;
        n_422=hash_421;
        while((_Bool)1) {
            if(            item_existance_414[n_422]) {
                n_422++;
                if(                n_422>=size_411) {
                    n_422=0;
                }
                else if(                n_422==hash_421) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_414[n_422]=(_Bool)1;
                keys_412[n_422]=it_416;
                items_413[n_422]=((void*)(__right_value330=map$2void$phvoid$ph$p_at(self,it_416,(void*)come_increment_ref_count(default_value_423))));
                come_call_finalizer3(__right_value330,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_415++;
                come_call_finalizer3(default_value_423,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_423,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_417,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_412;
    self->items=items_413;
    self->item_existance=item_existance_414;
    self->size=size_411;
    self->len=len_415;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_419;
unsigned int it_420;
void* __result_obj__272;
void* __result_obj__273;
void* __result_obj__274;
void* __result_obj__275;
    hash_419=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_420=hash_419;
    while((_Bool)1) {
        if(        self->item_existance[it_420]) {
            if(            come_call_equals((void*)0, self->keys[it_420], key)) {
                __result_obj__272 = come_increment_ref_count(self->items[it_420]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__272,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__272;
            }
            it_420++;
            if(            it_420>=self->size) {
                it_420=0;
            }
            else if(            it_420==hash_419) {
                __result_obj__273 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__273,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__273;
            }
        }
        else {
            __result_obj__274 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__274,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__274;
        }
    }
    __result_obj__275 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__275,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__275;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_426;
struct list_item$1void$p* it_427;
struct list$1void$p* __result_obj__279;
    it2_426=0;
    it_427=self->head;
    while(it_427!=((void*)0)) {
        if(        come_call_equals((void*)0, it_427->item, item)) {
            list$1void$p$p_delete(self,it2_426,it2_426+1);
            break;
        }
        it2_426++;
        it_427=it_427->next;
    }
    __result_obj__279 = self;
    return __result_obj__279;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_428;
struct list$1void$p* __result_obj__276;
struct list_item$1void$p* it_431;
int i_432;
struct list_item$1void$p* prev_it_433;
struct list_item$1void$p* it_434;
int i_435;
struct list_item$1void$p* prev_it_436;
struct list_item$1void$p* it_437;
struct list_item$1void$p* head_prev_it_438;
struct list_item$1void$p* tail_it_439;
int i_440;
struct list_item$1void$p* prev_it_441;
struct list$1void$p* __result_obj__278;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_428=tail;
        tail=head;
        head=tmp_428;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__276 = self;
        return __result_obj__276;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_431=self->head;
        i_432=0;
        while(it_431!=((void*)0)) {
            if(            i_432<tail) {
                prev_it_433=it_431;
                it_431=it_431->next;
                i_432++;
                come_call_finalizer3(prev_it_433,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_432==tail) {
                self->head=it_431;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_431=it_431->next;
                i_432++;
            }
        }
    }
    else if(    tail==self->len) {
        it_434=self->head;
        i_435=0;
        while(it_434!=((void*)0)) {
            if(            i_435==head) {
                self->tail=it_434->prev;
                self->tail->next=((void*)0);
            }
            if(            i_435>=head) {
                prev_it_436=it_434;
                it_434=it_434->next;
                i_435++;
                come_call_finalizer3(prev_it_436,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_434=it_434->next;
                i_435++;
            }
        }
    }
    else {
        it_437=self->head;
        head_prev_it_438=((void*)0);
        tail_it_439=((void*)0);
        i_440=0;
        while(it_437!=((void*)0)) {
            if(            i_440==head) {
                head_prev_it_438=it_437->prev;
            }
            if(            i_440==tail) {
                tail_it_439=it_437;
            }
            if(            i_440>=head&&i_440<tail) {
                prev_it_441=it_437;
                it_437=it_437->next;
                i_440++;
                come_call_finalizer3(prev_it_441,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_437=it_437->next;
                i_440++;
            }
        }
        if(        head_prev_it_438!=((void*)0)) {
            head_prev_it_438->next=tail_it_439;
        }
        if(        tail_it_439!=((void*)0)) {
            tail_it_439->prev=head_prev_it_438;
        }
    }
    __result_obj__278 = self;
    return __result_obj__278;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_429;
struct list_item$1void$p* prev_it_430;
struct list$1void$p* __result_obj__277;
    it_429=self->head;
    while(it_429!=((void*)0)) {
        prev_it_430=it_429;
        it_429=it_429->next;
        come_call_finalizer3(prev_it_430,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__277 = self;
    return __result_obj__277;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_443;
void* __result_obj__280;
void* __result_obj__281;
void* result_444;
void* __result_obj__282;
result_443 = (void*)0;
result_444 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_443,0,sizeof(void*));
        __result_obj__280 = result_443;
        return __result_obj__280;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__281 = self->it->item;
        return __result_obj__281;
    }
    memset(&result_444,0,sizeof(void*));
    __result_obj__282 = result_444;
    return __result_obj__282;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_446;
void* __result_obj__283;
void* __result_obj__284;
void* result_447;
void* __result_obj__285;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_446,0,sizeof(void*));
        __result_obj__283 = result_446;
        return __result_obj__283;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__284 = self->it->item;
        return __result_obj__284;
    }
    memset(&result_447,0,sizeof(void*));
    __result_obj__285 = result_447;
    return __result_obj__285;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value331 = (void*)0;
struct list_item$1void$p* litem_448;
void* __right_value332 = (void*)0;
struct list_item$1void$p* litem_449;
void* __right_value333 = (void*)0;
struct list_item$1void$p* litem_450;
struct list$1void$p* __result_obj__286;
    if(    self->len==0) {
        litem_448=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value331=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_448->prev=((void*)0);
        litem_448->next=((void*)0);
        litem_448->item=item;
        self->tail=litem_448;
        self->head=litem_448;
    }
    else if(    self->len==1) {
        litem_449=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value332=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_449->prev=self->head;
        litem_449->next=((void*)0);
        litem_449->item=item;
        self->tail=litem_449;
        self->head->next=litem_449;
    }
    else {
        litem_450=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value333=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_450->prev=self->tail;
        litem_450->next=((void*)0);
        litem_450->item=item;
        self->tail->next=litem_450;
        self->tail=litem_450;
    }
    self->len++;
    __result_obj__286 = self;
    return __result_obj__286;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value343 = (void*)0;
struct list_item$1CVALUE$ph* litem_458;
struct CVALUE* __dec_obj60;
void* __right_value344 = (void*)0;
struct list_item$1CVALUE$ph* litem_459;
struct CVALUE* __dec_obj61;
void* __right_value345 = (void*)0;
struct list_item$1CVALUE$ph* litem_460;
struct CVALUE* __dec_obj62;
struct list$1CVALUE$ph* __result_obj__288;
    if(    self->len==0) {
        litem_458=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value343=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=((void*)0);
        litem_458->next=((void*)0);
        __dec_obj60=litem_458->item;
        litem_458->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_458;
        self->head=litem_458;
    }
    else if(    self->len==1) {
        litem_459=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value344=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=self->head;
        litem_459->next=((void*)0);
        __dec_obj61=litem_459->item;
        litem_459->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_459;
        self->head->next=litem_459;
    }
    else {
        litem_460=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value345=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_460->prev=self->tail;
        litem_460->next=((void*)0);
        __dec_obj62=litem_460->item;
        litem_460->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_460;
        self->tail=litem_460;
    }
    self->len++;
    __result_obj__288 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__288;
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
int i_461;
struct list$1void$ph* o2_saved_462;
struct sType* it_465;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __result_obj__298;
    if(    type->mAnyOriginalType) {
        __dec_obj63=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_461=0;
    for(    o2_saved_462=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_465=((struct sType*)list$1void$ph$p_begin((o2_saved_462)));    !list$1void$ph$p_end((o2_saved_462));    it_465=((struct sType*)list$1void$ph$p_next((o2_saved_462)))    ){
        list$1void$ph$p_operator_store_element(type->mGenericsTypes,i_461,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_465)))));
        i_461++;
    }
    come_call_finalizer3(o2_saved_462,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__298 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__298,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__298;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_463;
void* __result_obj__290;
void* __result_obj__291;
void* result_464;
void* __result_obj__292;
result_463 = (void*)0;
result_464 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_463,0,sizeof(void*));
        __result_obj__290 = result_463;
        return __result_obj__290;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__291 = self->it->item;
        return __result_obj__291;
    }
    memset(&result_464,0,sizeof(void*));
    __result_obj__292 = result_464;
    return __result_obj__292;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_466;
void* __result_obj__293;
void* __result_obj__294;
void* result_467;
void* __result_obj__295;
result_466 = (void*)0;
result_467 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_466,0,sizeof(void*));
        __result_obj__293 = result_466;
        return __result_obj__293;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_467,0,sizeof(void*));
    __result_obj__295 = result_467;
    return __result_obj__295;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
int len_468;
int i_469;
void* default_value_470;
struct list$1void$ph* __result_obj__296;
struct list_item$1void$ph* it_471;
int i_472;
void* __dec_obj64;
struct list$1void$ph* __result_obj__297;
default_value_470 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_468=self->len;
        for(        i_469=0;        i_469<position-len_468;        i_469++        ){
            memset(&default_value_470,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_470));
            come_call_finalizer3(default_value_470,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result_obj__296 = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        return __result_obj__296;
    }
    it_471=self->head;
    i_472=0;
    while(it_471!=((void*)0)) {
        if(        position==i_472) {
            __dec_obj64=it_471->item;
            it_471->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj64,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_471=it_471->next;
        i_472++;
    }
    __result_obj__297 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__297;
}

struct sType* remove_any_type(struct sType* type){
struct sType* __dec_obj65;
struct sType* __dec_obj66;
int i_473;
struct list$1void$ph* o2_saved_474;
struct sType* it_475;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* __result_obj__299;
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
    i_473=0;
    for(    o2_saved_474=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_475=((struct sType*)list$1void$ph$p_begin((o2_saved_474)));    !list$1void$ph$p_end((o2_saved_474));    it_475=((struct sType*)list$1void$ph$p_next((o2_saved_474)))    ){
        list$1void$ph$p_operator_store_element(type->mGenericsTypes,i_473,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_475)))));
        i_473++;
    }
    come_call_finalizer3(o2_saved_474,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    __result_obj__299 = come_increment_ref_count(type);
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__299,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__299;
}

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value350 = (void*)0;
char* none_generics_name_476;
void* __right_value351 = (void*)0;
char* fun_name2_477;
void* __right_value352 = (void*)0;
char* fun_name3_478;
void* __right_value353 = (void*)0;
struct sGenericsFun* generics_fun_479;
_Bool generics_any_child_480;
void* __right_value354 = (void*)0;
struct sType* no_solved_type_481;
struct sType* __dec_obj67;
struct list$1void$ph* o2_saved_482;
struct sType* it_483;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* type2_484;
void* __right_value357 = (void*)0;
struct sType* type_before_485;
void* __right_value358 = (void*)0;
char* __dec_obj68;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_486=0;
_Bool err_487=0;
void* __right_value361 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_488=0;
char* Err_489=0;
void* __right_value362 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__303;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sType* type2_492;
void* __right_value369 = (void*)0;
struct sType* type_before_493;
void* __right_value370 = (void*)0;
char* __dec_obj71;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var3 = (void*)0;
char* name_494=0;
_Bool err_495=0;
void* __right_value373 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c2_496=0;
char* Err_497=0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__304;
void* __right_value377 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__308;
    none_generics_name_476=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_477=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_478=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_476,fun_name));
    generics_fun_479=((struct sGenericsFun*)((void*)(__right_value353=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_478,((void*)0)))));
    come_call_finalizer3(__right_value353,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_any_child_480=(_Bool)0;
    no_solved_type_481=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj67=no_solved_type_481;
        no_solved_type_481=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        for(        o2_saved_482=(struct list$1void$ph*)come_increment_ref_count((no_solved_type_481->mGenericsTypes)),it_483=((struct sType*)list$1void$ph$p_begin((o2_saved_482)));        !list$1void$ph$p_end((o2_saved_482));        it_483=((struct sType*)list$1void$ph$p_next((o2_saved_482)))        ){
            if(            it_483->mAnyOriginalType) {
                generics_any_child_480=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_482,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_479) {
        if(        generics_fun_479->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_480)) {
            type2_484=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_481))));
            type_before_485=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj68=fun_name2_477;
            fun_name2_477=(char*)come_increment_ref_count(create_method_name(type2_484,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value360=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_477)),generics_fun_479,type2_484,info)));
            name_486=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_487=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value360,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_487) {
                multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value361=err_msg(info,"%s not found",fun_name3_478)));
                come_exception_var_c1_488=multiple_assign_var2->v1;
                Err_489=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                ((Err_489)?(puts(Err_489),exit(0)):(0));
                come_call_finalizer3(__right_value361,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__303 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value366=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 74, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_489 = come_decrement_ref_count2(Err_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_486 = come_decrement_ref_count2(name_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_476 = come_decrement_ref_count2(none_generics_name_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_477 = come_decrement_ref_count2(fun_name2_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_478 = come_decrement_ref_count2(fun_name3_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value366,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__303,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__303;
                (Err_489 = come_decrement_ref_count2(Err_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_485;
            come_call_finalizer3(type2_484,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_485,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_486 = come_decrement_ref_count2(name_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            type2_492=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_481))));
            type_before_493=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj71=fun_name2_477;
            fun_name2_477=(char*)come_increment_ref_count(create_method_name(type2_492,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var3=((struct tuple2$2char$phbool$*)(__right_value372=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_477)),generics_fun_479,type2_492,info)));
            name_494=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            err_495=multiple_assign_var3->v2;
            come_call_finalizer3(__right_value372,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_495) {
                multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value373=err_msg(info,"%s not found",fun_name3_478)));
                come_exception_var_c2_496=multiple_assign_var4->v1;
                Err_497=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_497)?(puts(Err_497),exit(0)):(0));
                come_call_finalizer3(__right_value373,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__304 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value376=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 90, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
                (Err_497 = come_decrement_ref_count2(Err_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_492,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_493,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_494 = come_decrement_ref_count2(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_476 = come_decrement_ref_count2(none_generics_name_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_477 = come_decrement_ref_count2(fun_name2_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_478 = come_decrement_ref_count2(fun_name3_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(no_solved_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value376,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__304,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__304;
                (Err_497 = come_decrement_ref_count2(Err_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            type=type_before_493;
            come_call_finalizer3(type2_492,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_493,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_494 = come_decrement_ref_count2(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__308 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value381=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 97, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_477)),generics_fun_479))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_476 = come_decrement_ref_count2(none_generics_name_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_477 = come_decrement_ref_count2(fun_name2_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_478 = come_decrement_ref_count2(fun_name3_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(no_solved_type_481,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value381,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__308,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__308;
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
struct tuple2$2char$phvoid$p* __result_obj__300;
void* __right_value363 = (void*)0;
struct tuple2$2char$phvoid$p* result_490;
void* __right_value364 = (void*)0;
char* __dec_obj69;
struct tuple2$2char$phvoid$p* __result_obj__301;
    if(    self==(void*)0) {
        __result_obj__300 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__300,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__300;
    }
    result_490=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj69=result_490->v1;
        result_490->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_490->v2=self->v2;
    }
    __result_obj__301 = come_increment_ref_count(result_490);
    come_call_finalizer3(result_490,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__301,tuple2$2char$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__301;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_491;
    result_491=0;
    result_491+=int_get_hash_key(((int)self->v1));
    result_491+=int_get_hash_key(((int)self->v2));
    return result_491;
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
struct tuple2$2char$phvoid$p* __result_obj__302;
    __dec_obj70=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__302 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__302,tuple2$2char$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__302;
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
struct tuple2$2char$phsGenericsFun$p* __result_obj__305;
void* __right_value378 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_498;
void* __right_value379 = (void*)0;
char* __dec_obj72;
struct tuple2$2char$phsGenericsFun$p* __result_obj__306;
    if(    self==(void*)0) {
        __result_obj__305 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__305,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__305;
    }
    result_498=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj72=result_498->v1;
        result_498->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_498->v2=self->v2;
    }
    __result_obj__306 = come_increment_ref_count(result_498);
    come_call_finalizer3(result_498,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__306,tuple2$2char$phsGenericsFun$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__306;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_499;
    result_499=0;
    result_499+=int_get_hash_key(((int)self->v1));
    result_499+=int_get_hash_key(((int)self->v2));
    return result_499;
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
struct tuple2$2char$phsGenericsFun$p* __result_obj__307;
    __dec_obj73=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__307 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__307,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__307;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info){
void* __right_value382 = (void*)0;
char* fun_name3_501;
struct list$1void$ph* method_generics_types_before_502;
struct list$1void$ph* __dec_obj74;
void* __right_value383 = (void*)0;
struct sGenericsFun* generics_fun_503;
void* __right_value384 = (void*)0;
_Bool _if_conditional1;
void* __right_value385 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c3_504=0;
char* Err_505=0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__309;
struct list$1void$ph* __dec_obj75;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__310;
    static int num_method_generics_500=0;
    fun_name3_501=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_500++));
    method_generics_types_before_502=(struct list$1void$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj74=info->method_generics_types;
    info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj74,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_503=((struct sGenericsFun*)((void*)(__right_value383=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name,((void*)0)))));
    come_call_finalizer3(__right_value383,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    generics_fun_503) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_501)),generics_fun_503,info))),        _if_conditional1) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value385=err_msg(info,"%s not found",fun_name3_501)));
            come_exception_var_c3_504=multiple_assign_var5->v1;
            Err_505=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_505)?(puts(Err_505),exit(0)):(0));
            come_call_finalizer3(__right_value385,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__309 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value388=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 113, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_505 = come_decrement_ref_count2(Err_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name3_501 = come_decrement_ref_count2(fun_name3_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(method_generics_types_before_502,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value388,tuple2$2char$phvoid$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__309,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__309;
            (Err_505 = come_decrement_ref_count2(Err_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj75=info->method_generics_types;
    info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types_before_502);
    come_call_finalizer3(__dec_obj75,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__310 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value391=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 119, "struct tuple2$2char$phsGenericsFun$p", tuple2$2char$phsGenericsFun$p_finalize, tuple2$2char$phsGenericsFun$p_clone, tuple2$2char$phsGenericsFun$p_get_hash_key, tuple2$2char$phsGenericsFun$p_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_501)),generics_fun_503))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name3_501 = come_decrement_ref_count2(fun_name3_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(method_generics_types_before_502,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value391,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__310,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__310;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value396 = (void*)0;
struct sNode* current_stack_frame_node_506;
_Bool Value_508;
_Bool __result_obj__313;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_511;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct buffer* method_block2_512;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* method_block_type_513;
void* __right_value402 = (void*)0;
char* class_name_517;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sClass* current_stack_frame_struct_518;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c4_519=0;
char* Err_520=0;
_Bool __result_obj__316;
void* __right_value407 = (void*)0;
struct sType* result_type_521;
struct list$1void$ph* param_types_522;
struct list$1char$ph* param_names_523;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct buffer* all_alhabet_sname_524;
char* p_525;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
int i_526;
struct list$1void$ph* o2_saved_527;
struct sType* it_528;
struct sType* param_type_529;
void* __right_value412 = (void*)0;
char* param_name_530;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* param_name_531;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* param_name_532;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct buffer* source3_533;
char* p_534;
char* head_535;
int sline_536;
struct buffer* __dec_obj77;
void* __right_value419 = (void*)0;
struct sNode* node_537;
_Bool Value_538;
_Bool __result_obj__317;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* method_block_name_539;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value2_540;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sFun* fun2_541;
void* __right_value426 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c5_542=0;
char* Err_543=0;
_Bool __result_obj__318;
struct sType* method_block_type2_544;
void* __right_value427 = (void*)0;
char* __dec_obj78;
void* __right_value428 = (void*)0;
struct sType* __dec_obj79;
struct buffer* __dec_obj80;
void* __right_value429 = (void*)0;
struct sType* __dec_obj81;
_Bool contained_method_generics_method_block_545;
struct list$1void$ph* o2_saved_546;
struct sType* it_547;
void* __right_value430 = (void*)0;
_Bool __result_obj__320;
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
    current_stack_frame_node_506=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value393,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_508=node_compile(current_stack_frame_node_506,info);
    if(    !Value_508) {
        __result_obj__313 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_506) ? current_stack_frame_node_506 = come_decrement_ref_count2(current_stack_frame_node_506, ((struct sNode*)current_stack_frame_node_506)->finalize, ((struct sNode*)current_stack_frame_node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__313;
    }
    else {
    }
    come_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_511));
    dec_stack_ptr(1,info);
    method_block2_512=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    method_block_type_513=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value400=list$1void$ph$p_operator_load_element(fun->mParamTypes,-1))))));
    come_call_finalizer3(__right_value400,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    class_name_517=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)((void*)(__right_value403=list$1void$ph$p_operator_load_element(method_block_type_513->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value404=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_517))));
    come_call_finalizer3(__right_value403,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__right_value404,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    current_stack_frame_struct_518=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value405=map$2void$phvoid$ph$p_operator_load_element(info->classes,class_name_517))));
    come_call_finalizer3(__right_value405,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_513->mClass->mName,"lambda")) {
        multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value406=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c4_519=multiple_assign_var6->v1;
        Err_520=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        ((Err_520)?(puts(Err_520),exit(0)):(0));
        come_call_finalizer3(__right_value406,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__316 = (_Bool)0;
        (Err_520 = come_decrement_ref_count2(Err_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_506) ? current_stack_frame_node_506 = come_decrement_ref_count2(current_stack_frame_node_506, ((struct sNode*)current_stack_frame_node_506)->finalize, ((struct sNode*)current_stack_frame_node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_517 = come_decrement_ref_count2(class_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__316;
        (Err_520 = come_decrement_ref_count2(Err_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_521=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_513->mResultType));
    result_type_521->mStatic=(_Bool)0;
    param_types_522=method_block_type_513->mParamTypes;
    param_names_523=method_block_type_513->mParamNames;
    all_alhabet_sname_524=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    {
        p_525=info->sname;
        while(*p_525) {
            if(            xisalnum(*p_525)) {
                buffer_append_char(all_alhabet_sname_524,*p_525++);
            }
            else {
                p_525++;
            }
        }
    }
    buffer_append_format(method_block2_512,"%s method_block%d_%s(",((char*)(__right_value410=make_type_name_string(result_type_521,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value411=buffer_to_string(all_alhabet_sname_524))));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_526=0;
    for(    o2_saved_527=(param_types_522),it_528=((struct sType*)list$1void$ph$p_begin((o2_saved_527)));    !list$1void$ph$p_end((o2_saved_527));    it_528=((struct sType*)list$1void$ph$p_next((o2_saved_527)))    ){
        param_type_529=it_528;
        if(        i_526==0) {
            param_name_530=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_512,"%s",((char*)(__right_value413=make_define_var(param_type_529,param_name_530,(_Bool)0,info))));
            (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_530 = come_decrement_ref_count2(param_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_526==1) {
            param_name_531=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_512,"%s",((char*)(__right_value415=make_define_var_no_solved(param_type_529,param_name_531,(_Bool)0,(_Bool)0,info))));
            (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_531 = come_decrement_ref_count2(param_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_532=(char*)come_increment_ref_count(xsprintf("it%d",i_526));
            buffer_append_format(method_block2_512,"%s",((char*)(__right_value417=make_define_var_no_solved(param_type_529,param_name_532,(_Bool)0,(_Bool)0,info))));
            (__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_532 = come_decrement_ref_count2(param_name_532, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_526!=list$1void$ph$p_length(param_types_522)-1) {
            buffer_append_str(method_block2_512,",");
        }
        i_526++;
    }
    buffer_append_str(method_block2_512,")\n");
    buffer_append_str(method_block2_512,((char*)(__right_value418=buffer_to_string(method_block))));
    (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_533=(struct buffer*)come_increment_ref_count(info->source);
    p_534=info->p;
    head_535=info->head;
    sline_536=info->sline;
    __dec_obj77=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_512);
    come_call_finalizer3(__dec_obj77,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_537=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_538=node_compile(node_537,info);
    if(    !Value_538) {
        __result_obj__317 = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_506) ? current_stack_frame_node_506 = come_decrement_ref_count2(current_stack_frame_node_506, ((struct sNode*)current_stack_frame_node_506)->finalize, ((struct sNode*)current_stack_frame_node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_517 = come_decrement_ref_count2(class_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_524,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_537) ? node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__317;
    }
    else {
    }
    method_block_name_539=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value420=buffer_to_string(all_alhabet_sname_524)))));
    (__right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_540=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    fun2_541=((struct sFun*)((void*)(__right_value425=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value424=__builtin_string(method_block_name_539))),((void*)0)))));
    (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value425,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun2_541==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value426=err_msg(info,"method block function not found(%s)",method_block_name_539)));
        come_exception_var_c5_542=multiple_assign_var7->v1;
        Err_543=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_543)?(puts(Err_543),exit(0)):(0));
        come_call_finalizer3(__right_value426,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__318 = (_Bool)1;
        (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((current_stack_frame_node_506) ? current_stack_frame_node_506 = come_decrement_ref_count2(current_stack_frame_node_506, ((struct sNode*)current_stack_frame_node_506)->finalize, ((struct sNode*)current_stack_frame_node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
        (class_name_517 = come_decrement_ref_count2(class_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_524,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((node_537) ? node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_539 = come_decrement_ref_count2(method_block_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(come_value2_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__318;
        (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_544=fun2_541->mLambdaType;
    __dec_obj78=come_value2_540->c_value;
    come_value2_540->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_539));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj79=come_value2_540->type;
    come_value2_540->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_544));
    come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_540->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_540));
    __dec_obj80=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_533);
    come_call_finalizer3(__dec_obj80,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_534;
    info->head=head_535;
    info->sline=sline_536;
    info->current_stack_frame_struct=current_stack_frame_struct_518;
    __dec_obj81=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_545=(_Bool)0;
    for(    o2_saved_546=(param_types_522),it_547=((struct sType*)list$1void$ph$p_begin((o2_saved_546)));    !list$1void$ph$p_end((o2_saved_546));    it_547=((struct sType*)list$1void$ph$p_next((o2_saved_546)))    ){
        if(        is_contained_method_generics_types(it_547,info)) {
            contained_method_generics_method_block_545=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_521,info)) {
        contained_method_generics_method_block_545=(_Bool)1;
    }
    if(    contained_method_generics_method_block_545) {
        map$2void$phvoid$ph$p_remove(info->funcs,((char*)(__right_value430=__builtin_string(method_block_name_539))));
        (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__320 = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((current_stack_frame_node_506) ? current_stack_frame_node_506 = come_decrement_ref_count2(current_stack_frame_node_506, ((struct sNode*)current_stack_frame_node_506)->finalize, ((struct sNode*)current_stack_frame_node_506)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_511,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_512,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    (class_name_517 = come_decrement_ref_count2(class_name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_521,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_524,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_537) ? node_537 = come_decrement_ref_count2(node_537, ((struct sNode*)node_537)->finalize, ((struct sNode*)node_537)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_539 = come_decrement_ref_count2(method_block_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(come_value2_540,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__320;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__311;
void* __right_value394 = (void*)0;
struct sCurrentNode* result_507;
void* __right_value395 = (void*)0;
char* __dec_obj76;
struct sCurrentNode* __result_obj__312;
    if(    self==(void*)0) {
        __result_obj__311 = (void*)0;
        return __result_obj__311;
    }
    result_507=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_507->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_507->sname;
        result_507->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_507->sline_real=self->sline_real;
    }
    __result_obj__312 = result_507;
    come_call_finalizer3(result_507,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__312;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_509;
struct list_item$1CVALUE$ph* prev_it_510;
    it_509=self->head;
    while(it_509!=((void*)0)) {
        prev_it_510=it_509;
        it_509=it_509->next;
        come_call_finalizer3(prev_it_510,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_514;
int i_515;
void* __result_obj__314;
void* default_value_516;
void* __result_obj__315;
default_value_516 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_514=self->head;
    i_515=0;
    while(it_514!=((void*)0)) {
        if(        position==i_515) {
            __result_obj__314 = come_increment_ref_count(it_514->item);
            come_call_finalizer3(__result_obj__314,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__314;
        }
        it_514=it_514->next;
        i_515++;
    }
    memset(&default_value_516,0,sizeof(void*));
    __result_obj__315 = come_increment_ref_count(((struct sType*)default_value_516));
    come_call_finalizer3(default_value_516,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__315,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__315;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key){
unsigned int hash_548;
unsigned int it_549;
struct map$2void$phvoid$ph* __result_obj__319;
    hash_548=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_549=hash_548;
    while((_Bool)1) {
        if(        self->item_existance[it_549]) {
            if(            come_call_equals((void*)0, self->keys[it_549], key)) {
                list$1void$p$p_remove(self->key_list,self->keys[it_549]);
                self->item_existance[it_549]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_549],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_549]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_549],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_549]=((void*)0);
                self->len--;
                break;
            }
            it_549++;
            if(            it_549>=self->size) {
                it_549=0;
            }
            else if(            it_549==hash_548) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__319 = self;
    return __result_obj__319;
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
struct sMethodCallNode* __result_obj__327;
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
    __result_obj__327 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__327,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
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
char* __result_obj__328;
    __result_obj__328 = come_increment_ref_count(((char*)(__right_value447=__builtin_string("sMethodCallNode"))));
    (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__328 = come_decrement_ref_count2(__result_obj__328, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__328;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_560;
struct list$1tuple2$2char$phsNode$ph$ph* params_561;
struct sNode* obj_562;
struct buffer* method_block_563;
int method_block_sline_564;
_Bool no_infference_method_generics_565;
struct list$1void$ph* method_generics_types_566;
_Bool recursive_567;
struct list$1void$ph* method_generics_types_before_568;
struct list$1void$ph* __dec_obj92;
void* __right_value448 = (void*)0;
struct list$1void$ph* __dec_obj93;
_Bool Value_569;
_Bool __result_obj__329;
void* __right_value449 = (void*)0;
struct CVALUE* obj_value_570;
void* __right_value450 = (void*)0;
struct sType* obj_type_571;
_Bool no_output_come_code_572;
struct sType* type_573;
void* __right_value451 = (void*)0;
char* none_generics_name_574;
void* __right_value452 = (void*)0;
char* fun_name2_575;
void* __right_value453 = (void*)0;
char* fun_name3_576;
void* __right_value454 = (void*)0;
struct sGenericsFun* generics_fun_577;
_Bool method_generics_578;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_579=0;
struct sGenericsFun* gfun_580=0;
char* generics_fun_name_581;
void* __right_value457 = (void*)0;
struct sFun* fun_582;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1CVALUE$ph* come_params_583;
_Bool no_output_come_code_584;
_Bool __result_obj__331;
void* __right_value460 = (void*)0;
struct CVALUE* method_block_node_585;
void* __right_value461 = (void*)0;
struct sType* method_block_lambda_type_589;
void* __right_value462 = (void*)0;
struct sType* method_block_result_type_590;
void* __right_value463 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_591;
struct sType* generics_fun_method_block_result_type_592;
int method_generics_num_593;
void* __right_value464 = (void*)0;
int n_594;
struct list$1void$ph* o2_saved_595;
struct sType* it_596;
int method_generics_num_597;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1CVALUE$ph* come_params_598;
int i_599;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_600;
struct tuple2$2char$phsNode$ph* it_603;
struct tuple2$2char$phsNode$ph* multiple_assign_var9 = (void*)0;
char* label_606=0;
struct sNode* node_607=0;
_Bool Value_608;
_Bool __result_obj__340;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_609;
int method_generics_num_610;
_Bool generics_any_child_611;
struct sType* obj_type2_612;
struct sType* __dec_obj94;
struct list$1void$ph* o2_saved_613;
struct sType* it_614;
void* __right_value470 = (void*)0;
struct list$1void$ph* o2_saved_615;
struct sType* it_616;
int method_generics_num_617;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1CVALUE$ph* come_params_618;
int i_619;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_620;
struct tuple2$2char$phsNode$ph* it_621;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_622=0;
struct sNode* node_623=0;
_Bool Value_624;
_Bool __result_obj__341;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_625;
int method_generics_num_626;
void* __right_value476 = (void*)0;
int n_627;
struct list$1void$ph* o2_saved_628;
struct sType* it_629;
int method_generics_num_630;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sClass* klass_631;
_Bool calling_dynamic_method_632;
struct sType* lambda_type_633;
struct list$1void$ph* o2_saved_634;
struct tuple2$2char$phsType$ph* it_635;
struct tuple2$2char$phsType$ph* multiple_assign_var11 = (void*)0;
char* field_name_636=0;
struct sType* field_type_637=0;
void* __right_value479 = (void*)0;
struct sType* result_type_638;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1CVALUE$ph* come_params_639;
int i_640;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_641;
struct tuple2$2char$phsNode$ph* it_642;
struct tuple2$2char$phsNode$ph* multiple_assign_var12 = (void*)0;
char* label_643=0;
struct sNode* node_644=0;
_Bool Value_645;
_Bool __result_obj__342;
void* __right_value482 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_1_647=0;
char* Err_648=0;
_Bool _if_conditional2;
_Bool __result_obj__343;
void* __right_value488 = (void*)0;
_Bool _if_conditional3;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct buffer* buf_649;
int j_650;
struct list$1CVALUE$ph* o2_saved_651;
struct CVALUE* it_654;
void* __right_value492 = (void*)0;
char* __dec_obj95;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct CVALUE* come_value2_657;
void* __right_value495 = (void*)0;
char* __dec_obj96;
void* __right_value496 = (void*)0;
struct sType* result_type2_658;
void* __right_value497 = (void*)0;
struct sType* __dec_obj97;
struct list$1void$ph* __dec_obj98;
struct sGenericsFun* generics_fun_659;
char* generics_fun_name_660;
struct sFun* fun_661;
void* __right_value498 = (void*)0;
char* __dec_obj99;
struct sClass* klass_662;
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
char* name_663=0;
struct sGenericsFun* gfun_664=0;
char* __dec_obj101;
void* __right_value506 = (void*)0;
char* none_generics_name_665;
void* __right_value507 = (void*)0;
char* fun_name3_666;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var15 = (void*)0;
char* name_667=0;
struct sGenericsFun* gfun_668=0;
char* __dec_obj102;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_669=0;
struct sGenericsFun* gfun_670=0;
char* __dec_obj103;
int i_671;
void* __right_value512 = (void*)0;
char* new_fun_name_672;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* __dec_obj104;
struct sType* obj_array_type_673;
void* __right_value516 = (void*)0;
char* array_method_name_674;
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
int come_exception_var_2_675=0;
char* Err_676=0;
_Bool _if_conditional4;
_Bool __result_obj__350;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __dec_obj107;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sClass* klass_677;
void* __right_value533 = (void*)0;
_Bool _while_condtional2;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* __dec_obj108;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var18 = (void*)0;
struct sFun* fun2_678=0;
char* real_fun_name_679=0;
char* __dec_obj109;
void* __right_value539 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var19 = (void*)0;
struct sFun* fun2_680=0;
char* real_fun_name_681=0;
char* __dec_obj110;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
char* original_obj_type_fun_name_682;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* __dec_obj111;
void* __right_value544 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_3_683=0;
char* Err_684=0;
_Bool _if_conditional5;
_Bool __result_obj__351;
void* __right_value545 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_4_685=0;
char* Err_686=0;
_Bool _if_conditional6;
_Bool __result_obj__352;
void* __right_value546 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_5_687=0;
char* Err_688=0;
_Bool _if_conditional7;
_Bool __result_obj__353;
void* __right_value547 = (void*)0;
struct sType* result_type_689;
_Bool in_exception_value_690;
void* __right_value555 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sNode* new_node_691;
_Bool Value_693;
_Bool __result_obj__356;
_Bool __result_obj__357;
_Bool in_exception_value_694;
void* __right_value558 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* new_node_695;
_Bool Value_696;
_Bool __result_obj__358;
_Bool __result_obj__359;
void* __right_value561 = (void*)0;
struct sType* result_type2_697;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1void$ph* param_types_698;
struct list$1void$ph* o2_saved_699;
struct sType* it_700;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* it2_701;
struct sType* no_solved_obj_type_702;
void* __right_value566 = (void*)0;
struct sType* it3_703;
void* __right_value567 = (void*)0;
struct sType* any_type_704;
void* __right_value568 = (void*)0;
struct list$1void$ph* type_checking_param_types_705;
int n_706;
struct list$1void$ph* o2_saved_707;
struct sType* it_708;
struct sType* no_solved_obj_type_709;
void* __right_value569 = (void*)0;
struct sType* it3_710;
void* __right_value570 = (void*)0;
struct sType* any_type_711;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
_Bool _if_conditional8;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1CVALUE$ph* come_params_712;
int i_713;
_Bool first_param_717;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_718;
struct tuple2$2char$phsNode$ph* it_719;
struct tuple2$2char$phsNode$ph* multiple_assign_var23 = (void*)0;
char* label_720=0;
struct sNode* node_721=0;
int n_722;
struct list$1char$ph* o2_saved_723;
char* it_726;
_Bool Value_729;
_Bool __result_obj__367;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_730;
void* __right_value579 = (void*)0;
_Bool _if_conditional9;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_6_731=0;
char* Err_732=0;
_Bool _if_conditional10;
_Bool __result_obj__368;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
_Bool _if_conditional11;
void* __right_value587 = (void*)0;
int i_738;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_739;
struct tuple2$2char$phsNode$ph* it_740;
struct tuple2$2char$phsNode$ph* multiple_assign_var25 = (void*)0;
char* label_741=0;
struct sNode* node_742=0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_7_743=0;
char* Err_744=0;
_Bool _if_conditional12;
_Bool __result_obj__371;
void* __right_value593 = (void*)0;
_Bool _if_conditional13;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
_Bool _elif_conditional1;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_8_748=0;
char* Err_749=0;
_Bool _if_conditional14;
_Bool __result_obj__374;
void* __right_value598 = (void*)0;
_Bool _if_conditional15;
_Bool Value_750;
_Bool __result_obj__375;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_751;
void* __right_value600 = (void*)0;
_Bool _if_conditional16;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var28 = (void*)0;
_Bool come_exception_var_9_752=0;
char* Err_753=0;
_Bool _if_conditional17;
_Bool __result_obj__376;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional18;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _if_conditional19;
struct sType* obj_array_type_754;
void* __right_value610 = (void*)0;
char* array_method_name_755;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct buffer* buf_756;
int i_757;
struct list$1sNode$ph* o2_saved_758;
struct sNode* it_761;
_Bool Value_764;
void* __right_value613 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_10_765=0;
char* Err_766=0;
_Bool _if_conditional20;
_Bool __result_obj__383;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_767;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct CVALUE* come_value_768;
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
struct buffer* buf_772;
int i_773;
struct list$1sNode$ph* o2_saved_774;
struct sNode* it_775;
_Bool Value_776;
void* __right_value628 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_11_777=0;
char* Err_778=0;
_Bool _if_conditional21;
_Bool __result_obj__385;
void* __right_value629 = (void*)0;
struct CVALUE* come_value_779;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct CVALUE* come_value_780;
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
struct buffer* buf_781;
int i_782;
struct list$1sNode$ph* o2_saved_783;
struct sNode* it_784;
_Bool Value_785;
void* __right_value640 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_12_786=0;
char* Err_787=0;
_Bool _if_conditional22;
_Bool __result_obj__386;
void* __right_value641 = (void*)0;
struct CVALUE* come_value_788;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_789;
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
struct buffer* buf_790;
int i_791;
struct list$1sNode$ph* o2_saved_792;
struct sNode* it_793;
_Bool Value_794;
void* __right_value652 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_13_795=0;
char* Err_796=0;
_Bool _if_conditional23;
_Bool __result_obj__387;
void* __right_value653 = (void*)0;
struct CVALUE* come_value_797;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct CVALUE* come_value_798;
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
struct buffer* buf_799;
int i_800;
struct list$1sNode$ph* o2_saved_801;
struct sNode* it_802;
_Bool Value_803;
void* __right_value664 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_14_804=0;
char* Err_805=0;
_Bool _if_conditional24;
_Bool __result_obj__388;
void* __right_value665 = (void*)0;
struct CVALUE* come_value_806;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct CVALUE* come_value_807;
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
char* default_param_808;
void* __right_value676 = (void*)0;
char* param_name_809;
void* __right_value677 = (void*)0;
_Bool _if_conditional25;
struct buffer* source_810;
char* p_811;
char* head_812;
int sline_813;
void* __right_value678 = (void*)0;
struct buffer* __dec_obj135;
void* __right_value679 = (void*)0;
struct sNode* node_814;
_Bool Value_815;
_Bool __result_obj__389;
struct buffer* __dec_obj136;
void* __right_value680 = (void*)0;
struct CVALUE* come_value_816;
void* __right_value681 = (void*)0;
_Bool _if_conditional26;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var34 = (void*)0;
_Bool come_exception_var_15_817=0;
char* Err_818=0;
_Bool _if_conditional27;
_Bool __result_obj__390;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
_Bool _if_conditional28;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
_Bool _if_conditional29;
void* __right_value691 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_16_819=0;
char* Err_820=0;
_Bool _if_conditional30;
_Bool __result_obj__391;
_Bool __result_obj__392;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* buf_821;
int j_822;
struct list$1CVALUE$ph* o2_saved_823;
struct CVALUE* it_824;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct CVALUE* come_value2_825;
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
_Bool generics_any_child_826;
struct sType* obj_type2_827;
struct sType* __dec_obj142;
struct list$1void$ph* o2_saved_828;
struct sType* it_829;
struct sType* obj_type2_830;
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
_Bool __result_obj__393;
    fun_name_560=(char*)come_increment_ref_count(self->fun_name);
    params_561=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_562=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_563=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_564=self->method_block_sline;
    no_infference_method_generics_565=self->no_infference_method_generics;
    method_generics_types_566=(struct list$1void$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_567=self->recursive;
    method_generics_types_before_568=((void*)0);
    __dec_obj92=method_generics_types_before_568;
    method_generics_types_before_568=(struct list$1void$ph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj92,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj93=info->method_generics_types;
    info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj93,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_569=node_compile(obj_562,info);
    if(    !Value_569) {
        __result_obj__329 = (_Bool)0;
        (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__329;
    }
    else {
    }
    obj_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_571=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_570->type));
    if(    !no_infference_method_generics_565) {
        no_output_come_code_572=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_573=(struct sType*)come_increment_ref_count(obj_type_571);
        none_generics_name_574=(char*)come_increment_ref_count(get_none_generics_name(type_573->mClass->mName));
        fun_name2_575=(char*)come_increment_ref_count(create_method_name(type_573,(_Bool)0,fun_name_560,info,(_Bool)1));
        fun_name3_576=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_574,fun_name_560));
        generics_fun_577=((struct sGenericsFun*)((void*)(__right_value454=map$2void$phvoid$ph$p_at(info->generics_funcs,fun_name3_576,((void*)0)))));
        come_call_finalizer3(__right_value454,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_fun_577) {
            method_generics_578=list$1char$ph$p_length(generics_fun_577->mMethodGenericsTypeNames)>0;
            if(            method_generics_578&&list$1void$ph$p_length(info->method_generics_types)==0) {
                multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value456=make_generics_function(obj_type_571,(char*)come_increment_ref_count(__builtin_string(fun_name_560)),info,(_Bool)1)));
                name_579=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_580=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value456,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_581=(char*)come_increment_ref_count(name_579);
                fun_582=((struct sFun*)((void*)(__right_value457=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_581,((void*)0)))));
                come_call_finalizer3(__right_value457,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_params_583=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 354, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                method_block_563) {
                    no_output_come_code_584=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_563,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_583),fun_582,fun_name3_576,method_block_sline_564,info,(_Bool)1)) {
                        __result_obj__331 = (_Bool)0;
                        (name_579 = come_decrement_ref_count2(name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_581 = come_decrement_ref_count2(generics_fun_name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_params_583,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (none_generics_name_574 = come_decrement_ref_count2(none_generics_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_575 = come_decrement_ref_count2(fun_name2_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_576 = come_decrement_ref_count2(fun_name3_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__331;
                    }
                    info->no_output_come_code=no_output_come_code_584;
                    method_block_node_585=((struct CVALUE*)(__right_value460=list$1CVALUE$ph$p_operator_load_element(come_params_583,-1)));
                    come_call_finalizer3(__right_value460,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_589=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_585->type));
                    method_block_result_type_590=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_591=((struct sType*)((void*)(__right_value463=list$1void$ph$p_operator_load_element(generics_fun_577->mParamTypes,-1))));
                    come_call_finalizer3(__right_value463,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    generics_fun_method_block_result_type_592=generics_fun_method_block_lambda_type_591->mResultType;
                    if(                    generics_fun_method_block_result_type_592->mClass->mMethodGenerics) {
                        method_generics_num_593=generics_fun_method_block_result_type_592->mClass->mMethodGenericsNum;
                        list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_593,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_590)));
                    }
                    n_594=0;
                    for(                    o2_saved_595=(struct list$1void$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_591->mParamTypes)),it_596=((struct sType*)list$1void$ph$p_begin((o2_saved_595)));                    !list$1void$ph$p_end((o2_saved_595));                    it_596=((struct sType*)list$1void$ph$p_next((o2_saved_595)))                    ){
                        if(                        it_596->mClass->mMethodGenerics) {
                            method_generics_num_597=it_596->mClass->mMethodGenericsNum;
                            list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_597,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value465=list$1void$ph$p_operator_load_element(method_block_lambda_type_589->mParamTypes,n_594)))))));
                            come_call_finalizer3(__right_value465,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        }
                        n_594++;
                    }
                    come_call_finalizer3(o2_saved_595,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_598=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 383, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_599=0;
                    for(                    o2_saved_600=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_561)),it_603=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_600));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_600));                    it_603=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_600))                    ){
                        multiple_assign_var9=it_603;
                        label_606=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                        node_607=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
                        if(                        i_599==0) {
                            list$1CVALUE$ph$p_push_back(come_params_598,(struct CVALUE*)come_increment_ref_count(obj_value_570));
                            i_599++;
                        }
                        else {
                            Value_608=node_compile(node_607,info);
                            if(                            !Value_608) {
                                __result_obj__340 = (_Bool)0;
                                (label_606 = come_decrement_ref_count2(label_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_607) ? node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_600,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_598,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_579 = come_decrement_ref_count2(name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_581 = come_decrement_ref_count2(generics_fun_name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_583,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_574 = come_decrement_ref_count2(none_generics_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_575 = come_decrement_ref_count2(fun_name2_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_576 = come_decrement_ref_count2(fun_name3_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__340;
                            }
                            else {
                            }
                            come_value_609=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUE$ph$p_push_back(come_params_598,(struct CVALUE*)come_increment_ref_count(come_value_609));
                            come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_606 = come_decrement_ref_count2(label_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_607) ? node_607 = come_decrement_ref_count2(node_607, ((struct sNode*)node_607)->finalize, ((struct sNode*)node_607)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_600,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_577->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_610=generics_fun_577->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            generics_any_child_611=(_Bool)0;
                            obj_type2_612=(struct sType*)come_increment_ref_count(obj_type_571);
                            if(                            obj_type2_612->mNoSolvedGenericsType) {
                                __dec_obj94=obj_type2_612;
                                obj_type2_612=(struct sType*)come_increment_ref_count(obj_type2_612->mNoSolvedGenericsType);
                                come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                                for(                                o2_saved_613=(struct list$1void$ph*)come_increment_ref_count((obj_type2_612->mGenericsTypes)),it_614=((struct sType*)list$1void$ph$p_begin((o2_saved_613)));                                !list$1void$ph$p_end((o2_saved_613));                                it_614=((struct sType*)list$1void$ph$p_next((o2_saved_613)))                                ){
                                    if(                                    it_614->mAnyOriginalType) {
                                        generics_any_child_611=(_Bool)1;
                                    }
                                }
                                come_call_finalizer3(o2_saved_613,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_610,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                            come_call_finalizer3(obj_type2_612,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    n_594=0;
                    for(                    o2_saved_615=(struct list$1void$ph*)come_increment_ref_count((generics_fun_577->mParamTypes)),it_616=((struct sType*)list$1void$ph$p_begin((o2_saved_615)));                    !list$1void$ph$p_end((o2_saved_615));                    it_616=((struct sType*)list$1void$ph$p_next((o2_saved_615)))                    ){
                        if(                        it_616->mClass->mMethodGenerics) {
                            method_generics_num_617=it_616->mClass->mMethodGenericsNum;
                            if(                            n_594<list$1CVALUE$ph$p_length(come_params_598)) {
                                list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_617,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value471=list$1CVALUE$ph$p_operator_load_element(come_params_598,n_594)))->type)));
                                come_call_finalizer3(__right_value471,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_594++;
                    }
                    come_call_finalizer3(o2_saved_615,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_589,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_590,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_598,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_618=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 433, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    i_619=0;
                    for(                    o2_saved_620=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_561)),it_621=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_620));                    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_620));                    it_621=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_620))                    ){
                        multiple_assign_var10=it_621;
                        label_622=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                        node_623=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
                        if(                        i_619==0) {
                            list$1CVALUE$ph$p_push_back(come_params_618,(struct CVALUE*)come_increment_ref_count(obj_value_570));
                            i_619++;
                        }
                        else {
                            Value_624=node_compile(node_623,info);
                            if(                            !Value_624) {
                                __result_obj__341 = (_Bool)0;
                                (label_622 = come_decrement_ref_count2(label_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_623) ? node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(o2_saved_620,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_618,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (name_579 = come_decrement_ref_count2(name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_581 = come_decrement_ref_count2(generics_fun_name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(come_params_583,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
                                (none_generics_name_574 = come_decrement_ref_count2(none_generics_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_575 = come_decrement_ref_count2(fun_name2_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_576 = come_decrement_ref_count2(fun_name3_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__341;
                            }
                            else {
                            }
                            come_value_625=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUE$ph$p_push_back(come_params_618,(struct CVALUE*)come_increment_ref_count(come_value_625));
                            come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        (label_622 = come_decrement_ref_count2(label_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_623) ? node_623 = come_decrement_ref_count2(node_623, ((struct sNode*)node_623)->finalize, ((struct sNode*)node_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    come_call_finalizer3(o2_saved_620,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_577->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_626=generics_fun_577->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_626,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_627=0;
                    for(                    o2_saved_628=(struct list$1void$ph*)come_increment_ref_count((generics_fun_577->mParamTypes)),it_629=((struct sType*)list$1void$ph$p_begin((o2_saved_628)));                    !list$1void$ph$p_end((o2_saved_628));                    it_629=((struct sType*)list$1void$ph$p_next((o2_saved_628)))                    ){
                        if(                        it_629->mClass->mMethodGenerics) {
                            method_generics_num_630=it_629->mClass->mMethodGenericsNum;
                            if(                            n_627<list$1CVALUE$ph$p_length(come_params_618)) {
                                list$1void$ph$p_operator_store_element(info->method_generics_types,method_generics_num_630,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value477=list$1CVALUE$ph$p_operator_load_element(come_params_618,n_627)))->type)));
                                come_call_finalizer3(__right_value477,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_627++;
                    }
                    come_call_finalizer3(o2_saved_628,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_618,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2void$phvoid$ph$p_remove(info->funcs,generics_fun_name_581);
                (name_579 = come_decrement_ref_count2(name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_581 = come_decrement_ref_count2(generics_fun_name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_params_583,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_572;
        come_call_finalizer3(type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
        (none_generics_name_574 = come_decrement_ref_count2(none_generics_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_575 = come_decrement_ref_count2(fun_name2_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_576 = come_decrement_ref_count2(fun_name3_576, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_631=obj_type_571->mClass;
    calling_dynamic_method_632=(_Bool)0;
    lambda_type_633=((void*)0);
    for(    o2_saved_634=(struct list$1void$ph*)come_increment_ref_count((klass_631->mFields)),it_635=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_634)));    !list$1void$ph$p_end((o2_saved_634));    it_635=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_634)))    ){
        multiple_assign_var11=it_635;
        field_name_636=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        field_type_637=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
        if(        string_operator_equals(field_name_636,fun_name_560)&&string_operator_equals(field_type_637->mClass->mName,"lambda")) {
            calling_dynamic_method_632=(_Bool)1;
            lambda_type_633=field_type_637;
            (field_name_636 = come_decrement_ref_count2(field_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        (field_name_636 = come_decrement_ref_count2(field_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(field_type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_634,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_632) {
        result_type_638=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_633->mResultType));
        result_type_638->mStatic=(_Bool)0;
        come_params_639=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 496, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_640=0;
        for(        o2_saved_641=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_561)),it_642=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_641));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_641));        it_642=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_641))        ){
            multiple_assign_var12=it_642;
            label_643=(char*)come_increment_ref_count(multiple_assign_var12->v1);
            node_644=(struct sNode*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            i_640==0) {
                list$1CVALUE$ph$p_push_back(come_params_639,(struct CVALUE*)come_increment_ref_count(obj_value_570));
                i_640++;
            }
            else {
                Value_645=node_compile(node_644,info);
                if(                !Value_645) {
                    __result_obj__342 = (_Bool)0;
                    (label_643 = come_decrement_ref_count2(label_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_644) ? node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_639,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__342;
                }
                else {
                }
                come_value_646=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value487=check_assign_type(((char*)(__right_value485=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value483=string_to_string(fun_name_560))),((char*)(__right_value484=int_to_string(i_640)))))),((struct sType*)((void*)(__right_value486=list$1void$ph$p_operator_load_element(lambda_type_633->mParamTypes,i_640-1)))),come_value_646->type,come_value_646,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_1_647=multiple_assign_var13->v1;
                Err_648=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                (_if_conditional2=(Err_648)),                (__right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value486,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value487,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result_obj__343 = (_Bool)1;
                    come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_648 = come_decrement_ref_count2(Err_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_643 = come_decrement_ref_count2(label_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_644) ? node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_639,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__343;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)((void*)(__right_value488=list$1void$ph$p_operator_load_element(lambda_type_633->mParamTypes,i_640-1))))->mHeap&&come_value_646->type->mHeap)),                come_call_finalizer3(__right_value488,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)((void*)(__right_value489=list$1void$ph$p_operator_load_element(lambda_type_633->mParamTypes,i_640-1)))),come_value_646->type,come_value_646,info,(_Bool)1);
                    come_call_finalizer3(__right_value489,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_push_back(come_params_639,(struct CVALUE*)come_increment_ref_count(come_value_646));
                i_640++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_646,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_648 = come_decrement_ref_count2(Err_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_643 = come_decrement_ref_count2(label_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_644) ? node_644 = come_decrement_ref_count2(node_644, ((struct sNode*)node_644)->finalize, ((struct sNode*)node_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buf_649=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 528, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_format(buf_649,"%s->%s",obj_value_570->c_value,fun_name_560);
        buffer_append_str(buf_649,"(");
        j_650=0;
        for(        o2_saved_651=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_639)),it_654=list$1CVALUE$ph$p_begin((o2_saved_651));        !list$1CVALUE$ph$p_end((o2_saved_651));        it_654=list$1CVALUE$ph$p_next((o2_saved_651))        ){
            if(            j_650==0) {
                __dec_obj95=it_654->c_value;
                it_654->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_654->c_value));
                __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_649,it_654->c_value);
            if(            j_650!=list$1CVALUE$ph$p_length(come_params_639)-1) {
                buffer_append_str(buf_649,",");
            }
            j_650++;
        }
        come_call_finalizer3(o2_saved_651,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_649,")");
        come_value2_657=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 548, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj96=come_value2_657->c_value;
        come_value2_657->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_649));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_658=(struct sType*)come_increment_ref_count(solve_generics(result_type_638,info->generics_type,info));
        __dec_obj97=come_value2_657->type;
        come_value2_657->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_658));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_657->type->mStatic=(_Bool)0;
        come_value2_657->var=((void*)0);
        if(        result_type2_658->mHeap) {
            append_object_to_right_values2(come_value2_657,(struct sType*)come_increment_ref_count(result_type2_658),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_657->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_657));
        come_call_finalizer3(info->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj98=info->method_generics_types;
        info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types_before_568);
        come_call_finalizer3(__dec_obj98,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_639,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_649,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_658,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_659=((void*)0);
        generics_fun_name_660=((void*)0);
        fun_661=((void*)0);
        if(        string_operator_equals(fun_name_560,"super")) {
            __dec_obj99=fun_name_560;
            fun_name_560=(char*)come_increment_ref_count(create_non_method_name(obj_type_571,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_662=obj_type_571->mClass;
            while((_while_condtional1=(((struct sClass*)((void*)(__right_value499=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_662->mParentClassName)))))),            come_call_finalizer3(__right_value499,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _while_condtional1) {
                klass_662=((struct sClass*)((void*)(__right_value500=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_662->mParentClassName))));
                come_call_finalizer3(__right_value500,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                __dec_obj100=generics_fun_name_660;
                generics_fun_name_660=(char*)come_increment_ref_count(create_method_name_using_class(klass_662,(_Bool)0,fun_name_560,info,(_Bool)1));
                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_661=((struct sFun*)((void*)(__right_value503=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value502=__builtin_string(generics_fun_name_660))),((void*)0)))));
                (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value503,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_661) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_571&&obj_type_571->mNoSolvedGenericsType&&list$1void$ph$p_length(obj_type_571->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var14=((struct tuple2$2char$phsGenericsFun$p*)(__right_value505=make_generics_function(obj_type_571,(char*)come_increment_ref_count(__builtin_string(fun_name_560)),info,(_Bool)1)));
                name_663=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_664=multiple_assign_var14->v2;
                come_call_finalizer3(__right_value505,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj101=generics_fun_name_660;
                generics_fun_name_660=(char*)come_increment_ref_count(name_663);
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_659=gfun_664;
                (name_663 = come_decrement_ref_count2(name_663, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1void$ph$p_length(info->method_generics_types)>0) {
                none_generics_name_665=(char*)come_increment_ref_count(get_none_generics_name(obj_type_571->mClass->mName));
                fun_name3_666=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_665,fun_name_560));
                multiple_assign_var15=((struct tuple2$2char$phsGenericsFun$p*)(__right_value509=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_666)),(struct list$1void$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_667=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                gfun_668=multiple_assign_var15->v2;
                come_call_finalizer3(__right_value509,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj102=generics_fun_name_660;
                generics_fun_name_660=(char*)come_increment_ref_count(name_667);
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_659=gfun_668;
                (none_generics_name_665 = come_decrement_ref_count2(none_generics_name_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_666 = come_decrement_ref_count2(fun_name3_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value511=make_generics_function(obj_type_571,(char*)come_increment_ref_count(__builtin_string(fun_name_560)),info,(_Bool)1)));
                name_669=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                gfun_670=multiple_assign_var16->v2;
                come_call_finalizer3(__right_value511,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj103=generics_fun_name_660;
                generics_fun_name_660=(char*)come_increment_ref_count(name_669);
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_659=gfun_670;
                (name_669 = come_decrement_ref_count2(name_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_671=128;            i_671>=1;            i_671--            ){
                new_fun_name_672=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_660,i_671));
                fun_661=((struct sFun*)((void*)(__right_value514=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value513=__builtin_string(new_fun_name_672)))))));
                (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value514,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                fun_661!=((void*)0)) {
                    __dec_obj104=generics_fun_name_660;
                    generics_fun_name_660=(char*)come_increment_ref_count(__builtin_string(new_fun_name_672));
                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                    (new_fun_name_672 = come_decrement_ref_count2(new_fun_name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_672 = come_decrement_ref_count2(new_fun_name_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_661==((void*)0)) {
                obj_array_type_673=obj_type_571->mOriginalLoadVarType;
                if(                obj_array_type_673&&list$1sNode$ph$p_length(obj_array_type_673->mArrayNum)>0) {
                    array_method_name_674=(char*)come_increment_ref_count(create_method_name(obj_array_type_673,(_Bool)0,fun_name_560,info,(_Bool)0));
                    fun_661=((struct sFun*)((void*)(__right_value518=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value517=__builtin_string(array_method_name_674))),((void*)0)))));
                    (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value518,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    if(                    fun_661) {
                        __dec_obj105=generics_fun_name_660;
                        generics_fun_name_660=(char*)come_increment_ref_count(__builtin_string(array_method_name_674));
                        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_661=((struct sFun*)((void*)(__right_value521=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value520=__builtin_string(generics_fun_name_660))),((void*)0)))));
                        (__right_value520 = come_decrement_ref_count2(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value521,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        if(                        fun_661==((void*)0)) {
                            __dec_obj106=generics_fun_name_660;
                            generics_fun_name_660=(char*)come_increment_ref_count(create_method_name(obj_type_571,(_Bool)0,((char*)(__right_value522=__builtin_string(fun_name_560))),info,(_Bool)1));
                            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_661=((struct sFun*)((void*)(__right_value525=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value524=__builtin_string(generics_fun_name_660))),((void*)0)))));
                            (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value525,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                            if(                            fun_661==((void*)0)) {
                                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value526=err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_660,info->come_fun->mName)));
                                come_exception_var_2_675=multiple_assign_var17->v1;
                                Err_676=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                                if(                                (_if_conditional4=(Err_676)),                                come_call_finalizer3(__right_value526,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional4) {
                                    __result_obj__350 = (_Bool)1;
                                    (Err_676 = come_decrement_ref_count2(Err_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_674 = come_decrement_ref_count2(array_method_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__350;
                                }
                                else {
                                }
                                (Err_676 = come_decrement_ref_count2(Err_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_674 = come_decrement_ref_count2(array_method_name_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_661=((struct sFun*)((void*)(__right_value528=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value527=__builtin_string(generics_fun_name_660))),((void*)0)))));
                    (__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value528,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    if(                    fun_661==((void*)0)) {
                        __dec_obj107=generics_fun_name_660;
                        generics_fun_name_660=(char*)come_increment_ref_count(create_method_name(obj_type_571,(_Bool)0,((char*)(__right_value529=__builtin_string(fun_name_560))),info,(_Bool)1));
                        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                        (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_661=((struct sFun*)((void*)(__right_value532=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value531=__builtin_string(generics_fun_name_660))),((void*)0)))));
                        (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                        if(                        fun_661==((void*)0)) {
                            klass_677=obj_type_571->mClass;
                            while((_while_condtional2=(((struct sClass*)((void*)(__right_value533=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_677->mParentClassName)))))),                            come_call_finalizer3(__right_value533,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                            _while_condtional2) {
                                klass_677=((struct sClass*)((void*)(__right_value534=map$2void$phvoid$ph$p_operator_load_element(info->classes,klass_677->mParentClassName))));
                                come_call_finalizer3(__right_value534,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                                __dec_obj108=generics_fun_name_660;
                                generics_fun_name_660=(char*)come_increment_ref_count(create_method_name_using_class(klass_677,(_Bool)0,fun_name_560,info,(_Bool)1));
                                __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_661=((struct sFun*)((void*)(__right_value537=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value536=__builtin_string(generics_fun_name_660))),((void*)0)))));
                                (__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(__right_value537,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                                if(                                fun_661) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_661==((void*)0)&&string_operator_equals(fun_name_560,"to_string")) {
                            multiple_assign_var18=((struct tuple2$2sFun$pchar$ph*)(__right_value538=create_to_string_automatically(obj_type_571,fun_name_560,info)));
                            fun2_678=multiple_assign_var18->v1;
                            real_fun_name_679=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            come_call_finalizer3(__right_value538,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_661=fun2_678;
                            __dec_obj109=generics_fun_name_660;
                            generics_fun_name_660=(char*)come_increment_ref_count(real_fun_name_679);
                            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_679 = come_decrement_ref_count2(real_fun_name_679, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_661==((void*)0)&&string_operator_equals(fun_name_560,"equals")) {
                            multiple_assign_var19=((struct tuple2$2sFun$pchar$ph*)(__right_value539=create_equals_automatically(obj_type_571,fun_name_560,info)));
                            fun2_680=multiple_assign_var19->v1;
                            real_fun_name_681=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                            come_call_finalizer3(__right_value539,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            fun_661=fun2_680;
                            __dec_obj110=generics_fun_name_660;
                            generics_fun_name_660=(char*)come_increment_ref_count(real_fun_name_681);
                            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                            (real_fun_name_681 = come_decrement_ref_count2(real_fun_name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_661==((void*)0)) {
                            original_obj_type_fun_name_682=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_571,(_Bool)0,((char*)(__right_value540=__builtin_string(fun_name_560))),info,(_Bool)1));
                            (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_661=((struct sFun*)((void*)(__right_value543=map$2void$phvoid$ph$p_at(info->funcs,((char*)(__right_value542=__builtin_string(original_obj_type_fun_name_682))),((void*)0)))));
                            (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                            if(                            fun_661) {
                                __dec_obj111=generics_fun_name_660;
                                generics_fun_name_660=(char*)come_increment_ref_count(original_obj_type_fun_name_682);
                                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            (original_obj_type_fun_name_682 = come_decrement_ref_count2(original_obj_type_fun_name_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_661==((void*)0)) {
                            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value544=err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_660,info->come_fun->mName)));
                            come_exception_var_3_683=multiple_assign_var20->v1;
                            Err_684=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            if(                            (_if_conditional5=(Err_684)),                            come_call_finalizer3(__right_value544,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional5) {
                                __result_obj__351 = (_Bool)1;
                                (Err_684 = come_decrement_ref_count2(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__351;
                            }
                            else {
                            }
                            (Err_684 = come_decrement_ref_count2(Err_684, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_661==((void*)0)) {
            multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value545=err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_660,info->come_fun->mName)));
            come_exception_var_4_685=multiple_assign_var21->v1;
            Err_686=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional6=(Err_686)),            come_call_finalizer3(__right_value545,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__352 = (_Bool)1;
                (Err_686 = come_decrement_ref_count2(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__352;
            }
            else {
            }
            (Err_686 = come_decrement_ref_count2(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1void$ph$p_length(fun_661->mParamTypes)==0) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value546=err_msg(info,"Method require function parametor")));
            come_exception_var_5_687=multiple_assign_var22->v1;
            Err_688=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional7=(Err_688)),            come_call_finalizer3(__right_value546,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result_obj__353 = (_Bool)1;
                (Err_688 = come_decrement_ref_count2(Err_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__353;
            }
            else {
            }
            (Err_688 = come_decrement_ref_count2(Err_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_689=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_661->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_689->mException&&!info->in_exception_value) {
            in_exception_value_690=info->in_exception_value;
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
            new_node_691=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            come_call_finalizer3(__right_value555,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_693=node_compile(new_node_691,info);
            if(            !Value_693) {
                __result_obj__356 = (_Bool)0;
                ((new_node_691) ? new_node_691 = come_decrement_ref_count2(new_node_691, ((struct sNode*)new_node_691)->finalize, ((struct sNode*)new_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__356;
            }
            else {
            }
            info->in_exception_value=in_exception_value_690;
            __result_obj__357 = (_Bool)1;
            ((new_node_691) ? new_node_691 = come_decrement_ref_count2(new_node_691, ((struct sNode*)new_node_691)->finalize, ((struct sNode*)new_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__357;
            ((new_node_691) ? new_node_691 = come_decrement_ref_count2(new_node_691, ((struct sNode*)new_node_691)->finalize, ((struct sNode*)new_node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        result_type_689->mException&&!info->in_exception_value) {
            in_exception_value_694=info->in_exception_value;
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
            new_node_695=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            come_call_finalizer3(__right_value558,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_696=node_compile(new_node_695,info);
            if(            !Value_696) {
                __result_obj__358 = (_Bool)0;
                ((new_node_695) ? new_node_695 = come_decrement_ref_count2(new_node_695, ((struct sNode*)new_node_695)->finalize, ((struct sNode*)new_node_695)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__358;
            }
            else {
            }
            info->in_exception_value=in_exception_value_694;
            __result_obj__359 = (_Bool)1;
            ((new_node_695) ? new_node_695 = come_decrement_ref_count2(new_node_695, ((struct sNode*)new_node_695)->finalize, ((struct sNode*)new_node_695)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__359;
            ((new_node_695) ? new_node_695 = come_decrement_ref_count2(new_node_695, ((struct sNode*)new_node_695)->finalize, ((struct sNode*)new_node_695)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        result_type_689->mStatic=(_Bool)0;
        result_type2_697=(struct sType*)come_increment_ref_count(solve_generics(result_type_689,info->generics_type,info));
        param_types_698=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "20method.c", 743, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        for(        o2_saved_699=(struct list$1void$ph*)come_increment_ref_count((fun_661->mParamTypes)),it_700=((struct sType*)list$1void$ph$p_begin((o2_saved_699)));        !list$1void$ph$p_end((o2_saved_699));        it_700=((struct sType*)list$1void$ph$p_next((o2_saved_699)))        ){
            if(            it_700==((void*)0)) {
                list$1void$ph$p_push_back(param_types_698,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_700)));
            }
            else {
                it2_701=(struct sType*)come_increment_ref_count(solve_generics(it_700,info->generics_type,info));
                no_solved_obj_type_702=(struct sType*)come_increment_ref_count(obj_type_571->mNoSolvedGenericsType);
                it3_703=(struct sType*)come_increment_ref_count(solve_generics(it_700,no_solved_obj_type_702,info));
                any_type_704=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_703)));
                list$1void$ph$p_push_back(param_types_698,(struct sType*)come_increment_ref_count(it2_701));
                come_call_finalizer3(it2_701,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_obj_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(it3_703,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(any_type_704,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_699,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        type_checking_param_types_705=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, param_types_698));
        if(        generics_fun_659) {
            n_706=0;
            for(            o2_saved_707=(struct list$1void$ph*)come_increment_ref_count((generics_fun_659->mParamTypes)),it_708=((struct sType*)list$1void$ph$p_begin((o2_saved_707)));            !list$1void$ph$p_end((o2_saved_707));            it_708=((struct sType*)list$1void$ph$p_next((o2_saved_707)))            ){
                if(                it_708==((void*)0)) {
                }
                else {
                    no_solved_obj_type_709=(struct sType*)come_increment_ref_count(obj_type_571->mNoSolvedGenericsType);
                    it3_710=(struct sType*)come_increment_ref_count(solve_generics(it_708,no_solved_obj_type_709,info));
                    any_type_711=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(it3_710)));
                    if(                    (_if_conditional8=(string_operator_equals(((struct sType*)((void*)(__right_value571=list$1void$ph$p_operator_load_element(param_types_698,n_706))))->mClass->mName,"void")&&((struct sType*)((void*)(__right_value572=list$1void$ph$p_operator_load_element(param_types_698,n_706))))->mPointerNum==1)),                    come_call_finalizer3(__right_value571,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value572,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional8) {
                        list$1void$ph$p_replace(type_checking_param_types_705,n_706,(struct sType*)come_increment_ref_count(any_type_711));
                    }
                    come_call_finalizer3(no_solved_obj_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(it3_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(any_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                n_706++;
            }
            come_call_finalizer3(o2_saved_707,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_params_712=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 782, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        i_713=0;        i_713<list$1void$ph$p_length(fun_661->mParamTypes)-(((method_block_563)?(2):(0)));        i_713++        ){
            list$1CVALUE$ph$p_add(come_params_712,((void*)0));
        }
        first_param_717=(_Bool)1;
        for(        o2_saved_718=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_561)),it_719=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_718));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_718));        it_719=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_718))        ){
            multiple_assign_var23=it_719;
            label_720=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_721=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            first_param_717) {
                first_param_717=(_Bool)0;
            }
            else if(            label_720) {
                n_722=0;
                for(                o2_saved_723=(struct list$1char$ph*)come_increment_ref_count((fun_661->mParamNames)),it_726=list$1char$ph$p_begin((o2_saved_723));                !list$1char$ph$p_end((o2_saved_723));                it_726=list$1char$ph$p_next((o2_saved_723))                ){
                    if(                    string_operator_equals(label_720,it_726)) {
                        break;
                    }
                    n_722++;
                }
                come_call_finalizer3(o2_saved_723,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                Value_729=node_compile(node_721,info);
                if(                !Value_729) {
                    __result_obj__367 = (_Bool)0;
                    (label_720 = come_decrement_ref_count2(label_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_721) ? node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_718,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__367;
                }
                else {
                }
                come_value_730=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional9=(((struct sType*)((void*)(__right_value579=list$1void$ph$p_operator_load_element(param_types_698,n_722)))))),                come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional9) {
                    multiple_assign_var24=((struct tuple2$2bool$char$ph*)(__right_value584=check_assign_type(((char*)(__right_value582=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value580=string_to_string(fun_name_560))),((char*)(__right_value581=int_to_string(n_722)))))),((struct sType*)((void*)(__right_value583=list$1void$ph$p_operator_load_element(type_checking_param_types_705,n_722)))),come_value_730->type,come_value_730,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_6_731=multiple_assign_var24->v1;
                    Err_732=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                    if(                    (_if_conditional10=(Err_732)),                    (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value583,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value584,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional10) {
                        __result_obj__368 = (_Bool)1;
                        (Err_732 = come_decrement_ref_count2(Err_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_730,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_720 = come_decrement_ref_count2(label_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_721) ? node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_718,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__368;
                    }
                    else {
                    }
                    (Err_732 = come_decrement_ref_count2(Err_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional11=(((struct sType*)((void*)(__right_value585=list$1void$ph$p_operator_load_element(param_types_698,n_722))))&&((struct sType*)((void*)(__right_value586=list$1void$ph$p_operator_load_element(param_types_698,n_722))))->mHeap&&come_value_730->type->mHeap)),                come_call_finalizer3(__right_value585,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value586,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional11) {
                    std_move(((struct sType*)((void*)(__right_value587=list$1void$ph$p_operator_load_element(param_types_698,n_722)))),come_value_730->type,come_value_730,info,(_Bool)1);
                    come_call_finalizer3(__right_value587,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_712,n_722,(struct CVALUE*)come_increment_ref_count(come_value_730));
                come_call_finalizer3(come_value_730,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_720 = come_decrement_ref_count2(label_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_721) ? node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_718,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        i_738=0;
        for(        o2_saved_739=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_561)),it_740=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_739));        !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_739));        it_740=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_739))        ){
            multiple_assign_var25=it_740;
            label_741=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            node_742=(struct sNode*)come_increment_ref_count(multiple_assign_var25->v2);
            if(            i_738==0) {
                multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value592=check_assign_type(((char*)(__right_value590=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value588=string_to_string(fun_name_560))),((char*)(__right_value589=int_to_string(i_738)))))),((struct sType*)((void*)(__right_value591=list$1void$ph$p_operator_load_element(type_checking_param_types_705,i_738)))),obj_value_570->type,obj_value_570,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_7_743=multiple_assign_var26->v1;
                Err_744=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                if(                (_if_conditional12=(Err_744)),                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value591,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value592,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional12) {
                    __result_obj__371 = (_Bool)1;
                    (Err_744 = come_decrement_ref_count2(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__371;
                }
                else {
                }
                if(                (_if_conditional13=(((struct sType*)((void*)(__right_value593=list$1void$ph$p_operator_load_element(param_types_698,i_738))))->mHeap&&obj_value_570->type->mHeap)),                come_call_finalizer3(__right_value593,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional13) {
                    std_move(((struct sType*)((void*)(__right_value594=list$1void$ph$p_operator_load_element(param_types_698,i_738)))),obj_value_570->type,obj_value_570,info,(_Bool)1);
                    come_call_finalizer3(__right_value594,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)((void*)(__right_value595=list$1void$ph$p_operator_load_element(param_types_698,i_738))))->mHeap&&!obj_value_570->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value595,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _elif_conditional1) {
                    multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value597=err_msg(info,"require heap parametor(%s)",((char*)(__right_value596=list$1char$ph$p_operator_load_element(fun_661->mParamNames,i_738))))));
                    come_exception_var_8_748=multiple_assign_var27->v1;
                    Err_749=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                    if(                    (_if_conditional14=(Err_749)),                    (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value597,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional14) {
                        __result_obj__374 = (_Bool)1;
                        (Err_749 = come_decrement_ref_count2(Err_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_744 = come_decrement_ref_count2(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__374;
                    }
                    else {
                    }
                    (Err_749 = come_decrement_ref_count2(Err_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph$p_replace(come_params_712,i_738,(struct CVALUE*)come_increment_ref_count(obj_value_570));
                i_738++;
                (Err_744 = come_decrement_ref_count2(Err_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_741) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional15=(((struct CVALUE*)(__right_value598=list$1CVALUE$ph$p_operator_load_element(come_params_712,i_738)))==((void*)0))),                    come_call_finalizer3(__right_value598,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional15) {
                        break;
                    }
                    else {
                        i_738++;
                    }
                }
                Value_750=node_compile(node_742,info);
                if(                !Value_750) {
                    __result_obj__375 = (_Bool)0;
                    (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__375;
                }
                else {
                }
                come_value_751=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional16=(((struct sType*)((void*)(__right_value600=list$1void$ph$p_operator_load_element(param_types_698,i_738)))))),                come_call_finalizer3(__right_value600,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional16) {
                    multiple_assign_var28=((struct tuple2$2bool$char$ph*)(__right_value605=check_assign_type(((char*)(__right_value603=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value601=string_to_string(fun_name_560))),((char*)(__right_value602=int_to_string(i_738)))))),((struct sType*)((void*)(__right_value604=list$1void$ph$p_operator_load_element(type_checking_param_types_705,i_738)))),come_value_751->type,come_value_751,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_9_752=multiple_assign_var28->v1;
                    Err_753=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    if(                    (_if_conditional17=(Err_753)),                    (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    come_call_finalizer3(__right_value604,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value605,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional17) {
                        __result_obj__376 = (_Bool)1;
                        (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__376;
                    }
                    else {
                    }
                    (Err_753 = come_decrement_ref_count2(Err_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional18=(((struct sType*)((void*)(__right_value606=list$1void$ph$p_operator_load_element(param_types_698,i_738))))&&((struct sType*)((void*)(__right_value607=list$1void$ph$p_operator_load_element(param_types_698,i_738))))->mHeap&&come_value_751->type->mHeap)),                come_call_finalizer3(__right_value606,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value607,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                _if_conditional18) {
                    std_move(((struct sType*)((void*)(__right_value608=list$1void$ph$p_operator_load_element(param_types_698,i_738)))),come_value_751->type,come_value_751,info,(_Bool)1);
                    come_call_finalizer3(__right_value608,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                list$1CVALUE$ph$p_replace(come_params_712,i_738,(struct CVALUE*)come_increment_ref_count(come_value_751));
                i_738++;
                come_call_finalizer3(come_value_751,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            (label_741 = come_decrement_ref_count2(label_741, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_742) ? node_742 = come_decrement_ref_count2(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        come_call_finalizer3(o2_saved_739,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional19=(((struct CVALUE*)(__right_value609=list$1CVALUE$ph$p_operator_load_element(come_params_712,i_738)))==((void*)0))),            come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                break;
            }
            else {
                i_738++;
            }
        }
        obj_array_type_754=obj_type_571->mOriginalLoadVarType;
        if(        obj_array_type_754&&list$1sNode$ph$p_length(obj_array_type_754->mArrayNum)>0) {
            array_method_name_755=(char*)come_increment_ref_count(create_method_name(obj_array_type_754,(_Bool)0,fun_name_560,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_660,array_method_name_755)) {
                if(                string_operator_equals(fun_name_560,"to_pointer")) {
                    buf_756=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 895, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_757=0;
                    for(                    o2_saved_758=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_754->mArrayNum)),it_761=list$1sNode$ph$p_begin((o2_saved_758));                    !list$1sNode$ph$p_end((o2_saved_758));                    it_761=list$1sNode$ph$p_next((o2_saved_758))                    ){
                        Value_764=node_compile(it_761,info);
                        if(                        !Value_764) {
                            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value613=err_msg(info,"invalid array num")));
                            come_exception_var_10_765=multiple_assign_var29->v1;
                            Err_766=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional20=(Err_766)),                            come_call_finalizer3(__right_value613,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional20) {
                                __result_obj__383 = (_Bool)1;
                                (Err_766 = come_decrement_ref_count2(Err_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_758,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_755 = come_decrement_ref_count2(array_method_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__383;
                            }
                            else {
                            }
                            (Err_766 = come_decrement_ref_count2(Err_766, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_767=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_756,"%s",come_value_767->c_value);
                        if(                        i_757!=list$1sNode$ph$p_length(obj_array_type_754->mArrayNum)-1) {
                            buffer_append_str(buf_756,"*");
                        }
                        i_757++;
                        come_call_finalizer3(come_value_767,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_758,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_768=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 916, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj122=come_value_768->c_value;
                    come_value_768->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_756));
                    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_768->var=((void*)0);
                    __dec_obj123=come_value_768->type;
                    come_value_768->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 920, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_712,1,(struct CVALUE*)come_increment_ref_count(come_value_768));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_561,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 923, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_756,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_768,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_560,"length")) {
                    buf_772=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 926, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_773=0;
                    for(                    o2_saved_774=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_754->mArrayNum)),it_775=list$1sNode$ph$p_begin((o2_saved_774));                    !list$1sNode$ph$p_end((o2_saved_774));                    it_775=list$1sNode$ph$p_next((o2_saved_774))                    ){
                        Value_776=node_compile(it_775,info);
                        if(                        !Value_776) {
                            multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value628=err_msg(info,"invalid array num")));
                            come_exception_var_11_777=multiple_assign_var30->v1;
                            Err_778=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional21=(Err_778)),                            come_call_finalizer3(__right_value628,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional21) {
                                __result_obj__385 = (_Bool)1;
                                (Err_778 = come_decrement_ref_count2(Err_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_774,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_772,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_755 = come_decrement_ref_count2(array_method_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__385;
                            }
                            else {
                            }
                            (Err_778 = come_decrement_ref_count2(Err_778, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_779=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_772,"%s",come_value_779->c_value);
                        if(                        i_773!=list$1sNode$ph$p_length(obj_array_type_754->mArrayNum)-1) {
                            buffer_append_str(buf_772,"*");
                        }
                        i_773++;
                        come_call_finalizer3(come_value_779,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_774,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_780=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 946, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj127=come_value_780->c_value;
                    come_value_780->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_772));
                    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_780->var=((void*)0);
                    __dec_obj128=come_value_780->type;
                    come_value_780->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 950, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_712,1,(struct CVALUE*)come_increment_ref_count(come_value_780));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_561,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 953, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_772,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_780,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_560,"to_buffer")) {
                    buf_781=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 956, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_782=0;
                    for(                    o2_saved_783=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_754->mArrayNum)),it_784=list$1sNode$ph$p_begin((o2_saved_783));                    !list$1sNode$ph$p_end((o2_saved_783));                    it_784=list$1sNode$ph$p_next((o2_saved_783))                    ){
                        Value_785=node_compile(it_784,info);
                        if(                        !Value_785) {
                            multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value640=err_msg(info,"invalid array num")));
                            come_exception_var_12_786=multiple_assign_var31->v1;
                            Err_787=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                            if(                            (_if_conditional22=(Err_787)),                            come_call_finalizer3(__right_value640,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional22) {
                                __result_obj__386 = (_Bool)1;
                                (Err_787 = come_decrement_ref_count2(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_783,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_755 = come_decrement_ref_count2(array_method_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__386;
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
                        if(                        i_782!=list$1sNode$ph$p_length(obj_array_type_754->mArrayNum)-1) {
                            buffer_append_str(buf_781,"*");
                        }
                        i_782++;
                        come_call_finalizer3(come_value_788,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_783,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_789=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 976, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj129=come_value_789->c_value;
                    come_value_789->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_781));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_789->var=((void*)0);
                    __dec_obj130=come_value_789->type;
                    come_value_789->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 980, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_712,1,(struct CVALUE*)come_increment_ref_count(come_value_789));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_561,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 983, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_781,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_789,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_560,"to_list")) {
                    buf_790=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 986, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_791=0;
                    for(                    o2_saved_792=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_754->mArrayNum)),it_793=list$1sNode$ph$p_begin((o2_saved_792));                    !list$1sNode$ph$p_end((o2_saved_792));                    it_793=list$1sNode$ph$p_next((o2_saved_792))                    ){
                        Value_794=node_compile(it_793,info);
                        if(                        !Value_794) {
                            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value652=err_msg(info,"invalid array num")));
                            come_exception_var_13_795=multiple_assign_var32->v1;
                            Err_796=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                            if(                            (_if_conditional23=(Err_796)),                            come_call_finalizer3(__right_value652,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional23) {
                                __result_obj__387 = (_Bool)1;
                                (Err_796 = come_decrement_ref_count2(Err_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_792,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_755 = come_decrement_ref_count2(array_method_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__387;
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
                        if(                        i_791!=list$1sNode$ph$p_length(obj_array_type_754->mArrayNum)-1) {
                            buffer_append_str(buf_790,"*");
                        }
                        i_791++;
                        come_call_finalizer3(come_value_797,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_792,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_798=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1006, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj131=come_value_798->c_value;
                    come_value_798->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_790));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_798->var=((void*)0);
                    __dec_obj132=come_value_798->type;
                    come_value_798->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1010, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_712,1,(struct CVALUE*)come_increment_ref_count(come_value_798));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_561,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1013, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_798,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_560,"to_vector")) {
                    buf_799=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1016, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                    i_800=0;
                    for(                    o2_saved_801=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_754->mArrayNum)),it_802=list$1sNode$ph$p_begin((o2_saved_801));                    !list$1sNode$ph$p_end((o2_saved_801));                    it_802=list$1sNode$ph$p_next((o2_saved_801))                    ){
                        Value_803=node_compile(it_802,info);
                        if(                        !Value_803) {
                            multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value664=err_msg(info,"invalid array num")));
                            come_exception_var_14_804=multiple_assign_var33->v1;
                            Err_805=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                            if(                            (_if_conditional24=(Err_805)),                            come_call_finalizer3(__right_value664,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional24) {
                                __result_obj__388 = (_Bool)1;
                                (Err_805 = come_decrement_ref_count2(Err_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(o2_saved_801,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(buf_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                (array_method_name_755 = come_decrement_ref_count2(array_method_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__388;
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
                        if(                        i_800!=list$1sNode$ph$p_length(obj_array_type_754->mArrayNum)-1) {
                            buffer_append_str(buf_799,"*");
                        }
                        i_800++;
                        come_call_finalizer3(come_value_806,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_801,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_807=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1036, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                    __dec_obj133=come_value_807->c_value;
                    come_value_807->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_799));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_807->var=((void*)0);
                    __dec_obj134=come_value_807->type;
                    come_value_807->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1040, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph$p_replace(come_params_712,1,(struct CVALUE*)come_increment_ref_count(come_value_807));
                    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_561,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 1043, "struct tuple2$2char$phvoid$p", tuple2$2char$phvoid$p_finalize, tuple2$2char$phvoid$p_clone, tuple2$2char$phvoid$p_get_hash_key, tuple2$2char$phvoid$p_equals)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_799,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_807,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            (array_method_name_755 = come_decrement_ref_count2(array_method_name_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2char$phsNode$ph$ph$p_length(params_561)<list$1void$ph$p_length(fun_661->mParamTypes)+(((method_block_563)?(-2):(0)))) {
            for(            ;            i_738<list$1void$ph$p_length(fun_661->mParamTypes)+(((method_block_563)?(-2):(0)));            i_738++            ){
                default_param_808=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value674=list$1char$ph$p_operator_load_element(fun_661->mParamDefaultParametors,i_738)))));
                (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_809=((char*)(__right_value676=list$1char$ph$p_operator_load_element(fun_661->mParamNames,i_738)));
                (__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional25=(default_param_808&&string_operator_not_equals(default_param_808,"")&&((struct CVALUE*)(__right_value677=list$1CVALUE$ph$p_operator_load_element(come_params_712,i_738)))==((void*)0))),                come_call_finalizer3(__right_value677,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    source_810=(struct buffer*)come_increment_ref_count(info->source);
                    p_811=info->p;
                    head_812=info->head;
                    sline_813=info->sline;
                    __dec_obj135=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_808));
                    come_call_finalizer3(__dec_obj135,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_814=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_815=node_compile(node_814,info);
                    if(                    !Value_815) {
                        __result_obj__389 = (_Bool)0;
                        come_call_finalizer3(source_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        ((node_814) ? node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_808 = come_decrement_ref_count2(default_param_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__389;
                    }
                    else {
                    }
                    __dec_obj136=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_810);
                    come_call_finalizer3(__dec_obj136,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_811;
                    info->head=head_812;
                    info->sline=sline_813;
                    come_value_816=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional26=(((struct sType*)((void*)(__right_value681=list$1void$ph$p_operator_load_element(param_types_698,i_738)))))),                    come_call_finalizer3(__right_value681,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional26) {
                        multiple_assign_var34=((struct tuple2$2bool$char$ph*)(__right_value686=check_assign_type(((char*)(__right_value684=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value682=string_to_string(fun_name_560))),((char*)(__right_value683=int_to_string(i_738)))))),((struct sType*)((void*)(__right_value685=list$1void$ph$p_operator_load_element(type_checking_param_types_705,i_738)))),come_value_816->type,come_value_816,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_15_817=multiple_assign_var34->v1;
                        Err_818=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                        if(                        (_if_conditional27=(Err_818)),                        (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value685,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                        come_call_finalizer3(__right_value686,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional27) {
                            __result_obj__390 = (_Bool)1;
                            (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(source_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            ((node_814) ? node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(come_value_816,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            (default_param_808 = come_decrement_ref_count2(default_param_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__390;
                        }
                        else {
                        }
                        (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional28=(((struct sType*)((void*)(__right_value687=list$1void$ph$p_operator_load_element(param_types_698,i_738))))&&((struct sType*)((void*)(__right_value688=list$1void$ph$p_operator_load_element(param_types_698,i_738))))->mHeap&&come_value_816->type->mHeap)),                    come_call_finalizer3(__right_value687,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value688,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    _if_conditional28) {
                        std_move(((struct sType*)((void*)(__right_value689=list$1void$ph$p_operator_load_element(param_types_698,i_738)))),come_value_816->type,come_value_816,info,(_Bool)1);
                        come_call_finalizer3(__right_value689,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    }
                    list$1CVALUE$ph$p_replace(come_params_712,i_738,(struct CVALUE*)come_increment_ref_count(come_value_816));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_810,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    ((node_814) ? node_814 = come_decrement_ref_count2(node_814, ((struct sNode*)node_814)->finalize, ((struct sNode*)node_814)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value_816,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional29=(((struct CVALUE*)(__right_value690=list$1CVALUE$ph$p_operator_load_element(come_params_712,i_738)))==((void*)0))),                    come_call_finalizer3(__right_value690,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional29) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value691=err_msg(info,"require parametor(%s) %d",fun_661->mName,i_738)));
                        come_exception_var_16_819=multiple_assign_var35->v1;
                        Err_820=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        if(                        (_if_conditional30=(Err_820)),                        come_call_finalizer3(__right_value691,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional30) {
                            __result_obj__391 = (_Bool)1;
                            (Err_820 = come_decrement_ref_count2(Err_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_808 = come_decrement_ref_count2(default_param_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__391;
                        }
                        else {
                        }
                        (Err_820 = come_decrement_ref_count2(Err_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_808 = come_decrement_ref_count2(default_param_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_563) {
            if(            !compile_method_block(method_block_563,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_712),fun_661,fun_name_560,method_block_sline_564,info,(_Bool)0)) {
                __result_obj__392 = (_Bool)0;
                (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__392;
            }
        }
        buf_821=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1103, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_821,generics_fun_name_660);
        buffer_append_str(buf_821,"(");
        j_822=0;
        for(        o2_saved_823=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_712)),it_824=list$1CVALUE$ph$p_begin((o2_saved_823));        !list$1CVALUE$ph$p_end((o2_saved_823));        it_824=list$1CVALUE$ph$p_next((o2_saved_823))        ){
            buffer_append_str(buf_821,it_824->c_value);
            if(            j_822!=list$1CVALUE$ph$p_length(come_params_712)-1) {
                buffer_append_str(buf_821,",");
            }
            j_822++;
        }
        come_call_finalizer3(o2_saved_823,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_821,")");
        come_value2_825=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1122, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        come_value2_825->var=((void*)0);
        if(        obj_type_571->mAnyClass&&string_operator_equals(fun_name_560,"get_hash_key")) {
            __dec_obj137=come_value2_825->c_value;
            come_value2_825->c_value=(char*)come_increment_ref_count(xsprintf("come_call_get_hash_key((void*)0, %s)",obj_value_570->c_value));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj138=come_value2_825->type;
            come_value2_825->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1127, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_825->type->mUnsigned=(_Bool)1;
        }
        else if(        obj_type_571->mAnyClass&&string_operator_equals(fun_name_560,"equals")) {
            __dec_obj139=come_value2_825->c_value;
            come_value2_825->c_value=(char*)come_increment_ref_count(xsprintf("come_call_equals((void*)0, %s, %s)",obj_value_570->c_value,((struct CVALUE*)(__right_value699=list$1CVALUE$ph$p_operator_load_element(come_params_712,1)))->c_value));
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(__right_value699,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj140=come_value2_825->type;
            come_value2_825->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 1132, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value2_825->type->mUnsigned=(_Bool)1;
        }
        else {
            __dec_obj141=come_value2_825->c_value;
            come_value2_825->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_821));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            generics_any_child_826=(_Bool)0;
            obj_type2_827=(struct sType*)come_increment_ref_count(obj_type_571);
            if(            obj_type2_827->mNoSolvedGenericsType) {
                __dec_obj142=obj_type2_827;
                obj_type2_827=(struct sType*)come_increment_ref_count(obj_type2_827->mNoSolvedGenericsType);
                come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                for(                o2_saved_828=(struct list$1void$ph*)come_increment_ref_count((obj_type2_827->mGenericsTypes)),it_829=((struct sType*)list$1void$ph$p_begin((o2_saved_828)));                !list$1void$ph$p_end((o2_saved_828));                it_829=((struct sType*)list$1void$ph$p_next((o2_saved_828)))                ){
                    if(                    it_829->mAnyOriginalType) {
                        generics_any_child_826=(_Bool)1;
                    }
                }
                come_call_finalizer3(o2_saved_828,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            result_type2_697->mAnyOriginalType&&generics_fun_659&&obj_type_571->mNoSolvedGenericsType) {
                obj_type2_830=(struct sType*)come_increment_ref_count(obj_type_571->mNoSolvedGenericsType);
                __dec_obj143=result_type2_697;
                result_type2_697=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_659->mResultType,obj_type2_830,info));
                come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj144=come_value2_825->type;
                come_value2_825->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_697));
                come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_825->type->mStatic=(_Bool)0;
                if(                result_type2_697->mHeap) {
                    append_object_to_right_values2(come_value2_825,(struct sType*)come_increment_ref_count(result_type2_697),info,(_Bool)0);
                }
                come_call_finalizer3(obj_type2_830,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            generics_fun_659&&generics_any_child_826) {
                __dec_obj145=result_type2_697;
                result_type2_697=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_659->mResultType,obj_type2_827,info));
                come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj146=come_value2_825->type;
                come_value2_825->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_697));
                come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_825->type->mStatic=(_Bool)0;
                if(                result_type2_697->mHeap) {
                    append_object_to_right_values2(come_value2_825,(struct sType*)come_increment_ref_count(result_type2_697),info,(_Bool)0);
                }
            }
            else {
                __dec_obj147=come_value2_825->type;
                come_value2_825->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_697));
                come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value2_825->type->mStatic=(_Bool)0;
                if(                result_type2_697->mHeap) {
                    append_object_to_right_values2(come_value2_825,(struct sType*)come_increment_ref_count(result_type2_697),info,(_Bool)0);
                }
            }
            __dec_obj148=come_value2_825->c_value;
            come_value2_825->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_825->c_value,come_value2_825->type,info));
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj149=come_value2_825;
            come_value2_825=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_825),info));
            come_call_finalizer3(__dec_obj149,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(obj_type2_827,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        add_come_last_code(info,"%s",come_value2_825->c_value);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_825));
        if(        is_contained_method_generics_types(obj_type_571,info)&&generics_fun_name_660) {
            map$2void$phvoid$ph$p_remove(info->funcs,((char*)(__right_value711=__builtin_string(generics_fun_name_660))));
            (__right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(info->method_generics_types,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj150=info->method_generics_types;
        info->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(method_generics_types_before_568);
        come_call_finalizer3(__dec_obj150,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_661;
        (generics_fun_name_660 = come_decrement_ref_count2(generics_fun_name_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_689,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_697,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_698,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_checking_param_types_705,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_712,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_821,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_825,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__393 = (_Bool)1;
    (fun_name_560 = come_decrement_ref_count2(fun_name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_561,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((obj_562) ? obj_562 = come_decrement_ref_count2(obj_562, ((struct sNode*)obj_562)->finalize, ((struct sNode*)obj_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(method_block_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_566,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_568,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_571,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__393;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__321;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_552;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_553;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__326;
    if(    self==((void*)0)) {
        __result_obj__321 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__321,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__321;
    }
    result_552=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_553=self->head;
    while(it_553!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_552,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_553->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_552,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_553->item)));
        }
        it_553=it_553->next;
    }
    __result_obj__326 = come_increment_ref_count(result_552);
    come_call_finalizer3(result_552,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__326,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_550;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_551;
    it_550=self->head;
    while(it_550!=((void*)0)) {
        prev_it_551=it_550;
        it_550=it_550->next;
        come_call_finalizer3(prev_it_551,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__322;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__322 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__322,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__322;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value436 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_554;
struct tuple2$2char$phsNode$ph* __dec_obj84;
void* __right_value437 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_555;
struct tuple2$2char$phsNode$ph* __dec_obj85;
void* __right_value438 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_556;
struct tuple2$2char$phsNode$ph* __dec_obj86;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__323;
    if(    self->len==0) {
        litem_554=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value436=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_554->prev=((void*)0);
        litem_554->next=((void*)0);
        __dec_obj84=litem_554->item;
        litem_554->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_554;
        self->head=litem_554;
    }
    else if(    self->len==1) {
        litem_555=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value437=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_555->prev=self->head;
        litem_555->next=((void*)0);
        __dec_obj85=litem_555->item;
        litem_555->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_555;
        self->head->next=litem_555;
    }
    else {
        litem_556=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value438=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_556->prev=self->tail;
        litem_556->next=((void*)0);
        __dec_obj86=litem_556->item;
        litem_556->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_556;
        self->tail=litem_556;
    }
    self->len++;
    __result_obj__323 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__323;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__324;
void* __right_value439 = (void*)0;
struct tuple2$2char$phsNode$ph* result_557;
void* __right_value440 = (void*)0;
char* __dec_obj87;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj88;
struct tuple2$2char$phsNode$ph* __result_obj__325;
    if(    self==(void*)0) {
        __result_obj__324 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__324,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__324;
    }
    result_557=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj87=result_557->v1;
        result_557->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj88=result_557->v2;
        result_557->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__325 = come_increment_ref_count(result_557);
    come_call_finalizer3(result_557,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__325,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__325;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_558;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_559;
    it_558=self->head;
    while(it_558!=((void*)0)) {
        prev_it_559=it_558;
        it_558=it_558->next;
        come_call_finalizer3(prev_it_559,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1CVALUE$ph* __result_obj__330;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__330 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__330,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__330;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_586;
int i_587;
struct CVALUE* __result_obj__332;
struct CVALUE* default_value_588;
struct CVALUE* __result_obj__333;
default_value_588 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_586=self->head;
    i_587=0;
    while(it_586!=((void*)0)) {
        if(        position==i_587) {
            __result_obj__332 = come_increment_ref_count(it_586->item);
            come_call_finalizer3(__result_obj__332,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__332;
        }
        it_586=it_586->next;
        i_587++;
    }
    memset(&default_value_588,0,sizeof(struct CVALUE*));
    __result_obj__333 = come_increment_ref_count(default_value_588);
    come_call_finalizer3(default_value_588,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_601;
struct tuple2$2char$phsNode$ph* __result_obj__334;
struct tuple2$2char$phsNode$ph* __result_obj__335;
struct tuple2$2char$phsNode$ph* result_602;
struct tuple2$2char$phsNode$ph* __result_obj__336;
result_601 = (void*)0;
result_602 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_601,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__334 = result_601;
        return __result_obj__334;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__335 = self->it->item;
        return __result_obj__335;
    }
    memset(&result_602,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__336 = result_602;
    return __result_obj__336;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_604;
struct tuple2$2char$phsNode$ph* __result_obj__337;
struct tuple2$2char$phsNode$ph* __result_obj__338;
struct tuple2$2char$phsNode$ph* result_605;
struct tuple2$2char$phsNode$ph* __result_obj__339;
result_604 = (void*)0;
result_605 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_604,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__337 = result_604;
        return __result_obj__337;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__338 = self->it->item;
        return __result_obj__338;
    }
    memset(&result_605,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__339 = result_605;
    return __result_obj__339;
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
struct CVALUE* result_652;
struct CVALUE* __result_obj__344;
struct CVALUE* __result_obj__345;
struct CVALUE* result_653;
struct CVALUE* __result_obj__346;
result_652 = (void*)0;
result_653 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_652,0,sizeof(struct CVALUE*));
        __result_obj__344 = result_652;
        return __result_obj__344;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__345 = self->it->item;
        return __result_obj__345;
    }
    memset(&result_653,0,sizeof(struct CVALUE*));
    __result_obj__346 = result_653;
    return __result_obj__346;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_655;
struct CVALUE* __result_obj__347;
struct CVALUE* __result_obj__348;
struct CVALUE* result_656;
struct CVALUE* __result_obj__349;
result_655 = (void*)0;
result_656 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_655,0,sizeof(struct CVALUE*));
        __result_obj__347 = result_655;
        return __result_obj__347;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__348 = self->it->item;
        return __result_obj__348;
    }
    memset(&result_656,0,sizeof(struct CVALUE*));
    __result_obj__349 = result_656;
    return __result_obj__349;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__354;
void* __right_value548 = (void*)0;
struct sMethodCallNode* result_692;
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
struct sMethodCallNode* __result_obj__355;
    if(    self==(void*)0) {
        __result_obj__354 = (void*)0;
        return __result_obj__354;
    }
    result_692=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_692->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result_692->sname;
        result_692->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj113=result_692->obj;
        result_692->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj114=result_692->fun_name;
        result_692->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj115=result_692->params;
        result_692->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        come_call_finalizer3(__dec_obj115,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj116=result_692->method_block;
        result_692->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj116,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj117=result_692->method_generics_types;
        result_692->method_generics_types=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj117,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_692->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_692->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_692->fun=self->fun;
    }
    __result_obj__355 = result_692;
    come_call_finalizer3(result_692,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__355;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value575 = (void*)0;
struct list_item$1CVALUE$ph* litem_714;
struct CVALUE* __dec_obj118;
void* __right_value576 = (void*)0;
struct list_item$1CVALUE$ph* litem_715;
struct CVALUE* __dec_obj119;
void* __right_value577 = (void*)0;
struct list_item$1CVALUE$ph* litem_716;
struct CVALUE* __dec_obj120;
struct list$1CVALUE$ph* __result_obj__360;
    if(    self->len==0) {
        litem_714=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value575=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1387, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_714->prev=((void*)0);
        litem_714->next=((void*)0);
        __dec_obj118=litem_714->item;
        litem_714->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_714;
        self->head=litem_714;
    }
    else if(    self->len==1) {
        litem_715=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value576=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1397, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_715->prev=self->head;
        litem_715->next=((void*)0);
        __dec_obj119=litem_715->item;
        litem_715->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_715;
        self->head->next=litem_715;
    }
    else {
        litem_716=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value577=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1407, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_716->prev=self->tail;
        litem_716->next=((void*)0);
        __dec_obj120=litem_716->item;
        litem_716->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj120,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_716;
        self->tail=litem_716;
    }
    self->len++;
    __result_obj__360 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__360;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_724;
char* __result_obj__361;
char* __result_obj__362;
char* result_725;
char* __result_obj__363;
result_724 = (void*)0;
result_725 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_724,0,sizeof(char*));
        __result_obj__361 = result_724;
        return __result_obj__361;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__362 = self->it->item;
        return __result_obj__362;
    }
    memset(&result_725,0,sizeof(char*));
    __result_obj__363 = result_725;
    return __result_obj__363;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_727;
char* __result_obj__364;
char* __result_obj__365;
char* result_728;
char* __result_obj__366;
result_727 = (void*)0;
result_728 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_727,0,sizeof(char*));
        __result_obj__364 = result_727;
        return __result_obj__364;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__365 = self->it->item;
        return __result_obj__365;
    }
    memset(&result_728,0,sizeof(char*));
    __result_obj__366 = result_728;
    return __result_obj__366;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_733;
int i_734;
struct CVALUE* default_value_735;
struct list$1CVALUE$ph* __result_obj__369;
struct list_item$1CVALUE$ph* it_736;
int i_737;
struct CVALUE* __dec_obj121;
struct list$1CVALUE$ph* __result_obj__370;
default_value_735 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_733=self->len;
        for(        i_734=0;        i_734<position-len_733;        i_734++        ){
            memset(&default_value_735,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_735));
            come_call_finalizer3(default_value_735,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__369 = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__369;
    }
    it_736=self->head;
    i_737=0;
    while(it_736!=((void*)0)) {
        if(        position==i_737) {
            __dec_obj121=it_736->item;
            it_736->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj121,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_736=it_736->next;
        i_737++;
    }
    __result_obj__370 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__370;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_745;
int i_746;
char* __result_obj__372;
char* default_value_747;
char* __result_obj__373;
default_value_747 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_745=self->head;
    i_746=0;
    while(it_745!=((void*)0)) {
        if(        position==i_746) {
            __result_obj__372 = come_increment_ref_count(it_745->item);
            (__result_obj__372 = come_decrement_ref_count2(__result_obj__372, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__372;
        }
        it_745=it_745->next;
        i_746++;
    }
    memset(&default_value_747,0,sizeof(char*));
    __result_obj__373 = come_increment_ref_count(default_value_747);
    (default_value_747 = come_decrement_ref_count2(default_value_747, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__373 = come_decrement_ref_count2(__result_obj__373, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__373;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_759;
struct sNode* __result_obj__377;
struct sNode* __result_obj__378;
struct sNode* result_760;
struct sNode* __result_obj__379;
result_759 = (void*)0;
result_760 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_759,0,sizeof(struct sNode*));
        __result_obj__377 = result_759;
        return __result_obj__377;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__378 = self->it->item;
        return __result_obj__378;
    }
    memset(&result_760,0,sizeof(struct sNode*));
    __result_obj__379 = result_760;
    return __result_obj__379;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_762;
struct sNode* __result_obj__380;
struct sNode* __result_obj__381;
struct sNode* result_763;
struct sNode* __result_obj__382;
result_762 = (void*)0;
result_763 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_762,0,sizeof(struct sNode*));
        __result_obj__380 = result_762;
        return __result_obj__380;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__381 = self->it->item;
        return __result_obj__381;
    }
    memset(&result_763,0,sizeof(struct sNode*));
    __result_obj__382 = result_763;
    return __result_obj__382;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value620 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_769;
struct tuple2$2char$phsNode$ph* __dec_obj124;
void* __right_value621 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_770;
struct tuple2$2char$phsNode$ph* __dec_obj125;
void* __right_value622 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_771;
struct tuple2$2char$phsNode$ph* __dec_obj126;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__384;
    if(    self->len==0) {
        litem_769=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value620=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1457, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_769->prev=((void*)0);
        litem_769->next=((void*)0);
        __dec_obj124=litem_769->item;
        litem_769->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_769;
        self->head=litem_769;
    }
    else if(    self->len==1) {
        litem_770=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value621=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1467, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_770->prev=self->head;
        litem_770->next=((void*)0);
        __dec_obj125=litem_770->item;
        litem_770->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_770;
        self->head->next=litem_770;
    }
    else {
        litem_771=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value622=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1477, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_771->prev=self->tail;
        litem_771->next=((void*)0);
        __dec_obj126=litem_771->item;
        litem_771->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj126,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_771;
        self->tail=litem_771;
    }
    self->len++;
    __result_obj__384 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__384;
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
struct sNode* node_831;
void* __right_value715 = (void*)0;
struct sNode* __dec_obj151;
struct sNode* __result_obj__394;
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
    node_831=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value713,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj151=node_831;
    node_831=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_831),info));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__394 = come_increment_ref_count(node_831);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_831) ? node_831 = come_decrement_ref_count2(node_831, ((struct sNode*)node_831)->finalize, ((struct sNode*)node_831)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__394) ? __result_obj__394 = come_decrement_ref_count2(__result_obj__394, ((struct sNode*)__result_obj__394)->finalize, ((struct sNode*)__result_obj__394)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__394;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_832;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
_Bool parse_method_generics_type_834;
char* p_835;
int sline_836;
void* __right_value721 = (void*)0;
char* word_837;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1void$ph* method_generics_types_838;
void* __right_value724 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c6_839=0;
char* Err_840=0;
void* __right_value725 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_841=0;
char* name_842=0;
_Bool err_843=0;
void* __right_value726 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c7_844=0;
char* Err_845=0;
void* __right_value727 = (void*)0;
char* p_846;
int sline_847;
_Bool err_flag_848;
void* __right_value728 = (void*)0;
char* label_849;
void* __right_value729 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
_Bool no_comma_850;
_Bool in_fun_param_851;
void* __right_value730 = (void*)0;
struct sNode* node_852;
void* __right_value731 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* method_block_853;
int method_block_sline_854;
char* head_855;
void* __right_value734 = (void*)0;
char* tail_856;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct buffer* __dec_obj157;
int len_857;
void* __right_value737 = (void*)0;
char* mem_858;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value741 = (void*)0;
struct sNode* node_859;
void* __right_value742 = (void*)0;
struct sNode* __dec_obj158;
struct sNode* __result_obj__396;
    params_832=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1213, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_832,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1214, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_834=(_Bool)0;
    {
        p_835=info->p;
        sline_836=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_837=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_837,info)) {
                    parse_method_generics_type_834=(_Bool)1;
                }
                (word_837 = come_decrement_ref_count2(word_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_835;
        info->sline=sline_836;
    }
    method_generics_types_838=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "20method.c", 1244, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    if(    parse_method_generics_type_834&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value724=err_msg(info,"unexpected source end")));
                come_exception_var_c6_839=multiple_assign_var36->v1;
                Err_840=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                ((Err_840)?(puts(Err_840),exit(0)):(0));
                come_call_finalizer3(__right_value724,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_840 = come_decrement_ref_count2(Err_840, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                type_841=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
                name_842=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                err_843=multiple_assign_var37->v3;
                come_call_finalizer3(__right_value725,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_843) {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value726=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c7_844=multiple_assign_var38->v1;
                    Err_845=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_845)?(puts(Err_845),exit(0)):(0));
                    come_call_finalizer3(__right_value726,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_845 = come_decrement_ref_count2(Err_845, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1void$ph$p_push_back(method_generics_types_838,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_841)));
                come_call_finalizer3(type_841,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_842 = come_decrement_ref_count2(name_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            p_846=info->p;
            sline_847=info->sline;
            err_flag_848=(_Bool)0;
            label_849=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj154=label_849;
                label_849=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_848=(_Bool)1;
            }
            if(            err_flag_848==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj155=label_849;
                label_849=((void*)0);
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_846;
                info->sline=sline_847;
            }
            no_comma_850=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_851=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_852=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj156=node_852;
            node_852=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_852),info));
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_851;
            info->no_comma=no_comma_850;
            list$1tuple2$2char$phsNode$ph$ph$p_push_back(params_832,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1320, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(label_849),(struct sNode*)come_increment_ref_count(node_852))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_849 = come_decrement_ref_count2(label_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_852) ? node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_849 = come_decrement_ref_count2(label_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_852) ? node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_853=((void*)0);
    method_block_sline_854=0;
    if(    *info->p==123) {
        head_855=info->p;
        method_block_sline_854=info->sline;
        ((char*)(__right_value734=skip_block(info)));
        (__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_856=info->p;
        __dec_obj157=method_block_853;
        method_block_853=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1344, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj157,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_857=tail_856-head_855;
        mem_858=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_857+1)), "20method.c", 1347, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_858,head_855,len_857);
        mem_858[len_857]=0;
        buffer_append_str(method_block_853,mem_858);
        buffer_append_str(method_block_853,"\n");
        (mem_858 = come_decrement_ref_count2(mem_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1359, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value740=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1359, "struct sMethodCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_832),method_block_853,method_block_sline_854,method_generics_types_838,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_859=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value740,sMethodCallNode_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj158=node_859;
    node_859=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_859),info));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__396 = come_increment_ref_count(node_859);
    ((obj) ? obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(params_832,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_838,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
    ((node_859) ? node_859 = come_decrement_ref_count2(node_859, ((struct sNode*)node_859)->finalize, ((struct sNode*)node_859)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count2(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__396;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_833;
    result_833=0;
    result_833+=int_get_hash_key(((int)self->v1));
    result_833+=int_get_hash_key(((int)self->v2));
    return result_833;
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
struct tuple2$2char$phsNode$ph* __result_obj__395;
    __dec_obj152=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__395 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__395,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__395;
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
struct sNode* __result_obj__397;
void* __right_value746 = (void*)0;
struct sNode* __result_obj__398;
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
        __result_obj__397 = come_increment_ref_count(((struct sNode*)(__right_value745=_inf_value6)));
        come_call_finalizer3(__right_value744,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value745) ? __right_value745 = come_decrement_ref_count2(__right_value745, ((struct sNode*)__right_value745)->finalize, ((struct sNode*)__right_value745)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__397) ? __result_obj__397 = come_decrement_ref_count2(__result_obj__397, ((struct sNode*)__result_obj__397)->finalize, ((struct sNode*)__result_obj__397)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__397;
    }
    __result_obj__398 = come_increment_ref_count(((struct sNode*)(__right_value746=string_node_v17(buf,head,head_sline,info))));
    ((__right_value746) ? __right_value746 = come_decrement_ref_count2(__right_value746, ((struct sNode*)__right_value746)->finalize, ((struct sNode*)__right_value746)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__398) ? __result_obj__398 = come_decrement_ref_count2(__result_obj__398, ((struct sNode*)__result_obj__398)->finalize, ((struct sNode*)__result_obj__398)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__398;
}

