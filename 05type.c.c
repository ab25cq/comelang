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

struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$
{
    struct list$1void$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2bool$void$p
{
    _Bool v1;
    void* v2;
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
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static _Bool list$1char$ph$p_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
void skip_paren(struct sInfo* info);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1void$ph* list$1void$ph_clone(struct list$1void$ph* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_finalize(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self);
static struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_clone(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self);
static unsigned int tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_get_hash_key(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self);
static _Bool tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_equals(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* left, struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* right);
static struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_initialize(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self, struct list$1void$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$$p_finalize(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self);
static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static unsigned int tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static _Bool tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right);
static struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1void$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2);
static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self);
static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self);
static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right);
static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right);
static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item);
static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sClass* klass_354;
void* __right_value260 = (void*)0;
struct sType* type_358;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sClass* generics_class_359;
void* __right_value263 = (void*)0;
_Bool generics_type_name_360;
void* __right_value264 = (void*)0;
_Bool mgenerics_type_name_366;
    klass_354=((struct sClass*)((void*)(__right_value259=map$2void$phvoid$ph$p_operator_load_element(info->classes,buf))));
    come_call_finalizer3(__right_value259,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    type_358=((struct sType*)((void*)(__right_value260=map$2void$phvoid$ph$p_operator_load_element(info->types,buf))));
    come_call_finalizer3(__right_value260,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_class_359=((struct sClass*)((void*)(__right_value262=map$2void$phvoid$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value261=__builtin_string(buf)))))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value262,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    generics_type_name_360=list$1char$ph$p_contained(info->generics_type_names,((char*)(__right_value263=__builtin_string(buf))));
    (__right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_366=list$1char$ph$p_contained(info->method_generics_type_names,((char*)(__right_value264=__builtin_string(buf))));
    (__right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC) {
        return (type_358&&type_358->mTypedef)||(klass_354&&klass_354->mNumber)||(klass_354&&klass_354->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_359||generics_type_name_360||mgenerics_type_name_366||klass_354||type_358||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* default_value_355;
unsigned int hash_356;
unsigned int it_357;
void* __result_obj__241;
void* __result_obj__242;
void* __result_obj__243;
void* __result_obj__244;
default_value_355 = (void*)0;
    memset(&default_value_355,0,sizeof(void*));
    hash_356=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_357=hash_356;
    while((_Bool)1) {
        if(        self->item_existance[it_357]) {
            if(            come_call_equals((void*)0, self->keys[it_357], ((char*)key))) {
                __result_obj__241 = come_increment_ref_count(self->items[it_357]);
                come_call_finalizer3(default_value_355,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__241,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__241;
            }
            it_357++;
            if(            it_357>=self->size) {
                it_357=0;
            }
            else if(            it_357==hash_356) {
                __result_obj__242 = come_increment_ref_count(((struct sClass*)default_value_355));
                come_call_finalizer3(default_value_355,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__242,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = come_increment_ref_count(((struct sClass*)default_value_355));
            come_call_finalizer3(default_value_355,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__243,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = come_increment_ref_count(((struct sClass*)default_value_355));
    come_call_finalizer3(default_value_355,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__244,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__244;
}

static _Bool list$1char$ph$p_contained(struct list$1char$ph* self, char* item){
char* it_363;
    for(    it_363=list$1char$ph$p_begin(self);    !list$1char$ph$p_end(self);    it_363=list$1char$ph$p_next(self)    ){
        if(        string_equals(it_363,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_361;
char* __result_obj__245;
char* __result_obj__246;
char* result_362;
char* __result_obj__247;
result_361 = (void*)0;
result_362 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_361,0,sizeof(char*));
        __result_obj__245 = result_361;
        return __result_obj__245;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__246 = self->it->item;
        return __result_obj__246;
    }
    memset(&result_362,0,sizeof(char*));
    __result_obj__247 = result_362;
    return __result_obj__247;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_364;
char* __result_obj__248;
char* __result_obj__249;
char* result_365;
char* __result_obj__250;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_364,0,sizeof(char*));
        __result_obj__248 = result_364;
        return __result_obj__248;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__249 = self->it->item;
        return __result_obj__249;
    }
    memset(&result_365,0,sizeof(char*));
    __result_obj__250 = result_365;
    return __result_obj__250;
}

void skip_paren(struct sInfo* info){
int nest_367;
void* __right_value265 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_368=0;
char* Err_369=0;
    nest_367=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_367++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_367--;
            if(            nest_367==0) {
                break;
            }
        }
        else if(        *info->p==0) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value265=err_msg(info,"invalid the source end. require )")));
            come_exception_var_c1_368=multiple_assign_var1->v1;
            Err_369=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_369)?(puts(Err_369),exit(0)):(0));
            come_call_finalizer3(__right_value265,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            (Err_369 = come_decrement_ref_count2(Err_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
            (Err_369 = come_decrement_ref_count2(Err_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
        }
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_370;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_370=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_370==59||c_370==32||c_370==9||c_370==10||c_370==10||c_370==40);
}

char* parse_word(struct sInfo* info){
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct buffer* buf_371;
void* __right_value268 = (void*)0;
_Bool _if_conditional1;
void* __right_value269 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_372=0;
char* Err_373=0;
void* __right_value270 = (void*)0;
char* __result_obj__251;
void* __right_value271 = (void*)0;
char* result_374;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
_Bool _if_conditional2;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
char* __result_obj__252;
char* __result_obj__253;
    buf_371=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 96, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_371,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value268=buffer_to_string(buf_371))))==0)),    (__right_value268 = come_decrement_ref_count2(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional1) {
        multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value269=err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line)));
        come_exception_var_c2_372=multiple_assign_var2->v1;
        Err_373=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        ((Err_373)?(puts(Err_373),exit(0)):(0));
        come_call_finalizer3(__right_value269,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__251 = come_increment_ref_count(((char*)(__right_value270=__builtin_string(""))));
        (Err_373 = come_decrement_ref_count2(Err_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(buf_371,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (__right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__251 = come_decrement_ref_count2(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__251;
        (Err_373 = come_decrement_ref_count2(Err_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_374=(char*)come_increment_ref_count(buffer_to_string(buf_371));
    if(    (_if_conditional2=(info->module_params&&((char*)((void*)(__right_value273=map$2void$phvoid$ph$p_operator_load_element(info->module_params,((char*)(__right_value272=__builtin_string(result_374))))))))),    (__right_value272 = come_decrement_ref_count2(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value273,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional2) {
        __result_obj__252 = come_increment_ref_count(((char*)(__right_value276=__builtin_string(((char*)((void*)(__right_value275=map$2void$phvoid$ph$p_operator_load_element(info->module_params,((char*)(__right_value274=__builtin_string(result_374)))))))))));
        come_call_finalizer3(buf_371,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (result_374 = come_decrement_ref_count2(result_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value274 = come_decrement_ref_count2(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value275,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        (__right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__252 = come_decrement_ref_count2(__result_obj__252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__252;
    }
    __result_obj__253 = come_increment_ref_count(result_374);
    come_call_finalizer3(buf_371,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (result_374 = come_decrement_ref_count2(result_374, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__253 = come_decrement_ref_count2(__result_obj__253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

char* backtrace_parse_word(struct sInfo* info){
char* p_375;
int sline_376;
char* buf_377;
void* __right_value277 = (void*)0;
char* __dec_obj23;
void* __right_value278 = (void*)0;
char* __dec_obj24;
char* __result_obj__254;
buf_377 = (void*)0;
    p_375=info->p;
    sline_376=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj23=buf_377;
        buf_377=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj24=buf_377;
        buf_377=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_375;
    info->sline=sline_376;
    __result_obj__254 = come_increment_ref_count(buf_377);
    (buf_377 = come_decrement_ref_count2(buf_377, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count2(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
}

void skip_spaces_and_lf2(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_378;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct buffer* fname_379;
void* __right_value281 = (void*)0;
char* __dec_obj25;
int nest_380;
    while(1) {
        if(        *info->p==35) {
            skip_spaces_and_lf2(info);
            info->p++;
            skip_spaces_and_lf2(info);
            if(            strmemcmp(info->p,"pragma")) {
                while(*info->p) {
                    if(                    *info->p==10) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            else if(            xisdigit(*info->p)) {
                line_378=0;
                fname_379=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 195, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                while(xisdigit(*info->p)) {
                    line_378=line_378*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_379,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_378;
                __dec_obj25=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_379));
                __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_379,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            skip_spaces_and_lf2(info);
        }
        else if(        *info->p==47&&*(info->p+1)==42) {
            nest_380=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_380++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_380--;
                    if(                    nest_380==0) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        *info->p==47&&*(info->p+1)==47) {
            info->p+=2;
            while(1) {
                if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    skip_spaces_and_lf2(info);
                    break;
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        strmemcmp(info->p,"__extension__")) {
            info->p+=strlen("__extension__");
            skip_spaces_and_lf2(info);
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1void$ph* o2_saved_381;
struct sType* it_384;
_Bool __result_obj__261;
    for(    o2_saved_381=(struct list$1void$ph*)come_increment_ref_count((type->mGenericsTypes)),it_384=((struct sType*)list$1void$ph$p_begin((o2_saved_381)));    !list$1void$ph$p_end((o2_saved_381));    it_384=((struct sType*)list$1void$ph$p_next((o2_saved_381)))    ){
        if(        is_contained_generics_class(it_384,info)) {
            __result_obj__261 = (_Bool)1;
            come_call_finalizer3(o2_saved_381,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__261;
        }
    }
    come_call_finalizer3(o2_saved_381,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_382;
void* __result_obj__255;
void* __result_obj__256;
void* result_383;
void* __result_obj__257;
result_382 = (void*)0;
result_383 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_382,0,sizeof(void*));
        __result_obj__255 = result_382;
        return __result_obj__255;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__256 = self->it->item;
        return __result_obj__256;
    }
    memset(&result_383,0,sizeof(void*));
    __result_obj__257 = result_383;
    return __result_obj__257;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_385;
void* __result_obj__258;
void* __result_obj__259;
void* result_386;
void* __result_obj__260;
result_385 = (void*)0;
result_386 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_385,0,sizeof(void*));
        __result_obj__258 = result_385;
        return __result_obj__258;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__259 = self->it->item;
        return __result_obj__259;
    }
    memset(&result_386,0,sizeof(void*));
    __result_obj__260 = result_386;
    return __result_obj__260;
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_387;
struct list_item$1void$ph* prev_it_388;
    it_387=self->head;
    while(it_387!=((void*)0)) {
        prev_it_388=it_387;
        it_387=it_387->next;
        come_call_finalizer3(prev_it_388,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1void$ph* param_types_391;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1char$ph* param_names_392;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1char$ph* param_default_parametors_393;
_Bool var_args_394;
void* __right_value292 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* type__398;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool void_param_424;
char* p_425;
int sline_426;
void* __right_value331 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* param_type_427=0;
char* param_name_428=0;
_Bool err_429=0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__282;
void* __right_value335 = (void*)0;
struct sType* param_type2_432;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* p_436;
_Bool no_comma_437;
void* __right_value341 = (void*)0;
struct sNode* node_438;
char* p2_439;
void* __right_value342 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__287;
    param_types_391=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05type.c", 324, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    param_names_392=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 325, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_default_parametors_393=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 326, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    var_args_394=(_Bool)0;
    if(    in_constructor_) {
        list$1char$ph$p_add(param_names_392,(char*)come_increment_ref_count(xsprintf("self")));
        type__398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__398->mHeap=(_Bool)1;
        list$1void$ph$p_add(param_types_391,(struct sType*)come_increment_ref_count(type__398));
        list$1char$ph$p_add(param_default_parametors_393,((void*)0));
        come_call_finalizer3(type__398,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1char$ph$p_add(param_names_392,(char*)come_increment_ref_count(xsprintf("self")));
        list$1void$ph$p_add(param_types_391,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1char$ph$p_add(param_default_parametors_393,((void*)0));
    }
    expected_next_character(40,info);
    void_param_424=(_Bool)0;
    {
        p_425=info->p;
        sline_426=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_424=(_Bool)1;
            }
        }
        info->p=p_425;
        info->sline=sline_426;
    }
    if(    void_param_424) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value331=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_427=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            param_name_428=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_429=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value331,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_429) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__282 = come_increment_ref_count(((struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$*)(__right_value334=tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_initialize((struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$**)come_increment_ref_count((struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$*)come_calloc(1, sizeof(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$)*(1), "05type.c", 388, "struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$", tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_finalize, tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_clone, tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_get_hash_key, tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_equals)),(struct list$1void$ph*)((void*)0),(struct list$1char$ph*)((void*)0),(struct list$1char$ph*)((void*)0),(_Bool)0))));
                come_call_finalizer3(param_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
                (param_name_428 = come_decrement_ref_count2(param_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_types_391,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_392,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_393,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value334,tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__282,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__282;
            }
            param_type2_432=(struct sType*)come_increment_ref_count(solve_generics(param_type_427,info->generics_type,info));
            list$1void$ph$p_push_back(param_types_391,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_432)));
            list$1char$ph$p_push_back(param_names_392,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_428)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_436=info->p;
                no_comma_437=info->no_comma;
                info->no_comma=(_Bool)1;
                node_438=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_437;
                p2_439=info->p;
                char buf_440[p2_439-p_436+1];
                memset(&buf_440, 0, sizeof(char)                *(p2_439-p_436+1)                );
                memcpy(buf_440,p_436,p2_439-p_436);
                buf_440[p2_439-p_436]=0;
                list$1char$ph$p_push_back(param_default_parametors_393,(char*)come_increment_ref_count(__builtin_string(buf_440)));
                ((node_438) ? node_438 = come_decrement_ref_count2(node_438, ((struct sNode*)node_438)->finalize, ((struct sNode*)node_438)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                list$1char$ph$p_push_back(param_default_parametors_393,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_394=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_428 = come_decrement_ref_count2(param_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(param_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
                (param_name_428 = come_decrement_ref_count2(param_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            (param_name_428 = come_decrement_ref_count2(param_name_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_type2_432,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result_obj__287 = come_increment_ref_count(((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value348=tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 446, "struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$", tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone, tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key, tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals)),(struct list$1void$ph*)come_increment_ref_count(param_types_391),(struct list$1char$ph*)come_increment_ref_count(param_names_392),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_393),var_args_394))));
    come_call_finalizer3(param_types_391,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_392,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_393,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value348,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__287,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__287;
}

static struct list$1void$ph* list$1void$ph_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__262;
void* __right_value282 = (void*)0;
struct list$1void$ph* result_389;
struct list$1void$ph* __result_obj__263;
    if(    self==(void*)0) {
        __result_obj__262 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__262,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__262;
    }
    result_389=(struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "list$1void$ph_clone", 3, "struct list$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_389->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_389->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_389->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_389->it=self->it;
    }
    __result_obj__263 = come_increment_ref_count(result_389);
    come_call_finalizer3(result_389,list$1void$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__263,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__263;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_390;
    result_390=0;
    result_390+=int_get_hash_key(((int)self->head));
    result_390+=int_get_hash_key(((int)self->tail));
    result_390+=int_get_hash_key(((int)self->len));
    result_390+=int_get_hash_key(((int)self->it));
    return result_390;
}

static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right){
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

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__264;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__264,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__264;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value289 = (void*)0;
struct list_item$1char$ph* litem_395;
char* __dec_obj26;
void* __right_value290 = (void*)0;
struct list_item$1char$ph* litem_396;
char* __dec_obj27;
void* __right_value291 = (void*)0;
struct list_item$1char$ph* litem_397;
char* __dec_obj28;
struct list$1char$ph* __result_obj__265;
    if(    self->len==0) {
        litem_395=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value289=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1475, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=((void*)0);
        litem_395->next=((void*)0);
        __dec_obj26=litem_395->item;
        litem_395->item=(char*)come_increment_ref_count(item);
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_395;
        self->head=litem_395;
    }
    else if(    self->len==1) {
        litem_396=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value290=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1485, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=self->head;
        litem_396->next=((void*)0);
        __dec_obj27=litem_396->item;
        litem_396->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_396;
        self->head->next=litem_396;
    }
    else {
        litem_397=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value291=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1495, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_397->prev=self->tail;
        litem_397->next=((void*)0);
        __dec_obj28=litem_397->item;
        litem_397->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_397;
        self->tail=litem_397;
    }
    self->len++;
    __result_obj__265 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__265;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__266;
void* __right_value293 = (void*)0;
struct sType* result_406;
void* __right_value294 = (void*)0;
struct sType* __dec_obj29;
void* __right_value295 = (void*)0;
struct sType* __dec_obj30;
void* __right_value303 = (void*)0;
struct list$1void$ph* __dec_obj34;
void* __right_value304 = (void*)0;
struct sType* __dec_obj35;
void* __right_value305 = (void*)0;
struct sType* __dec_obj36;
void* __right_value307 = (void*)0;
struct sNode* __dec_obj37;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj38;
void* __right_value309 = (void*)0;
char* __dec_obj39;
void* __right_value310 = (void*)0;
char* __dec_obj40;
void* __right_value311 = (void*)0;
char* __dec_obj41;
void* __right_value319 = (void*)0;
struct list$1sNode$ph* __dec_obj45;
void* __right_value320 = (void*)0;
char* __dec_obj46;
void* __right_value321 = (void*)0;
struct list$1void$ph* __dec_obj47;
void* __right_value326 = (void*)0;
struct list$1char$ph* __dec_obj48;
void* __right_value327 = (void*)0;
struct sType* __dec_obj49;
struct sType* __result_obj__278;
    if(    self==(void*)0) {
        __result_obj__266 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__266,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__266;
    }
    result_406=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_406->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj29=result_406->mOriginalLoadVarType;
        result_406->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj30=result_406->mChannelType;
        result_406->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj34=result_406->mGenericsTypes;
        result_406->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj34,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj35=result_406->mNoSolvedGenericsType;
        result_406->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_406->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj36=result_406->mAnyOriginalType;
        result_406->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj37=result_406->mSizeNum;
        result_406->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj38=result_406->mAlignas;
        result_406->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj39=result_406->mTupleName;
        result_406->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj40=result_406->mAttribute;
        result_406->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_406->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_406->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_406->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_406->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_406->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_406->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_406->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_406->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_406->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_406->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_406->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_406->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_406->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_406->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_406->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_406->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_406->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_406->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_406->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_406->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_406->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_406->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_406->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_406->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_406->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_406->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj41=result_406->mAsmName;
        result_406->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_406->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_406->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_406->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj45=result_406->mArrayNum;
        result_406->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj45,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_406->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_406->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_406->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_406->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_406->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj46=result_406->mOriginalTypeName;
        result_406->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_406->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_406->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_406->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_406->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj47=result_406->mParamTypes;
        result_406->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj47,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj48=result_406->mParamNames;
        result_406->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj48,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj49=result_406->mResultType;
        result_406->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_406->mVarArgs=self->mVarArgs;
    }
    __result_obj__278 = come_increment_ref_count(result_406);
    come_call_finalizer3(result_406,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__278,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__278;
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
struct list_item$1sNode$ph* it_399;
struct list_item$1sNode$ph* prev_it_400;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        prev_it_400=it_399;
        it_399=it_399->next;
        come_call_finalizer3(prev_it_400,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_401;
    result_401=0;
    result_401+=int_get_hash_key(((int)self->mClass));
    result_401+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_401+=int_get_hash_key(((int)self->mChannelType));
    result_401+=int_get_hash_key(((int)self->mGenericsTypes));
    result_401+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_401+=int_get_hash_key(((int)self->mAnyClass));
    result_401+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_401+=int_get_hash_key(((int)self->mSizeNum));
    result_401+=int_get_hash_key(((int)self->mAlignas));
    result_401+=int_get_hash_key(((int)self->mTupleName));
    result_401+=int_get_hash_key(((int)self->mAttribute));
    result_401+=int_get_hash_key(((int)self->mAllocaValue));
    result_401+=int_get_hash_key(((int)self->mUnsigned));
    result_401+=int_get_hash_key(((int)self->mShort));
    result_401+=int_get_hash_key(((int)self->mLong));
    result_401+=int_get_hash_key(((int)self->mLongLong));
    result_401+=int_get_hash_key(((int)self->mConstant));
    result_401+=int_get_hash_key(((int)self->mAtomic));
    result_401+=int_get_hash_key(((int)self->mRegister));
    result_401+=int_get_hash_key(((int)self->mVolatile));
    result_401+=int_get_hash_key(((int)self->mStatic));
    result_401+=int_get_hash_key(((int)self->mUniq));
    result_401+=int_get_hash_key(((int)self->mRecord));
    result_401+=int_get_hash_key(((int)self->mExtern));
    result_401+=int_get_hash_key(((int)self->mRestrict));
    result_401+=int_get_hash_key(((int)self->mImmutable));
    result_401+=int_get_hash_key(((int)self->mHeap));
    result_401+=int_get_hash_key(((int)self->mChannel));
    result_401+=int_get_hash_key(((int)self->mNoHeap));
    result_401+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_401+=int_get_hash_key(((int)self->mException));
    result_401+=int_get_hash_key(((int)self->mGenerate));
    result_401+=int_get_hash_key(((int)self->mCreateVTable));
    result_401+=int_get_hash_key(((int)self->mDynamic));
    result_401+=int_get_hash_key(((int)self->mInline));
    result_401+=int_get_hash_key(((int)self->mNullValue));
    result_401+=int_get_hash_key(((int)self->mGuardValue));
    result_401+=int_get_hash_key(((int)self->mAsmName));
    result_401+=int_get_hash_key(((int)self->mTypedef));
    result_401+=int_get_hash_key(((int)self->mMultipleTypes));
    result_401+=int_get_hash_key(((int)self->mOriginIsArray));
    result_401+=int_get_hash_key(((int)self->mArrayNum));
    result_401+=int_get_hash_key(((int)self->mPointerNum));
    result_401+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_401+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_401+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_401+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_401+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_401+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_401+=int_get_hash_key(((int)self->mArrayPointerType));
    result_401+=int_get_hash_key(((int)self->mLambdaArray));
    result_401+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_401+=int_get_hash_key(((int)self->mParamTypes));
    result_401+=int_get_hash_key(((int)self->mParamNames));
    result_401+=int_get_hash_key(((int)self->mResultType));
    result_401+=int_get_hash_key(((int)self->mVarArgs));
    return result_401;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_402;
struct list_item$1sNode$ph* it2_403;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_402=left->head;
    it2_403=right->head;
    while(it_402!=((void*)0)) {
        if(        !sNode_equals(it_402->item,it2_403->item)) {
            return (_Bool)0;
        }
        it_402=it_402->next;
        it2_403=it2_403->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_404;
struct list_item$1char$ph* it2_405;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_404=left->head;
    it2_405=right->head;
    while(it_404!=((void*)0)) {
        if(        !string_equals(it_404->item,it2_405->item)) {
            return (_Bool)0;
        }
        it_404=it_404->next;
        it2_405=it2_405->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__267;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1void$ph* result_407;
struct list_item$1void$ph* it_408;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1void$ph* __result_obj__269;
    if(    self==((void*)0)) {
        __result_obj__267 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__267,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__267;
    }
    result_407=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1456, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_408=self->head;
    while(it_408!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_407,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_408->item)));
        }
        else {
            list$1void$ph$p_add(result_407,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_408->item)));
        }
        it_408=it_408->next;
    }
    __result_obj__269 = come_increment_ref_count(result_407);
    come_call_finalizer3(result_407,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__269,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__269;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value298 = (void*)0;
struct list_item$1void$ph* litem_409;
void* __dec_obj31;
void* __right_value299 = (void*)0;
struct list_item$1void$ph* litem_410;
void* __dec_obj32;
void* __right_value300 = (void*)0;
struct list_item$1void$ph* litem_411;
void* __dec_obj33;
struct list$1void$ph* __result_obj__268;
    if(    self->len==0) {
        litem_409=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value298=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1475, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_409->prev=((void*)0);
        litem_409->next=((void*)0);
        __dec_obj31=litem_409->item;
        litem_409->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj31,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_409;
        self->head=litem_409;
    }
    else if(    self->len==1) {
        litem_410=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value299=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1485, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_410->prev=self->head;
        litem_410->next=((void*)0);
        __dec_obj32=litem_410->item;
        litem_410->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj32,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_410;
        self->head->next=litem_410;
    }
    else {
        litem_411=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value300=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1495, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_411->prev=self->tail;
        litem_411->next=((void*)0);
        __dec_obj33=litem_411->item;
        litem_411->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj33,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_411;
        self->tail=litem_411;
    }
    self->len++;
    __result_obj__268 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__268;
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__270;
void* __right_value306 = (void*)0;
struct sNode* result_412;
struct sNode* __result_obj__271;
    if(    self==(void*)0) {
        __result_obj__270 = come_increment_ref_count((void*)0);
        ((__result_obj__270) ? __result_obj__270 = come_decrement_ref_count2(__result_obj__270, ((struct sNode*)__result_obj__270)->finalize, ((struct sNode*)__result_obj__270)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__270;
    }
    result_412=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_412->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_412->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_412->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_412->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_412->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_412->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_412->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_412->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_412->kind=self->kind;
    }
    __result_obj__271 = come_increment_ref_count(result_412);
    ((result_412) ? result_412 = come_decrement_ref_count2(result_412, ((struct sNode*)result_412)->finalize, ((struct sNode*)result_412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__271) ? __result_obj__271 = come_decrement_ref_count2(__result_obj__271, ((struct sNode*)__result_obj__271)->finalize, ((struct sNode*)__result_obj__271)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__271;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__272;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1sNode$ph* result_413;
struct list_item$1sNode$ph* it_414;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1sNode$ph* __result_obj__275;
    if(    self==((void*)0)) {
        __result_obj__272 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__272,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__272;
    }
    result_413=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1456, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_414=self->head;
    while(it_414!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_413,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_414->item)));
        }
        else {
            list$1sNode$ph$p_add(result_413,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_414->item)));
        }
        it_414=it_414->next;
    }
    __result_obj__275 = come_increment_ref_count(result_413);
    come_call_finalizer3(result_413,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__275,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__275;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__273;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__273 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__273,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__273;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value314 = (void*)0;
struct list_item$1sNode$ph* litem_415;
struct sNode* __dec_obj42;
void* __right_value315 = (void*)0;
struct list_item$1sNode$ph* litem_416;
struct sNode* __dec_obj43;
void* __right_value316 = (void*)0;
struct list_item$1sNode$ph* litem_417;
struct sNode* __dec_obj44;
struct list$1sNode$ph* __result_obj__274;
    if(    self->len==0) {
        litem_415=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value314=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1475, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=((void*)0);
        litem_415->next=((void*)0);
        __dec_obj42=litem_415->item;
        litem_415->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_415;
        self->head=litem_415;
    }
    else if(    self->len==1) {
        litem_416=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value315=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1485, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_416->prev=self->head;
        litem_416->next=((void*)0);
        __dec_obj43=litem_416->item;
        litem_416->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_416;
        self->head->next=litem_416;
    }
    else {
        litem_417=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value316=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1495, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_417->prev=self->tail;
        litem_417->next=((void*)0);
        __dec_obj44=litem_417->item;
        litem_417->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_417;
        self->tail=litem_417;
    }
    self->len++;
    __result_obj__274 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__274;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_418;
struct list_item$1sNode$ph* prev_it_419;
    it_418=self->head;
    while(it_418!=((void*)0)) {
        prev_it_419=it_418;
        it_418=it_418->next;
        come_call_finalizer3(prev_it_419,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__276;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1char$ph* result_420;
struct list_item$1char$ph* it_421;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct list$1char$ph* __result_obj__277;
    if(    self==((void*)0)) {
        __result_obj__276 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__276,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__276;
    }
    result_420=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1456, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_421=self->head;
    while(it_421!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_420,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_421->item)));
        }
        else {
            list$1char$ph$p_add(result_420,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_421->item)));
        }
        it_421=it_421->next;
    }
    __result_obj__277 = come_increment_ref_count(result_420);
    come_call_finalizer3(result_420,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__277,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__277;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_422;
struct list_item$1char$ph* prev_it_423;
    it_422=self->head;
    while(it_422!=((void*)0)) {
        prev_it_423=it_422;
        it_422=it_422->next;
        come_call_finalizer3(prev_it_423,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_finalize(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self){
}

static struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_clone(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self){
struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* __result_obj__279;
void* __right_value332 = (void*)0;
struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* result_430;
struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* __result_obj__280;
    if(    self==(void*)0) {
        __result_obj__279 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__279,tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__279;
    }
    result_430=(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$*)come_increment_ref_count((struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$*)come_calloc(1, sizeof(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$)*(1), "tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_clone", 3, "struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_430->v1=self->v1;
    }
    if(    self!=((void*)0)) {
        result_430->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_430->v3=self->v3;
    }
    if(    self!=((void*)0)) {
        result_430->v4=self->v4;
    }
    __result_obj__280 = come_increment_ref_count(result_430);
    come_call_finalizer3(result_430,tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__280,tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__280;
}

static unsigned int tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_get_hash_key(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self){
unsigned int result_431;
    result_431=0;
    result_431+=int_get_hash_key(((int)self->v1));
    result_431+=int_get_hash_key(((int)self->v2));
    result_431+=int_get_hash_key(((int)self->v3));
    result_431+=int_get_hash_key(((int)self->v4));
    return result_431;
}

static _Bool tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_equals(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* left, struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* right){
    if(    !list$1void$ph$p_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$_initialize(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self, struct list$1void$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* __result_obj__281;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result_obj__281 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__281,tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__281;
}

static void tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$$p_finalize(struct tuple4$4list$1void$ph$plist$1char$ph$plist$1char$ph$pbool$* self){
}

static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value336 = (void*)0;
struct list_item$1void$ph* litem_433;
void* __dec_obj50;
void* __right_value337 = (void*)0;
struct list_item$1void$ph* litem_434;
void* __dec_obj51;
void* __right_value338 = (void*)0;
struct list_item$1void$ph* litem_435;
void* __dec_obj52;
struct list$1void$ph* __result_obj__283;
    if(    self->len==0) {
        litem_433=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value336=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1545, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_433->prev=((void*)0);
        litem_433->next=((void*)0);
        __dec_obj50=litem_433->item;
        litem_433->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_433;
        self->head=litem_433;
    }
    else if(    self->len==1) {
        litem_434=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value337=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1555, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_434->prev=self->head;
        litem_434->next=((void*)0);
        __dec_obj51=litem_434->item;
        litem_434->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_434;
        self->head->next=litem_434;
    }
    else {
        litem_435=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value338=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1565, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_435->prev=self->tail;
        litem_435->next=((void*)0);
        __dec_obj52=litem_435->item;
        litem_435->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_435;
        self->tail=litem_435;
    }
    self->len++;
    __result_obj__283 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__283;
}

static void tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__284;
void* __right_value343 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* result_441;
void* __right_value344 = (void*)0;
struct list$1void$ph* __dec_obj53;
void* __right_value345 = (void*)0;
struct list$1char$ph* __dec_obj54;
void* __right_value346 = (void*)0;
struct list$1char$ph* __dec_obj55;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__285;
    if(    self==(void*)0) {
        __result_obj__284 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__284,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__284;
    }
    result_441=(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone", 3, "struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj53=result_441->v1;
        result_441->v1=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->v1));
        come_call_finalizer3(__dec_obj53,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj54=result_441->v2;
        result_441->v2=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v2));
        come_call_finalizer3(__dec_obj54,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj55=result_441->v3;
        result_441->v3=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v3));
        come_call_finalizer3(__dec_obj55,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->v4=self->v4;
    }
    __result_obj__285 = come_increment_ref_count(result_441);
    come_call_finalizer3(result_441,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__285,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__285;
}

static unsigned int tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
unsigned int result_442;
    result_442=0;
    result_442+=int_get_hash_key(((int)self->v1));
    result_442+=int_get_hash_key(((int)self->v2));
    result_442+=int_get_hash_key(((int)self->v3));
    result_442+=int_get_hash_key(((int)self->v4));
    return result_442;
}

static _Bool tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right){
    if(    !list$1void$ph$p_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1void$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1void$ph* __dec_obj56;
struct list$1char$ph* __dec_obj57;
struct list$1char$ph* __dec_obj58;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__286;
    __dec_obj56=self->v1;
    self->v1=(struct list$1void$ph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj56,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj57=self->v2;
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj57,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->v3;
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj58,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result_obj__286 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__286,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value349 = (void*)0;
struct sType* left_type2_443;
void* __right_value350 = (void*)0;
struct sType* right_type2_444;
struct sType* left_no_solved_generics_type_445;
struct sType* right_no_solved_generics_type_446;
struct sClass* left_class_447;
struct sClass* right_class_448;
_Bool parent_class_449;
void* __right_value351 = (void*)0;
_Bool __null_value1;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__289;
_Bool __null_value2;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__290;
_Bool __null_value3;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__291;
_Bool __null_value4;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__292;
_Bool __null_value5;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__293;
void* __right_value367 = (void*)0;
char* left_type3_450;
void* __right_value368 = (void*)0;
char* __dec_obj60;
void* __right_value369 = (void*)0;
struct sType* __dec_obj61;
void* __right_value370 = (void*)0;
struct sType* __dec_obj62;
_Bool __null_value6;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__294;
void* __right_value374 = (void*)0;
char* left_type3_451;
void* __right_value375 = (void*)0;
char* __dec_obj63;
void* __right_value376 = (void*)0;
struct sType* __dec_obj64;
void* __right_value377 = (void*)0;
struct sType* __dec_obj65;
_Bool __null_value7;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__295;
_Bool __null_value8;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__296;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__298;
int i_452;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_1_456=0;
char* Err_457=0;
_Bool _if_conditional3;
_Bool __null_value9;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__301;
void* __right_value392 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_2_458=0;
char* Err_459=0;
_Bool _if_conditional4;
_Bool __null_value10;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__302;
_Bool __null_value11;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__303;
_Bool __null_value12;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__304;
void* __right_value402 = (void*)0;
char* left_type3_460;
void* __right_value403 = (void*)0;
char* __dec_obj66;
void* __right_value404 = (void*)0;
struct sType* __dec_obj67;
void* __right_value405 = (void*)0;
struct sType* __dec_obj68;
_Bool __null_value13;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__305;
void* __right_value409 = (void*)0;
char* left_type3_461;
void* __right_value410 = (void*)0;
char* __dec_obj69;
void* __right_value411 = (void*)0;
struct sType* __dec_obj70;
void* __right_value412 = (void*)0;
struct sType* __dec_obj71;
_Bool __null_value14;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__306;
void* __right_value416 = (void*)0;
char* __dec_obj72;
void* __right_value417 = (void*)0;
struct sType* __dec_obj73;
void* __right_value418 = (void*)0;
struct sType* __dec_obj74;
_Bool __null_value15;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__307;
void* __right_value422 = (void*)0;
char* left_type3_462;
void* __right_value423 = (void*)0;
char* __dec_obj75;
void* __right_value424 = (void*)0;
struct sType* __dec_obj76;
void* __right_value425 = (void*)0;
struct sType* __dec_obj77;
_Bool __null_value16;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__308;
void* __right_value429 = (void*)0;
char* left_type3_463;
void* __right_value430 = (void*)0;
char* __dec_obj78;
void* __right_value431 = (void*)0;
struct sType* __dec_obj79;
void* __right_value432 = (void*)0;
struct sType* __dec_obj80;
_Bool __null_value17;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__309;
_Bool __null_value18;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__310;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__311;
_Bool __null_value19;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__312;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__313;
_Bool __null_value20;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__314;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__315;
_Bool __null_value21;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__316;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__317;
_Bool __null_value22;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__318;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__319;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct buffer* buf2_464;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
char* __dec_obj81;
void* __right_value469 = (void*)0;
struct sType* __dec_obj82;
void* __right_value470 = (void*)0;
struct sType* __dec_obj83;
_Bool __null_value23;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__320;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__321;
_Bool __null_value24;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__322;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__323;
_Bool __null_value25;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__324;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__325;
_Bool __null_value26;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__326;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__327;
_Bool __null_value27;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__328;
void* __right_value494 = (void*)0;
char* tmp_465;
void* __right_value495 = (void*)0;
char* __dec_obj84;
void* __right_value496 = (void*)0;
struct sType* __dec_obj85;
void* __right_value497 = (void*)0;
struct sType* __dec_obj86;
_Bool __null_value28;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__329;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__330;
_Bool __null_value29;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__331;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__332;
void* __right_value508 = (void*)0;
char* tmp_466;
void* __right_value509 = (void*)0;
char* __dec_obj87;
void* __right_value510 = (void*)0;
struct sType* __dec_obj88;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__333;
_Bool __null_value30;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__334;
int i_467;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var6 = (void*)0;
_Bool come_exception_var_3_468=0;
char* Err_469=0;
_Bool _if_conditional5;
_Bool __null_value31;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__335;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__336;
memset(&__null_value1, 0, sizeof(_Bool));
memset(&__null_value2, 0, sizeof(_Bool));
memset(&__null_value3, 0, sizeof(_Bool));
memset(&__null_value4, 0, sizeof(_Bool));
memset(&__null_value5, 0, sizeof(_Bool));
memset(&__null_value6, 0, sizeof(_Bool));
memset(&__null_value7, 0, sizeof(_Bool));
memset(&__null_value8, 0, sizeof(_Bool));
memset(&__null_value9, 0, sizeof(_Bool));
memset(&__null_value10, 0, sizeof(_Bool));
memset(&__null_value11, 0, sizeof(_Bool));
memset(&__null_value12, 0, sizeof(_Bool));
memset(&__null_value13, 0, sizeof(_Bool));
memset(&__null_value14, 0, sizeof(_Bool));
memset(&__null_value15, 0, sizeof(_Bool));
memset(&__null_value16, 0, sizeof(_Bool));
memset(&__null_value17, 0, sizeof(_Bool));
memset(&__null_value18, 0, sizeof(_Bool));
memset(&__null_value19, 0, sizeof(_Bool));
memset(&__null_value20, 0, sizeof(_Bool));
memset(&__null_value21, 0, sizeof(_Bool));
memset(&__null_value22, 0, sizeof(_Bool));
memset(&__null_value23, 0, sizeof(_Bool));
memset(&__null_value24, 0, sizeof(_Bool));
memset(&__null_value25, 0, sizeof(_Bool));
memset(&__null_value26, 0, sizeof(_Bool));
memset(&__null_value27, 0, sizeof(_Bool));
memset(&__null_value28, 0, sizeof(_Bool));
memset(&__null_value29, 0, sizeof(_Bool));
memset(&__null_value30, 0, sizeof(_Bool));
memset(&__null_value31, 0, sizeof(_Bool));
    left_type2_443=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
    right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_445=((void*)0);
    if(    left_type2_443->mNoSolvedGenericsType) {
        left_no_solved_generics_type_445=left_type2_443->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_446=((void*)0);
    if(    right_type2_444->mNoSolvedGenericsType) {
        right_no_solved_generics_type_446=right_type2_444->mNoSolvedGenericsType;
    }
    left_class_447=left_type2_443->mClass;
    right_class_448=right_type2_444->mClass;
    parent_class_449=(_Bool)0;
    if(    string_operator_not_equals(left_class_447->mName,right_class_448->mName)) {
        while(left_class_447&&right_class_448) {
            if(            string_operator_equals(left_class_447->mName,right_class_448->mName)) {
                parent_class_449=(_Bool)1;
            }
            if(            right_class_448->mParentClassName) {
                right_class_448=((struct sClass*)((void*)(__right_value351=map$2void$phvoid$ph$p_operator_load_element(info->classes,right_class_448->mParentClassName))));
                come_call_finalizer3(__right_value351,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
            else {
                right_class_448=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type2_443->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__289 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value354=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 490, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value1,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value354,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__289,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__289;
            }
        }
        else if(        right_type->mPointerNum>0&&left_type2_443->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__290 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value357=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 501, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value2,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value357,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__290,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__290;
            }
        }
        else if(        left_type2_443->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type2_443->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type2_443->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                    info->err_num++;
                    __result_obj__291 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value360=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 516, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value3,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value360,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__291,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__291;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_445&&right_no_solved_generics_type_446) {
        if(        strlen(left_type2_443->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_443->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__292 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value363=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 535, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value4,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value363,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__292,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__292;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_443->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_443->mClass->mNumber&&left_type2_443->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes),left_no_solved_generics_type_445->mClass->mName,left_type2_443->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes),right_no_solved_generics_type_446->mClass->mName,right_type2_444->mClass->mName);
                    info->err_num++;
                    __result_obj__293 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value366=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 549, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value5,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value366,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__293,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__293;
                }
            }
            else {
                left_type3_450=(char*)come_increment_ref_count(make_type_name_string(left_type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj60=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_450,come_value->c_value));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj61=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj62=right_type2_444;
                right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
                come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_450 = come_decrement_ref_count2(left_type3_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_443->mClass->mFloat&&left_type2_443->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes),left_no_solved_generics_type_445->mClass->mName,left_type2_443->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes),right_no_solved_generics_type_446->mClass->mName,right_type2_444->mClass->mName);
                    info->err_num++;
                    __result_obj__294 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value373=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 570, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value6,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value373,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__294,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__294;
                }
            }
            else {
                left_type3_451=(char*)come_increment_ref_count(make_type_name_string(left_type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj63=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_451,come_value->c_value));
                __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj64=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
                come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj65=right_type2_444;
                right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
                come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_451 = come_decrement_ref_count2(left_type3_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)&&left_type2_443->mPointerNum==right_type2_444->mPointerNum) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"void")&&left_type2_443->mPointerNum>0&&string_operator_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)&&(left_type2_443->mPointerNum!=right_type2_444->mPointerNum||left_type2_443->mHeap!=right_type2_444->mHeap)) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)&&(left_type2_443->mPointerNum!=right_type2_444->mPointerNum||left_type2_443->mHeap!=right_type2_444->mHeap)) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_443->mClass->mName);
            printf("right type class_name %s\n",right_type2_444->mClass->mName);
            printf("left type pointernum %d\n",left_type2_443->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_443->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes),left_no_solved_generics_type_445->mClass->mName,left_type2_443->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes),right_no_solved_generics_type_446->mClass->mName,right_type2_444->mClass->mName);
            info->err_num++;
            __result_obj__295 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value380=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 599, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value7,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value380,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__295,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__295;
        }
        else if(        list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_445->mClass->mName,"void")&&left_no_solved_generics_type_445->mPointerNum>0&&right_no_solved_generics_type_446->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_446->mClass->mName,"void")&&right_no_solved_generics_type_446->mPointerNum>0&&left_no_solved_generics_type_445->mPointerNum>0)) {
            }
            else {
                if(                list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes)!=list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes),left_no_solved_generics_type_445->mClass->mName,left_type2_443->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes),right_no_solved_generics_type_446->mClass->mName,right_type2_444->mClass->mName);
                        info->err_num++;
                        __result_obj__296 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value383=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 615, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value8,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value383,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__296,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__296;
                    }
                    __result_obj__298 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value385=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 618, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value385,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__298,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__298;
                }
                for(                i_452=0;                i_452<list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes);                i_452++                ){
                    multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value388=check_assign_type(msg,((struct sType*)((void*)(__right_value386=list$1void$ph$p_operator_load_element(left_no_solved_generics_type_445->mGenericsTypes,i_452)))),((struct sType*)((void*)(__right_value387=list$1void$ph$p_operator_load_element(right_no_solved_generics_type_446->mGenericsTypes,i_452)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                    come_exception_var_1_456=multiple_assign_var4->v1;
                    Err_457=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    (_if_conditional3=(Err_457)),                    come_call_finalizer3(__right_value386,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value387,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                    come_call_finalizer3(__right_value388,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional3) {
                        __result_obj__301 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value391=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 623, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value9,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        (Err_457 = come_decrement_ref_count2(Err_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value391,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__301,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__301;
                    }
                    else {
                    }
                    (Err_457 = come_decrement_ref_count2(Err_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value392=check_assign_type(msg,left_no_solved_generics_type_445,right_no_solved_generics_type_446,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_2_458=multiple_assign_var5->v1;
                Err_459=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                (_if_conditional4=(Err_459)),                come_call_finalizer3(__right_value392,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    __result_obj__302 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value395=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 628, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value10,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value395,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__302,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__302;
                }
                else {
                }
                (Err_459 = come_decrement_ref_count2(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    strlen(left_type2_443->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_443->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__303 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value398=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 645, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value11,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value398,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__303,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__303;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_443->mClass->mNumber&&left_type2_443->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes),left_no_solved_generics_type_445->mClass->mName,left_type2_443->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes),right_no_solved_generics_type_446->mClass->mName,right_type2_444->mClass->mName);
                info->err_num++;
                __result_obj__304 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value401=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 657, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value12,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value401,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__304,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__304;
            }
        }
        else {
            left_type3_460=(char*)come_increment_ref_count(make_type_name_string(left_type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj66=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_460,come_value->c_value));
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj67=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj68=right_type2_444;
            right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_460 = come_decrement_ref_count2(left_type3_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_443->mClass->mFloat&&left_type2_443->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(left_no_solved_generics_type_445->mGenericsTypes),left_no_solved_generics_type_445->mClass->mName,left_type2_443->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1void$ph$p_length(right_no_solved_generics_type_446->mGenericsTypes),right_no_solved_generics_type_446->mClass->mName,right_type2_444->mClass->mName);
                info->err_num++;
                __result_obj__305 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value408=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 678, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value13,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value408,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__305,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__305;
            }
        }
        else {
            left_type3_461=(char*)come_increment_ref_count(make_type_name_string(left_type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj69=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_461,come_value->c_value));
            __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj70=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj71=right_type2_444;
            right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_461 = come_decrement_ref_count2(left_type3_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_443->mHeap&&!right_type2_444->mHeap&&left_type2_443->mPointerNum>0&&right_type2_444->mPointerNum>0&&string_operator_not_equals(right_type2_444->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_443->mMultipleTypes&&!right_type->mMultipleTypes) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum,left_type2_443->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum,right_type2_444->mHeap);
        info->err_num++;
        __result_obj__306 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value415=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 698, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value14,(char*)come_increment_ref_count(xsprintf("ERR"))))));
        come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value415,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__306,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__306;
    }
    else if(    parent_class_449&&left_type2_443->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj72=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_443->mClass->mName,come_value->c_value));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj73=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj74=right_type2_444;
        right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_443->mClass->mNumber&&left_type2_443->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__307 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value421=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 716, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value15,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value421,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__307,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__307;
            }
        }
        else {
            left_type3_462=(char*)come_increment_ref_count(make_type_name_string(left_type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj75=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_462,come_value->c_value));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj76=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj77=right_type2_444;
            right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_462 = come_decrement_ref_count2(left_type3_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_443->mClass->mFloat&&left_type2_443->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__308 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value428=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 737, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value16,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value428,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__308,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__308;
            }
        }
        else {
            left_type3_463=(char*)come_increment_ref_count(make_type_name_string(left_type2_443,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj78=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_463,come_value->c_value));
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj79=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj80=right_type2_444;
            right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_463 = come_decrement_ref_count2(left_type3_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)&&left_type2_443->mPointerNum>0&&right_type2_444->mPointerNum>0&&!right_type2_444->mAllocaValue&&!left_type->mAnyClass&&!right_type2_444->mAnyClass) {
        if(        left_type2_443->mHeap&&!right_type2_444->mHeap) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum,left_type2_443->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum,right_type2_444->mHeap);
            info->err_num++;
            __result_obj__309 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value435=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 758, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value17,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value435,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__309,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__309;
        }
    }
    else if(    check_no_pointer) {
        if(        left_type2_443->mPointerNum>0) {
            if(            right_type2_444->mPointerNum>0) {
                if(                string_operator_equals(left_type2_443->mClass->mName,"void")||string_operator_equals(right_type2_444->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type2_443->mClass->mName,"va_list")||string_operator_equals(right_type2_444->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                        info->err_num++;
                        __result_obj__310 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value438=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 774, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value18,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value438,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__310,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__310;
                    }
                    __result_obj__311 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value440=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 776, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value440,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__311,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__311;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                    info->err_num++;
                    __result_obj__312 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value443=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 787, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value19,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value443,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__312,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__312;
                }
                __result_obj__313 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value445=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 790, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value445,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__313,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__313;
            }
        }
        else if(        left_type2_443->mPointerNum==0&&right_type2_444->mPointerNum>0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__314 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value448=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 799, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value20,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value448,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__314,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__314;
            }
            __result_obj__315 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value450=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 801, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value450,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__315,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__315;
        }
        else if(        left_type2_443->mPointerNum>0&&right_type2_444->mPointerNum==0&&string_operator_equals(right_type2_444->mClass->mName,"lambda")&&string_operator_equals(left_type2_443->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__316 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value453=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 811, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value21,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value453,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__316,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__316;
            }
            __result_obj__317 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value455=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 813, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value455,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__317,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__317;
        }
    }
    else if(    !left_type2_443->mNullValue&&right_type2_444->mNullValue) {
        if(        string_operator_equals(left_type2_443->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_444->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"va_list")||string_operator_equals(right_type2_444->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"void")&&right_type2_444->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__318 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value458=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 827, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value22,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value458,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__318,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__318;
            }
            __result_obj__319 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value460=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 829, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value460,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__319,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__319;
        }
        else {
            buf2_464=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 832, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(buf2_464,((char*)(__right_value467=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value463=string_to_string(come_value->c_value))),((char*)(__right_value464=string_to_string(info->sname))),((char*)(__right_value465=int_to_string(info->sline))),((char*)(__right_value466=int_to_string(gComeDebugStackFrameID++)))))));
            (__right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj81=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_464));
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj82=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj83=right_type2_444;
            right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(buf2_464,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type2_443->mClass->mName,"char")&&left_type2_443->mPointerNum==1) {
        if(        string_operator_equals(right_type2_444->mClass->mName,"char")&&right_type2_444->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_444->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"va_list")||string_operator_equals(right_type2_444->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__320 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value473=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 856, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value23,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value473,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__320,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__320;
            }
            __result_obj__321 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value475=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 859, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value475,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__321,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__321;
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"void")&&right_type2_444->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__322 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value478=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 869, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value24,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value478,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__322,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__322;
            }
            __result_obj__323 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value480=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 871, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value480,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__323,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__323;
        }
        else if(        string_operator_not_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)&&!(left_type2_443->mPointerNum>0&&right_type2_444->mPointerNum==0)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__324 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value483=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 879, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value25,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value483,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__324,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__324;
            }
            __result_obj__325 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value485=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 881, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value485,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__325,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__325;
        }
    }
    else if(    string_operator_equals(left_type2_443->mClass->mName,"void")&&left_type2_443->mPointerNum==1) {
        if(        string_operator_equals(right_type2_444->mClass->mName,"void")&&right_type2_444->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_444->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"va_list")||string_operator_equals(right_type2_444->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"void")&&right_type2_444->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_444->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__326 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value488=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 901, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value26,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value488,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__326,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__326;
            }
            __result_obj__327 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value490=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 903, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value490,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__327,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__327;
        }
        else if(        right_type2_444->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                    info->err_num++;
                    __result_obj__328 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value493=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 912, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value27,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value493,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__328,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__328;
                }
            }
            else {
                tmp_465=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj84=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_465));
                __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj85=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
                come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj86=right_type2_444;
                right_type2_444=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
                come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_465 = come_decrement_ref_count2(tmp_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_443->mPointerNum>0||(left_type2_443->mPointerNum==0&&left_type2_443->mClass->mStruct)) {
        if(        right_type2_444->mPointerNum>0||(right_type2_444->mPointerNum==0&&right_type2_444->mClass->mStruct)) {
            if(            string_operator_equals(left_type2_443->mClass->mName,"void")||string_operator_equals(right_type2_444->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_443->mClass->mName,"va_list")||string_operator_equals(right_type2_444->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type2_443->mClass->mName,right_type2_444->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                    info->err_num++;
                    __result_obj__329 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value500=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 937, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value28,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value500,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__329,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__329;
                }
                __result_obj__330 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value502=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 939, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value502,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__330,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__330;
            }
            else if(            int_operator_not_equals(left_type2_443->mPointerNum,right_type2_444->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
            }
            else if(            list$1sNode$ph$p_length(right_type2_444->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum,list$1sNode$ph$p_length(left_type2_443->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum,list$1sNode$ph$p_length(right_type2_444->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"void")||string_operator_equals(right_type2_444->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"va_list")||string_operator_equals(right_type2_444->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_444->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_443->mClass->mName,"lambda")&&string_operator_equals(right_type2_444->mClass->mName,"lambda")) {
        }
        else if(        left_type2_443->mPointerNum>0&&right_type2_444->mPointerNum==0&&string_operator_equals(right_type2_444->mClass->mName,"lambda")&&string_operator_equals(left_type2_443->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__331 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value505=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 966, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value29,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value505,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__331,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__331;
            }
            __result_obj__332 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value507=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 969, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value507,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__332,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__332;
        }
        else if(        left_type2_443->mPointerNum>0&&!(string_operator_equals(right_type2_444->mClass->mName,"lambda")&&string_operator_equals(left_type2_443->mClass->mName,"lambda"))&&right_type2_444->mPointerNum==0) {
            tmp_466=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj87=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_466));
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj88=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_443));
            come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result_obj__333 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value512=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 975, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)))));
            (tmp_466 = come_decrement_ref_count2(tmp_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value512,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__333,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__333;
            (tmp_466 = come_decrement_ref_count2(tmp_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1void$ph$p_length(left_type2_443->mGenericsTypes)>0) {
            if(            list$1void$ph$p_length(left_type2_443->mGenericsTypes)!=list$1void$ph$p_length(right_type2_444->mGenericsTypes)) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_443->mClass->mName,left_type2_443->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_444->mClass->mName,right_type2_444->mPointerNum);
                info->err_num++;
                __result_obj__334 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value515=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 985, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value30,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value515,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__334,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__334;
            }
            for(            i_467=0;            i_467<list$1void$ph$p_length(left_type2_443->mGenericsTypes);            i_467++            ){
                multiple_assign_var6=((struct tuple2$2bool$char$ph*)(__right_value518=check_assign_type(msg,((struct sType*)((void*)(__right_value516=list$1void$ph$p_operator_load_element(left_type2_443->mGenericsTypes,i_467)))),((struct sType*)((void*)(__right_value517=list$1void$ph$p_operator_load_element(right_type2_444->mGenericsTypes,i_467)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_3_468=multiple_assign_var6->v1;
                Err_469=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_469)),                come_call_finalizer3(__right_value516,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value517,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
                come_call_finalizer3(__right_value518,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    __result_obj__335 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value521=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 989, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value31,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_469 = come_decrement_ref_count2(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value521,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__335,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__335;
                }
                else {
                }
                (Err_469 = come_decrement_ref_count2(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    __result_obj__336 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value523=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 995, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)))));
    come_call_finalizer3(left_type2_443,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_type2_444,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value523,tuple2$2bool$void$p$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__336,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__336;
}

static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2){
char* __dec_obj59;
struct tuple2$2bool$char$ph* __result_obj__288;
    self->v1=v1;
    __dec_obj59=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__288 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__288,tuple2$2bool$char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__288;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2){
struct tuple2$2bool$void$p* __result_obj__297;
    self->v1=v1;
    self->v2=v2;
    __result_obj__297 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2bool$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__297,tuple2$2bool$void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__297;
}

static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self){
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_453;
int i_454;
void* __result_obj__299;
void* default_value_455;
void* __result_obj__300;
default_value_455 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_453=self->head;
    i_454=0;
    while(it_453!=((void*)0)) {
        if(        position==i_454) {
            __result_obj__299 = come_increment_ref_count(it_453->item);
            come_call_finalizer3(__result_obj__299,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__299;
        }
        it_453=it_453->next;
        i_454++;
    }
    memset(&default_value_455,0,sizeof(void*));
    __result_obj__300 = come_increment_ref_count(((struct sType*)default_value_455));
    come_call_finalizer3(default_value_455,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__300,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__300;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value524 = (void*)0;
struct sType* result_type_470;
char* var_name_471;
char* p_472;
int sline_473;
void* __right_value525 = (void*)0;
char* word_474;
_Bool between_brace_475;
char* p_476;
int sline_477;
void* __right_value526 = (void*)0;
char* word_478;
void* __right_value527 = (void*)0;
char* __dec_obj89;
void* __right_value528 = (void*)0;
char* __dec_obj90;
_Bool no_comma_480;
void* __right_value529 = (void*)0;
struct sNode* node_481;
struct sNode* __dec_obj91;
char* p_482;
int sline_483;
void* __right_value530 = (void*)0;
char* word_484;
void* __right_value531 = (void*)0;
struct sNode* node_485;
void* __right_value535 = (void*)0;
char* attribute_489;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
char* __dec_obj95;
char* __dec_obj96;
void* __right_value538 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__341;
    result_type_470=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_470->mPointerNum=result_type_470->mTypedefOriginalPointerNum;
    }
    var_name_471=((void*)0);
    {
        p_472=info->p;
        sline_473=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_474=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_474,"const")||string_operator_equals(word_474,"__restrict")||string_operator_equals(word_474,"restrict")||string_operator_equals(word_474,"__user")||string_operator_equals(word_474,"volatile")||string_operator_equals(word_474,"_Nonnull")||string_operator_equals(word_474,"_Nullable")||string_operator_equals(word_474,"_Null_unspecified")||string_operator_equals(word_474,"__user")||string_operator_equals(word_474,"_Addr")) {
            }
            else {
                info->p=p_472;
                info->sline=sline_473;
            }
            (word_474 = come_decrement_ref_count2(word_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_472;
            info->sline=sline_473;
        }
    }
    between_brace_475=(_Bool)0;
    {
        p_476=info->p;
        sline_477=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_478=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_478,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_475=(_Bool)1;
                    }
                }
                (word_478 = come_decrement_ref_count2(word_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_476;
        info->sline=sline_477;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_470->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_475&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj89=var_name_471;
        var_name_471=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_479=0;
        num_anonymous_var_name_479++;
        __dec_obj90=var_name_471;
        var_name_471=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_479));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_475&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_480=info->no_comma;
        info->no_comma=(_Bool)1;
        node_481=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_480;
        __dec_obj91=result_type_470->mSizeNum;
        result_type_470->mSizeNum=(struct sNode*)come_increment_ref_count(node_481);
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); };
        ((node_481) ? node_481 = come_decrement_ref_count2(node_481, ((struct sNode*)node_481)->finalize, ((struct sNode*)node_481)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_482=info->p;
            sline_483=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_484=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_484,"const")||string_operator_equals(word_484,"__restrict")||string_operator_equals(word_484,"restrict")||string_operator_equals(word_484,"__user")||string_operator_equals(word_484,"volatile")||string_operator_equals(word_484,"_Nonnull")||string_operator_equals(word_484,"_Nullable")||string_operator_equals(word_484,"_Null_unspecified")||string_operator_equals(word_484,"__user")||string_operator_equals(word_484,"_Addr")) {
                }
                else {
                    info->p=p_482;
                    info->sline=sline_483;
                }
                (word_484 = come_decrement_ref_count2(word_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_482;
                info->sline=sline_483;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_470->mArrayPointerType=(_Bool)1;
            result_type_470->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_485=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph$p_push_back(result_type_470->mArrayNum,(struct sNode*)come_increment_ref_count(node_485));
        parse_sharp_v5(info);
        result_type_470->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_485) ? node_485 = come_decrement_ref_count2(node_485, ((struct sNode*)node_485)->finalize, ((struct sNode*)node_485)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    attribute_489=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_489,"")) {
        if(        result_type_470->mAttribute) {
            __dec_obj95=result_type_470->mAttribute;
            result_type_470->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_470->mAttribute,((char*)(__right_value536=charp_operator_add(" ",attribute_489)))));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            (__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj96=result_type_470->mAttribute;
            result_type_470->mAttribute=(char*)come_increment_ref_count(attribute_489);
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value538=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value538,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__341 = come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value543=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 1157, "struct tuple2$2sType$phchar$ph", tuple2$2sType$phchar$ph_finalize, tuple2$2sType$phchar$ph_clone, tuple2$2sType$phchar$ph_get_hash_key, tuple2$2sType$phchar$ph_equals)),(struct sType*)come_increment_ref_count(result_type_470),(char*)come_increment_ref_count(var_name_471)))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_470,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_471 = come_decrement_ref_count2(var_name_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_489 = come_decrement_ref_count2(attribute_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value543,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__341,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value532 = (void*)0;
struct list_item$1sNode$ph* litem_486;
struct sNode* __dec_obj92;
void* __right_value533 = (void*)0;
struct list_item$1sNode$ph* litem_487;
struct sNode* __dec_obj93;
void* __right_value534 = (void*)0;
struct list_item$1sNode$ph* litem_488;
struct sNode* __dec_obj94;
struct list$1sNode$ph* __result_obj__337;
    if(    self->len==0) {
        litem_486=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value532=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1545, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_486->prev=((void*)0);
        litem_486->next=((void*)0);
        __dec_obj92=litem_486->item;
        litem_486->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_486;
        self->head=litem_486;
    }
    else if(    self->len==1) {
        litem_487=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value533=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1555, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_487->prev=self->head;
        litem_487->next=((void*)0);
        __dec_obj93=litem_487->item;
        litem_487->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_487;
        self->head->next=litem_487;
    }
    else {
        litem_488=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value534=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1565, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_488->prev=self->tail;
        litem_488->next=((void*)0);
        __dec_obj94=litem_488->item;
        litem_488->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_488;
        self->tail=litem_488;
    }
    self->len++;
    __result_obj__337 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__337;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
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
struct tuple2$2sType$phchar$ph* __result_obj__338;
void* __right_value539 = (void*)0;
struct tuple2$2sType$phchar$ph* result_490;
void* __right_value540 = (void*)0;
struct sType* __dec_obj97;
void* __right_value541 = (void*)0;
char* __dec_obj98;
struct tuple2$2sType$phchar$ph* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__338,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__338;
    }
    result_490=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj97=result_490->v1;
        result_490->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj98=result_490->v2;
        result_490->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__339 = come_increment_ref_count(result_490);
    come_call_finalizer3(result_490,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__339,tuple2$2sType$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__339;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_491;
    result_491=0;
    result_491+=int_get_hash_key(((int)self->v1));
    result_491+=int_get_hash_key(((int)self->v2));
    return result_491;
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
struct sType* __dec_obj99;
char* __dec_obj100;
struct tuple2$2sType$phchar$ph* __result_obj__340;
    __dec_obj99=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj100=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__340 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__340,tuple2$2sType$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__340;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_492;
int sline_493;
void* __right_value544 = (void*)0;
char* word_494;
int nest_495;
    p_492=info->p;
    sline_493=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_494=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_494,"__attribute")||string_operator_equals(word_494,"__attribute__"))&&*info->p==40) {
            nest_495=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_495++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_495--;
                    if(                    nest_495==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_494,"const")||string_operator_equals(word_494,"__restrict")||string_operator_equals(word_494,"restrict")||string_operator_equals(word_494,"__user")||string_operator_equals(word_494,"volatile")||string_operator_equals(word_494,"_Nonnull")||string_operator_equals(word_494,"_Nullable")||string_operator_equals(word_494,"__nonnull")||string_operator_equals(word_494,"_Null_unspecified")||string_operator_equals(word_494,"__user")||string_operator_equals(word_494,"_Addr")||string_operator_equals(word_494,"__noreturn")||string_operator_equals(word_494,"_noreturn")||string_operator_equals(word_494,"_Noreturn")) {
        }
        else {
            info->p=p_492;
            info->sline=sline_493;
        }
        (word_494 = come_decrement_ref_count2(word_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_492;
        info->sline=sline_493;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_496;
void* __right_value545 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* type_497=0;
char* name_498=0;
_Bool err_499=0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__345;
    no_output_err_496=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value545=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_497=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
    name_498=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    err_499=multiple_assign_var7->v3;
    come_call_finalizer3(__right_value545,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_496;
    __result_obj__345 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value550=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1214, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type_497),(char*)come_increment_ref_count(name_498),err_499))));
    come_call_finalizer3(type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_498 = come_decrement_ref_count2(name_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value550,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__345,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__345;
}

static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self){
struct tuple3$3sType$phchar$phbool$* __result_obj__342;
void* __right_value546 = (void*)0;
struct tuple3$3sType$phchar$phbool$* result_500;
void* __right_value547 = (void*)0;
struct sType* __dec_obj101;
void* __right_value548 = (void*)0;
char* __dec_obj102;
struct tuple3$3sType$phchar$phbool$* __result_obj__343;
    if(    self==(void*)0) {
        __result_obj__342 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__342,tuple3$3sType$phchar$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__342;
    }
    result_500=(struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "tuple3$3sType$phchar$phbool$_clone", 3, "struct tuple3$3sType$phchar$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj101=result_500->v1;
        result_500->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj102=result_500->v2;
        result_500->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_500->v3=self->v3;
    }
    __result_obj__343 = come_increment_ref_count(result_500);
    come_call_finalizer3(result_500,tuple3$3sType$phchar$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__343,tuple3$3sType$phchar$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__343;
}

static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self){
unsigned int result_501;
    result_501=0;
    result_501+=int_get_hash_key(((int)self->v1));
    result_501+=int_get_hash_key(((int)self->v2));
    result_501+=int_get_hash_key(((int)self->v3));
    return result_501;
}

