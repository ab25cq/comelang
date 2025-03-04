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

struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass* item;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
char* get_none_generics_name(char* class_name);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
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
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2void$phvoid$ph$p_find(struct map$2void$phvoid$ph* self, void* key);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p$p_next(struct list$1sClass$p* self);
static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self);
static void list$1void$p$p_finalize(struct list$1void$p* self);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self);
static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self);
static _Bool list$1void$p$p_equals(struct list$1void$p* left, struct list$1void$p* right);
static _Bool list_item$1void$ph_equals(struct list_item$1void$ph* left, struct list_item$1void$ph* right);
static struct list$1void$p* list$1void$p$pp_initialize(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item);
static void list$1void$p_finalize(struct list$1void$p* self);
static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_equals(struct map$2void$phvoid$ph* left, struct map$2void$phvoid$ph* right);
static _Bool voidpp_equals(void** left, void** right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$pp_initialize(struct map$2void$phvoid$ph* self);
static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_345;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct buffer* buf_346;
_Bool existance_generics_347;
struct list$1void$ph* o2_saved_348;
struct tuple2$2char$phsType$ph* it_351;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_354=0;
struct sType* type_355=0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
_Bool _if_conditional1;
void* __right_value272 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1void$ph$p_length(klass->mFields)==0) {
        return;
    }
    name_345=(char*)come_increment_ref_count(klass->mName);
    buf_346=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_346,"struct %s\n{\n",klass->mName);
    existance_generics_347=(_Bool)0;
    for(    o2_saved_348=(struct list$1void$ph*)come_increment_ref_count((klass->mFields)),it_351=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_348)));    !list$1void$ph$p_end((o2_saved_348));    it_351=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_348)))    ){
        multiple_assign_var1=it_351;
        name_354=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_355=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_355,info)||is_contained_generics_types(type_355,info)) {
            existance_generics_347=(_Bool)1;
        }
        type_355->mStatic=(_Bool)0;
        buffer_append_str(buf_346,"    ");
        buffer_append_str(buf_346,((char*)(__right_value261=make_define_var(type_355,name_354,(_Bool)0,info))));
        (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_346,";\n");
        (name_354 = come_decrement_ref_count2(name_354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_348,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_346,"};\n");
    }
    else {
        buffer_append_format(buf_346,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)((void*)(__right_value263=map$2void$phvoid$ph$p_operator_load_element(info->struct_definition,((char*)(__right_value262=__builtin_string(name_345)))))))==((void*)0)&&!existance_generics_347)),    (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value263,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional1) {
        map$2void$phvoid$ph$p_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_345)),(struct buffer*)come_increment_ref_count(buf_346));
    }
    (name_345 = come_decrement_ref_count2(name_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_346,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_349;
void* __result237__;
void* __result238__;
void* result_350;
void* __result239__;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_349,0,sizeof(void*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_349;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_350,0,sizeof(void*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_350;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
void* result_352;
void* __result240__;
void* __result241__;
void* result_353;
void* __result242__;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_352,0,sizeof(void*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_352;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_353,0,sizeof(void*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_353;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj31;
struct sType* __dec_obj32;
struct list$1void$ph* __dec_obj33;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
struct sNode* __dec_obj37;
struct sNode* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1sNode$ph* __dec_obj42;
char* __dec_obj44;
struct list$1void$ph* __dec_obj45;
struct list$1char$ph* __dec_obj46;
struct sType* __dec_obj47;
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj31=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj32=self->mChannelType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj33=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj33,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj38=self->mAlignas;
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj39=self->mTupleName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj40=self->mAttribute;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj41=self->mAsmName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj44=self->mOriginalTypeName;
            __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj45=self->mParamTypes;
            come_call_finalizer3(__dec_obj45,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj46=self->mParamNames;
            come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj47=self->mResultType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
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
void* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            come_call_finalizer3(__dec_obj34,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_358;
struct list_item$1void$ph* prev_it_359;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        prev_it_359=it_358;
        it_358=it_358->next;
        come_call_finalizer3(prev_it_359,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
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
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_362;
struct list_item$1sNode$ph* prev_it_363;
    it_362=self->head;
    while(it_362!=((void*)0)) {
        prev_it_363=it_362;
        it_362=it_362->next;
        come_call_finalizer3(prev_it_363,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_364;
struct list_item$1char$ph* prev_it_365;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        come_call_finalizer3(prev_it_365,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_366;
unsigned int hash_367;
unsigned int it_368;
void* __result243__;
void* __result244__;
void* __result245__;
void* __result246__;
default_value_366 = (void*)0;
    memset(&default_value_366,0,sizeof(void*));
    hash_367=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_368=hash_367;
    while((_Bool)1) {
        if(        self->item_existance[it_368]) {
            if(            come_call_equals((void*)0, self->keys[it_368], ((char*)key))) {
                __result243__ = gComeFunResultObject = __result_obj__ = self->items[it_368];
                come_call_finalizer3(default_value_366,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result243__;
            }
            it_368++;
            if(            it_368>=self->size) {
                it_368=0;
            }
            else if(            it_368==hash_367) {
                __result244__ = gComeFunResultObject = __result_obj__ = ((struct buffer*)default_value_366);
                come_call_finalizer3(default_value_366,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
        }
        else {
            __result245__ = gComeFunResultObject = __result_obj__ = ((struct buffer*)default_value_366);
            come_call_finalizer3(default_value_366,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result245__;
        }
    }
    __result246__ = gComeFunResultObject = __result_obj__ = ((struct buffer*)default_value_366);
    come_call_finalizer3(default_value_366,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_386;
unsigned int it_387;
_Bool same_key_exist_404;
char* it2_407;
struct map$2void$phvoid$ph* __result268__;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_386=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_387=hash_386;
    while((_Bool)1) {
        if(        self->item_existance[it_387]) {
            if(            come_call_equals((void*)0, self->keys[it_387], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_387]);
                    come_call_finalizer3(self->keys[it_387],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_387]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_387]);
                    self->keys[it_387]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_387],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_387]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_387]=item;
                }
                break;
            }
            it_387++;
            if(            it_387>=self->size) {
                it_387=0;
            }
            else if(            it_387==hash_386) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_387]=(_Bool)1;
            if(            1) {
                self->keys[it_387]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_387]=key;
            }
            if(            1) {
                self->items[it_387]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_387]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_404=(_Bool)0;
    for(    it2_407=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_407=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_407, key)) {
            same_key_exist_404=(_Bool)1;
        }
    }
    if(    !same_key_exist_404) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_369;
void* __right_value264 = (void*)0;
void** keys_370;
void* __right_value265 = (void*)0;
void** items_371;
void* __right_value266 = (void*)0;
_Bool* item_existance_372;
int len_373;
void* it_376;
void* default_value_379;
void* __right_value267 = (void*)0;
void* it2_380;
unsigned int hash_383;
int n_384;
void* default_value_385;
void* __right_value268 = (void*)0;
default_value_379 = (void*)0;
default_value_385 = (void*)0;
    size_369=self->size*10;
    keys_370=(void**)come_increment_ref_count(((void**)(__right_value264=(void**)come_calloc(1, sizeof(void*)*(1*(size_369)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_371=(void**)come_increment_ref_count(((void**)(__right_value265=(void**)come_calloc(1, sizeof(void*)*(1*(size_369)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_372=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value266=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_369)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_373=0;
    for(    it_376=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_376=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_379,0,sizeof(void*));
        it2_380=((void*)(__right_value267=map$2void$phvoid$ph$p_at(self,it_376,(void*)come_increment_ref_count(default_value_379))));
        come_call_finalizer3(__right_value267,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_383=come_call_get_hash_key((void*)0, ((void*)it_376))%size_369;
        n_384=hash_383;
        while((_Bool)1) {
            if(            item_existance_372[n_384]) {
                n_384++;
                if(                n_384>=size_369) {
                    n_384=0;
                }
                else if(                n_384==hash_383) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_372[n_384]=(_Bool)1;
                keys_370[n_384]=it_376;
                items_371[n_384]=((void*)(__right_value268=map$2void$phvoid$ph$p_at(self,it_376,(void*)come_increment_ref_count(default_value_385))));
                come_call_finalizer3(__right_value268,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_373++;
                come_call_finalizer3(default_value_385,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_385,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_379,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_370;
    self->items=items_371;
    self->item_existance=item_existance_372;
    self->size=size_369;
    self->len=len_373;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_374;
void* __result247__;
void* __result248__;
void* result_375;
void* __result249__;
result_374 = (void*)0;
result_375 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_374,0,sizeof(void*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_374;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_375,0,sizeof(void*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_375;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_377;
void* __result250__;
void* __result251__;
void* result_378;
void* __result252__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_377,0,sizeof(void*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_378,0,sizeof(void*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_381;
unsigned int it_382;
void* __result253__;
void* __result254__;
void* __result255__;
void* __result256__;
    hash_381=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_382=hash_381;
    while((_Bool)1) {
        if(        self->item_existance[it_382]) {
            if(            come_call_equals((void*)0, self->keys[it_382], key)) {
                __result253__ = gComeFunResultObject = __result_obj__ = self->items[it_382];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result253__;
            }
            it_382++;
            if(            it_382>=self->size) {
                it_382=0;
            }
            else if(            it_382==hash_381) {
                __result254__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result254__;
            }
        }
        else {
            __result255__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result255__;
        }
    }
    __result256__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
int it2_388;
struct list_item$1void$p* it_389;
struct list$1void$p* __result260__;
    it2_388=0;
    it_389=self->head;
    while(it_389!=((void*)0)) {
        if(        come_call_equals((void*)0, it_389->item, item)) {
            list$1void$p$p_delete(self,it2_388,it2_388+1);
            break;
        }
        it2_388++;
        it_389=it_389->next;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_390;
struct list$1void$p* __result257__;
struct list_item$1void$p* it_393;
int i_394;
struct list_item$1void$p* prev_it_395;
struct list_item$1void$p* it_396;
int i_397;
struct list_item$1void$p* prev_it_398;
struct list_item$1void$p* it_399;
struct list_item$1void$p* head_prev_it_400;
struct list_item$1void$p* tail_it_401;
int i_402;
struct list_item$1void$p* prev_it_403;
struct list$1void$p* __result259__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_390=tail;
        tail=head;
        head=tmp_390;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result257__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    if(    head==0&&tail==self->len) {
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_393=self->head;
        i_394=0;
        while(it_393!=((void*)0)) {
            if(            i_394<tail) {
                prev_it_395=it_393;
                it_393=it_393->next;
                i_394++;
                come_call_finalizer3(prev_it_395,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_394==tail) {
                self->head=it_393;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_393=it_393->next;
                i_394++;
            }
        }
    }
    else if(    tail==self->len) {
        it_396=self->head;
        i_397=0;
        while(it_396!=((void*)0)) {
            if(            i_397==head) {
                self->tail=it_396->prev;
                self->tail->next=((void*)0);
            }
            if(            i_397>=head) {
                prev_it_398=it_396;
                it_396=it_396->next;
                i_397++;
                come_call_finalizer3(prev_it_398,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_396=it_396->next;
                i_397++;
            }
        }
    }
    else {
        it_399=self->head;
        head_prev_it_400=((void*)0);
        tail_it_401=((void*)0);
        i_402=0;
        while(it_399!=((void*)0)) {
            if(            i_402==head) {
                head_prev_it_400=it_399->prev;
            }
            if(            i_402==tail) {
                tail_it_401=it_399;
            }
            if(            i_402>=head&&i_402<tail) {
                prev_it_403=it_399;
                it_399=it_399->next;
                i_402++;
                come_call_finalizer3(prev_it_403,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_399=it_399->next;
                i_402++;
            }
        }
        if(        head_prev_it_400!=((void*)0)) {
            head_prev_it_400->next=tail_it_401;
        }
        if(        tail_it_401!=((void*)0)) {
            tail_it_401->prev=head_prev_it_400;
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_391;
struct list_item$1void$p* prev_it_392;
struct list$1void$p* __result258__;
    it_391=self->head;
    while(it_391!=((void*)0)) {
        prev_it_392=it_391;
        it_391=it_391->next;
        come_call_finalizer3(prev_it_392,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_405;
void* __result261__;
void* __result262__;
void* result_406;
void* __result263__;
result_405 = (void*)0;
result_406 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_405,0,sizeof(void*));
        __result261__ = gComeFunResultObject = __result_obj__ = result_405;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    self->it=self->head;
    if(    self->it) {
        __result262__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    memset(&result_406,0,sizeof(void*));
    __result263__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_408;
void* __result264__;
void* __result265__;
void* result_409;
void* __result266__;
result_408 = (void*)0;
result_409 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_408,0,sizeof(void*));
        __result264__ = gComeFunResultObject = __result_obj__ = result_408;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result265__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    memset(&result_409,0,sizeof(void*));
    __result266__ = gComeFunResultObject = __result_obj__ = result_409;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1void$p* litem_410;
void* __right_value270 = (void*)0;
struct list_item$1void$p* litem_411;
void* __right_value271 = (void*)0;
struct list_item$1void$p* litem_412;
struct list$1void$p* __result267__;
    if(    self->len==0) {
        litem_410=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value269=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_410->prev=((void*)0);
        litem_410->next=((void*)0);
        litem_410->item=item;
        self->tail=litem_410;
        self->head=litem_410;
    }
    else if(    self->len==1) {
        litem_411=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value270=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_411->prev=self->head;
        litem_411->next=((void*)0);
        litem_411->item=item;
        self->tail=litem_411;
        self->head->next=litem_411;
    }
    else {
        litem_412=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value271=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_412->prev=self->tail;
        litem_412->next=((void*)0);
        litem_412->item=item;
        self->tail->next=litem_412;
        self->tail=litem_412;
    }
    self->len++;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct buffer* buf_413;
struct list$1void$ph* o2_saved_414;
struct tuple2$2char$phsType$ph* it_415;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name_416=0;
struct sType* type_417=0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
char* id_418;
void* __right_value277 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    buf_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    klass->mParentClassName) {
        buffer_append_format(buf_413,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_413,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_414=(struct list$1void$ph*)come_increment_ref_count((klass->mFields)),it_415=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_414)));    !list$1void$ph$p_end((o2_saved_414));    it_415=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_414)))    ){
        multiple_assign_var2=it_415;
        name_416=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_417=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_417->mStatic=(_Bool)0;
        buffer_append_str(buf_413,"    ");
        buffer_append_str(buf_413,((char*)(__right_value275=make_define_var_no_solved(type_417,name_416,(_Bool)0,(_Bool)1,info))));
        (__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_413,";\n");
        (name_416 = come_decrement_ref_count2(name_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_417,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_414,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_413,"};\n");
    }
    else {
        buffer_append_format(buf_413,"} %s;\n",klass->mAttribute);
    }
    id_418=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_418,"%s",((char*)(__right_value277=buffer_to_string(buf_413))));
    (__right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(buf_413,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (id_418 = come_decrement_ref_count2(id_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_419;
struct sClass* klass_420;
int i_421;
void* __right_value278 = (void*)0;
_Bool result_422;
    type2_419=type->mNoSolvedGenericsType;
    if(    type2_419&&is_contained_generics_types(type2_419,info)) {
        return (_Bool)1;
    }
    klass_420=type->mClass;
    if(    klass_420->mGenerics) {
        return (_Bool)1;
    }
    for(    i_421=0;    i_421<list$1void$ph$p_length(type->mGenericsTypes);    i_421++    ){
        result_422=is_contained_generics_types(((struct sType*)((void*)(__right_value278=list$1void$ph$p_operator_load_element(type->mGenericsTypes,i_421)))),info);
        come_call_finalizer3(__right_value278,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        result_422) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1void$ph* it_423;
int i_424;
void* __result269__;
void* default_value_425;
void* __result270__;
default_value_425 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_423=self->head;
    i_424=0;
    while(it_423!=((void*)0)) {
        if(        position==i_424) {
            __result269__ = gComeFunResultObject = __result_obj__ = it_423->item;
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
        it_423=it_423->next;
        i_424++;
    }
    memset(&default_value_425,0,sizeof(void*));
    __result270__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_425);
    come_call_finalizer3(default_value_425,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_426;
struct sClass* klass_427;
int i_428;
void* __right_value279 = (void*)0;
_Bool result_429;
    type2_426=type->mNoSolvedGenericsType;
    if(    type2_426&&is_contained_method_generics_types(type2_426,info)) {
        return (_Bool)1;
    }
    klass_427=type->mClass;
    if(    klass_427->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_428=0;    i_428<list$1void$ph$p_length(type->mGenericsTypes);    i_428++    ){
        result_429=is_contained_method_generics_types(((struct sType*)((void*)(__right_value279=list$1void$ph$p_operator_load_element(type->mGenericsTypes,i_428)))),info);
        come_call_finalizer3(__right_value279,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        result_429) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value280 = (void*)0;
char* new_name_430;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sClass* generics_class_433;
void* __right_value283 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c1_434=0;
char* Err_435=0;
_Bool __result271__;
void* __right_value284 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sClass* new_class_446;
int i_447;
struct list$1void$ph* o2_saved_448;
struct tuple2$2char$phsType$ph* it_449;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* name_450=0;
struct sType* type_451=0;
void* __right_value301 = (void*)0;
struct sType* new_type_452;
void* __right_value305 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sType* __dec_obj92;
void* __right_value344 = (void*)0;
struct sType* __dec_obj93;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
_Bool __result294__;
    new_name_430=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2void$phvoid$ph$p_find(info->classes,new_name_430)) {
        generics_class_433=((struct sClass*)((void*)(__right_value282=map$2void$phvoid$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value281=__builtin_string(type->mClass->mName)))))));
        (__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value282,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        generics_class_433==((void*)0)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value283=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            come_exception_var_c1_434=multiple_assign_var3->v1;
            Err_435=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_435)?(puts(Err_435),exit(0)):(0));
            come_call_finalizer3(__right_value283,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            __result271__ = (_Bool)0;
            (Err_435 = come_decrement_ref_count2(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (new_name_430 = come_decrement_ref_count2(new_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result271__;
            (Err_435 = come_decrement_ref_count2(Err_435, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_430)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 140, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),new_name_430,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_446=((struct sClass*)((void*)(__right_value300=map$2void$phvoid$ph$p_at(info->classes,((char*)(__right_value299=__builtin_string(new_name_430))),((void*)0)))));
        (__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value300,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        new_class_446->mDynamic=generics_class_433->mDynamic;
        i_447=0;
        for(        o2_saved_448=(struct list$1void$ph*)come_increment_ref_count((generics_class_433->mFields)),it_449=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_448)));        !list$1void$ph$p_end((o2_saved_448));        it_449=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_448)))        ){
            multiple_assign_var4=it_449;
            name_450=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            type_451=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
            new_type_452=(struct sType*)come_increment_ref_count(solve_generics(type_451,generics_type,info));
            list$1void$ph$p_push_back(new_class_446->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 152, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_450)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_452)))));
            (name_450 = come_decrement_ref_count2(name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(new_type_452,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_448,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj92=type->mNoSolvedGenericsType;
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_446;
        list$1void$ph$p_reset(type->mGenericsTypes);
        output_struct(new_class_446,info);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1void$ph$p_length(type->mGenericsTypes)>0) {
            __dec_obj93=type->mNoSolvedGenericsType;
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)((void*)(__right_value346=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value345=__builtin_string(new_name_430)))))));
        (__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value346,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        list$1void$ph$p_reset(type->mGenericsTypes);
    }
    __result294__ = (_Bool)1;
    (new_name_430 = come_decrement_ref_count2(new_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result294__;
}

static _Bool map$2void$phvoid$ph$p_find(struct map$2void$phvoid$ph* self, void* key){
unsigned int hash_431;
int it_432;
    hash_431=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_432=hash_431;
    while((_Bool)1) {
        if(        self->item_existance[it_432]) {
            if(            come_call_equals((void*)0, self->keys[it_432], key)) {
                return (_Bool)1;
            }
            it_432++;
            if(            it_432>=self->size) {
                it_432=0;
            }
            else if(            it_432==hash_431) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
char* __dec_obj48;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj48=self->v2;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj49;
struct list$1void$ph* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj49=self->mName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj50=self->mFields;
            come_call_finalizer3(__dec_obj50,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj51=self->mParentClassName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result272__;
void* __right_value285 = (void*)0;
struct sClass* result_439;
void* __right_value286 = (void*)0;
char* __dec_obj53;
void* __right_value294 = (void*)0;
struct list$1void$ph* __dec_obj57;
void* __right_value295 = (void*)0;
char* __dec_obj58;
void* __right_value296 = (void*)0;
char* __dec_obj59;
struct sClass* __result277__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_439=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_439->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_439->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_439->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_439->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_439->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_439->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_439->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_439->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj53=result_439->mName;
        result_439->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_439->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj57=result_439->mFields;
        result_439->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mFields));
        come_call_finalizer3(__dec_obj57,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj58=result_439->mParentClassName;
        result_439->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj59=result_439->mAttribute;
        result_439->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->mDynamic=self->mDynamic;
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_439;
    come_call_finalizer3(result_439,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_436;
    result_436=0;
    result_436+=int_get_hash_key(((int)self->mStruct));
    result_436+=int_get_hash_key(((int)self->mFloat));
    result_436+=int_get_hash_key(((int)self->mUnion));
    result_436+=int_get_hash_key(((int)self->mGenerics));
    result_436+=int_get_hash_key(((int)self->mMethodGenerics));
    result_436+=int_get_hash_key(((int)self->mEnum));
    result_436+=int_get_hash_key(((int)self->mProtocol));
    result_436+=int_get_hash_key(((int)self->mNumber));
    result_436+=int_get_hash_key(((int)self->mName));
    result_436+=int_get_hash_key(((int)self->mGenericsNum));
    result_436+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_436+=int_get_hash_key(((int)self->mFields));
    result_436+=int_get_hash_key(((int)self->mParentClassName));
    result_436+=int_get_hash_key(((int)self->mAttribute));
    result_436+=int_get_hash_key(((int)self->mDynamic));
    return result_436;
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
struct list_item$1void$ph* it_437;
struct list_item$1void$ph* it2_438;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_437=left->head;
    it2_438=right->head;
    while(it_437!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_437->item, it2_438->item)) {
            return (_Bool)0;
        }
        it_437=it_437->next;
        it2_438=it2_438->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result273__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1void$ph* result_441;
struct list_item$1void$ph* it_442;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1void$ph* __result276__;
    if(    self==((void*)0)) {
        __result273__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_441=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_442=self->head;
    while(it_442!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_441,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_442->item)));
        }
        else {
            list$1void$ph$p_add(result_441,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_442->item)));
        }
        it_442=it_442->next;
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_441;
    come_call_finalizer3(result_441,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_440;
    result_440=0;
    result_440+=int_get_hash_key(((int)self->head));
    result_440+=int_get_hash_key(((int)self->tail));
    result_440+=int_get_hash_key(((int)self->len));
    result_440+=int_get_hash_key(((int)self->it));
    return result_440;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result274__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1void$ph* litem_443;
void* __dec_obj54;
void* __right_value290 = (void*)0;
struct list_item$1void$ph* litem_444;
void* __dec_obj55;
void* __right_value291 = (void*)0;
struct list_item$1void$ph* litem_445;
void* __dec_obj56;
struct list$1void$ph* __result275__;
    if(    self->len==0) {
        litem_443=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value289=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=((void*)0);
        litem_443->next=((void*)0);
        __dec_obj54=litem_443->item;
        litem_443->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_443;
        self->head=litem_443;
    }
    else if(    self->len==1) {
        litem_444=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value290=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_444->prev=self->head;
        litem_444->next=((void*)0);
        __dec_obj55=litem_444->item;
        litem_444->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_444;
        self->head->next=litem_444;
    }
    else {
        litem_445=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value291=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_445->prev=self->tail;
        litem_445->next=((void*)0);
        __dec_obj56=litem_445->item;
        litem_445->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj56,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_445;
        self->tail=litem_445;
    }
    self->len++;
    __result275__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
struct list_item$1void$ph* litem_453;
void* __dec_obj60;
void* __right_value303 = (void*)0;
struct list_item$1void$ph* litem_454;
void* __dec_obj61;
void* __right_value304 = (void*)0;
struct list_item$1void$ph* litem_455;
void* __dec_obj62;
struct list$1void$ph* __result278__;
    if(    self->len==0) {
        litem_453=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value302=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_453->prev=((void*)0);
        litem_453->next=((void*)0);
        __dec_obj60=litem_453->item;
        litem_453->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_453;
        self->head=litem_453;
    }
    else if(    self->len==1) {
        litem_454=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value303=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_454->prev=self->head;
        litem_454->next=((void*)0);
        __dec_obj61=litem_454->item;
        litem_454->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_454;
        self->head->next=litem_454;
    }
    else {
        litem_455=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value304=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_455->prev=self->tail;
        litem_455->next=((void*)0);
        __dec_obj62=litem_455->item;
        litem_455->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_455;
        self->tail=litem_455;
    }
    self->len++;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result279__;
void* __right_value306 = (void*)0;
struct sType* result_461;
void* __right_value307 = (void*)0;
struct sType* __dec_obj63;
void* __right_value308 = (void*)0;
struct sType* __dec_obj64;
void* __right_value309 = (void*)0;
struct list$1void$ph* __dec_obj65;
void* __right_value310 = (void*)0;
struct sType* __dec_obj66;
void* __right_value311 = (void*)0;
struct sType* __dec_obj67;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj68;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value315 = (void*)0;
char* __dec_obj70;
void* __right_value316 = (void*)0;
char* __dec_obj71;
void* __right_value317 = (void*)0;
char* __dec_obj72;
void* __right_value325 = (void*)0;
struct list$1sNode$ph* __dec_obj76;
void* __right_value326 = (void*)0;
char* __dec_obj77;
void* __right_value327 = (void*)0;
struct list$1void$ph* __dec_obj78;
void* __right_value335 = (void*)0;
struct list$1char$ph* __dec_obj82;
void* __right_value336 = (void*)0;
struct sType* __dec_obj83;
struct sType* __result289__;
    if(    self==(void*)0) {
        __result279__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    result_461=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_461->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj63=result_461->mOriginalLoadVarType;
        result_461->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj64=result_461->mChannelType;
        result_461->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj65=result_461->mGenericsTypes;
        result_461->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj65,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj66=result_461->mNoSolvedGenericsType;
        result_461->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj67=result_461->mAnyOriginalType;
        result_461->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj68=result_461->mSizeNum;
        result_461->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj69=result_461->mAlignas;
        result_461->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj70=result_461->mTupleName;
        result_461->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj71=result_461->mAttribute;
        result_461->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_461->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_461->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_461->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_461->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_461->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_461->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_461->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_461->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_461->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_461->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_461->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_461->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_461->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_461->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_461->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_461->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_461->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_461->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_461->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_461->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_461->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_461->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_461->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_461->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_461->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj72=result_461->mAsmName;
        result_461->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_461->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_461->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj76=result_461->mArrayNum;
        result_461->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj76,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_461->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_461->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_461->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_461->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj77=result_461->mOriginalTypeName;
        result_461->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_461->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_461->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_461->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj78=result_461->mParamTypes;
        result_461->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj78,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj82=result_461->mParamNames;
        result_461->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj82,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj83=result_461->mResultType;
        result_461->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_461->mVarArgs=self->mVarArgs;
    }
    __result289__ = gComeFunResultObject = __result_obj__ = result_461;
    come_call_finalizer3(result_461,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_456;
    result_456=0;
    result_456+=int_get_hash_key(((int)self->mClass));
    result_456+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_456+=int_get_hash_key(((int)self->mChannelType));
    result_456+=int_get_hash_key(((int)self->mGenericsTypes));
    result_456+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_456+=int_get_hash_key(((int)self->mAnyClass));
    result_456+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_456+=int_get_hash_key(((int)self->mSizeNum));
    result_456+=int_get_hash_key(((int)self->mAlignas));
    result_456+=int_get_hash_key(((int)self->mTupleName));
    result_456+=int_get_hash_key(((int)self->mAttribute));
    result_456+=int_get_hash_key(((int)self->mAllocaValue));
    result_456+=int_get_hash_key(((int)self->mUnsigned));
    result_456+=int_get_hash_key(((int)self->mShort));
    result_456+=int_get_hash_key(((int)self->mLong));
    result_456+=int_get_hash_key(((int)self->mLongLong));
    result_456+=int_get_hash_key(((int)self->mConstant));
    result_456+=int_get_hash_key(((int)self->mAtomic));
    result_456+=int_get_hash_key(((int)self->mRegister));
    result_456+=int_get_hash_key(((int)self->mVolatile));
    result_456+=int_get_hash_key(((int)self->mStatic));
    result_456+=int_get_hash_key(((int)self->mUniq));
    result_456+=int_get_hash_key(((int)self->mRecord));
    result_456+=int_get_hash_key(((int)self->mExtern));
    result_456+=int_get_hash_key(((int)self->mRestrict));
    result_456+=int_get_hash_key(((int)self->mImmutable));
    result_456+=int_get_hash_key(((int)self->mHeap));
    result_456+=int_get_hash_key(((int)self->mChannel));
    result_456+=int_get_hash_key(((int)self->mNoHeap));
    result_456+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_456+=int_get_hash_key(((int)self->mException));
    result_456+=int_get_hash_key(((int)self->mGenerate));
    result_456+=int_get_hash_key(((int)self->mCreateVTable));
    result_456+=int_get_hash_key(((int)self->mDynamic));
    result_456+=int_get_hash_key(((int)self->mInline));
    result_456+=int_get_hash_key(((int)self->mNullValue));
    result_456+=int_get_hash_key(((int)self->mGuardValue));
    result_456+=int_get_hash_key(((int)self->mAsmName));
    result_456+=int_get_hash_key(((int)self->mTypedef));
    result_456+=int_get_hash_key(((int)self->mMultipleTypes));
    result_456+=int_get_hash_key(((int)self->mOriginIsArray));
    result_456+=int_get_hash_key(((int)self->mArrayNum));
    result_456+=int_get_hash_key(((int)self->mPointerNum));
    result_456+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_456+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_456+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_456+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_456+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_456+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_456+=int_get_hash_key(((int)self->mArrayPointerType));
    result_456+=int_get_hash_key(((int)self->mLambdaArray));
    result_456+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_456+=int_get_hash_key(((int)self->mParamTypes));
    result_456+=int_get_hash_key(((int)self->mParamNames));
    result_456+=int_get_hash_key(((int)self->mResultType));
    result_456+=int_get_hash_key(((int)self->mVarArgs));
    return result_456;
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
struct list_item$1sNode$ph* it_457;
struct list_item$1sNode$ph* it2_458;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_457=left->head;
    it2_458=right->head;
    while(it_457!=((void*)0)) {
        if(        !sNode_equals(it_457->item,it2_458->item)) {
            return (_Bool)0;
        }
        it_457=it_457->next;
        it2_458=it2_458->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_459;
struct list_item$1char$ph* it2_460;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_459=left->head;
    it2_460=right->head;
    while(it_459!=((void*)0)) {
        if(        !string_equals(it_459->item,it2_460->item)) {
            return (_Bool)0;
        }
        it_459=it_459->next;
        it2_460=it2_460->next;
    }
    return (_Bool)1;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result280__;
void* __right_value312 = (void*)0;
struct sNode* result_462;
struct sNode* __result281__;
    if(    self==(void*)0) {
        __result280__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    result_462=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_462->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_462->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_462->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_462->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_462->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_462->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_462->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_462->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_462->kind=self->kind;
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_462;
    ((result_462) ? result_462 = come_decrement_ref_count2(result_462, ((struct sNode*)result_462)->finalize, ((struct sNode*)result_462)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result282__;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct list$1sNode$ph* result_463;
struct list_item$1sNode$ph* it_464;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1sNode$ph* __result285__;
    if(    self==((void*)0)) {
        __result282__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_463=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_464=self->head;
    while(it_464!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_463,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_464->item)));
        }
        else {
            list$1sNode$ph$p_add(result_463,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_464->item)));
        }
        it_464=it_464->next;
    }
    __result285__ = gComeFunResultObject = __result_obj__ = result_463;
    come_call_finalizer3(result_463,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result283__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result283__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct list_item$1sNode$ph* litem_465;
struct sNode* __dec_obj73;
void* __right_value321 = (void*)0;
struct list_item$1sNode$ph* litem_466;
struct sNode* __dec_obj74;
void* __right_value322 = (void*)0;
struct list_item$1sNode$ph* litem_467;
struct sNode* __dec_obj75;
struct list$1sNode$ph* __result284__;
    if(    self->len==0) {
        litem_465=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value320=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_465->prev=((void*)0);
        litem_465->next=((void*)0);
        __dec_obj73=litem_465->item;
        litem_465->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_465;
        self->head=litem_465;
    }
    else if(    self->len==1) {
        litem_466=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value321=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_466->prev=self->head;
        litem_466->next=((void*)0);
        __dec_obj74=litem_466->item;
        litem_466->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_466;
        self->head->next=litem_466;
    }
    else {
        litem_467=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value322=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_467->prev=self->tail;
        litem_467->next=((void*)0);
        __dec_obj75=litem_467->item;
        litem_467->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_467;
        self->tail=litem_467;
    }
    self->len++;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result286__;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1char$ph* result_468;
struct list_item$1char$ph* it_469;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1char$ph* __result288__;
    if(    self==((void*)0)) {
        __result286__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_468=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_469=self->head;
    while(it_469!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_468,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_469->item)));
        }
        else {
            list$1char$ph$p_add(result_468,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_469->item)));
        }
        it_469=it_469->next;
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_468;
    come_call_finalizer3(result_468,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
struct list_item$1char$ph* litem_470;
char* __dec_obj79;
void* __right_value331 = (void*)0;
struct list_item$1char$ph* litem_471;
char* __dec_obj80;
void* __right_value332 = (void*)0;
struct list_item$1char$ph* litem_472;
char* __dec_obj81;
struct list$1char$ph* __result287__;
    if(    self->len==0) {
        litem_470=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value330=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_470->prev=((void*)0);
        litem_470->next=((void*)0);
        __dec_obj79=litem_470->item;
        litem_470->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_470;
        self->head=litem_470;
    }
    else if(    self->len==1) {
        litem_471=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value331=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_471->prev=self->head;
        litem_471->next=((void*)0);
        __dec_obj80=litem_471->item;
        litem_471->item=(char*)come_increment_ref_count(item);
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_471;
        self->head->next=litem_471;
    }
    else {
        litem_472=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value332=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_472->prev=self->tail;
        litem_472->next=((void*)0);
        __dec_obj81=litem_472->item;
        litem_472->item=(char*)come_increment_ref_count(item);
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_472;
        self->tail=litem_472;
    }
    self->len++;
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj84;
struct sType* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsType$ph* __result290__;
void* __right_value338 = (void*)0;
struct tuple2$2char$phsType$ph* result_473;
void* __right_value339 = (void*)0;
char* __dec_obj86;
void* __right_value340 = (void*)0;
struct sType* __dec_obj87;
struct tuple2$2char$phsType$ph* __result291__;
    if(    self==(void*)0) {
        __result290__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    result_473=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj86=result_473->v1;
        result_473->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj87=result_473->v2;
        result_473->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_473;
    come_call_finalizer3(result_473,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_474;
    result_474=0;
    result_474+=int_get_hash_key(((int)self->v1));
    result_474+=int_get_hash_key(((int)self->v2));
    return result_474;
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
void* __result_obj__=(void*)0;
char* __dec_obj88;
struct sType* __dec_obj89;
struct tuple2$2char$phsType$ph* __result292__;
    __dec_obj88=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj89=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj90;
struct sType* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1void$ph* list$1void$ph$p_reset(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list_item$1void$ph* it_475;
struct list_item$1void$ph* prev_it_476;
struct list$1void$ph* __result293__;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
char* __dec_obj95;
void* __right_value349 = (void*)0;
struct sClass* __dec_obj96;
struct sStructNode* __result295__;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj96=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj96,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result295__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
char* __result296__;
    __result296__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value350=__builtin_string("sStructNode")));
    (__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result296__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_477;
void* __right_value351 = (void*)0;
char* name_478;
_Bool __result297__;
    klass_477=(struct sClass*)come_increment_ref_count(self->mClass);
    name_478=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_477,info);
    __result297__ = (_Bool)1;
    come_call_finalizer3(klass_477,sClass_finalize, 0, 0, 0, 0, (void*)0);
    (name_478 = come_decrement_ref_count2(name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result297__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj94;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj94=self->sname;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj97;
char* __dec_obj98;
struct sClass* __dec_obj99;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj97=self->sname;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj98=self->mName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj99=self->mClass;
            come_call_finalizer3(__dec_obj99,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
char* __dec_obj100;
void* __right_value354 = (void*)0;
struct sClass* __dec_obj101;
struct sStructNobodyNode* __result298__;
    ((struct sNodeBase*)(__right_value352=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value352,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj100=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj101,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result298__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string("sStructNobodyNode")));
    (__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value356 = (void*)0;
char* name_479;
struct sClass* klass_480;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
_Bool __result300__;
    name_479=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_480=self->mClass;
    map$2void$phvoid$ph$p_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_479)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value358=xsprintf("struct %s;\n",name_479))))));
    (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result300__ = (_Bool)1;
    (name_479 = come_decrement_ref_count2(name_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result300__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj102;
char* __dec_obj103;
struct sClass* __dec_obj104;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj102=self->sname;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj103=self->mName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj104=self->mClass;
            come_call_finalizer3(__dec_obj104,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
struct sNothingNode* __result301__;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value360,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
char* __result302__;
    __result302__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value361=__builtin_string("sNothingNode")));
    (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result302__;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
char* __dec_obj105;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj105=self->sname;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value366 = (void*)0;
struct sNode* __result305__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 262, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value363=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 262, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value366=_inf_value1));
    come_call_finalizer3(__right_value363,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value366) ? __right_value366 = come_decrement_ref_count2(__right_value366, ((struct sNode*)__right_value366)->finalize, ((struct sNode*)__right_value366)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
void* __result_obj__=(void*)0;
struct sNothingNode* __result303__;
void* __right_value364 = (void*)0;
struct sNothingNode* result_481;
void* __right_value365 = (void*)0;
char* __dec_obj106;
struct sNothingNode* __result304__;
    if(    self==(void*)0) {
        __result303__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    result_481=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_481->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj106=result_481->sname;
        result_481->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_481->sline_real=self->sline_real;
    }
    __result304__ = gComeFunResultObject = __result_obj__ = result_481;
    come_call_finalizer3(result_481,sNothingNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* __dec_obj107;
void* __right_value369 = (void*)0;
struct sClass* __dec_obj108;
struct list$1sNode$ph* __dec_obj109;
struct sClassNode* __result306__;
    ((struct sNodeBase*)(__right_value367=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value367,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj107=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    come_call_finalizer3(__dec_obj108,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj109=self->mMethods;
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    come_call_finalizer3(__dec_obj109,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(methods,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sClassNode")));
    (__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value371 = (void*)0;
struct sClass* klass_482;
void* __right_value372 = (void*)0;
char* name_483;
void* __right_value373 = (void*)0;
_Bool _if_conditional2;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
_Bool _elif_conditional1;
void* __right_value376 = (void*)0;
struct sClass* klass2_484;
void* __right_value377 = (void*)0;
struct list$1void$ph* __dec_obj114;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* type_485;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* override__486;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1sNode$ph* o2_saved_487;
struct sNode* it_490;
_Bool Value_493;
_Bool __result314__;
_Bool __result315__;
    klass_482=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
    name_483=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)((void*)(__right_value373=map$2void$phvoid$ph$p_at(info->classes,name_483,((void*)0)))))==((void*)0))),    come_call_finalizer3(__right_value373,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional2) {
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(name_483),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_482)));
    }
    else if(    (_elif_conditional1=(list$1void$ph$p_length(((struct sClass*)((void*)(__right_value375=map$2void$phvoid$ph$p_at(info->classes,name_483,((void*)0)))))->mFields)==0&&list$1void$ph$p_length(klass_482->mFields)>0)),    come_call_finalizer3(__right_value375,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _elif_conditional1) {
        klass2_484=((struct sClass*)((void*)(__right_value376=map$2void$phvoid$ph$p_at(info->classes,name_483,((void*)0)))));
        come_call_finalizer3(__right_value376,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        __dec_obj114=klass2_484->mFields;
        klass2_484->mFields=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, klass_482->mFields));
        come_call_finalizer3(__dec_obj114,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    type_485=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 300, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),name_483,(_Bool)0,info));
    override__486=((struct sType*)((void*)(__right_value381=map$2void$phvoid$ph$p_at(info->types,((char*)(__right_value380=__builtin_string(name_483))),((void*)0)))));
    (__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value381,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    override__486) {
        if(        override__486->mTypedef) {
            type_485->mTypedef=(_Bool)1;
        }
    }
    map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_483)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_485)));
    output_struct(klass_482,info);
    for(    o2_saved_487=(struct list$1sNode$ph*)come_increment_ref_count((self->mMethods)),it_490=list$1sNode$ph$p_begin((o2_saved_487));    !list$1sNode$ph$p_end((o2_saved_487));    it_490=list$1sNode$ph$p_next((o2_saved_487))    ){
        Value_493=node_compile(it_490,info);
        if(        !Value_493) {
            __result314__ = (_Bool)0;
            come_call_finalizer3(o2_saved_487,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(klass_482,sClass_finalize, 0, 0, 0, 0, (void*)0);
            (name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result314__;
        }
        else {
        }
    }
    come_call_finalizer3(o2_saved_487,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    output_struct_come_header(klass_482,info);
    __result315__ = (_Bool)1;
    come_call_finalizer3(klass_482,sClass_finalize, 0, 0, 0, 0, (void*)0);
    (name_483 = come_decrement_ref_count2(name_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj110;
char* __dec_obj111;
struct sClass* __dec_obj112;
struct list$1sNode$ph* __dec_obj113;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj110=self->sname;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj111=self->mName;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(        self->mClass==gComeFunResultObject) {
            __dec_obj112=self->mClass;
            come_call_finalizer3(__dec_obj112,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(        self->mMethods==gComeFunResultObject) {
            __dec_obj113=self->mMethods;
            come_call_finalizer3(__dec_obj113,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethods,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_488;
struct sNode* __result308__;
struct sNode* __result309__;
struct sNode* result_489;
struct sNode* __result310__;
result_488 = (void*)0;
result_489 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_488,0,sizeof(struct sNode*));
        __result308__ = gComeFunResultObject = __result_obj__ = result_488;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    self->it=self->head;
    if(    self->it) {
        __result309__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    memset(&result_489,0,sizeof(struct sNode*));
    __result310__ = gComeFunResultObject = __result_obj__ = result_489;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_491;
struct sNode* __result311__;
struct sNode* __result312__;
struct sNode* result_492;
struct sNode* __result313__;
result_491 = (void*)0;
result_492 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_491,0,sizeof(struct sNode*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_491;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_492,0,sizeof(struct sNode*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_492;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_494;
void* __right_value384 = (void*)0;
_Bool _if_conditional3;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sType* type_495;
void* __right_value391 = (void*)0;
struct sType* override__496;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sType* type_497;
void* __right_value397 = (void*)0;
struct sType* override__498;
void* __right_value398 = (void*)0;
struct sClass* parent_class_499;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
char* parent_class_name_500;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c2_501=0;
char* Err_502=0;
struct sNode* __result316__;
_Bool multiple_declare_503;
char* p_504;
int sline_505;
void* __right_value403 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_506=0;
char* name_507=0;
_Bool err_508=0;
void* __right_value404 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* base_type_509=0;
char* name_510=0;
_Bool err_511=0;
void* __right_value405 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var8 = (void*)0;
struct sType* type2_512=0;
char* name2_513=0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_514=0;
char* name2_515=0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type2_516=0;
char* name_517=0;
_Bool err_518=0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* struct_attribute2_519;
void* __right_value415 = (void*)0;
char* __dec_obj119;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
char* __dec_obj120;
char* __dec_obj121;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
char* __dec_obj122;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value427 = (void*)0;
struct sNode* node_520;
_Bool Value_522;
struct sNode* __result319__;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value430 = (void*)0;
struct sNode* __result320__;
klass_494 = (void*)0;
    if(    (_if_conditional3=(((struct sClass*)((void*)(__right_value384=map$2void$phvoid$ph$p_at(info->classes,type_name,((void*)0)))))==((void*)0))),    come_call_finalizer3(__right_value384,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _if_conditional3) {
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 327, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),((char*)(__right_value387=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        (__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        type_495=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 328, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name,(_Bool)0,info));
        override__496=((struct sType*)((void*)(__right_value391=map$2void$phvoid$ph$p_at(info->types,type_name,((void*)0)))));
        come_call_finalizer3(__right_value391,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        override__496) {
            if(            override__496->mTypedef) {
                type_495->mTypedef=(_Bool)1;
            }
        }
        map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_495)));
        klass_494=((struct sClass*)((void*)(__right_value393=map$2void$phvoid$ph$p_at(info->classes,type_name,((void*)0)))));
        come_call_finalizer3(__right_value393,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        come_call_finalizer3(type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_494=((struct sClass*)((void*)(__right_value394=map$2void$phvoid$ph$p_at(info->classes,type_name,((void*)0)))));
        come_call_finalizer3(__right_value394,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        type_497=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 341, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name,(_Bool)0,info));
        override__498=((struct sType*)((void*)(__right_value397=map$2void$phvoid$ph$p_at(info->types,type_name,((void*)0)))));
        come_call_finalizer3(__right_value397,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        override__498) {
            if(            override__498->mTypedef) {
                type_497->mTypedef=(_Bool)1;
            }
        }
        map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_497)));
        come_call_finalizer3(type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    parent_class_499=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value399=parse_word(info)));
        (__right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        parent_class_name_500=(char*)come_increment_ref_count(parse_word(info));
        parent_class_499=((struct sClass*)((void*)(__right_value401=map$2void$phvoid$ph$p_operator_load_element(info->classes,parent_class_name_500))));
        come_call_finalizer3(__right_value401,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        if(        parent_class_499==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value402=err_msg(info,"invalid class name(%s)",parent_class_name_500)));
            come_exception_var_c2_501=multiple_assign_var5->v1;
            Err_502=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_502)?(puts(Err_502),exit(0)):(0));
            come_call_finalizer3(__right_value402,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            __result316__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            (Err_502 = come_decrement_ref_count2(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (parent_class_name_500 = come_decrement_ref_count2(parent_class_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result316__;
            (Err_502 = come_decrement_ref_count2(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (parent_class_name_500 = come_decrement_ref_count2(parent_class_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_503=(_Bool)0;
        {
            p_504=info->p;
            sline_505=info->sline;
            multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value403=backtrace_parse_type((_Bool)1,info)));
            type_506=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_507=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_508=multiple_assign_var6->v3;
            come_call_finalizer3(__right_value403,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            err_508&&*info->p==44) {
                multiple_declare_503=(_Bool)1;
            }
            info->p=p_504;
            info->sline=sline_505;
            come_call_finalizer3(type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_507 = come_decrement_ref_count2(name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        multiple_declare_503) {
            multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value404=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_509=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name_510=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            err_511=multiple_assign_var7->v3;
            come_call_finalizer3(__right_value404,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var8=((struct tuple2$2sType$phchar$ph*)(__right_value405=parse_variable_name((struct sType*)come_increment_ref_count(base_type_509),(_Bool)1,info)));
            type2_512=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name2_513=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            come_call_finalizer3(__right_value405,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            list$1void$ph$p_push_back(klass_494->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 398, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_513),(struct sType*)come_increment_ref_count(type2_512))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value408=parse_variable_name((struct sType*)come_increment_ref_count(base_type_509),(_Bool)0,info)));
                type2_514=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name2_515=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                come_call_finalizer3(__right_value408,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                list$1void$ph$p_push_back(klass_494->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 406, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_515),(struct sType*)come_increment_ref_count(type2_514))));
                come_call_finalizer3(type2_514,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name2_515 = come_decrement_ref_count2(name2_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(base_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_510 = come_decrement_ref_count2(name_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type2_512,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name2_513 = come_decrement_ref_count2(name2_513, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value411=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_516=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_517=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_518=multiple_assign_var10->v3;
            come_call_finalizer3(__right_value411,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_518) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1void$ph$p_push_back(klass_494->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 417, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_517),(struct sType*)come_increment_ref_count(type2_516))));
            come_call_finalizer3(type2_516,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_517 = come_decrement_ref_count2(name_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_519=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_499) {
        __dec_obj119=klass_494->mParentClassName;
        klass_494->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_499->mName));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_494->mName)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_494)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_519,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj120=klass_494->mAttribute;
        klass_494->mAttribute=(char*)come_increment_ref_count(struct_attribute2_519);
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_519,"")) {
        __dec_obj121=klass_494->mAttribute;
        klass_494->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj122=klass_494->mAttribute;
        klass_494->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute,((char*)(__right_value418=charp_operator_add(" ",struct_attribute2_519)))));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 453, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value422=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 453, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_494,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_520=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value422,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    Value_522=node_compile(node_520,info);
    if(    !Value_522) {
        __result319__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        (type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute2_519 = come_decrement_ref_count2(struct_attribute2_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_520) ? node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 459, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value429=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 459, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result320__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value430=_inf_value3));
    (type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute = come_decrement_ref_count2(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute2_519 = come_decrement_ref_count2(struct_attribute2_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((node_520) ? node_520 = come_decrement_ref_count2(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value429,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value430) ? __right_value430 = come_decrement_ref_count2(__right_value430, ((struct sNode*)__right_value430)->finalize, ((struct sNode*)__right_value430)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
struct sType* __dec_obj115;
char* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj115=self->v1;
            come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj116=self->v2;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
struct sType* __dec_obj117;
char* __dec_obj118;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj117=self->v1;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj118=self->v2;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result317__;
void* __right_value423 = (void*)0;
struct sStructNode* result_521;
void* __right_value424 = (void*)0;
char* __dec_obj123;
void* __right_value425 = (void*)0;
char* __dec_obj124;
void* __right_value426 = (void*)0;
struct sClass* __dec_obj125;
struct sStructNode* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_521=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_521->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_521->sname;
        result_521->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj124=result_521->mName;
        result_521->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj125=result_521->mClass;
        result_521->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj125,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_521;
    come_call_finalizer3(result_521,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* parse_struct_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct buffer* result_523;
char* head_524;
char* tail_525;
void* __right_value433 = (void*)0;
char* __result321__;
    parse_sharp_v5(info);
    result_523=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 465, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_524=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_525=info->p;
            buffer_append(result_523,head_524,tail_525-head_524);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value433=buffer_to_string(result_523)));
    come_call_finalizer3(result_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (__right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result321__;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool dynamic__526;
char* buf2_527;
void* __right_value434 = (void*)0;
char* __dec_obj126;
char* source_head_528;
void* __right_value435 = (void*)0;
char* struct_attribute_529;
void* __right_value436 = (void*)0;
char* type_name_530;
struct sClass* struct_class_531;
void* __right_value437 = (void*)0;
_Bool _if_conditional4;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sType* type_532;
void* __right_value443 = (void*)0;
struct sType* override__533;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sType* type_534;
void* __right_value447 = (void*)0;
struct sType* override__535;
char* source_tail_536;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct buffer* header_537;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
char* id_538;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value460 = (void*)0;
struct sNode* __result324__;
void* __right_value461 = (void*)0;
char* T_542;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c3_543=0;
char* Err_544=0;
struct sClass* generics_class_545;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
_Bool _if_conditional5;
void* __right_value466 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c4_546=0;
char* Err_547=0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sClass* __dec_obj130;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
_Bool _if_conditional6;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type2_548=0;
char* name_549=0;
_Bool err_550=0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* name2_551;
void* __right_value476 = (void*)0;
struct sType* type3_552;
_Bool no_comma_553;
void* __right_value477 = (void*)0;
struct sNode* node_554;
struct sNode* __dec_obj131;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
char* source_tail_555;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct buffer* header_556;
void* __right_value485 = (void*)0;
char* id_557;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value489 = (void*)0;
struct sNode* __result326__;
struct sClass* struct_class_558;
void* __right_value490 = (void*)0;
_Bool _if_conditional7;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* type_559;
void* __right_value495 = (void*)0;
struct sType* override__560;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* type_561;
void* __right_value499 = (void*)0;
struct sType* override__562;
void* __right_value500 = (void*)0;
struct sClass* parent_class_563;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* parent_class_name_564;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c5_565=0;
char* Err_566=0;
struct sNode* __result327__;
_Bool multiple_declare_567;
char* p_568;
int sline_569;
void* __right_value505 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_570=0;
char* name_571=0;
_Bool err_572=0;
void* __right_value506 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* base_type_573=0;
char* name_574=0;
_Bool err_575=0;
void* __right_value507 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var17 = (void*)0;
struct sType* type2_576=0;
char* name2_577=0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_578=0;
char* name2_579=0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* type2_580=0;
char* name_581=0;
_Bool err_582=0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* struct_attribute2_583;
void* __right_value517 = (void*)0;
struct sClass* klass2_584;
char* source_tail_585;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct buffer* header_586;
void* __right_value520 = (void*)0;
char* id_587;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
char* __dec_obj134;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj135;
char* __dec_obj136;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj137;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value530 = (void*)0;
struct sNode* __result328__;
char* source_head_588;
void* __right_value531 = (void*)0;
char* type_name_589;
void* __right_value532 = (void*)0;
char* id_590;
struct sClass* parent_class_591;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
char* parent_class_name_592;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c6_593=0;
char* Err_594=0;
struct sNode* __result329__;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct list$1sClass$p* parent_classes_595;
struct sClass* parent_class2_598;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sClass* struct_class_602;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
_Bool _if_conditional8;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sClass* __dec_obj138;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sClass* __dec_obj139;
struct sClass* defining_class_603;
void* __right_value551 = (void*)0;
_Bool _if_conditional9;
void* __right_value552 = (void*)0;
char* __dec_obj140;
void* __right_value553 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1sClass$p* o2_saved_609;
struct sClass* parent_612;
struct list$1void$ph* o2_saved_615;
struct tuple2$2char$phsType$ph* it_616;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
_Bool _elif_conditional2;
void* __right_value562 = (void*)0;
struct sClass* klass2_617;
void* __right_value563 = (void*)0;
char* __dec_obj141;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1sClass$p* o2_saved_618;
struct sClass* parent_619;
struct list$1void$ph* o2_saved_620;
struct tuple2$2char$phsType$ph* it_621;
void* __right_value566 = (void*)0;
struct list$1void$ph* o2_saved_622;
struct tuple2$2char$phsType$ph* it_623;
void* __right_value567 = (void*)0;
char* head_624;
char* p_saved_625;
int sline_saved_626;
char* sname_saved_627;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1sNode$ph* methods_628;
void* __right_value570 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
struct map$2void$phvoid$ph* __dec_obj144;
_Bool include__633;
_Bool multiple_declare_634;
char* p_635;
int sline_636;
void* __right_value571 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* type_637=0;
char* name_638=0;
_Bool err_639=0;
_Bool define_function_flag_640;
char* p_641;
int sline_642;
_Bool invalid_type_643;
void* __right_value572 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_644=0;
char* fun_name_645=0;
_Bool err_646=0;
char* word_647;
void* __right_value573 = (void*)0;
char* __dec_obj145;
void* __right_value574 = (void*)0;
char* __dec_obj146;
char* __dec_obj147;
void* __right_value575 = (void*)0;
char* __dec_obj148;
char* tail_648;
int pointer_num_649;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sType* __dec_obj149;
void* __right_value578 = (void*)0;
struct sNode* method_650;
struct sType* __dec_obj150;
void* __right_value582 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* base_type_654=0;
char* name_655=0;
_Bool err_656=0;
void* __right_value583 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var24 = (void*)0;
struct sType* type2_657=0;
char* name2_658=0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var25 = (void*)0;
struct sType* type2_659=0;
char* name2_660=0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
char* module_name_661;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct list$1char$ph* params_662;
void* __right_value593 = (void*)0;
char* word_663;
void* __right_value594 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c7_664=0;
char* Err_665=0;
void* __right_value595 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c8_666=0;
char* Err_667=0;
void* __right_value596 = (void*)0;
char* __dec_obj154;
void* __right_value597 = (void*)0;
char* __dec_obj155;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
_Bool _if_conditional10;
void* __right_value600 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c9_668=0;
char* Err_669=0;
struct sNode* __result341__;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sClassModule* module_670;
void* __right_value603 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c10_671=0;
char* Err_672=0;
void* __right_value611 = (void*)0;
void* __right_value617 = (void*)0;
struct map$2void$phvoid$ph* __dec_obj158;
int i_686;
struct list$1char$ph* o2_saved_687;
char* it_690;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
char* __dec_obj159;
void* __right_value622 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type2_696=0;
char* name_697=0;
_Bool err_698=0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* __dec_obj160;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value635 = (void*)0;
struct sNode* __result360__;
void* __right_value636 = (void*)0;
struct sNode* __result361__;
buf2_527 = (void*)0;
struct_class_531 = (void*)0;
generics_class_545 = (void*)0;
struct_class_558 = (void*)0;
struct_class_602 = (void*)0;
    dynamic__526=(_Bool)0;
    if(    charp_operator_equals(buf,"dynamic")) {
        __dec_obj126=buf2_527;
        buf2_527=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        dynamic__526=(_Bool)1;
    }
    if(    (dynamic__526&&string_operator_equals(buf2_527,"struct"))||charp_operator_equals(buf,"struct")) {
        source_head_528=head;
        struct_attribute_529=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_530=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional4=(((struct sClass*)((void*)(__right_value437=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))))==((void*)0))),            come_call_finalizer3(__right_value437,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional4) {
                map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(type_name_530),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 508, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_530,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                struct_class_531=((struct sClass*)((void*)(__right_value440=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value440,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                type_532=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 510, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_530,(_Bool)0,info));
                override__533=((struct sType*)((void*)(__right_value443=map$2void$phvoid$ph$p_at(info->types,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value443,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__533) {
                    if(                    override__533->mTypedef) {
                        type_532->mTypedef=(_Bool)1;
                    }
                }
                map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(type_name_530),(struct sType*)come_increment_ref_count(type_532));
                come_call_finalizer3(type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                struct_class_531=((struct sClass*)((void*)(__right_value444=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value444,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                type_534=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 521, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_530,(_Bool)0,info));
                override__535=((struct sType*)((void*)(__right_value447=map$2void$phvoid$ph$p_at(info->types,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value447,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__535) {
                    if(                    override__535->mTypedef) {
                        type_534->mTypedef=(_Bool)1;
                    }
                }
                map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(type_name_530),(struct sType*)come_increment_ref_count(type_534));
                come_call_finalizer3(type_534,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            source_tail_536=info->p;
            header_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 533, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_537,source_head_528,source_tail_536-source_head_528);
            id_538=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value450=__builtin_string(type_name_530))),";"));
            (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            add_come_code_at_come_struct_header(info,id_538,"%s",((char*)(__right_value452=buffer_to_string(header_537))));
            (__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 539, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value455=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 539, "struct sStructNobodyNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_530)),struct_class_531,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value460=_inf_value4));
            come_call_finalizer3(header_537,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_538 = come_decrement_ref_count2(id_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_529 = come_decrement_ref_count2(struct_attribute_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value455,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value460) ? __right_value460 = come_decrement_ref_count2(__right_value460, ((struct sNode*)__right_value460)->finalize, ((struct sNode*)__right_value460)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result324__;
            come_call_finalizer3(header_537,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_538 = come_decrement_ref_count2(id_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==60) {
            list$1char$ph$p_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_542=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph$p_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_542)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_542 = come_decrement_ref_count2(T_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value463=err_msg(info,"invalid generics struct definition")));
                    come_exception_var_c3_543=multiple_assign_var11->v1;
                    Err_544=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    ((Err_544)?(puts(Err_544),exit(0)):(0));
                    come_call_finalizer3(__right_value463,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_544 = come_decrement_ref_count2(Err_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (T_542 = come_decrement_ref_count2(T_542, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional5=(((struct sClass*)((void*)(__right_value465=map$2void$phvoid$ph$p_at(info->generics_classes,((char*)(__right_value464=__builtin_string(type_name_530))),((void*)0)))))!=((void*)0))),            (__right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value465,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional5) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value466=err_msg(info,"redifined generics struct(%s)",type_name_530)));
                come_exception_var_c4_546=multiple_assign_var12->v1;
                Err_547=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                ((Err_547)?(puts(Err_547),exit(0)):(0));
                come_call_finalizer3(__right_value466,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_547 = come_decrement_ref_count2(Err_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                __dec_obj130=generics_class_545;
                generics_class_545=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 572, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_530,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                come_call_finalizer3(__dec_obj130,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            if(            (_if_conditional6=(((struct sClass*)((void*)(__right_value470=map$2void$phvoid$ph$p_at(info->generics_classes,((char*)(__right_value469=__builtin_string(type_name_530))),((void*)0)))))==((void*)0))),            (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
            come_call_finalizer3(__right_value470,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional6) {
                map$2void$phvoid$ph$p_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_530)),(struct sClass*)come_increment_ref_count(generics_class_545));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value472=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_548=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_549=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_550=multiple_assign_var13->v3;
                come_call_finalizer3(__right_value472,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_550) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1void$ph$p_push_back(generics_class_545->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 600, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_549),(struct sType*)come_increment_ref_count(type2_548))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_551=(char*)come_increment_ref_count(parse_word(info));
                        type3_552=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_548));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_553=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_554=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_553;
                            __dec_obj131=type3_552->mSizeNum;
                            type3_552->mSizeNum=(struct sNode*)come_increment_ref_count(node_554);
                            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
                            ((node_554) ? node_554 = come_decrement_ref_count2(node_554, ((struct sNode*)node_554)->finalize, ((struct sNode*)node_554)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        }
                        list$1void$ph$p_push_back(generics_class_545->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 622, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_551),(struct sType*)come_increment_ref_count(type3_552))));
                        (name2_551 = come_decrement_ref_count2(name2_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(type3_552,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    list$1void$ph$p_push_back(generics_class_545->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 626, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_549),(struct sType*)come_increment_ref_count(type2_548))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(type2_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_549 = come_decrement_ref_count2(name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                come_call_finalizer3(type2_548,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_549 = come_decrement_ref_count2(name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            generics_class_545->mDynamic=dynamic__526;
            ((struct tuple2$2char$phchar$ph*)(__right_value482=parse_attribute(info,(_Bool)0)));
            come_call_finalizer3(__right_value482,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            list$1char$ph$p_reset(info->generics_type_names);
            source_tail_555=info->p;
            header_556=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 653, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(header_556,"struct ");
            buffer_append(header_556,source_head_528,source_tail_555-source_head_528);
            id_557=(char*)come_increment_ref_count(__builtin_string(type_name_530));
            add_come_code_at_come_struct_header(info,id_557,"%s;\n",((char*)(__right_value486=buffer_to_string(header_556))));
            (__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 660, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value488=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 660, "struct sNothingNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result326__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value489=_inf_value5));
            come_call_finalizer3(generics_class_545,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_556,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_557 = come_decrement_ref_count2(id_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_529 = come_decrement_ref_count2(struct_attribute_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value488,sNothingNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value489) ? __right_value489 = come_decrement_ref_count2(__right_value489, ((struct sNode*)__right_value489)->finalize, ((struct sNode*)__right_value489)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result326__;
            come_call_finalizer3(generics_class_545,sClass_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_556,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_557 = come_decrement_ref_count2(id_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)((void*)(__right_value490=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))))==((void*)0))),            come_call_finalizer3(__right_value490,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
            _if_conditional7) {
                map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(type_name_530),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 665, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_530,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                type_559=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 667, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_530,(_Bool)0,info));
                override__560=((struct sType*)((void*)(__right_value495=map$2void$phvoid$ph$p_at(info->types,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value495,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__560) {
                    if(                    override__560->mTypedef) {
                        type_559->mTypedef=(_Bool)1;
                    }
                }
                map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(type_name_530),(struct sType*)come_increment_ref_count(type_559));
                struct_class_558=((struct sClass*)((void*)(__right_value496=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value496,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                come_call_finalizer3(type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                type_561=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 679, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_530,(_Bool)0,info));
                override__562=((struct sType*)((void*)(__right_value499=map$2void$phvoid$ph$p_at(info->types,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value499,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                override__562) {
                    if(                    override__562->mTypedef) {
                        type_561->mTypedef=(_Bool)1;
                    }
                }
                map$2void$phvoid$ph$p_insert(info->types,(char*)come_increment_ref_count(type_name_530),(struct sType*)come_increment_ref_count(type_561));
                struct_class_558=((struct sClass*)((void*)(__right_value500=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))));
                come_call_finalizer3(__right_value500,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                come_call_finalizer3(type_561,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            struct_class_558==((void*)0)) {
                printf("%s is not found\n",type_name_530);
                exit(1);
            }
            parent_class_563=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value501=parse_word(info)));
                (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                parent_class_name_564=(char*)come_increment_ref_count(parse_word(info));
                parent_class_563=((struct sClass*)((void*)(__right_value503=map$2void$phvoid$ph$p_operator_load_element(info->classes,parent_class_name_564))));
                come_call_finalizer3(__right_value503,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                parent_class_563==((void*)0)) {
                    multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value504=err_msg(info,"invalid class name(%s)",parent_class_name_564)));
                    come_exception_var_c5_565=multiple_assign_var14->v1;
                    Err_566=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    ((Err_566)?(puts(Err_566),exit(0)):(0));
                    come_call_finalizer3(__right_value504,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    __result327__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    (Err_566 = come_decrement_ref_count2(Err_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (parent_class_name_564 = come_decrement_ref_count2(parent_class_name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (struct_attribute_529 = come_decrement_ref_count2(struct_attribute_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    gComeFunResultObject = (void*)0;
                    return __result327__;
                    (Err_566 = come_decrement_ref_count2(Err_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (parent_class_name_564 = come_decrement_ref_count2(parent_class_name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_567=(_Bool)0;
                {
                    p_568=info->p;
                    sline_569=info->sline;
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value505=backtrace_parse_type((_Bool)1,info)));
                    type_570=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_571=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_572=multiple_assign_var15->v3;
                    come_call_finalizer3(__right_value505,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_572&&*info->p==44) {
                        multiple_declare_567=(_Bool)1;
                    }
                    info->p=p_568;
                    info->sline=sline_569;
                    come_call_finalizer3(type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_571 = come_decrement_ref_count2(name_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                multiple_declare_567) {
                    multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value506=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_573=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                    name_574=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                    err_575=multiple_assign_var16->v3;
                    come_call_finalizer3(__right_value506,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var17=((struct tuple2$2sType$phchar$ph*)(__right_value507=parse_variable_name((struct sType*)come_increment_ref_count(base_type_573),(_Bool)1,info)));
                    type2_576=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                    name2_577=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                    come_call_finalizer3(__right_value507,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1void$ph$p_push_back(struct_class_558->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 741, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_577),(struct sType*)come_increment_ref_count(type2_576))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value510=parse_variable_name((struct sType*)come_increment_ref_count(base_type_573),(_Bool)0,info)));
                        type2_578=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name2_579=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        come_call_finalizer3(__right_value510,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1void$ph$p_push_back(struct_class_558->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 749, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_579),(struct sType*)come_increment_ref_count(type2_578))));
                        come_call_finalizer3(type2_578,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (name2_579 = come_decrement_ref_count2(name2_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(base_type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_574 = come_decrement_ref_count2(name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name2_577 = come_decrement_ref_count2(name2_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value513=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_580=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name_581=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    err_582=multiple_assign_var19->v3;
                    come_call_finalizer3(__right_value513,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_582) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1void$ph$p_push_back(struct_class_558->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 759, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_581),(struct sType*)come_increment_ref_count(type2_580))));
                    come_call_finalizer3(type2_580,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_581 = come_decrement_ref_count2(name_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_583=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph$p_reset(info->generics_type_names);
            klass2_584=((struct sClass*)((void*)(__right_value517=map$2void$phvoid$ph$p_at(info->classes,type_name_530,((void*)0)))));
            come_call_finalizer3(__right_value517,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            source_tail_585=info->p;
            header_586=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 786, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_586,source_head_528,source_tail_585-source_head_528);
            id_587=(char*)come_increment_ref_count(__builtin_string(type_name_530));
            add_come_code_at_come_struct_header(info,id_587,"%s;\n",((char*)(__right_value521=buffer_to_string(header_586))));
            (__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            if(            parent_class_563) {
                __dec_obj134=struct_class_558->mParentClassName;
                struct_class_558->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_563->mName));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(struct_class_558->mName)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_558)));
            }
            if(            string_operator_equals(struct_attribute_529,"")&&string_operator_equals(struct_attribute2_583,"")) {
            }
            else if(            string_operator_equals(struct_attribute_529,"")) {
                __dec_obj135=struct_class_558->mAttribute;
                struct_class_558->mAttribute=(char*)come_increment_ref_count(struct_attribute2_583);
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_583,"")) {
                __dec_obj136=struct_class_558->mAttribute;
                struct_class_558->mAttribute=(char*)come_increment_ref_count(struct_attribute_529);
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj137=struct_class_558->mAttribute;
                struct_class_558->mAttribute=(char*)come_increment_ref_count(string_operator_add(struct_attribute_529,((char*)(__right_value525=charp_operator_add(" ",struct_attribute2_583)))));
                __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            }
            struct_class_558->mDynamic=dynamic__526;
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 810, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value529=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 810, "struct sStructNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_530)),struct_class_558,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value530=_inf_value6));
            (struct_attribute2_583 = come_decrement_ref_count2(struct_attribute2_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_586,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_587 = come_decrement_ref_count2(id_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_529 = come_decrement_ref_count2(struct_attribute_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value529,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value530) ? __right_value530 = come_decrement_ref_count2(__right_value530, ((struct sNode*)__right_value530)->finalize, ((struct sNode*)__right_value530)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result328__;
            (struct_attribute2_583 = come_decrement_ref_count2(struct_attribute2_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_586,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (id_587 = come_decrement_ref_count2(id_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (struct_attribute_529 = come_decrement_ref_count2(struct_attribute_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_530 = come_decrement_ref_count2(type_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    !gComeC&&(dynamic__526&&string_operator_equals(buf2_527,"class"))||charp_operator_equals(buf,"class")) {
        source_head_588=head;
        type_name_589=(char*)come_increment_ref_count(parse_word(info));
        id_590=(char*)come_increment_ref_count(__builtin_string(type_name_589));
        add_come_code_at_come_struct_header(info,id_590,"struct %s;\n",type_name_589);
        parent_class_591=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value533=parse_word(info)));
            (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            parent_class_name_592=(char*)come_increment_ref_count(parse_word(info));
            parent_class_591=((struct sClass*)((void*)(__right_value535=map$2void$phvoid$ph$p_operator_load_element(info->classes,parent_class_name_592))));
            come_call_finalizer3(__right_value535,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            parent_class_591==((void*)0)) {
                multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value536=err_msg(info,"invalid class name(%s)",parent_class_name_592)));
                come_exception_var_c6_593=multiple_assign_var20->v1;
                Err_594=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                ((Err_594)?(puts(Err_594),exit(0)):(0));
                come_call_finalizer3(__right_value536,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                __result329__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (parent_class_name_592 = come_decrement_ref_count2(parent_class_name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_590 = come_decrement_ref_count2(id_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result329__;
                (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (parent_class_name_592 = come_decrement_ref_count2(parent_class_name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        parent_classes_595=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 835, "struct list$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parent_class2_598=parent_class_591;
        while(parent_class2_598) {
            list$1sClass$p$p_add(parent_classes_595,parent_class2_598);
            if(            parent_class_591->mParentClassName) {
                parent_class2_598=((struct sClass*)((void*)(__right_value543=map$2void$phvoid$ph$p_operator_load_element(info->classes,((char*)(__right_value542=__builtin_string(parent_class_591->mParentClassName)))))));
                (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            }
            else {
                parent_class2_598=((void*)0);
            }
        }
        if(        (_if_conditional8=(((struct sClass*)((void*)(__right_value545=map$2void$phvoid$ph$p_at(info->classes,((char*)(__right_value544=__builtin_string(type_name_589))),((void*)0)))))==((void*)0))),        (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
        come_call_finalizer3(__right_value545,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional8) {
            __dec_obj138=struct_class_602;
            struct_class_602=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 850, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),type_name_589,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            come_call_finalizer3(__dec_obj138,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            __dec_obj139=struct_class_602;
            struct_class_602=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, ((struct sClass*)((void*)(__right_value549=map$2void$phvoid$ph$p_at(info->classes,((char*)(__right_value548=__builtin_string(type_name_589))),((void*)0)))))));
            come_call_finalizer3(__dec_obj139,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (__right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
            come_call_finalizer3(__right_value549,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
        }
        struct_class_602->mDynamic=dynamic__526;
        defining_class_603=info->defining_class;
        info->defining_class=struct_class_602;
        if(        (_if_conditional9=(((struct sClass*)((void*)(__right_value551=map$2void$phvoid$ph$p_at(info->classes,type_name_589,((void*)0)))))==((void*)0))),        come_call_finalizer3(__right_value551,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _if_conditional9) {
            if(            parent_class_591) {
                __dec_obj140=struct_class_602->mParentClassName;
                struct_class_602->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_591->mName));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(type_name_589),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_602)));
            for(            o2_saved_609=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value559=list$1sClass$p$p_reverse(parent_classes_595))))),parent_612=list$1sClass$p$p_begin((o2_saved_609)) ,            come_call_finalizer3(__right_value559,list$1sClass$p$p_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClass$p$p_end((o2_saved_609));            parent_612=list$1sClass$p$p_next((o2_saved_609))            ){
                for(                o2_saved_615=(struct list$1void$ph*)come_increment_ref_count((parent_612->mFields)),it_616=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_615)));                !list$1void$ph$p_end((o2_saved_615));                it_616=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_615)))                ){
                    list$1void$ph$p_add(struct_class_602->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_616)));
                }
                come_call_finalizer3(o2_saved_615,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_609,list$1sClass$p$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        (_elif_conditional2=(list$1void$ph$p_length(((struct sClass*)((void*)(__right_value561=map$2void$phvoid$ph$p_at(info->classes,type_name_589,((void*)0)))))->mFields)==0&&list$1void$ph$p_length(struct_class_602->mFields)>0)),        come_call_finalizer3(__right_value561,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
        _elif_conditional2) {
            klass2_617=((struct sClass*)((void*)(__right_value562=map$2void$phvoid$ph$p_at(info->classes,type_name_589,((void*)0)))));
            come_call_finalizer3(__right_value562,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
            if(            parent_class_591) {
                __dec_obj141=klass2_617->mParentClassName;
                klass2_617->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_591->mName));
                __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            map$2void$phvoid$ph$p_insert(info->classes,(char*)come_increment_ref_count(type_name_589),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass2_617)));
            for(            o2_saved_618=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value565=list$1sClass$p$p_reverse(parent_classes_595))))),parent_619=list$1sClass$p$p_begin((o2_saved_618)) ,            come_call_finalizer3(__right_value565,list$1sClass$p$p_finalize, 0, 1, 0, 0, __result_obj__),
            0;            !list$1sClass$p$p_end((o2_saved_618));            parent_619=list$1sClass$p$p_next((o2_saved_618))            ){
                for(                o2_saved_620=(struct list$1void$ph*)come_increment_ref_count((parent_619->mFields)),it_621=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_620)));                !list$1void$ph$p_end((o2_saved_620));                it_621=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_620)))                ){
                    list$1void$ph$p_add(klass2_617->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_621)));
                }
                come_call_finalizer3(o2_saved_620,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_618,list$1sClass$p$p_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_622=(struct list$1void$ph*)come_increment_ref_count((struct_class_602->mFields)),it_623=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_begin((o2_saved_622)));            !list$1void$ph$p_end((o2_saved_622));            it_623=((struct tuple2$2char$phsType$ph*)list$1void$ph$p_next((o2_saved_622)))            ){
                list$1void$ph$p_add(klass2_617->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_623)));
            }
            come_call_finalizer3(o2_saved_622,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        expected_next_character(123,info);
        head_624=info->p;
        p_saved_625=((void*)0);
        sline_saved_626=0;
        sname_saved_627=((void*)0);
        methods_628=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 899, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            p_saved_625) {
                if(                *info->p==0) {
                    info->p=p_saved_625;
                    info->sline=sline_saved_626;
                    __dec_obj142=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_627));
                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_625=((void*)0);
                    sline_saved_626=0;
                    __dec_obj143=sname_saved_627;
                    sname_saved_627=((void*)0);
                    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj144=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj144,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__633=parsecmp("include",info);
            multiple_declare_634=(_Bool)0;
            if(            include__633==(_Bool)0) {
                p_635=info->p;
                sline_636=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value571=backtrace_parse_type((_Bool)1,info)));
                    type_637=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                    name_638=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    err_639=multiple_assign_var21->v3;
                    come_call_finalizer3(__right_value571,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    err_639&&*info->p==44) {
                        multiple_declare_634=(_Bool)1;
                    }
                    come_call_finalizer3(type_637,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name_638 = come_decrement_ref_count2(name_638, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_635;
                info->sline=sline_636;
            }
            define_function_flag_640=(_Bool)0;
            if(            include__633==(_Bool)0) {
                p_641=info->p;
                sline_642=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_640=(_Bool)1;
                }
                else {
                    invalid_type_643=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value572=backtrace_parse_type((_Bool)0,info)));
                        result_type_644=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                        fun_name_645=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                        err_646=multiple_assign_var22->v3;
                        come_call_finalizer3(__right_value572,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer3(result_type_644,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (fun_name_645 = come_decrement_ref_count2(fun_name_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    word_647=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj145=word_647;
                        word_647=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_647,"extern")) {
                            __dec_obj146=word_647;
                            word_647=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                    }
                    else {
                        __dec_obj147=word_647;
                        word_647=((void*)0);
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_647) {
                        if(                        is_type_name(word_647,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj148=word_647;
                                word_647=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        if(                        strlen(word_647)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_640=(_Bool)1;
                        }
                    }
                    (word_647 = come_decrement_ref_count2(word_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_641;
                info->sline=sline_642;
            }
            if(            define_function_flag_640) {
                tail_648=info->p;
                pointer_num_649=1;
                __dec_obj149=info->impl_type;
                info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1009, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_589,(_Bool)0,info));
                come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->impl_type->mPointerNum=pointer_num_649;
                info->in_class=(_Bool)1;
                method_650=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj150=info->impl_type;
                info->impl_type=((void*)0);
                come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph$p_push_back(methods_628,(struct sNode*)come_increment_ref_count(method_650));
                ((method_650) ? method_650 = come_decrement_ref_count2(method_650, ((struct sNode*)method_650)->finalize, ((struct sNode*)method_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else if(            multiple_declare_634) {
                multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value582=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_654=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                name_655=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                err_656=multiple_assign_var23->v3;
                come_call_finalizer3(__right_value582,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var24=((struct tuple2$2sType$phchar$ph*)(__right_value583=parse_variable_name((struct sType*)come_increment_ref_count(base_type_654),(_Bool)1,info)));
                type2_657=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
                name2_658=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                come_call_finalizer3(__right_value583,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                list$1void$ph$p_push_back(struct_class_602->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1026, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_658),(struct sType*)come_increment_ref_count(type2_657))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var25=((struct tuple2$2sType$phchar$ph*)(__right_value586=parse_variable_name((struct sType*)come_increment_ref_count(base_type_654),(_Bool)0,info)));
                    type2_659=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                    name2_660=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                    come_call_finalizer3(__right_value586,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    list$1void$ph$p_push_back(struct_class_602->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1034, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name2_660),(struct sType*)come_increment_ref_count(type2_659))));
                    come_call_finalizer3(type2_659,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (name2_660 = come_decrement_ref_count2(name2_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                expected_next_character(59,info);
                come_call_finalizer3(base_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_655 = come_decrement_ref_count2(name_655, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type2_657,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name2_658 = come_decrement_ref_count2(name2_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value589=parse_word(info)));
                (__right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                module_name_661=(char*)come_increment_ref_count(parse_word(info));
                params_662=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 1043, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_663=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_662,(char*)come_increment_ref_count(word_663));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value594=err_msg(info,"invalid source end")));
                            come_exception_var_c7_664=multiple_assign_var26->v1;
                            Err_665=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_665)?(puts(Err_665),exit(0)):(0));
                            come_call_finalizer3(__right_value594,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_665 = come_decrement_ref_count2(Err_665, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_663 = come_decrement_ref_count2(word_663, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value595=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c8_666=multiple_assign_var27->v1;
                            Err_667=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_667)?(puts(Err_667),exit(0)):(0));
                            come_call_finalizer3(__right_value595,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                            exit(2);
                            (Err_667 = come_decrement_ref_count2(Err_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_663 = come_decrement_ref_count2(word_663, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_625=info->p;
                sline_saved_626=info->sline;
                __dec_obj154=sname_saved_627;
                sname_saved_627=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj155=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_661));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional10=(((struct sClassModule*)((void*)(__right_value599=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value598=__builtin_string(module_name_661)))))))==((void*)0))),                (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
                come_call_finalizer3(__right_value599,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
                _if_conditional10) {
                    multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value600=err_msg(info,"module not found")));
                    come_exception_var_c9_668=multiple_assign_var28->v1;
                    Err_669=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    ((Err_669)?(puts(Err_669),exit(0)):(0));
                    come_call_finalizer3(__right_value600,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    __result341__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    (Err_669 = come_decrement_ref_count2(Err_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_661 = come_decrement_ref_count2(module_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_662,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_590 = come_decrement_ref_count2(id_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(parent_classes_595,list$1sClass$p$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(struct_class_602,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_saved_627 = come_decrement_ref_count2(sname_saved_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(methods_628,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    gComeFunResultObject = (void*)0;
                    return __result341__;
                    (Err_669 = come_decrement_ref_count2(Err_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_670=((struct sClassModule*)((void*)(__right_value602=map$2void$phvoid$ph$p_operator_load_element(info->modules,((char*)(__right_value601=__builtin_string(module_name_661)))))));
                (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                come_call_finalizer3(__right_value602,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
                if(                list$1char$ph$p_length(module_670->mParams)!=list$1char$ph$p_length(params_662)) {
                    multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value603=err_msg(info,"invalid parametor number")));
                    come_exception_var_c10_671=multiple_assign_var29->v1;
                    Err_672=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                    ((Err_672)?(puts(Err_672),exit(0)):(0));
                    come_call_finalizer3(__right_value603,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(1);
                    (Err_672 = come_decrement_ref_count2(Err_672, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj158=info->module_params;
                info->module_params=(struct map$2void$phvoid$ph*)come_increment_ref_count(map$2void$phvoid$ph$pp_initialize((struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "14struct.c", 1097, "struct map$2void$phvoid$ph*", map$2void$phvoid$ph$p_finalize, map$2void$phvoid$ph_clone, map$2void$phvoid$ph$p_get_hash_key, map$2void$phvoid$ph$p_equals))));
                come_call_finalizer3(__dec_obj158,map$2void$phvoid$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_686=0;
                for(                o2_saved_687=(struct list$1char$ph*)come_increment_ref_count((module_670->mParams)),it_690=list$1char$ph$p_begin((o2_saved_687));                !list$1char$ph$p_end((o2_saved_687));                it_690=list$1char$ph$p_next((o2_saved_687))                ){
                    map$2void$phvoid$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_690)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value619=list$1char$ph$p_operator_load_element(params_662,i_686))))));
                    (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    i_686++;
                }
                come_call_finalizer3(o2_saved_687,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_670->mText;
                info->sline=module_670->mSLine;
                __dec_obj159=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_670->mSName));
                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_661 = come_decrement_ref_count2(module_name_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_662,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value622=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_696=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_697=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_698=multiple_assign_var30->v3;
                come_call_finalizer3(__right_value622,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_698) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1void$ph$p_push_back(struct_class_602->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1116, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_697),(struct sType*)come_increment_ref_count(type2_696))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                come_call_finalizer3(type2_696,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_697 = come_decrement_ref_count2(name_697, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_625) {
            if(            info->p==0) {
                info->p=p_saved_625;
                info->sline=sline_saved_626;
                __dec_obj160=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_627));
                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_625=((void*)0);
                sline_saved_626=0;
            }
        }
        list$1char$ph$p_reset(info->generics_type_names);
        info->defining_class=defining_class_603;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1150, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value629=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1150, "struct sClassNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_589)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_602)),(struct list$1sNode$ph*)come_increment_ref_count(methods_628),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result360__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value635=_inf_value7));
        (type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_590 = come_decrement_ref_count2(id_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(parent_classes_595,list$1sClass$p$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_602,sClass_finalize, 0, 0, 0, 0, (void*)0);
        (sname_saved_627 = come_decrement_ref_count2(sname_saved_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(methods_628,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value629,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value635) ? __right_value635 = come_decrement_ref_count2(__right_value635, ((struct sNode*)__right_value635)->finalize, ((struct sNode*)__right_value635)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result360__;
        (type_name_589 = come_decrement_ref_count2(type_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_590 = come_decrement_ref_count2(id_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(parent_classes_595,list$1sClass$p$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(struct_class_602,sClass_finalize, 0, 0, 0, 0, (void*)0);
        (sname_saved_627 = come_decrement_ref_count2(sname_saved_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(methods_628,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result361__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value636=top_level_v97(buf,head,head_sline,info)));
    (buf2_527 = come_decrement_ref_count2(buf2_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value636) ? __right_value636 = come_decrement_ref_count2(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result322__;
void* __right_value456 = (void*)0;
struct sStructNobodyNode* result_539;
void* __right_value457 = (void*)0;
char* __dec_obj127;
void* __right_value458 = (void*)0;
char* __dec_obj128;
void* __right_value459 = (void*)0;
struct sClass* __dec_obj129;
struct sStructNobodyNode* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_539=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_539->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj127=result_539->sname;
        result_539->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_539->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj128=result_539->mName;
        result_539->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj129=result_539->mClass;
        result_539->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj129,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_539;
    come_call_finalizer3(result_539,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list_item$1char$ph* it_540;
struct list_item$1char$ph* prev_it_541;
struct list$1char$ph* __result325__;
    it_540=self->head;
    while(it_540!=((void*)0)) {
        prev_it_541=it_540;
        it_540=it_540->next;
        come_call_finalizer3(prev_it_541,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
char* __dec_obj132;
char* __dec_obj133;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj132=self->v1;
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj133=self->v2;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1sClass$p* list$1sClass$p$p_initialize(struct list$1sClass$p* self){
void* __result_obj__=(void*)0;
struct list$1sClass$p* __result330__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sClass$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it_596;
struct list_item$1sClass$p* prev_it_597;
    it_596=self->head;
    while(it_596!=((void*)0)) {
        prev_it_597=it_596;
        it_596=it_596->next;
        come_call_finalizer3(prev_it_597,list_item$1sClass$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p$p_add(struct list$1sClass$p* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value539 = (void*)0;
struct list_item$1sClass$p* litem_599;
void* __right_value540 = (void*)0;
struct list_item$1sClass$p* litem_600;
void* __right_value541 = (void*)0;
struct list_item$1sClass$p* litem_601;
struct list$1sClass$p* __result331__;
    if(    self->len==0) {
        litem_599=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value539=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1387, "struct list_item$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_599->prev=((void*)0);
        litem_599->next=((void*)0);
        litem_599->item=item;
        self->tail=litem_599;
        self->head=litem_599;
    }
    else if(    self->len==1) {
        litem_600=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value540=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1397, "struct list_item$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_600->prev=self->head;
        litem_600->next=((void*)0);
        litem_600->item=item;
        self->tail=litem_600;
        self->head->next=litem_600;
    }
    else {
        litem_601=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value541=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1407, "struct list_item$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_601->prev=self->tail;
        litem_601->next=((void*)0);
        litem_601->item=item;
        self->tail->next=litem_601;
        self->tail=litem_601;
    }
    self->len++;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct list$1sClass$p* list$1sClass$p$p_reverse(struct list$1sClass$p* self){
void* __result_obj__=(void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1sClass$p* result_604;
struct list_item$1sClass$p* it_605;
struct list$1sClass$p* __result333__;
    result_604=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), "./comelang.h", 2149, "struct list$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_605=self->tail;
    while(it_605!=((void*)0)) {
        list$1sClass$p$p_push_back(result_604,it_605->item);
        it_605=it_605->prev;
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_604;
    come_call_finalizer3(result_604,list$1sClass$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct list$1sClass$p* list$1sClass$p$p_push_back(struct list$1sClass$p* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value556 = (void*)0;
struct list_item$1sClass$p* litem_606;
void* __right_value557 = (void*)0;
struct list_item$1sClass$p* litem_607;
void* __right_value558 = (void*)0;
struct list_item$1sClass$p* litem_608;
struct list$1sClass$p* __result332__;
    if(    self->len==0) {
        litem_606=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value556=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1457, "struct list_item$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_606->prev=((void*)0);
        litem_606->next=((void*)0);
        litem_606->item=item;
        self->tail=litem_606;
        self->head=litem_606;
    }
    else if(    self->len==1) {
        litem_607=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value557=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1467, "struct list_item$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_607->prev=self->head;
        litem_607->next=((void*)0);
        litem_607->item=item;
        self->tail=litem_607;
        self->head->next=litem_607;
    }
    else {
        litem_608=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value558=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1477, "struct list_item$1sClass$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_608->prev=self->tail;
        litem_608->next=((void*)0);
        litem_608->item=item;
        self->tail->next=litem_608;
        self->tail=litem_608;
    }
    self->len++;
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct sClass* list$1sClass$p$p_begin(struct list$1sClass$p* self){
void* __result_obj__=(void*)0;
struct sClass* result_610;
struct sClass* __result334__;
struct sClass* __result335__;
struct sClass* result_611;
struct sClass* __result336__;
result_610 = (void*)0;
result_611 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_610,0,sizeof(struct sClass*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_610;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->head;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_611,0,sizeof(struct sClass*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_611;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static _Bool list$1sClass$p$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p$p_next(struct list$1sClass$p* self){
void* __result_obj__=(void*)0;
struct sClass* result_613;
struct sClass* __result337__;
struct sClass* __result338__;
struct sClass* result_614;
struct sClass* __result339__;
result_613 = (void*)0;
result_614 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_613,0,sizeof(struct sClass*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_613;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_614,0,sizeof(struct sClass*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_614;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void map$2void$phvoid$ph_finalize(struct map$2void$phvoid$ph* self){
int i_629;
int i_630;
    for(    i_629=0;    i_629<self->size;    i_629++    ){
        if(        self->item_existance[i_629]) {
            if(            1) {
                come_call_finalizer3(self->items[i_629],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_630=0;    i_630<self->size;    i_630++    ){
        if(        self->item_existance[i_630]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_630],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void list$1void$p$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_631;
struct list_item$1void$p* prev_it_632;
    it_631=self->head;
    while(it_631!=((void*)0)) {
        prev_it_632=it_631;
        it_631=it_631->next;
        come_call_finalizer3(prev_it_632,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value579 = (void*)0;
struct list_item$1sNode$ph* litem_651;
struct sNode* __dec_obj151;
void* __right_value580 = (void*)0;
struct list_item$1sNode$ph* litem_652;
struct sNode* __dec_obj152;
void* __right_value581 = (void*)0;
struct list_item$1sNode$ph* litem_653;
struct sNode* __dec_obj153;
struct list$1sNode$ph* __result340__;
    if(    self->len==0) {
        litem_651=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value579=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1457, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_651->prev=((void*)0);
        litem_651->next=((void*)0);
        __dec_obj151=litem_651->item;
        litem_651->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_651;
        self->head=litem_651;
    }
    else if(    self->len==1) {
        litem_652=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value580=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1467, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_652->prev=self->head;
        litem_652->next=((void*)0);
        __dec_obj152=litem_652->item;
        litem_652->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_652;
        self->head->next=litem_652;
    }
    else {
        litem_653=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value581=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1477, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_653->prev=self->tail;
        litem_653->next=((void*)0);
        __dec_obj153=litem_653->item;
        litem_653->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_653;
        self->tail=litem_653;
    }
    self->len++;
    __result340__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void map$2void$phvoid$ph$p_finalize(struct map$2void$phvoid$ph* self){
int i_673;
int i_674;
    for(    i_673=0;    i_673<self->size;    i_673++    ){
        if(        self->item_existance[i_673]) {
            if(            1) {
                come_call_finalizer3(self->items[i_673],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_674=0;    i_674<self->size;    i_674++    ){
        if(        self->item_existance[i_674]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_674],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph_clone(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
struct map$2void$phvoid$ph* __result342__;
void* __right_value604 = (void*)0;
struct map$2void$phvoid$ph* result_675;
void* __right_value610 = (void*)0;
struct list$1void$p* __dec_obj156;
struct map$2void$phvoid$ph* __result347__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_675=(struct map$2void$phvoid$ph*)come_increment_ref_count((struct map$2void$phvoid$ph*)come_calloc(1, sizeof(struct map$2void$phvoid$ph)*(1), "map$2void$phvoid$ph_clone", 3, "struct map$2void$phvoid$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_675->keys=self->keys;
    }
    if(    self!=((void*)0)) {
        result_675->item_existance=self->item_existance;
    }
    if(    self!=((void*)0)) {
        result_675->items=self->items;
    }
    if(    self!=((void*)0)) {
        result_675->size=self->size;
    }
    if(    self!=((void*)0)) {
        result_675->len=self->len;
    }
    if(    self!=((void*)0)&&self->key_list!=((void*)0)) {
        __dec_obj156=result_675->key_list;
        result_675->key_list=(struct list$1void$p*)come_increment_ref_count(come_call_cloner(list$1void$p$p_clone, self->key_list));
        come_call_finalizer3(__dec_obj156,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_675->it=self->it;
    }
    __result347__ = gComeFunResultObject = __result_obj__ = result_675;
    come_call_finalizer3(result_675,map$2void$phvoid$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct list$1void$p* list$1void$p$p_clone(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result343__;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1void$p* result_677;
struct list_item$1void$p* it_678;
struct list$1void$p* __result346__;
    if(    self==((void*)0)) {
        __result343__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    result_677=(struct list$1void$p*)come_increment_ref_count(list$1void$p$pp_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 1368, "struct list$1void$p*", list$1void$p$p_finalize, list$1void$p$p_clone, list$1void$p$p_get_hash_key, list$1void$p$p_equals))));
    it_678=self->head;
    while(it_678!=((void*)0)) {
        if(        0) {
            list$1void$p$p_add(result_677,it_678->item);
        }
        else {
            list$1void$p$p_add(result_677,it_678->item);
        }
        it_678=it_678->next;
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_677;
    come_call_finalizer3(result_677,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static unsigned int list$1void$p$p_get_hash_key(struct list$1void$p* self){
unsigned int result_676;
    result_676=0;
    result_676+=int_get_hash_key(((int)self->head));
    result_676+=int_get_hash_key(((int)self->tail));
    result_676+=int_get_hash_key(((int)self->len));
    result_676+=int_get_hash_key(((int)self->it));
    return result_676;
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
struct list$1void$p* __result344__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static struct list$1void$p* list$1void$p$p_add(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value607 = (void*)0;
struct list_item$1void$p* litem_679;
void* __right_value608 = (void*)0;
struct list_item$1void$p* litem_680;
void* __right_value609 = (void*)0;
struct list_item$1void$p* litem_681;
struct list$1void$p* __result345__;
    if(    self->len==0) {
        litem_679=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value607=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1387, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_679->prev=((void*)0);
        litem_679->next=((void*)0);
        litem_679->item=item;
        self->tail=litem_679;
        self->head=litem_679;
    }
    else if(    self->len==1) {
        litem_680=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value608=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1397, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_680->prev=self->head;
        litem_680->next=((void*)0);
        litem_680->item=item;
        self->tail=litem_680;
        self->head->next=litem_680;
    }
    else {
        litem_681=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value609=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1407, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_681->prev=self->tail;
        litem_681->next=((void*)0);
        litem_681->item=item;
        self->tail->next=litem_681;
        self->tail=litem_681;
    }
    self->len++;
    __result345__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static void list$1void$p_finalize(struct list$1void$p* self){
struct list_item$1void$p* it_682;
struct list_item$1void$p* prev_it_683;
    it_682=self->head;
    while(it_682!=((void*)0)) {
        prev_it_683=it_682;
        it_682=it_682->next;
        come_call_finalizer3(prev_it_683,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int map$2void$phvoid$ph$p_get_hash_key(struct map$2void$phvoid$ph* self){
unsigned int result_684;
    result_684=0;
    result_684+=int_get_hash_key(((int)self->keys));
    result_684+=int_get_hash_key(((int)self->item_existance));
    result_684+=int_get_hash_key(((int)self->items));
    result_684+=int_get_hash_key(((int)self->size));
    result_684+=int_get_hash_key(((int)self->len));
    result_684+=int_get_hash_key(((int)self->key_list));
    result_684+=int_get_hash_key(((int)self->it));
    return result_684;
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
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
int i_685;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct list$1void$p* __dec_obj157;
struct map$2void$phvoid$ph* __result349__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value612=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2663, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value613=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2664, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value614=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2665, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_685=0;    i_685<128;    i_685++    ){
        self->item_existance[i_685]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj157=self->key_list;
    self->key_list=(struct list$1void$p*)come_increment_ref_count(list$1void$p$p_initialize((struct list$1void$p*)come_increment_ref_count((struct list$1void$p*)come_calloc(1, sizeof(struct list$1void$p)*(1), "./comelang.h", 2675, "struct list$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj157,list$1void$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2void$phvoid$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct list$1void$p* list$1void$p$p_initialize(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list$1void$p* __result348__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$p$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_688;
char* __result350__;
char* __result351__;
char* result_689;
char* __result352__;
result_688 = (void*)0;
result_689 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_688,0,sizeof(char*));
        __result350__ = gComeFunResultObject = __result_obj__ = result_688;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    self->it=self->head;
    if(    self->it) {
        __result351__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    memset(&result_689,0,sizeof(char*));
    __result352__ = gComeFunResultObject = __result_obj__ = result_689;
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_691;
char* __result353__;
char* __result354__;
char* result_692;
char* __result355__;
result_691 = (void*)0;
result_692 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_691,0,sizeof(char*));
        __result353__ = gComeFunResultObject = __result_obj__ = result_691;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result354__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    memset(&result_692,0,sizeof(char*));
    __result355__ = gComeFunResultObject = __result_obj__ = result_692;
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void map$2void$phvoid$ph$p_operator_store_element(struct map$2void$phvoid$ph* self, void* key, void* item){
    map$2void$phvoid$ph$p_insert(self,(char*)come_increment_ref_count(((char*)key)),(char*)come_increment_ref_count(((char*)item)));
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1char$ph* it_693;
int i_694;
char* __result356__;
char* default_value_695;
char* __result357__;
default_value_695 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_693=self->head;
    i_694=0;
    while(it_693!=((void*)0)) {
        if(        position==i_694) {
            __result356__ = gComeFunResultObject = __result_obj__ = it_693->item;
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
        it_693=it_693->next;
        i_694++;
    }
    memset(&default_value_695,0,sizeof(char*));
    __result357__ = gComeFunResultObject = __result_obj__ = default_value_695;
    (default_value_695 = come_decrement_ref_count2(default_value_695, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result358__;
void* __right_value630 = (void*)0;
struct sClassNode* result_699;
void* __right_value631 = (void*)0;
char* __dec_obj161;
void* __right_value632 = (void*)0;
char* __dec_obj162;
void* __right_value633 = (void*)0;
struct sClass* __dec_obj163;
void* __right_value634 = (void*)0;
struct list$1sNode$ph* __dec_obj164;
struct sClassNode* __result359__;
    if(    self==(void*)0) {
        __result358__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    result_699=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_699->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_699->sname;
        result_699->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_699->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj162=result_699->mName;
        result_699->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj163=result_699->mClass;
        result_699->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        come_call_finalizer3(__dec_obj163,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj164=result_699->mMethods;
        result_699->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mMethods));
        come_call_finalizer3(__dec_obj164,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_699;
    come_call_finalizer3(result_699,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_700;
char* p_701;
int sline_702;
void* __right_value637 = (void*)0;
char* type_name_703;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* struct_attribute_704;
void* __right_value642 = (void*)0;
char* type_name_705;
void* __right_value643 = (void*)0;
struct sNode* __result362__;
void* __right_value644 = (void*)0;
struct sNode* __result363__;
    define_struct_700=(_Bool)0;
    {
        p_701=info->p;
        sline_702=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_703=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value638=parse_word(info)));
                    (__right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    ((char*)(__right_value639=parse_word(info)));
                    (__right_value639 = come_decrement_ref_count2(__right_value639, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                }
                if(                *info->p==123) {
                    ((char*)(__right_value640=skip_block(info)));
                    (__right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    if(                    *info->p==59) {
                        define_struct_700=(_Bool)1;
                    }
                }
                (type_name_703 = come_decrement_ref_count2(type_name_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_701;
        info->sline=sline_702;
    }
    if(    define_struct_700) {
        struct_attribute_704=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_705=(char*)come_increment_ref_count(parse_word(info));
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value643=parse_struct((char*)come_increment_ref_count(type_name_705),(char*)come_increment_ref_count(struct_attribute_704),info)));
        (struct_attribute_704 = come_decrement_ref_count2(struct_attribute_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_705 = come_decrement_ref_count2(type_name_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value643) ? __right_value643 = come_decrement_ref_count2(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result362__;
        (struct_attribute_704 = come_decrement_ref_count2(struct_attribute_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_705 = come_decrement_ref_count2(type_name_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result363__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=string_node_v13(buf,head,head_sline,info)));
    ((__right_value644) ? __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result363__;
}