static _Bool tuple3$3sType$phchar$phbool$_equals(struct tuple3$3sType$phchar$phbool$* left, struct tuple3$3sType$phchar$phbool$* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_initialize(struct tuple3$3sType$phchar$phbool$* self, struct sType* v1, char* v2, _Bool v3){
struct sType* __dec_obj103;
char* __dec_obj104;
struct tuple3$3sType$phchar$phbool$* __result_obj__344;
    __dec_obj103=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj104=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result_obj__344 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__344,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__344;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_502;
int head_sline_503;
void* __right_value551 = (void*)0;
char* type_name_504;
_Bool record__505;
_Bool exception__506;
_Bool constant_507;
_Bool static__508;
_Bool volatile__509;
_Bool register__510;
_Bool unsigned__511;
_Bool long__512;
_Bool long_long_513;
_Bool short__514;
_Bool restrict__515;
_Bool struct__516;
_Bool union__517;
_Bool enum__518;
_Bool no_heap_519;
_Bool extern__520;
_Bool inline__521;
_Bool uniq__522;
_Bool tuple__523;
_Bool generate__524;
struct sNode* alignas__525;
_Bool anonymous_type_526;
_Bool anonymous_name_527;
_Bool atomic__528;
_Bool object_interface_529;
void* __right_value552 = (void*)0;
char* __dec_obj105;
void* __right_value553 = (void*)0;
char* __dec_obj106;
void* __right_value554 = (void*)0;
char* __dec_obj107;
int brace_num_530;
void* __right_value555 = (void*)0;
char* __dec_obj108;
int brace_num_531;
void* __right_value556 = (void*)0;
char* __dec_obj109;
void* __right_value557 = (void*)0;
char* __dec_obj110;
void* __right_value558 = (void*)0;
char* __dec_obj111;
void* __right_value559 = (void*)0;
char* __dec_obj112;
void* __right_value560 = (void*)0;
char* __dec_obj113;
void* __right_value561 = (void*)0;
struct sNode* exp_532;
struct sNode* __dec_obj114;
void* __right_value562 = (void*)0;
char* __dec_obj115;
void* __right_value563 = (void*)0;
char* __dec_obj116;
void* __right_value564 = (void*)0;
char* __dec_obj117;
void* __right_value565 = (void*)0;
char* __dec_obj118;
void* __right_value566 = (void*)0;
char* __dec_obj119;
void* __right_value567 = (void*)0;
char* __dec_obj120;
void* __right_value568 = (void*)0;
char* __dec_obj121;
void* __right_value569 = (void*)0;
char* __dec_obj122;
void* __right_value570 = (void*)0;
char* __dec_obj123;
void* __right_value571 = (void*)0;
char* __dec_obj124;
char* p_533;
int sline_534;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
char* __dec_obj125;
void* __right_value574 = (void*)0;
char* __dec_obj126;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
char* __dec_obj127;
char* p_535;
int sline_536;
void* __right_value577 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var8 = (void*)0;
int come_exception_var_c3_537=0;
char* Err_538=0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__346;
char* p_539;
int sline_540;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__347;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sNode* node_541;
_Bool Value_542;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__348;
char* p_543;
int sline_544;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
char* __dec_obj128;
void* __right_value591 = (void*)0;
char* __dec_obj129;
void* __right_value592 = (void*)0;
char* __dec_obj130;
char* p_545;
int sline_546;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__349;
void* __right_value596 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var9 = (void*)0;
struct sType* type_547=0;
char* name_548=0;
_Bool err_549=0;
char* p_550;
int sline_551;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__350;
void* __right_value601 = (void*)0;
char* __dec_obj131;
void* __right_value602 = (void*)0;
char* __dec_obj132;
void* __right_value603 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_552=0;
char* name_553=0;
_Bool err_554=0;
char* p_555;
int sline_556;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__351;
char* p_557;
int sline_558;
void* __right_value607 = (void*)0;
char* __dec_obj133;
void* __right_value608 = (void*)0;
char* __dec_obj134;
void* __right_value609 = (void*)0;
char* __dec_obj135;
void* __right_value610 = (void*)0;
char* __dec_obj136;
void* __right_value611 = (void*)0;
char* __dec_obj137;
void* __right_value612 = (void*)0;
char* __dec_obj138;
void* __right_value613 = (void*)0;
char* __dec_obj139;
char* p_559;
int sline_560;
void* __right_value614 = (void*)0;
char* __dec_obj140;
char* p_561;
int sline_562;
void* __right_value615 = (void*)0;
char* __dec_obj141;
void* __right_value616 = (void*)0;
char* __dec_obj142;
void* __right_value617 = (void*)0;
char* __dec_obj143;
char* p_563;
int sline_564;
void* __right_value618 = (void*)0;
char* __dec_obj144;
void* __right_value619 = (void*)0;
char* __dec_obj145;
void* __right_value620 = (void*)0;
char* __dec_obj146;
void* __right_value621 = (void*)0;
char* __dec_obj147;
void* __right_value622 = (void*)0;
char* __dec_obj148;
void* __right_value623 = (void*)0;
char* __dec_obj149;
void* __right_value624 = (void*)0;
char* __dec_obj150;
void* __right_value625 = (void*)0;
char* __dec_obj151;
void* __right_value626 = (void*)0;
char* __dec_obj152;
void* __right_value627 = (void*)0;
char* __dec_obj153;
void* __right_value628 = (void*)0;
char* __dec_obj154;
char* p_565;
int sline_566;
void* __right_value629 = (void*)0;
char* __dec_obj155;
void* __right_value630 = (void*)0;
char* __dec_obj156;
void* __right_value631 = (void*)0;
char* attribute_567;
int pointer_num_568;
_Bool heap_569;
_Bool refference_570;
_Bool no_refference_571;
_Bool channel_572;
_Bool any_class_573;
_Bool vtable_574;
char* tuple_name_575;
void* __right_value632 = (void*)0;
char* __dec_obj157;
_Bool lambda_flag_576;
char* pX_577;
int slineX_578;
void* __right_value633 = (void*)0;
struct sType* type_579;
char* var_name_580;
_Bool function_pointer_flag_581;
char* p_582;
int sline_583;
void* __right_value634 = (void*)0;
char* word_584;
_Bool var_name_between_brace_585;
char* p_586;
int sline_587;
void* __right_value635 = (void*)0;
char* word_588;
void* __right_value636 = (void*)0;
char* __dec_obj158;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sNode* node_590;
_Bool Value_591;
void* __right_value639 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c4_592=0;
char* Err_593=0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__352;
int pointer_num_594;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sType* __dec_obj159;
void* __right_value644 = (void*)0;
char* __dec_obj160;
void* __right_value645 = (void*)0;
struct sNode* node_595;
_Bool Value_596;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__353;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sType* __dec_obj161;
void* __right_value650 = (void*)0;
char* __dec_obj162;
void* __right_value651 = (void*)0;
struct sNode* node_597;
_Bool Value_598;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__354;
int pointer_num_599;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __dec_obj163;
void* __right_value656 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c5_600=0;
char* Err_601=0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__355;
void* __right_value659 = (void*)0;
char* attribute_602;
char* __dec_obj164;
void* __right_value660 = (void*)0;
char* __dec_obj165;
void* __right_value661 = (void*)0;
char* __dec_obj166;
void* __right_value662 = (void*)0;
char* __dec_obj167;
void* __right_value663 = (void*)0;
char* __dec_obj168;
_Bool no_comma_605;
void* __right_value664 = (void*)0;
struct sNode* node_606;
struct sNode* __dec_obj169;
void* __right_value665 = (void*)0;
char* attribute2_607;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
char* __dec_obj170;
char* __dec_obj171;
struct sType* result_type_608;
void* __right_value668 = (void*)0;
_Bool _if_conditional6;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* __dec_obj172;
void* __right_value671 = (void*)0;
int i_609;
void* __right_value672 = (void*)0;
_Bool _if_conditional7;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* __dec_obj173;
int i_613;
void* __right_value676 = (void*)0;
_Bool _if_conditional8;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* __dec_obj174;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sType* __dec_obj175;
struct sNode* __dec_obj176;
void* __right_value682 = (void*)0;
char* __dec_obj177;
void* __right_value683 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var13 = (void*)0;
struct list$1void$ph* param_types_614=0;
struct list$1char$ph* param_names_615=0;
struct list$1char$ph* param_default_parametors_616=0;
_Bool var_args_617=0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sType* __dec_obj178;
struct sType* __dec_obj179;
struct list$1void$ph* __dec_obj180;
struct list$1char$ph* __dec_obj181;
int function_pointer_num_618;
struct sType* result_type_619;
void* __right_value686 = (void*)0;
_Bool _if_conditional9;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sType* __dec_obj182;
void* __right_value689 = (void*)0;
int i_620;
void* __right_value690 = (void*)0;
_Bool _if_conditional10;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sType* __dec_obj183;
int i_621;
void* __right_value694 = (void*)0;
_Bool _if_conditional11;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sType* __dec_obj184;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sType* __dec_obj185;
struct sNode* __dec_obj186;
void* __right_value700 = (void*)0;
char* __dec_obj187;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__358;
void* __right_value703 = (void*)0;
char* __dec_obj188;
_Bool function_pointer_array_623;
int function_pointer_array_num_624;
int n_625;
void* __right_value704 = (void*)0;
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var14 = (void*)0;
struct list$1void$ph* param_types_626=0;
struct list$1char$ph* param_names_627=0;
struct list$1char$ph* param_default_parametors_628=0;
_Bool var_args_629=0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sType* __dec_obj189;
void* __right_value707 = (void*)0;
struct sType* __dec_obj190;
struct list$1void$ph* __dec_obj191;
struct list$1char$ph* __dec_obj192;
void* __right_value708 = (void*)0;
struct sNode* exp_630;
_Bool Value_631;
void* __right_value709 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c6_632=0;
char* Err_633=0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__359;
void* __right_value712 = (void*)0;
struct CVALUE* come_value_634;
void* __right_value713 = (void*)0;
struct sType* __dec_obj193;
void* __right_value714 = (void*)0;
char* attribute_635;
char* __dec_obj194;
void* __right_value715 = (void*)0;
char* __dec_obj195;
void* __right_value716 = (void*)0;
char* __dec_obj196;
void* __right_value717 = (void*)0;
char* __dec_obj197;
void* __right_value718 = (void*)0;
char* __dec_obj198;
_Bool no_comma_638;
void* __right_value719 = (void*)0;
struct sNode* node_639;
struct sNode* __dec_obj199;
void* __right_value720 = (void*)0;
char* attribute2_640;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value723 = (void*)0;
_Bool _if_conditional12;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sType* __dec_obj202;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
char* __dec_obj203;
struct sNode* __dec_obj204;
char* __dec_obj205;
int i_641;
void* __right_value728 = (void*)0;
_Bool _if_conditional13;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sType* __dec_obj206;
struct sNode* __dec_obj207;
char* __dec_obj208;
int i_642;
void* __right_value732 = (void*)0;
_Bool _if_conditional14;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sType* __dec_obj209;
struct sNode* __dec_obj210;
char* __dec_obj211;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
_Bool _if_conditional15;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__360;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sType* __dec_obj212;
void* __right_value742 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* generics_type_643=0;
char* var_name_644=0;
_Bool err_645=0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__361;
void* __right_value745 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c7_646=0;
char* Err_647=0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__362;
void* __right_value748 = (void*)0;
struct sType* __dec_obj213;
void* __right_value749 = (void*)0;
char* new_name_648;
struct sNode* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
void* __right_value750 = (void*)0;
struct sClass* klass_649;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sClass* klass_696;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sType* __dec_obj221;
struct sNode* __dec_obj222;
char* __dec_obj223;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct list$1void$ph* types_697;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* type2_698=0;
char* name_699=0;
_Bool err_700=0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__387;
void* __right_value777 = (void*)0;
int num_tuples_701;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sType* __dec_obj224;
struct list$1void$ph* o2_saved_702;
struct sType* it_703;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sType* __dec_obj225;
void* __right_value783 = (void*)0;
char* new_name_704;
char* __dec_obj226;
void* __right_value784 = (void*)0;
char* attribute_705;
char* __dec_obj227;
void* __right_value785 = (void*)0;
char* __dec_obj228;
void* __right_value786 = (void*)0;
char* __dec_obj229;
void* __right_value787 = (void*)0;
char* __dec_obj230;
void* __right_value788 = (void*)0;
char* __dec_obj231;
_Bool no_comma_708;
void* __right_value789 = (void*)0;
struct sNode* node_709;
struct sNode* __dec_obj232;
void* __right_value790 = (void*)0;
char* attribute2_710;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
char* __dec_obj233;
char* __dec_obj234;
void* __right_value793 = (void*)0;
struct sNode* node_711;
void* __right_value794 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var19 = (void*)0;
char* asm_name_712=0;
char* attribute2_713=0;
char* __dec_obj235;
char* __dec_obj236;
void* __right_value795 = (void*)0;
struct sType* type_before_714;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sType* __dec_obj237;
void* __right_value798 = (void*)0;
struct sNode* __list_values1___715[1];
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct list$1sNode$ph* __dec_obj238;
struct sType* __dec_obj239;
void* __right_value802 = (void*)0;
struct sType* type_before_719;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
struct sType* __dec_obj240;
struct sType* __dec_obj241;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sType* type2_720;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sType* type3_726;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sType* type4_727;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__393;
char* __dec_obj243;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__394;
type_579 = (void*)0;
var_name_580 = (void*)0;
result_type_608 = (void*)0;
result_type_619 = (void*)0;
    head_502=info->p;
    head_sline_503=info->sline;
    info->define_struct=(_Bool)0;
    type_name_504=(char*)come_increment_ref_count(parse_word(info));
    record__505=(_Bool)0;
    exception__506=(_Bool)0;
    constant_507=(_Bool)0;
    static__508=(_Bool)0;
    volatile__509=(_Bool)0;
    register__510=(_Bool)0;
    unsigned__511=(_Bool)0;
    long__512=(_Bool)0;
    long_long_513=(_Bool)0;
    short__514=(_Bool)0;
    restrict__515=(_Bool)0;
    struct__516=(_Bool)0;
    union__517=(_Bool)0;
    enum__518=(_Bool)0;
    no_heap_519=(_Bool)0;
    extern__520=(_Bool)0;
    inline__521=(_Bool)0;
    uniq__522=(_Bool)0;
    tuple__523=(_Bool)0;
    generate__524=(_Bool)0;
    alignas__525=((void*)0);
    anonymous_type_526=(_Bool)0;
    anonymous_name_527=(_Bool)0;
    atomic__528=(_Bool)0;
    object_interface_529=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_504,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_529=(_Bool)1;
            __dec_obj105=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj106=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__528=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_504,"__extension__")) {
            __dec_obj107=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_530=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_530++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_530--;
                        if(                        brace_num_530==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj108=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"__declspec")) {
            if(            *info->p==40) {
                brace_num_531=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_531++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_531--;
                        if(                        brace_num_531==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj109=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"_Noreturn")) {
            __dec_obj110=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"__noreturn")) {
            __dec_obj111=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"_Nullable")) {
            __dec_obj112=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"_noreturn")) {
            __dec_obj113=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"_Alignas")) {
            expected_next_character(40,info);
            exp_532=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj114=alignas__525;
            alignas__525=(struct sNode*)come_increment_ref_count(exp_532);
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj115=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            ((exp_532) ? exp_532 = come_decrement_ref_count2(exp_532, ((struct sNode*)exp_532)->finalize, ((struct sNode*)exp_532)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_504,"const")) {
            constant_507=(_Bool)1;
            __dec_obj116=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"static")) {
            static__508=(_Bool)1;
            __dec_obj117=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"uniq")) {
            uniq__522=(_Bool)1;
            __dec_obj118=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"record")) {
            record__505=(_Bool)1;
            __dec_obj119=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"exception")) {
            exception__506=(_Bool)1;
            __dec_obj120=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"extern")) {
            extern__520=(_Bool)1;
            __dec_obj121=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"inline")||string_operator_equals(type_name_504,"__inline")||string_operator_equals(type_name_504,"__inline__")||string_operator_equals(type_name_504,"__always_inline")||string_operator_equals(type_name_504,"__forceinline")) {
            inline__521=(_Bool)1;
            __dec_obj122=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"volatile")) {
            volatile__509=(_Bool)1;
            __dec_obj123=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"generate")) {
            generate__524=(_Bool)1;
            __dec_obj124=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"struct")) {
            struct__516=(_Bool)1;
            if(            *info->p==123) {
                p_533=info->p;
                sline_534=info->sline;
                ((char*)(__right_value572=skip_block(info)));
                (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    anonymous_name_527=(_Bool)1;
                    anonymous_type_526=(_Bool)1;
                    __dec_obj125=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_533;
                    info->sline=sline_534;
                    break;
                }
                else {
                    anonymous_type_526=(_Bool)1;
                    __dec_obj126=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_533;
                    info->sline=sline_534;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value575=parse_struct_attribute(info)));
                (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj127=type_name_504;
                type_name_504=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_535=info->p;
                    sline_536=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_535;
                                info->sline=sline_536;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var8=((struct tuple2$2int$char$ph*)(__right_value577=err_msg(info,"invalid struct definition")));
                            come_exception_var_c3_537=multiple_assign_var8->v1;
                            Err_538=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                            ((Err_538)?(puts(Err_538),exit(0)):(0));
                            come_call_finalizer3(__right_value577,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            __result_obj__346 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value579=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1449, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(__right_value579,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__result_obj__346,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                            return __result_obj__346;
                            (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_539=info->p;
                    sline_540=info->sline;
                    ((char*)(__right_value580=skip_block(info)));
                    (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (void)((char*)(__right_value581=parse_struct_attribute(info)));
                    (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        info->p=head_502;
                        info->sline=head_sline_503;
                        info->define_struct=(_Bool)1;
                        __result_obj__347 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value583=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1469, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(__right_value583,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__result_obj__347,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                        return __result_obj__347;
                    }
                    else {
                        info->p=p_539;
                        info->sline=sline_540;
                        node_541=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_504),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_542=node_compile(node_541,info);
                        if(                        !Value_542) {
                            __result_obj__348 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value587=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1481, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_541) ? node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(__right_value587,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                            come_call_finalizer3(__result_obj__348,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                            return __result_obj__348;
                        }
                        else {
                        }
                        ((node_541) ? node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                        ((node_541) ? node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_504,"union")) {
            union__517=(_Bool)1;
            if(            *info->p==123) {
                p_543=info->p;
                sline_544=info->sline;
                ((char*)(__right_value588=skip_block(info)));
                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value589=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value589,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_502;
                    info->sline=head_sline_503;
                    info->define_struct=(_Bool)0;
                    anonymous_type_526=(_Bool)1;
                    __dec_obj128=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_543;
                    info->sline=sline_544;
                    break;
                }
                else {
                    anonymous_type_526=(_Bool)1;
                    __dec_obj129=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_543;
                    info->sline=sline_544;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj130=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_545=info->p;
                sline_546=info->sline;
                ((char*)(__right_value593=skip_block(info)));
                (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_502;
                    info->sline=head_sline_503;
                    info->define_struct=(_Bool)1;
                    __result_obj__349 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value595=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1538, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value595,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__349,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__349;
                }
                else {
                    anonymous_type_526=(_Bool)1;
                    info->p=p_545;
                    info->sline=sline_546;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_504,"enum")) {
            enum__518=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple3$3sType$phchar$phbool$*)(__right_value596=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_547=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_548=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_549=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value596,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_548 = come_decrement_ref_count2(name_548, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_550=info->p;
                sline_551=info->sline;
                ((char*)(__right_value597=skip_block(info)));
                (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value598=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value598,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_502;
                    info->sline=head_sline_503;
                    info->define_struct=(_Bool)1;
                    __result_obj__350 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value600=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1576, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value600,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__350,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__350;
                }
                else {
                    anonymous_type_526=(_Bool)1;
                    __dec_obj131=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_550;
                    info->sline=sline_551;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj132=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value603=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_552=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                name_553=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                err_554=multiple_assign_var10->v3;
                come_call_finalizer3(__right_value603,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_553 = come_decrement_ref_count2(name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_555=info->p;
                sline_556=info->sline;
                ((char*)(__right_value604=skip_block(info)));
                (__right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_502;
                    info->sline=head_sline_503;
                    info->define_struct=(_Bool)1;
                    __result_obj__351 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value606=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1612, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value606,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__351,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__351;
                }
                else {
                    anonymous_type_526=(_Bool)1;
                    info->p=p_555;
                    info->sline=sline_556;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_504,"long")) {
            {
                p_557=info->p;
                sline_558=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)) {
                    info->p=p_557;
                    info->sline=sline_558;
                    __dec_obj133=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj134=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_504,"unsigned")) {
                        __dec_obj135=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_504,"int")) {
                            long__512=(_Bool)1;
                            unsigned__511=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_504,"signed")) {
                        __dec_obj136=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_504,"int")) {
                            long__512=(_Bool)1;
                            unsigned__511=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_504,"long")) {
                        p_557=info->p;
                        sline_558=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            long_long_513=(_Bool)1;
                            __dec_obj137=type_name_504;
                            type_name_504=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__512=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_504,"int")) {
                            long_long_513=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_504,info)) {
                            __dec_obj138=type_name_504;
                            type_name_504=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_513=(_Bool)1;
                            info->p=p_557;
                            info->sline=sline_558;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_504,info)) {
                        if(                        long__512) {
                            long_long_513=(_Bool)1;
                            long__512=(_Bool)0;
                        }
                        else {
                            long__512=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_557;
                        info->sline=sline_558;
                        __dec_obj139=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_504,"unsigned")) {
            unsigned__511=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_559=info->p;
                sline_560=info->sline;
                __dec_obj140=type_name_504;
                type_name_504=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_504,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_561=info->p;
                        sline_562=info->sline;
                        __dec_obj141=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_504,info)) {
                            short__514=(_Bool)1;
                        }
                        else {
                            short__514=(_Bool)1;
                            __dec_obj142=type_name_504;
                            type_name_504=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_561;
                            info->sline=sline_562;
                        }
                    }
                    else {
                        short__514=(_Bool)1;
                        __dec_obj143=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_504,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_563=info->p;
                        sline_564=info->sline;
                        __dec_obj144=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_504,info)) {
                            long__512=(_Bool)1;
                        }
                        else {
                            long__512=(_Bool)1;
                            __dec_obj145=type_name_504;
                            type_name_504=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_563;
                            info->sline=sline_564;
                        }
                    }
                    else {
                        long__512=(_Bool)1;
                        __dec_obj146=type_name_504;
                        type_name_504=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_504,info)) {
                    __dec_obj147=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_559;
                    info->sline=sline_560;
                    break;
                }
            }
            else {
                __dec_obj148=type_name_504;
                type_name_504=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_504,"signed")||string_operator_equals(type_name_504,"__signed__")) {
            unsigned__511=(_Bool)0;
            __dec_obj149=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"register")) {
            register__510=(_Bool)1;
            __dec_obj150=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"restrict")) {
            restrict__515=(_Bool)1;
            __dec_obj151=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"_Addr")) {
            __dec_obj152=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"__restrict")) {
            restrict__515=(_Bool)1;
            __dec_obj153=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_504,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj154=type_name_504;
            type_name_504=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__523=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_504,"short")) {
            short__514=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_565=info->p;
                sline_566=info->sline;
                __dec_obj155=type_name_504;
                type_name_504=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_504,"int")) {
                    short__514=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_504,"short")) {
                    short__514=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_504,info)) {
                    info->p=p_565;
                    info->sline=sline_566;
                }
                else {
                    __dec_obj156=type_name_504;
                    type_name_504=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_565;
                    info->sline=sline_566;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_567=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_568=0;
    heap_569=(_Bool)0;
    refference_570=(_Bool)0;
    no_refference_571=(_Bool)0;
    channel_572=(_Bool)0;
    any_class_573=(_Bool)0;
    vtable_574=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_568++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_574=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_573=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_569=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_572=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_575=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__523) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj157=tuple_name_575;
        tuple_name_575=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__528) {
        expected_next_character(41,info);
    }
    lambda_flag_576=(_Bool)0;
    {
        pX_577=info->p;
        slineX_578=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value633=parse_word(info)));
            (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_576=(_Bool)1;
            }
        }
        info->p=pX_577;
        info->sline=slineX_578;
    }
    function_pointer_flag_581=(_Bool)0;
    {
        p_582=info->p;
        sline_583=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_581=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_584=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_581=(_Bool)1;
                    }
                }
                (word_584 = come_decrement_ref_count2(word_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_582;
        info->sline=sline_583;
    }
    var_name_between_brace_585=(_Bool)0;
    {
        p_586=info->p;
        sline_587=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_588=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_588,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_585=(_Bool)1;
                    }
                }
                (word_588 = come_decrement_ref_count2(word_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_586;
        info->sline=sline_587;
    }
    if(    anonymous_type_526&&*info->p==123) {
        static int anonymous_num_589=0;
        if(        struct__516) {
            if(            string_operator_equals(type_name_504,"")) {
                __dec_obj158=type_name_504;
                type_name_504=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_589));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_590=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_504),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_591=node_compile(node_590,info);
            if(            !Value_591) {
                multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value639=err_msg(info,"parse_struct is failed")));
                come_exception_var_c4_592=multiple_assign_var11->v1;
                Err_593=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                ((Err_593)?(puts(Err_593),exit(0)):(0));
                come_call_finalizer3(__right_value639,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__352 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value641=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2026, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (Err_593 = come_decrement_ref_count2(Err_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_590) ? node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value641,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__352,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__352;
                (Err_593 = come_decrement_ref_count2(Err_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            pointer_num_594=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_594++;
            }
            __dec_obj159=type_579;
            type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2039, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj159,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_579->mPointerNum=pointer_num_594;
            ((node_590) ? node_590 = come_decrement_ref_count2(node_590, ((struct sNode*)node_590)->finalize, ((struct sNode*)node_590)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        enum__518) {
            if(            string_operator_equals(type_name_504,"")) {
                __dec_obj160=type_name_504;
                type_name_504=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_589));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_595=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_504),info));
            if(            !info->no_output_err) {
                Value_596=node_compile(node_595,info);
                if(                !Value_596) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__353 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value647=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2053, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_595) ? node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value647,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__353,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__353;
                }
                else {
                }
            }
            __dec_obj161=type_579;
            type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2057, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_595) ? node_595 = come_decrement_ref_count2(node_595, ((struct sNode*)node_595)->finalize, ((struct sNode*)node_595)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        union__517) {
            if(            string_operator_equals(type_name_504,"")) {
                __dec_obj162=type_name_504;
                type_name_504=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_589));
                __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_597=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_504),info));
            Value_598=node_compile(node_597,info);
            if(            !Value_598) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__354 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value653=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2069, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_597) ? node_597 = come_decrement_ref_count2(node_597, ((struct sNode*)node_597)->finalize, ((struct sNode*)node_597)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value653,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__354,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__354;
            }
            else {
            }
            pointer_num_599=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_599++;
            }
            __dec_obj163=type_579;
            type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2083, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_579->mPointerNum=pointer_num_599;
            ((node_597) ? node_597 = come_decrement_ref_count2(node_597, ((struct sNode*)node_597)->finalize, ((struct sNode*)node_597)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value656=err_msg(info,"unexpected { character")));
            come_exception_var_c5_600=multiple_assign_var12->v1;
            Err_601=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            ((Err_601)?(puts(Err_601),exit(0)):(0));
            come_call_finalizer3(__right_value656,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__355 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value658=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2089, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_601 = come_decrement_ref_count2(Err_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value658,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__355,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__355;
            (Err_601 = come_decrement_ref_count2(Err_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        attribute_602=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_602,"")) {
            __dec_obj164=type_579->mAttribute;
            type_579->mAttribute=(char*)come_increment_ref_count(attribute_602);
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_585&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj165=var_name_580;
                var_name_580=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_527) {
                static int num_anonymous_var_name_603=0;
                num_anonymous_var_name_603++;
                __dec_obj166=var_name_580;
                var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_603));
                __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj167=var_name_580;
                var_name_580=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_604=0;
                num_anonymous_var_name_604++;
                __dec_obj168=var_name_580;
                var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_604));
                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_585&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_605=info->no_comma;
                info->no_comma=(_Bool)1;
                node_606=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_605;
                __dec_obj169=type_579->mSizeNum;
                type_579->mSizeNum=(struct sNode*)come_increment_ref_count(node_606);
                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_606) ? node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_607=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_602,"")&&string_operator_not_equals(attribute2_607,"")) {
                __dec_obj170=type_579->mAttribute;
                type_579->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_602,((char*)(__right_value666=charp_operator_add(" ",attribute2_607)))));
                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value666 = come_decrement_ref_count2(__right_value666, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_607,"")) {
                __dec_obj171=type_579->mAttribute;
                type_579->mAttribute=(char*)come_increment_ref_count(attribute2_607);
                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_607 = come_decrement_ref_count2(attribute2_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_602 = come_decrement_ref_count2(attribute_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_576) {
        if(        (_if_conditional6=(((struct sType*)((void*)(__right_value668=map$2void$phvoid$ph$p_operator_load_element(info->types,type_name_504)))))),        come_call_finalizer3(__right_value668,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional6) {
            __dec_obj172=result_type_608;
            result_type_608=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value669=map$2void$phvoid$ph$p_operator_load_element(info->types,type_name_504))))));
            come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value669,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            result_type_608->mClass=((struct sClass*)((void*)(__right_value671=map$2void$phvoid$ph$p_operator_load_element(info->classes,result_type_608->mClass->mName))));
            come_call_finalizer3(__right_value671,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_504)) {
            for(            i_609=0;            i_609<list$1char$ph$p_length(info->generics_type_names);            i_609++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)(__right_value672=list$1char$ph$p_operator_load_element(info->generics_type_names,i_609))),type_name_504))),                (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional7) {
                    __dec_obj173=result_type_608;
                    result_type_608=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2157, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value674=xsprintf("generics_type%d",i_609))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_504)) {
            for(            i_613=0;            i_613<list$1char$ph$p_length(info->method_generics_type_names);            i_613++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value676=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_613))),type_name_504))),                (__right_value676 = come_decrement_ref_count2(__right_value676, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional8) {
                    __dec_obj174=result_type_608;
                    result_type_608=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2164, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value678=xsprintf("mgenerics_type%d",i_613))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            __dec_obj175=result_type_608;
            result_type_608=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2169, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_608->mAtomic=result_type_608->mAtomic||atomic__528;
        result_type_608->mConstant=result_type_608->mConstant||constant_507;
        __dec_obj176=result_type_608->mAlignas;
        result_type_608->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
        if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_608->mRegister=register__510;
        result_type_608->mUnsigned=result_type_608->mUnsigned||unsigned__511;
        result_type_608->mVolatile=volatile__509;
        result_type_608->mGenerate=generate__524;
        result_type_608->mRecord=result_type_608->mRecord||record__505;
        result_type_608->mUniq=result_type_608->mUniq||uniq__522;
        result_type_608->mStatic=(result_type_608->mStatic||static__508)&&!result_type_608->mUniq;
        result_type_608->mException=result_type_608->mException||exception__506;
        result_type_608->mExtern=result_type_608->mExtern||extern__520;
        result_type_608->mInline=result_type_608->mInline||inline__521;
        result_type_608->mRestrict=result_type_608->mRestrict||restrict__515;
        result_type_608->mLongLong=result_type_608->mLongLong||long_long_513;
        result_type_608->mLong=result_type_608->mLong||long__512;
        result_type_608->mShort=result_type_608->mShort||short__514;
        result_type_608->mPointerNum=pointer_num_568;
        result_type_608->mHeap=result_type_608->mHeap||heap_569;
        result_type_608->mChannel=result_type_608->mChannel||channel_572;
        result_type_608->mAnyClass=result_type_608->mAnyClass||any_class_573;
        result_type_608->mCreateVTable=result_type_608->mCreateVTable||vtable_574;
        __dec_obj177=var_name_580;
        var_name_580=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var13=((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value683=parse_params(info,(_Bool)0)));
        param_types_614=(struct list$1void$ph*)come_increment_ref_count(multiple_assign_var13->v1);
        param_names_615=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var13->v2);
        param_default_parametors_616=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var13->v3);
        var_args_617=multiple_assign_var13->v4;
        come_call_finalizer3(__right_value683,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj178=type_579;
        type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2199, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj178,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj179=type_579->mResultType;
        type_579->mResultType=(struct sType*)come_increment_ref_count(result_type_608);
        come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj180=type_579->mParamTypes;
        type_579->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(param_types_614);
        come_call_finalizer3(__dec_obj180,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj181=type_579->mParamNames;
        type_579->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_615);
        come_call_finalizer3(__dec_obj181,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_579->mVarArgs=var_args_617;
        type_579->mExtern=extern__520;
        come_call_finalizer3(result_type_608,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_614,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_615,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_616,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_581) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_618=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_618++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional9=(((struct sType*)((void*)(__right_value686=map$2void$phvoid$ph$p_operator_load_element(info->types,type_name_504)))))),        come_call_finalizer3(__right_value686,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional9) {
            __dec_obj182=result_type_619;
            result_type_619=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value687=map$2void$phvoid$ph$p_operator_load_element(info->types,type_name_504))))));
            come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value687,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            result_type_619->mClass=((struct sClass*)((void*)(__right_value689=map$2void$phvoid$ph$p_operator_load_element(info->classes,result_type_619->mClass->mName))));
            come_call_finalizer3(__right_value689,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_504)) {
            for(            i_620=0;            i_620<list$1char$ph$p_length(info->generics_type_names);            i_620++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)(__right_value690=list$1char$ph$p_operator_load_element(info->generics_type_names,i_620))),type_name_504))),                (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional10) {
                    __dec_obj183=result_type_619;
                    result_type_619=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2232, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value692=xsprintf("generics_type%d",i_620))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_504)) {
            for(            i_621=0;            i_621<list$1char$ph$p_length(info->method_generics_type_names);            i_621++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value694=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_621))),type_name_504))),                (__right_value694 = come_decrement_ref_count2(__right_value694, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional11) {
                    __dec_obj184=result_type_619;
                    result_type_619=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2239, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value696=xsprintf("mgenerics_type%d",i_621))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            __dec_obj185=result_type_619;
            result_type_619=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2244, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_619->mConstant=result_type_619->mConstant||constant_507;
        result_type_619->mAtomic=result_type_619->mAtomic||atomic__528;
        __dec_obj186=result_type_619->mAlignas;
        result_type_619->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_619->mRegister=register__510;
        result_type_619->mUnsigned=result_type_619->mUnsigned||unsigned__511;
        result_type_619->mVolatile=volatile__509;
        result_type_619->mGenerate=generate__524;
        result_type_619->mUniq=result_type_619->mUniq||uniq__522;
        result_type_619->mStatic=(result_type_619->mStatic||static__508)&&!result_type_619->mUniq;
        result_type_619->mRecord=result_type_619->mRecord||record__505;
        result_type_619->mException=result_type_619->mException||exception__506;
        result_type_619->mExtern=result_type_619->mExtern||extern__520;
        result_type_619->mInline=result_type_619->mInline||inline__521;
        result_type_619->mRestrict=result_type_619->mRestrict||restrict__515;
        result_type_619->mLongLong=result_type_619->mLongLong||long_long_513;
        result_type_619->mLong=result_type_619->mLong||long__512;
        result_type_619->mShort=result_type_619->mShort||short__514;
        result_type_619->mPointerNum+=pointer_num_568;
        result_type_619->mHeap=result_type_619->mHeap||heap_569;
        result_type_619->mChannel=result_type_619->mChannel||channel_572;
        result_type_619->mAnyClass=result_type_619->mAnyClass||any_class_573;
        result_type_619->mCreateVTable=result_type_619->mCreateVTable||vtable_574;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj187=var_name_580;
            var_name_580=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result_obj__358 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value702=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2273, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(result_type_619),(char*)come_increment_ref_count(var_name_580),(_Bool)0))));
                come_call_finalizer3(result_type_619,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value702,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__358,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__358;
            }
        }
        else {
            static int num_anonymous_var_name_622=0;
            num_anonymous_var_name_622++;
            __dec_obj188=var_name_580;
            var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_622));
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_623=(_Bool)0;
        function_pointer_array_num_624=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_625=0;
            while(xisdigit(*info->p)) {
                n_625=n_625*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_624=n_625;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_623=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var14=((struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value704=parse_params(info,(_Bool)0)));
        param_types_626=(struct list$1void$ph*)come_increment_ref_count(multiple_assign_var14->v1);
        param_names_627=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var14->v2);
        param_default_parametors_628=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var14->v3);
        var_args_629=multiple_assign_var14->v4;
        come_call_finalizer3(__right_value704,tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj189=type_579;
        type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2305, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj190=type_579->mResultType;
        type_579->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_619));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj191=type_579->mParamTypes;
        type_579->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(param_types_626);
        come_call_finalizer3(__dec_obj191,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj192=type_579->mParamNames;
        type_579->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_627);
        come_call_finalizer3(__dec_obj192,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_579->mVarArgs=var_args_629;
        type_579->mExtern=extern__520;
        if(        function_pointer_array_623) {
            type_579->mLambdaArray=(_Bool)1;
            type_579->mLambdaArrayNum=function_pointer_array_num_624;
        }
        type_579->mFunctionPointerNum=function_pointer_num_618;
        come_call_finalizer3(result_type_619,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_626,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_627,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_628,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_504,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_630=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_631=node_compile(exp_630,info);
        if(        !Value_631) {
            multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value709=err_msg(info,"invalid __typeof__ expression")));
            come_exception_var_c6_632=multiple_assign_var15->v1;
            Err_633=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            ((Err_633)?(puts(Err_633),exit(0)):(0));
            come_call_finalizer3(__right_value709,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__359 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value711=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2329, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_633 = come_decrement_ref_count2(Err_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_630) ? exp_630 = come_decrement_ref_count2(exp_630, ((struct sNode*)exp_630)->finalize, ((struct sNode*)exp_630)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value711,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__result_obj__359,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__359;
            (Err_633 = come_decrement_ref_count2(Err_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        come_value_634=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj193=type_579;
        type_579=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_634->type));
        come_call_finalizer3(__dec_obj193,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_635=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_635,"")) {
            __dec_obj194=type_579->mAttribute;
            type_579->mAttribute=(char*)come_increment_ref_count(attribute_635);
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_585&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj195=var_name_580;
                var_name_580=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_527) {
                static int num_anonymous_var_name_636=0;
                num_anonymous_var_name_636++;
                __dec_obj196=var_name_580;
                var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_636));
                __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj197=var_name_580;
                var_name_580=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_637=0;
                num_anonymous_var_name_637++;
                __dec_obj198=var_name_580;
                var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_637));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_585&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_638=info->no_comma;
                info->no_comma=(_Bool)1;
                node_639=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_638;
                __dec_obj199=type_579->mSizeNum;
                type_579->mSizeNum=(struct sNode*)come_increment_ref_count(node_639);
                if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_639) ? node_639 = come_decrement_ref_count2(node_639, ((struct sNode*)node_639)->finalize, ((struct sNode*)node_639)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_640=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_635,"")&&string_operator_not_equals(attribute2_640,"")) {
                __dec_obj200=type_579->mAttribute;
                type_579->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_635,((char*)(__right_value721=charp_operator_add(" ",attribute2_640)))));
                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_640,"")) {
                __dec_obj201=type_579->mAttribute;
                type_579->mAttribute=(char*)come_increment_ref_count(attribute2_640);
                __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_640 = come_decrement_ref_count2(attribute2_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_630) ? exp_630 = come_decrement_ref_count2(exp_630, ((struct sNode*)exp_630)->finalize, ((struct sNode*)exp_630)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_635 = come_decrement_ref_count2(attribute_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_if_conditional12=(((struct sType*)((void*)(__right_value723=map$2void$phvoid$ph$p_operator_load_element(info->types,type_name_504)))))),        come_call_finalizer3(__right_value723,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional12) {
            __dec_obj202=type_579;
            type_579=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value724=map$2void$phvoid$ph$p_operator_load_element(info->types,type_name_504))))));
            come_call_finalizer3(__dec_obj202,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value724,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            type_579->mTypedefOriginalPointerNum=type_579->mPointerNum;
            type_579->mClass=((struct sClass*)((void*)(__right_value726=map$2void$phvoid$ph$p_operator_load_element(info->classes,type_579->mClass->mName))));
            come_call_finalizer3(__right_value726,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            __dec_obj203=type_579->mOriginalTypeName;
            type_579->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_504));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_579->mOriginalTypeNamePointerNum=pointer_num_568;
            type_579->mOriginalTypeNameHeap=heap_569;
            type_579->mConstant=type_579->mConstant||constant_507;
            type_579->mAtomic=type_579->mAtomic||atomic__528;
            __dec_obj204=type_579->mAlignas;
            type_579->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
            type_579->mRegister=register__510;
            type_579->mUnsigned=type_579->mUnsigned||unsigned__511;
            type_579->mVolatile=volatile__509;
            type_579->mGenerate=generate__524;
            type_579->mUniq=type_579->mUniq||uniq__522;
            type_579->mStatic=(type_579->mStatic||static__508)&&!type_579->mUniq;
            type_579->mRecord=type_579->mRecord||record__505;
            type_579->mException=type_579->mException||exception__506;
            type_579->mExtern=type_579->mExtern||extern__520;
            type_579->mInline=type_579->mInline||inline__521;
            type_579->mRestrict=type_579->mRestrict||restrict__515;
            type_579->mLongLong=type_579->mLongLong||long_long_513;
            type_579->mLong=type_579->mLong||long__512;
            type_579->mShort=type_579->mShort||short__514;
            type_579->mPointerNum+=pointer_num_568;
            type_579->mHeap=type_579->mHeap||heap_569;
            type_579->mChannel=type_579->mChannel||channel_572;
            type_579->mAnyClass=type_579->mAnyClass||any_class_573;
            type_579->mCreateVTable=type_579->mCreateVTable||vtable_574;
            __dec_obj205=type_579->mTupleName;
            type_579->mTupleName=(char*)come_increment_ref_count(tuple_name_575);
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_504)) {
            for(            i_641=0;            i_641<list$1char$ph$p_length(info->generics_type_names);            i_641++            ){
                if(                (_if_conditional13=(string_operator_equals(((char*)(__right_value728=list$1char$ph$p_operator_load_element(info->generics_type_names,i_641))),type_name_504))),                (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional13) {
                    __dec_obj206=type_579;
                    type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2429, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value730=xsprintf("generics_type%d",i_641))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_579->mConstant=type_579->mConstant||constant_507;
            type_579->mAtomic=type_579->mAtomic||atomic__528;
            __dec_obj207=type_579->mAlignas;
            type_579->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); };
            type_579->mRegister=register__510;
            type_579->mUnsigned=type_579->mUnsigned||unsigned__511;
            type_579->mVolatile=volatile__509;
            type_579->mGenerate=generate__524;
            type_579->mUniq=type_579->mUniq||uniq__522;
            type_579->mStatic=(type_579->mStatic||static__508)&&!type_579->mUniq;
            type_579->mRecord=type_579->mRecord||record__505;
            type_579->mException=type_579->mException||exception__506;
            type_579->mExtern=type_579->mExtern||extern__520;
            type_579->mInline=type_579->mInline||inline__521;
            type_579->mRestrict=type_579->mRestrict||restrict__515;
            type_579->mLongLong=type_579->mLongLong||long_long_513;
            type_579->mLong=type_579->mLong||long__512;
            type_579->mShort=type_579->mShort||short__514;
            type_579->mPointerNum+=pointer_num_568;
            type_579->mHeap=type_579->mHeap||heap_569;
            type_579->mChannel=type_579->mChannel||channel_572;
            type_579->mAnyClass=type_579->mAnyClass||any_class_573;
            type_579->mCreateVTable=type_579->mCreateVTable||vtable_574;
            __dec_obj208=type_579->mTupleName;
            type_579->mTupleName=(char*)come_increment_ref_count(tuple_name_575);
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_504)) {
            for(            i_642=0;            i_642<list$1char$ph$p_length(info->method_generics_type_names);            i_642++            ){
                if(                (_if_conditional14=(string_operator_equals(((char*)(__right_value732=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_642))),type_name_504))),                (__right_value732 = come_decrement_ref_count2(__right_value732, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional14) {
                    __dec_obj209=type_579;
                    type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2460, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value734=xsprintf("mgenerics_type%d",i_642))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj209,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_579->mConstant=type_579->mConstant||constant_507;
            type_579->mAtomic=type_579->mAtomic||atomic__528;
            __dec_obj210=type_579->mAlignas;
            type_579->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
            if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
            type_579->mRegister=register__510;
            type_579->mUnsigned=type_579->mUnsigned||unsigned__511;
            type_579->mVolatile=volatile__509;
            type_579->mGenerate=generate__524;
            type_579->mUniq=type_579->mUniq||uniq__522;
            type_579->mStatic=(type_579->mStatic||static__508)&&!type_579->mUniq;
            type_579->mRecord=type_579->mRecord||record__505;
            type_579->mException=type_579->mException||exception__506;
            type_579->mExtern=type_579->mExtern||extern__520;
            type_579->mInline=type_579->mInline||inline__521;
            type_579->mRestrict=type_579->mRestrict||restrict__515;
            type_579->mLongLong=type_579->mLongLong||long_long_513;
            type_579->mLong=type_579->mLong||long__512;
            type_579->mShort=type_579->mShort||short__514;
            type_579->mPointerNum+=pointer_num_568;
            type_579->mHeap=type_579->mHeap||heap_569;
            type_579->mChannel=type_579->mChannel||channel_572;
            type_579->mAnyClass=type_579->mAnyClass||any_class_573;
            type_579->mCreateVTable=type_579->mCreateVTable||vtable_574;
            __dec_obj211=type_579->mTupleName;
            type_579->mTupleName=(char*)come_increment_ref_count(tuple_name_575);
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional15=(((struct sClass*)((void*)(__right_value737=map$2void$phvoid$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value736=__builtin_string(type_name_504)))))))==((void*)0))),            (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value737,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
            _if_conditional15) {
                __result_obj__360 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value739=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2494, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value739,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__360,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__360;
            }
            __dec_obj212=type_579;
            type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2497, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while((_Bool)1) {
                multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value742=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_643=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                var_name_644=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                err_645=multiple_assign_var16->v3;
                come_call_finalizer3(__right_value742,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_645) {
                    __result_obj__361 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value744=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2503, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer3(generics_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value744,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__361,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__361;
                }
                list$1void$ph$p_push_back(type_579->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_643));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value745=err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2))));
                    come_exception_var_c7_646=multiple_assign_var17->v1;
                    Err_647=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                    ((Err_647)?(puts(Err_647),exit(0)):(0));
                    come_call_finalizer3(__right_value745,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__362 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value747=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2520, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (Err_647 = come_decrement_ref_count2(Err_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(generics_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value747,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__362,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__362;
                    (Err_647 = come_decrement_ref_count2(Err_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                come_call_finalizer3(generics_type_643,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_644 = come_decrement_ref_count2(var_name_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            is_contained_generics_class(type_579,info)) {
                __dec_obj213=type_579;
                type_579=(struct sType*)come_increment_ref_count(solve_generics(type_579,info->generics_type,info));
                come_call_finalizer3(__dec_obj213,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_579,type_579,info)) {
                    new_name_648=(char*)come_increment_ref_count(create_generics_name(type_579,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_648);
                    exit(7);
                    (new_name_648 = come_decrement_ref_count2(new_name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_579->mConstant=type_579->mConstant||constant_507;
            type_579->mAtomic=type_579->mAtomic||atomic__528;
            __dec_obj214=type_579->mAlignas;
            type_579->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
            if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count2(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0, (void*)0); };
            type_579->mRegister=register__510;
            type_579->mUnsigned=type_579->mUnsigned||unsigned__511;
            type_579->mVolatile=volatile__509;
            type_579->mGenerate=generate__524;
            type_579->mUniq=type_579->mUniq||uniq__522;
            type_579->mStatic=(type_579->mStatic||static__508)&&!type_579->mUniq;
            type_579->mRecord=type_579->mRecord||record__505;
            type_579->mException=type_579->mException||exception__506;
            type_579->mExtern=type_579->mExtern||extern__520;
            type_579->mInline=type_579->mInline||inline__521;
            type_579->mRestrict=type_579->mRestrict||restrict__515;
            type_579->mLongLong=type_579->mLongLong||long_long_513;
            type_579->mLong=type_579->mLong||long__512;
            type_579->mShort=type_579->mShort||short__514;
            type_579->mPointerNum+=pointer_num_568;
            type_579->mHeap=type_579->mHeap||heap_569;
            type_579->mChannel=type_579->mChannel||channel_572;
            type_579->mAnyClass=type_579->mAnyClass||any_class_573;
            type_579->mCreateVTable=type_579->mCreateVTable||vtable_574;
            __dec_obj215=type_579->mTupleName;
            type_579->mTupleName=(char*)come_increment_ref_count(tuple_name_575);
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj216=type_name_504;
            type_name_504=(char*)come_increment_ref_count(type_579->mClass->mName);
            __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__516) {
                klass_649=((struct sClass*)((void*)(__right_value750=map$2void$phvoid$ph$p_operator_load_element(info->classes,type_name_504))));
                come_call_finalizer3(__right_value750,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                klass_649==((void*)0)&&*info->p!=60) {
                    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(type_name_504),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2567, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),(char*)come_increment_ref_count(type_name_504),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__517) {
                klass_696=((struct sClass*)((void*)(__right_value766=map$2void$phvoid$ph$p_operator_load_element(info->classes,type_name_504))));
                come_call_finalizer3(__right_value766,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                if(                klass_696==((void*)0)&&*info->p!=60) {
                    map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(type_name_504),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2574, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),(char*)come_increment_ref_count(type_name_504),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj221=type_579;
            type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2578, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_504,(_Bool)0,info));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_579->mConstant=type_579->mConstant||constant_507;
            type_579->mAtomic=type_579->mAtomic||atomic__528;
            __dec_obj222=type_579->mAlignas;
            type_579->mAlignas=(struct sNode*)come_increment_ref_count(alignas__525);
            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
            type_579->mRegister=register__510;
            type_579->mUnsigned=type_579->mUnsigned||unsigned__511;
            type_579->mVolatile=volatile__509;
            type_579->mGenerate=generate__524;
            type_579->mUniq=type_579->mUniq||uniq__522;
            type_579->mStatic=(type_579->mStatic||static__508)&&!type_579->mUniq;
            type_579->mRecord=type_579->mRecord||record__505;
            type_579->mException=type_579->mException||exception__506;
            type_579->mExtern=type_579->mExtern||extern__520;
            type_579->mInline=type_579->mInline||inline__521;
            type_579->mRestrict=type_579->mRestrict||restrict__515;
            type_579->mLongLong=type_579->mLongLong||long_long_513;
            type_579->mLong=type_579->mLong||long__512;
            type_579->mShort=type_579->mShort||short__514;
            type_579->mPointerNum+=pointer_num_568;
            type_579->mHeap=type_579->mHeap||heap_569;
            type_579->mChannel=type_579->mChannel||channel_572;
            type_579->mAnyClass=type_579->mAnyClass||any_class_573;
            type_579->mCreateVTable=type_579->mCreateVTable||vtable_574;
            __dec_obj223=type_579->mTupleName;
            type_579->mTupleName=(char*)come_increment_ref_count(tuple_name_575);
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_579->mPointerNum++;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_579->mHeap=(_Bool)1;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_579->mNoHeap=(_Bool)1;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_579->mGuardValue=(_Bool)1;
                }
                else {
                    type_579->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_579->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_579->mPointerNum++;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_579->mHeap=(_Bool)1;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_579->mCreateVTable=(_Bool)1;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_579->mAnyClass=(_Bool)1;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_579->mChannel=(_Bool)1;
                if(                type_579->mNoSolvedGenericsType) {
                    type_579->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_697=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "05type.c", 2721, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
            list$1void$ph$p_push_back(types_697,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_579)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value774=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_698=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                name_699=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                err_700=multiple_assign_var18->v3;
                come_call_finalizer3(__right_value774,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_700) {
                    __result_obj__387 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value776=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2732, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer3(type2_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_699 = come_decrement_ref_count2(name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(types_697,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value776,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__387,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__387;
                }
                list$1void$ph$p_push_back(types_697,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_698)));
                come_call_finalizer3(type2_698,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_699 = come_decrement_ref_count2(name_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_701=list$1void$ph$p_length(types_697);
            __dec_obj224=type_579;
            type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2745, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value779=xsprintf("tuple%d",num_tuples_701))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            type_579->mPointerNum++;
            type_579->mHeap=(_Bool)1;
            for(            o2_saved_702=(struct list$1void$ph*)come_increment_ref_count((types_697)),it_703=((struct sType*)list$1void$ph$p_begin((o2_saved_702)));            !list$1void$ph$p_end((o2_saved_702));            it_703=((struct sType*)list$1void$ph$p_next((o2_saved_702)))            ){
                list$1void$ph$p_push_back(type_579->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value781=come_call_cloner(sType_clone, it_703))))));
                come_call_finalizer3(__right_value781,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_702,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_579->mPointerNum++;
                    if(                    type_579->mNoSolvedGenericsType) {
                        type_579->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_579->mHeap=(_Bool)1;
                    if(                    type_579->mNoSolvedGenericsType) {
                        type_579->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_579->mCreateVTable=(_Bool)1;
                    if(                    type_579->mNoSolvedGenericsType) {
                        type_579->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_579->mAnyClass=(_Bool)1;
                    if(                    type_579->mNoSolvedGenericsType) {
                        type_579->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_579->mChannel=(_Bool)1;
                    if(                    type_579->mNoSolvedGenericsType) {
                        type_579->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_579,info)) {
                __dec_obj225=type_579;
                type_579=(struct sType*)come_increment_ref_count(solve_generics(type_579,info->generics_type,info));
                come_call_finalizer3(__dec_obj225,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_579,type_579,info)) {
                    new_name_704=(char*)come_increment_ref_count(create_generics_name(type_579,info));
                    printf("output generics is failed(%s)\n",new_name_704);
                    exit(9);
                    (new_name_704 = come_decrement_ref_count2(new_name_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_579->mMultipleTypes=(_Bool)1;
            __dec_obj226=type_name_504;
            type_name_504=(char*)come_increment_ref_count(type_579->mClass->mName);
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_697,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_705=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_705,"")) {
            __dec_obj227=type_579->mAttribute;
            type_579->mAttribute=(char*)come_increment_ref_count(attribute_705);
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_585&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj228=var_name_580;
                var_name_580=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_527) {
                static int num_anonymous_var_name_706=0;
                num_anonymous_var_name_706++;
                __dec_obj229=var_name_580;
                var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_706));
                __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj230=var_name_580;
                var_name_580=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_707=0;
                num_anonymous_var_name_707++;
                __dec_obj231=var_name_580;
                var_name_580=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_707));
                __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_585&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_708=info->no_comma;
                info->no_comma=(_Bool)1;
                node_709=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_708;
                __dec_obj232=type_579->mSizeNum;
                type_579->mSizeNum=(struct sNode*)come_increment_ref_count(node_709);
                if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
                ((node_709) ? node_709 = come_decrement_ref_count2(node_709, ((struct sNode*)node_709)->finalize, ((struct sNode*)node_709)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_710=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_705,"")&&string_operator_not_equals(attribute2_710,"")) {
                __dec_obj233=type_579->mAttribute;
                type_579->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_705,((char*)(__right_value791=charp_operator_add(" ",attribute2_710)))));
                __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_710,"")) {
                __dec_obj234=type_579->mAttribute;
                type_579->mAttribute=(char*)come_increment_ref_count(attribute2_710);
                __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            (attribute2_710 = come_decrement_ref_count2(attribute2_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_705 = come_decrement_ref_count2(attribute_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_579->mArrayPointerType=(_Bool)1;
            type_579->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_711=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph$p_push_back(type_579->mArrayNum,(struct sNode*)come_increment_ref_count(node_711));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_711) ? node_711 = come_decrement_ref_count2(node_711, ((struct sNode*)node_711)->finalize, ((struct sNode*)node_711)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var19=((struct tuple2$2char$phchar$ph*)(__right_value794=parse_attribute(info,(_Bool)0)));
    asm_name_712=(char*)come_increment_ref_count(multiple_assign_var19->v1);
    attribute2_713=(char*)come_increment_ref_count(multiple_assign_var19->v2);
    come_call_finalizer3(__right_value794,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    if(    string_operator_not_equals(attribute2_713,"")) {
        __dec_obj235=type_579->mAttribute;
        type_579->mAttribute=(char*)come_increment_ref_count(attribute2_713);
        __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj236=type_579->mAsmName;
    type_579->mAsmName=(char*)come_increment_ref_count(asm_name_712);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_579->mChannel) {
        type_before_714=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_579));
        __dec_obj237=type_579;
        type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2918, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj237,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj238=type_579->mArrayNum;
        type_579->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___715[0]=((struct sNode*)(__right_value798=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2919, "struct list$1sNode$ph", list$1sNode$ph_finalize, list$1sNode$ph_clone, list$1sNode$ph_get_hash_key, list$1sNode$ph_equals)),1,__list_values1___715)));
        come_call_finalizer3(__dec_obj238,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value798) ? __right_value798 = come_decrement_ref_count2(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        __dec_obj239=type_579->mChannelType;
        type_579->mChannelType=(struct sType*)come_increment_ref_count(type_before_714);
        come_call_finalizer3(__dec_obj239,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_579->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_714,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_579->mAnyClass&&!type_579->mClass->mProtocol) {
        type_before_719=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_579));
        type_before_719->mHeap=(_Bool)1;
        type_before_719->mPointerNum=1;
        __dec_obj240=type_579;
        type_579=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2927, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj240,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_579->mHeap=(_Bool)1;
        type_579->mPointerNum=1;
        __dec_obj241=type_579->mAnyOriginalType;
        type_579->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_719);
        come_call_finalizer3(__dec_obj241,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_579->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_719,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_579->mException) {
        type2_720=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2934, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1void$ph$p_operator_store_element(type2_720->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2935, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type0",(_Bool)0,info)));
        list$1void$ph$p_operator_store_element(type2_720->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2936, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type1",(_Bool)0,info)));
        type2_720->mPointerNum=1;
        type2_720->mHeap=(_Bool)1;
        type3_726=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2940, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1void$ph$p_operator_store_element(type3_726->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_579));
        list$1void$ph$p_operator_store_element(type3_726->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2942, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)));
        ((struct sType*)((void*)(__right_value815=list$1void$ph$p_operator_load_element(type3_726->mGenericsTypes,1))))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value815,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        type4_727=(struct sType*)come_increment_ref_count(solve_generics(type2_720,type3_726,info));
        type4_727->mException=(_Bool)1;
        type4_727->mUniq=type_579->mUniq;
        __result_obj__393 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value818=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2950, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type4_727),(char*)come_increment_ref_count(var_name_580),(_Bool)1))));
        come_call_finalizer3(type2_720,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_727,sType_finalize, 0, 0, 0, 0, (void*)0);
        (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_712 = come_decrement_ref_count2(asm_name_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_713 = come_decrement_ref_count2(attribute2_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value818,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__393,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__393;
        come_call_finalizer3(type2_720,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_726,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_727,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_567,"")) {
        __dec_obj243=type_579->mAttribute;
        type_579->mAttribute=(char*)come_increment_ref_count(attribute_567);
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__394 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value820=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2957, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type_579),(char*)come_increment_ref_count(var_name_580),(_Bool)1))));
    (type_name_504 = come_decrement_ref_count2(type_name_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__525) ? alignas__525 = come_decrement_ref_count2(alignas__525, ((struct sNode*)alignas__525)->finalize, ((struct sNode*)alignas__525)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute_567 = come_decrement_ref_count2(attribute_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_575 = come_decrement_ref_count2(tuple_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_579,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_580 = come_decrement_ref_count2(var_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_712 = come_decrement_ref_count2(asm_name_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_713 = come_decrement_ref_count2(attribute2_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value820,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__394,tuple3$3sType$phchar$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__394;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_610;
int i_611;
char* __result_obj__356;
char* default_value_612;
char* __result_obj__357;
default_value_612 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_610=self->head;
    i_611=0;
    while(it_610!=((void*)0)) {
        if(        position==i_611) {
            __result_obj__356 = come_increment_ref_count(it_610->item);
            (__result_obj__356 = come_decrement_ref_count2(__result_obj__356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__356;
        }
        it_610=it_610->next;
        i_611++;
    }
    memset(&default_value_612,0,sizeof(char*));
    __result_obj__357 = come_increment_ref_count(default_value_612);
    (default_value_612 = come_decrement_ref_count2(default_value_612, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__357 = come_decrement_ref_count2(__result_obj__357, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__357;
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

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
unsigned int hash_667;
unsigned int it_668;
_Bool same_key_exist_685;
char* it2_688;
struct map$2void$phvoid$ph* __result_obj__384;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_667=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_668=hash_667;
    while((_Bool)1) {
        if(        self->item_existance[it_668]) {
            if(            come_call_equals((void*)0, self->keys[it_668], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_668]);
                    come_call_finalizer3(self->keys[it_668],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_668]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_668]);
                    self->keys[it_668]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_668],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_668]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_668]=item;
                }
                break;
            }
            it_668++;
            if(            it_668>=self->size) {
                it_668=0;
            }
            else if(            it_668==hash_667) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_668]=(_Bool)1;
            if(            1) {
                self->keys[it_668]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_668]=key;
            }
            if(            1) {
                self->items[it_668]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_668]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_685=(_Bool)0;
    for(    it2_688=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_688=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_688, key)) {
            same_key_exist_685=(_Bool)1;
        }
    }
    if(    !same_key_exist_685) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result_obj__384 = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__384;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_650;
void* __right_value751 = (void*)0;
void** keys_651;
void* __right_value752 = (void*)0;
void** items_652;
void* __right_value753 = (void*)0;
_Bool* item_existance_653;
int len_654;
void* it_657;
void* default_value_660;
void* __right_value754 = (void*)0;
void* it2_661;
unsigned int hash_664;
int n_665;
void* default_value_666;
void* __right_value755 = (void*)0;
default_value_660 = (void*)0;
default_value_666 = (void*)0;
    size_650=self->size*10;
    keys_651=(void**)come_increment_ref_count(((void**)(__right_value751=(void**)come_calloc(1, sizeof(void*)*(1*(size_650)), "./comelang.h", 2990, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_652=(void**)come_increment_ref_count(((void**)(__right_value752=(void**)come_calloc(1, sizeof(void*)*(1*(size_650)), "./comelang.h", 2991, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_653=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value753=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_650)), "./comelang.h", 2992, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_654=0;
    for(    it_657=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_657=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_660,0,sizeof(void*));
        it2_661=((void*)(__right_value754=map$2void$phvoid$ph$p_at(self,it_657,(void*)come_increment_ref_count(default_value_660))));
        come_call_finalizer3(__right_value754,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_664=come_call_get_hash_key((void*)0, ((void*)it_657))%size_650;
        n_665=hash_664;
        while((_Bool)1) {
            if(            item_existance_653[n_665]) {
                n_665++;
                if(                n_665>=size_650) {
                    n_665=0;
                }
                else if(                n_665==hash_664) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_653[n_665]=(_Bool)1;
                keys_651[n_665]=it_657;
                items_652[n_665]=((void*)(__right_value755=map$2void$phvoid$ph$p_at(self,it_657,(void*)come_increment_ref_count(default_value_666))));
                come_call_finalizer3(__right_value755,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_654++;
                come_call_finalizer3(default_value_666,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_666,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_660,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_651;
    self->items=items_652;
    self->item_existance=item_existance_653;
    self->size=size_650;
    self->len=len_654;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* result_655;
void* __result_obj__363;
void* __result_obj__364;
void* result_656;
void* __result_obj__365;
result_655 = (void*)0;
result_656 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_655,0,sizeof(void*));
        __result_obj__363 = result_655;
        return __result_obj__363;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__364 = self->key_list->it->item;
        return __result_obj__364;
    }
    memset(&result_656,0,sizeof(void*));
    __result_obj__365 = result_656;
    return __result_obj__365;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* result_658;
void* __result_obj__366;
void* __result_obj__367;
void* result_659;
void* __result_obj__368;
result_658 = (void*)0;
result_659 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_658,0,sizeof(void*));
        __result_obj__366 = result_658;
        return __result_obj__366;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__367 = self->key_list->it->item;
        return __result_obj__367;
    }
    memset(&result_659,0,sizeof(void*));
    __result_obj__368 = result_659;
    return __result_obj__368;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_662;
unsigned int it_663;
void* __result_obj__369;
void* __result_obj__370;
void* __result_obj__371;
void* __result_obj__372;
    hash_662=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_663=hash_662;
    while((_Bool)1) {
        if(        self->item_existance[it_663]) {
            if(            come_call_equals((void*)0, self->keys[it_663], key)) {
                __result_obj__369 = come_increment_ref_count(self->items[it_663]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__369,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__369;
            }
            it_663++;
            if(            it_663>=self->size) {
                it_663=0;
            }
            else if(            it_663==hash_662) {
                __result_obj__370 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__370,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__370;
            }
        }
        else {
            __result_obj__371 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__371,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__371;
        }
    }
    __result_obj__372 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__372,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__372;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
int it2_669;
struct list_item$1void$p* it_670;
struct list$1void$p* __result_obj__376;
    it2_669=0;
    it_670=self->head;
    while(it_670!=((void*)0)) {
        if(        come_call_equals((void*)0, it_670->item, item)) {
            list$1void$p$p_delete(self,it2_669,it2_669+1);
            break;
        }
        it2_669++;
        it_670=it_670->next;
    }
    __result_obj__376 = self;
    return __result_obj__376;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
int tmp_671;
struct list$1void$p* __result_obj__373;
struct list_item$1void$p* it_674;
int i_675;
struct list_item$1void$p* prev_it_676;
struct list_item$1void$p* it_677;
int i_678;
struct list_item$1void$p* prev_it_679;
struct list_item$1void$p* it_680;
struct list_item$1void$p* head_prev_it_681;
struct list_item$1void$p* tail_it_682;
int i_683;
struct list_item$1void$p* prev_it_684;
struct list$1void$p* __result_obj__375;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_671=tail;
        tail=head;
        head=tmp_671;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__373 = self;
        return __result_obj__373;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_674=self->head;
        i_675=0;
        while(it_674!=((void*)0)) {
            if(            i_675<tail) {
                prev_it_676=it_674;
                it_674=it_674->next;
                i_675++;
                come_call_finalizer3(prev_it_676,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_675==tail) {
                self->head=it_674;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_674=it_674->next;
                i_675++;
            }
        }
    }
    else if(    tail==self->len) {
        it_677=self->head;
        i_678=0;
        while(it_677!=((void*)0)) {
            if(            i_678==head) {
                self->tail=it_677->prev;
                self->tail->next=((void*)0);
            }
            if(            i_678>=head) {
                prev_it_679=it_677;
                it_677=it_677->next;
                i_678++;
                come_call_finalizer3(prev_it_679,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_677=it_677->next;
                i_678++;
            }
        }
    }
    else {
        it_680=self->head;
        head_prev_it_681=((void*)0);
        tail_it_682=((void*)0);
        i_683=0;
        while(it_680!=((void*)0)) {
            if(            i_683==head) {
                head_prev_it_681=it_680->prev;
            }
            if(            i_683==tail) {
                tail_it_682=it_680;
            }
            if(            i_683>=head&&i_683<tail) {
                prev_it_684=it_680;
                it_680=it_680->next;
                i_683++;
                come_call_finalizer3(prev_it_684,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_680=it_680->next;
                i_683++;
            }
        }
        if(        head_prev_it_681!=((void*)0)) {
            head_prev_it_681->next=tail_it_682;
        }
        if(        tail_it_682!=((void*)0)) {
            tail_it_682->prev=head_prev_it_681;
        }
    }
    __result_obj__375 = self;
    return __result_obj__375;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
struct list_item$1void$p* it_672;
struct list_item$1void$p* prev_it_673;
struct list$1void$p* __result_obj__374;
    it_672=self->head;
    while(it_672!=((void*)0)) {
        prev_it_673=it_672;
        it_672=it_672->next;
        come_call_finalizer3(prev_it_673,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__374 = self;
    return __result_obj__374;
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* result_686;
void* __result_obj__377;
void* __result_obj__378;
void* result_687;
void* __result_obj__379;
result_686 = (void*)0;
result_687 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_686,0,sizeof(void*));
        __result_obj__377 = result_686;
        return __result_obj__377;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__378 = self->it->item;
        return __result_obj__378;
    }
    memset(&result_687,0,sizeof(void*));
    __result_obj__379 = result_687;
    return __result_obj__379;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* result_689;
void* __result_obj__380;
void* __result_obj__381;
void* result_690;
void* __result_obj__382;
result_689 = (void*)0;
result_690 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_689,0,sizeof(void*));
        __result_obj__380 = result_689;
        return __result_obj__380;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__381 = self->it->item;
        return __result_obj__381;
    }
    memset(&result_690,0,sizeof(void*));
    __result_obj__382 = result_690;
    return __result_obj__382;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __right_value756 = (void*)0;
struct list_item$1void$p* litem_691;
void* __right_value757 = (void*)0;
struct list_item$1void$p* litem_692;
void* __right_value758 = (void*)0;
struct list_item$1void$p* litem_693;
struct list$1void$p* __result_obj__383;
    if(    self->len==0) {
        litem_691=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value756=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1545, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_691->prev=((void*)0);
        litem_691->next=((void*)0);
        litem_691->item=item;
        self->tail=litem_691;
        self->head=litem_691;
    }
    else if(    self->len==1) {
        litem_692=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value757=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1555, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_692->prev=self->head;
        litem_692->next=((void*)0);
        litem_692->item=item;
        self->tail=litem_692;
        self->head->next=litem_692;
    }
    else {
        litem_693=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value758=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1565, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_693->prev=self->tail;
        litem_693->next=((void*)0);
        litem_693->item=item;
        self->tail->next=litem_693;
        self->tail=litem_693;
    }
    self->len++;
    __result_obj__383 = self;
    return __result_obj__383;
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
struct sClass* __result_obj__385;
void* __right_value759 = (void*)0;
struct sClass* result_695;
void* __right_value760 = (void*)0;
char* __dec_obj217;
void* __right_value761 = (void*)0;
struct list$1void$ph* __dec_obj218;
void* __right_value762 = (void*)0;
char* __dec_obj219;
void* __right_value763 = (void*)0;
char* __dec_obj220;
struct sClass* __result_obj__386;
    if(    self==(void*)0) {
        __result_obj__385 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__385,sClass_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__385;
    }
    result_695=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_695->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_695->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_695->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_695->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_695->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_695->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_695->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_695->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj217=result_695->mName;
        result_695->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_695->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_695->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj218=result_695->mFields;
        result_695->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj218,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj219=result_695->mParentClassName;
        result_695->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj220=result_695->mAttribute;
        result_695->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_695->mDynamic=self->mDynamic;
    }
    __result_obj__386 = come_increment_ref_count(result_695);
    come_call_finalizer3(result_695,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__386,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__386;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_694;
    result_694=0;
    result_694+=int_get_hash_key(((int)self->mStruct));
    result_694+=int_get_hash_key(((int)self->mFloat));
    result_694+=int_get_hash_key(((int)self->mUnion));
    result_694+=int_get_hash_key(((int)self->mGenerics));
    result_694+=int_get_hash_key(((int)self->mMethodGenerics));
    result_694+=int_get_hash_key(((int)self->mEnum));
    result_694+=int_get_hash_key(((int)self->mProtocol));
    result_694+=int_get_hash_key(((int)self->mNumber));
    result_694+=int_get_hash_key(((int)self->mName));
    result_694+=int_get_hash_key(((int)self->mGenericsNum));
    result_694+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_694+=int_get_hash_key(((int)self->mFields));
    result_694+=int_get_hash_key(((int)self->mParentClassName));
    result_694+=int_get_hash_key(((int)self->mAttribute));
    result_694+=int_get_hash_key(((int)self->mDynamic));
    return result_694;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_716;
struct list$1sNode$ph* __result_obj__388;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_716=0;    i_716<num_value;    i_716++    ){
        list$1sNode$ph$p_push_back(self,(struct sNode*)come_increment_ref_count(values[i_716]));
    }
    __result_obj__388 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__388,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__388;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__389;
void* __right_value799 = (void*)0;
struct list$1sNode$ph* result_717;
struct list$1sNode$ph* __result_obj__390;
    if(    self==(void*)0) {
        __result_obj__389 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__389,list$1sNode$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__389;
    }
    result_717=(struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "list$1sNode$ph_clone", 3, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_717->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_717->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_717->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_717->it=self->it;
    }
    __result_obj__390 = come_increment_ref_count(result_717);
    come_call_finalizer3(result_717,list$1sNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__390,list$1sNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__390;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_718;
    result_718=0;
    result_718+=int_get_hash_key(((int)self->head));
    result_718+=int_get_hash_key(((int)self->tail));
    result_718+=int_get_hash_key(((int)self->len));
    result_718+=int_get_hash_key(((int)self->it));
    return result_718;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    if(    !list_item$1sNode$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNode$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1void$ph$p_operator_store_element(struct list$1void$ph* self, int position, void* item){
    list$1void$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static struct list$1void$ph* list$1void$ph$p_replace(struct list$1void$ph* self, int position, void* item){
int len_721;
int i_722;
void* default_value_723;
struct list$1void$ph* __result_obj__391;
struct list_item$1void$ph* it_724;
int i_725;
void* __dec_obj242;
struct list$1void$ph* __result_obj__392;
default_value_723 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_721=self->len;
        for(        i_722=0;        i_722<position-len_721;        i_722++        ){
            memset(&default_value_723,0,sizeof(void*));
            list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(default_value_723));
            come_call_finalizer3(default_value_723,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1void$ph$p_push_back(self,(void*)come_increment_ref_count(item));
        __result_obj__391 = self;
        come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        return __result_obj__391;
    }
    it_724=self->head;
    i_725=0;
    while(it_724!=((void*)0)) {
        if(        position==i_725) {
            __dec_obj242=it_724->item;
            it_724->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj242,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
            break;
        }
        it_724=it_724->next;
        i_725++;
    }
    __result_obj__392 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__392;
}

