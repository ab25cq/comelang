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

struct sStoreNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1char$ph* multiple_assign;
    struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare;
    char* attribute;
};

struct list_item$1void$p
{
    void* item;
    struct list_item$1void$p* prev;
    struct list_item$1void$p* next;
};

struct sNewChannel
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWriteChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
    struct sNode* right_value;
};

struct sReadChannelNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct sFunLoadNode
{
    int sline;
    char* sname;
    int sline_real;
    char* name;
};

struct tuple2$2sNode$phsNode$ph
{
    struct sNode* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2sNode$phsNode$ph$ph
{
    struct tuple2$2sNode$phsNode$ph* item;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* next;
};

struct list$1tuple2$2sNode$phsNode$ph$ph
{
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* head;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2sNode$phsNode$ph$ph* it;
};

struct sArrayInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2sNode$phsNode$ph$ph* initializer;
};

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sStructInitializer
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct tuple3$3sType$phchar$phvoid$p
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key);
static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item);
static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail);
static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self);
static void list_item$1void$p$p_finalize(struct list_item$1void$p* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph$p_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
static void sVar_finalize(struct sVar* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info);
char* sNewChannel_kind(struct sNewChannel* self);
_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info);
static void sNewChannel_finalize(struct sNewChannel* self);
struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info);
char* sWriteChannelNode_kind(struct sWriteChannelNode* self);
_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info);
static void sWriteChannelNode_finalize(struct sWriteChannelNode* self);
struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info);
char* sReadChannelNode_kind(struct sReadChannelNode* self);
_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info);
static void sReadChannelNode_finalize(struct sReadChannelNode* self);
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self);
static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static _Bool list$1tuple2$2sNode$phsNode$ph$ph$p_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static int list$1tuple2$2sNode$phsNode$ph$ph$p_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self);
static _Bool tuple2$2sNode$phsNode$ph_equals(struct tuple2$2sNode$phsNode$ph* left, struct tuple2$2sNode$phsNode$ph* right);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self);
static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self);
static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sStructInitializer_kind(struct sStructInitializer* self);
_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item);
static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self);
static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static void* list$1void$p$p_begin(struct list$1void$p* self);
static _Bool list$1void$p$p_end(struct list$1void$p* self);
static void* list$1void$p$p_next(struct list$1void$p* self);
static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self);
static _Bool tuple3$3sType$phchar$phsNode$ph_equals(struct tuple3$3sType$phchar$phsNode$ph* left, struct tuple3$3sType$phchar$phsNode$ph* right);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self);
static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self);
static _Bool tuple3$3sType$phchar$phvoid$p_equals(struct tuple3$3sType$phchar$phvoid$p* left, struct tuple3$3sType$phchar$phvoid$p* right);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct sNode* expression_node_v95(struct sInfo* info);
static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self);
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
char* __dec_obj32;
void* __right_value299 = (void*)0;
struct sType* __dec_obj74;
struct sNode* __dec_obj75;
void* __right_value300 = (void*)0;
struct list$1char$ph* __dec_obj76;
void* __right_value312 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj90;
char* __dec_obj91;
struct sStoreNode* __result258__;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj74=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj75=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj76=self->multiple_assign;
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, multiple_assign));
    come_call_finalizer3(__dec_obj76,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj90=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, multiple_declare));
    come_call_finalizer3(__dec_obj90,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj91=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    (attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
char* __result259__;
    __result259__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value313=__builtin_string("sStoreNode")));
    (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result259__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sVar* var__390;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_412=0;
char* Err_413=0;
_Bool _if_conditional1;
_Bool __result269__;
void* __right_value319 = (void*)0;
struct sType* type_414;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_415;
struct tuple3$3sType$phchar$phsNode$ph* it_418;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var2 = (void*)0;
struct sType* type_421=0;
char* var_name_422=0;
struct sNode* right_value_423=0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_2_424=0;
char* Err_425=0;
_Bool _if_conditional2;
_Bool __result276__;
void* __right_value326 = (void*)0;
struct sType* left_type_426;
_Bool Value_427;
_Bool __result277__;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_428;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool Value_429;
void* __right_value331 = (void*)0;
struct CVALUE* right_value_430;
struct sType* right_type_431;
int i_432;
struct list$1char$ph* o2_saved_433;
char* it_436;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sVar* var__439;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* right_type2_440;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* multiple_var_name_445;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* __dec_obj108;
struct list$1char$ph* o2_saved_446;
char* it_447;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* right_type2_448;
struct sVar* var__449;
void* __right_value343 = (void*)0;
struct sType* var_type_450;
void* __right_value344 = (void*)0;
struct sType* left_type_451;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* right_value2_452;
void* __right_value347 = (void*)0;
char* __dec_obj109;
void* __right_value348 = (void*)0;
struct sType* __dec_obj110;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_453;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_454=0;
char* Err_455=0;
_Bool _if_conditional3;
_Bool __result286__;
void* __right_value354 = (void*)0;
char* __dec_obj112;
void* __right_value355 = (void*)0;
char* __dec_obj113;
void* __right_value356 = (void*)0;
struct sType* __dec_obj114;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sVar* var__456;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_4_457=0;
char* Err_458=0;
_Bool _if_conditional4;
_Bool __result287__;
void* __right_value363 = (void*)0;
struct sType* type_459;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_5_460=0;
char* Err_461=0;
_Bool _if_conditional5;
_Bool __result288__;
void* __right_value366 = (void*)0;
struct sType* left_type_462;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1sNode$ph* o2_saved_463;
struct sNode* it_466;
_Bool Value_469;
void* __right_value369 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_470=0;
char* Err_471=0;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value375 = (void*)0;
char* __dec_obj115;
void* __right_value376 = (void*)0;
struct sType* __dec_obj116;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sVar* var__477;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* type_478;
void* __right_value385 = (void*)0;
_Bool Value_479;
void* __right_value386 = (void*)0;
_Bool array_initializer_480;
void* __right_value387 = (void*)0;
_Bool struct_initializer_481;
void* __right_value388 = (void*)0;
_Bool new_channel_482;
void* __right_value389 = (void*)0;
struct CVALUE* right_value_483;
struct sType* right_type_484;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* var_type_485;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* left_type_486;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sVar* var__487;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value399 = (void*)0;
char* __dec_obj120;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sVar* var__489;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_490;
void* __right_value405 = (void*)0;
char* __dec_obj121;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_6_491=0;
char* Err_492=0;
_Bool _if_conditional6;
_Bool __result296__;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* come_value_493;
void* __right_value412 = (void*)0;
char* __dec_obj122;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var9 = (void*)0;
_Bool come_exception_var_7_494=0;
char* Err_495=0;
_Bool _if_conditional7;
_Bool __result297__;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_496;
void* __right_value419 = (void*)0;
char* __dec_obj123;
void* __right_value420 = (void*)0;
struct sType* __dec_obj124;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value424 = (void*)0;
char* __dec_obj125;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __dec_obj126;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_8_498=0;
char* Err_499=0;
_Bool _if_conditional8;
_Bool __result298__;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct CVALUE* come_value_500;
void* __right_value433 = (void*)0;
char* __dec_obj127;
void* __right_value434 = (void*)0;
struct sType* __dec_obj128;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_9_501=0;
char* Err_502=0;
_Bool _if_conditional9;
_Bool __result299__;
void* __right_value438 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_10_503=0;
char* Err_504=0;
_Bool _if_conditional10;
_Bool __result300__;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_505;
void* __right_value442 = (void*)0;
char* __dec_obj129;
void* __right_value443 = (void*)0;
struct sType* __dec_obj130;
_Bool Value_506;
void* __right_value444 = (void*)0;
_Bool new_channel_507;
void* __right_value445 = (void*)0;
struct CVALUE* right_value_508;
struct sType* right_type_509;
struct sClass* current_stack_frame_struct_510;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
_Bool _if_conditional11;
struct sVar* parent_var_511;
struct sType* left_type_512;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_11_513=0;
char* Err_514=0;
_Bool _if_conditional12;
_Bool __result301__;
void* __right_value451 = (void*)0;
char* c_value_515;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_516;
void* __right_value454 = (void*)0;
char* __dec_obj131;
void* __right_value455 = (void*)0;
char* __dec_obj132;
void* __right_value456 = (void*)0;
struct sType* __dec_obj133;
_Bool __result302__;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_12_517=0;
char* Err_518=0;
_Bool _if_conditional13;
_Bool __result303__;
void* __right_value460 = (void*)0;
char* c_value_519;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct CVALUE* come_value_520;
void* __right_value463 = (void*)0;
char* __dec_obj134;
void* __right_value464 = (void*)0;
char* __dec_obj135;
void* __right_value465 = (void*)0;
struct sType* __dec_obj136;
_Bool __result304__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_13_521=0;
char* Err_522=0;
_Bool _if_conditional14;
_Bool __result305__;
void* __right_value469 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_14_523=0;
char* Err_524=0;
_Bool _if_conditional15;
_Bool __result306__;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct CVALUE* come_value_525;
void* __right_value472 = (void*)0;
char* __dec_obj137;
void* __right_value473 = (void*)0;
char* __dec_obj138;
void* __right_value474 = (void*)0;
struct sType* __dec_obj139;
_Bool __result307__;
struct sVar* var__526;
void* __right_value475 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_15_527=0;
char* Err_528=0;
_Bool _if_conditional16;
_Bool __result308__;
void* __right_value476 = (void*)0;
struct sType* __dec_obj140;
void* __right_value477 = (void*)0;
struct sType* left_type_529;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_16_530=0;
char* Err_531=0;
_Bool _if_conditional17;
_Bool __result309__;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct CVALUE* come_value_532;
void* __right_value483 = (void*)0;
char* __dec_obj141;
void* __right_value484 = (void*)0;
struct sType* __dec_obj142;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_17_533=0;
char* Err_534=0;
_Bool _if_conditional18;
_Bool __result310__;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value490 = (void*)0;
char* __dec_obj143;
void* __right_value491 = (void*)0;
struct sType* __dec_obj144;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_18_536=0;
char* Err_537=0;
_Bool _if_conditional19;
_Bool __result311__;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct CVALUE* come_value_538;
void* __right_value497 = (void*)0;
char* __dec_obj145;
void* __right_value498 = (void*)0;
struct sType* __dec_obj146;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct CVALUE* come_value_539;
void* __right_value501 = (void*)0;
char* __dec_obj147;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sType* __dec_obj148;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var21 = (void*)0;
_Bool come_exception_var_19_540=0;
char* Err_541=0;
_Bool _if_conditional20;
_Bool __result312__;
void* __right_value507 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_20_542=0;
char* Err_543=0;
_Bool _if_conditional21;
_Bool __result313__;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_544;
void* __right_value510 = (void*)0;
char* __dec_obj149;
void* __right_value511 = (void*)0;
struct sType* __dec_obj150;
    if(    self->multiple_declare) {
        var__390=((struct sVar*)((void*)(__right_value315=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value314=__builtin_string(self->name)))))));
        (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value315,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__390) {
            if(            var__390->mType->mHeap) {
                free_object(((struct sType*)(__right_value316=come_call_cloner(sType_clone, var__390->mType))),var__390->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2void$phvoid$ph$p_remove(info->lv_table->mVars,((char*)(__right_value317=__builtin_string(self->name))));
            (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value318=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_1_412=multiple_assign_var1->v1;
            Err_413=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            (_if_conditional1=(Err_413)),            come_call_finalizer3(__right_value318,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                __result269__ = (_Bool)1;
                (Err_413 = come_decrement_ref_count2(Err_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result269__;
            }
            else {
            }
            (Err_413 = come_decrement_ref_count2(Err_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_414=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        for(        o2_saved_415=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_418=list$1tuple3$3sType$phchar$phsNode$ph$ph$p_begin((o2_saved_415));        !list$1tuple3$3sType$phchar$phsNode$ph$ph$p_end((o2_saved_415));        it_418=list$1tuple3$3sType$phchar$phsNode$ph$ph$p_next((o2_saved_415))        ){
            multiple_assign_var2=it_418;
            type_421=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            var_name_422=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            right_value_423=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v3);
            var__390=((struct sVar*)((void*)(__right_value321=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value320=__builtin_string(var_name_422)))))));
            (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value321,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            var__390) {
                if(                var__390->mType->mHeap) {
                    free_object(((struct sType*)(__right_value322=come_call_cloner(sType_clone, var__390->mType))),var__390->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                map$2void$phvoid$ph$p_remove(info->lv_table->mVars,((char*)(__right_value323=__builtin_string(var_name_422))));
                (__right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_422,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_421)),info,(_Bool)0);
            var__390=get_variable_from_table(info->lv_table,var_name_422);
            if(            var__390==((void*)0)) {
                multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value325=err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_418)));
                come_exception_var_2_424=multiple_assign_var3->v1;
                Err_425=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_425)),                come_call_finalizer3(__right_value325,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result276__ = (_Bool)1;
                    (Err_425 = come_decrement_ref_count2(Err_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_422 = come_decrement_ref_count2(var_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_423) ? right_value_423 = come_decrement_ref_count2(right_value_423, ((struct sNode*)right_value_423)->finalize, ((struct sNode*)right_value_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(o2_saved_415,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result276__;
                }
                else {
                }
                (Err_425 = come_decrement_ref_count2(Err_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            left_type_426=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__390->mType));
            if(            right_value_423) {
                Value_427=node_compile(right_value_423,info);
                if(                !Value_427) {
                    __result277__ = (_Bool)0;
                    come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_422 = come_decrement_ref_count2(var_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_423) ? right_value_423 = come_decrement_ref_count2(right_value_423, ((struct sNode*)right_value_423)->finalize, ((struct sNode*)right_value_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(left_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_415,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result277__;
                }
                else {
                }
                come_value_428=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value328=make_define_var(left_type_426,var__390->mCValueName,(_Bool)0,info))),come_value_428->c_value);
                (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_428,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__390->mCValueName,((char*)(__right_value329=make_type_name_string(left_type_426,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value330=make_define_var(left_type_426,var__390->mCValueName,(_Bool)0,info))));
                (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(type_421,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_422 = come_decrement_ref_count2(var_name_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_423) ? right_value_423 = come_decrement_ref_count2(right_value_423, ((struct sNode*)right_value_423)->finalize, ((struct sNode*)right_value_423)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(left_type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_415,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_429=node_compile(self->right_value,info);
        if(        !Value_429) {
            return (_Bool)0;
        }
        else {
        }
        right_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_431=right_value_430->type;
        dec_stack_ptr(1,info);
        if(        right_type_431->mNoSolvedGenericsType) {
            right_type_431=right_type_431->mNoSolvedGenericsType;
        }
        i_432=0;
        for(        o2_saved_433=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_436=list$1char$ph$p_begin((o2_saved_433));        !list$1char$ph$p_end((o2_saved_433));        it_436=list$1char$ph$p_next((o2_saved_433))        ){
            if(            i_432<list$1void$ph$p_length(right_type_431->mGenericsTypes)) {
                var__439=(struct sVar*)come_increment_ref_count(map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value332=__builtin_string(it_436)))));
                (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__439) {
                    if(                    var__439->mType->mHeap) {
                        free_object(((struct sType*)(__right_value334=come_call_cloner(sType_clone, var__439->mType))),var__439->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    map$2void$phvoid$ph$p_remove(info->lv_table->mVars,((char*)(__right_value335=__builtin_string(it_436))));
                    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_440=(struct sType*)come_increment_ref_count(list$1void$ph$p_operator_load_element(right_type_431->mGenericsTypes,i_432));
                add_variable_to_table(it_436,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_440)),info,(_Bool)0);
                come_call_finalizer3(var__439,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_440,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_432++;
        }
        come_call_finalizer3(o2_saved_433,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_444=0;
        multiple_var_name_445=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_444));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value339=make_define_var(right_value_430->type,multiple_var_name_445,(_Bool)0,info))));
        (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_445,right_value_430->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_445,right_value_430->c_value);
        }
        __dec_obj108=right_value_430->c_value;
        right_value_430->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_445));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_432=0;
        for(        o2_saved_446=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_447=list$1char$ph$p_begin((o2_saved_446));        !list$1char$ph$p_end((o2_saved_446));        it_447=list$1char$ph$p_next((o2_saved_446))        ){
            if(            i_432<list$1void$ph$p_length(right_type_431->mGenericsTypes)) {
                right_type2_448=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value341=list$1void$ph$p_operator_load_element(right_type_431->mGenericsTypes,i_432))))));
                come_call_finalizer3(__right_value341,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                var__449=get_variable_from_table(info->lv_table,it_447);
                var_type_450=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__449->mType));
                var_type_450->mStatic=(_Bool)0;
                left_type_451=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__449->mType));
                right_value2_452=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 141, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj109=right_value2_452->c_value;
                right_value2_452->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_430->c_value,i_432+1));
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj110=right_value2_452->type;
                right_value2_452->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_448));
                come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_452->var=((void*)0);
                come_value_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 147, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value353=check_assign_type(((char*)(__right_value352=xsprintf("\%s is assining to}",((char*)(__right_value351=string_to_string(self->name)))))),left_type_451,right_type2_448,come_value_453,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_3_454=multiple_assign_var4->v1;
                Err_455=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_455)),                (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value353,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    __result286__ = (_Bool)1;
                    come_call_finalizer3(right_type2_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value2_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_453,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_455 = come_decrement_ref_count2(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(o2_saved_446,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (multiple_var_name_445 = come_decrement_ref_count2(multiple_var_name_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result286__;
                }
                else {
                }
                if(                right_type2_448->mHeap&&left_type_451->mHeap&&left_type_451->mPointerNum>0&&right_type2_448->mPointerNum>0) {
                    std_move(left_type_451,right_type2_448,right_value2_452,info,(_Bool)0);
                    __dec_obj112=come_value_453->c_value;
                    come_value_453->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__449->mCValueName,right_value2_452->c_value));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj113=come_value_453->c_value;
                    come_value_453->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__449->mCValueName,right_value2_452->c_value));
                    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj114=come_value_453->type;
                come_value_453->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_451));
                come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_453->var=var__449;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value357=make_define_var(left_type_451,var__449->mCValueName,(_Bool)0,info))));
                (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_453->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_453->c_value);
                }
                come_call_finalizer3(right_type2_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_450,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_452,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_453,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_455 = come_decrement_ref_count2(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            i_432++;
        }
        come_call_finalizer3(o2_saved_446,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_430,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (multiple_var_name_445 = come_decrement_ref_count2(multiple_var_name_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__456=((struct sVar*)((void*)(__right_value359=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value358=__builtin_string(self->name)))))));
        (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value359,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__456) {
            if(            var__456->mType->mHeap) {
                free_object(((struct sType*)(__right_value360=come_call_cloner(sType_clone, var__456->mType))),var__456->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value360,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2void$phvoid$ph$p_remove(info->lv_table->mVars,((char*)(__right_value361=__builtin_string(self->name))));
            (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value362=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_4_457=multiple_assign_var5->v1;
            Err_458=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            (_if_conditional4=(Err_458)),            come_call_finalizer3(__right_value362,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result287__ = (_Bool)1;
                (Err_458 = come_decrement_ref_count2(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result287__;
            }
            else {
            }
            (Err_458 = come_decrement_ref_count2(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_459=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_459)),info,(_Bool)0);
        var__456=get_variable_from_table(info->lv_table,self->name);
        if(        var__456==((void*)0)) {
            var__456=get_variable_from_table(info->gv_table,self->name);
            if(            var__456==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value365=err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name)));
                come_exception_var_5_460=multiple_assign_var6->v1;
                Err_461=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_461)),                come_call_finalizer3(__right_value365,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    __result288__ = (_Bool)1;
                    (Err_461 = come_decrement_ref_count2(Err_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result288__;
                }
                else {
                }
                (Err_461 = come_decrement_ref_count2(Err_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_462=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__456->mType));
        if(        left_type_462->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__456->mCValueName);
        }
        else if(        list$1sNode$ph$p_length(left_type_462->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value367=make_define_var(left_type_462,var__456->mCValueName,(_Bool)0,info))));
            (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__456->mCValueName,((char*)(__right_value368=make_type_name_string(left_type_462,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_463=(struct list$1sNode$ph*)come_increment_ref_count((left_type_462->mArrayNum)),it_466=list$1sNode$ph$p_begin((o2_saved_463));            !list$1sNode$ph$p_end((o2_saved_463));            it_466=list$1sNode$ph$p_next((o2_saved_463))            ){
                Value_469=node_compile(it_466,info);
                if(                !Value_469) {
                    multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value369=err_msg(info,"invalid array num")));
                    come_exception_var_c1_470=multiple_assign_var7->v1;
                    Err_471=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_471)?(puts(Err_471),exit(0)):(0));
                    come_call_finalizer3(__right_value369,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_471 = come_decrement_ref_count2(Err_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                }
                come_value_472=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"*(%s)",come_value_472->c_value);
                come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_463,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value371=make_define_var(left_type_462,var__456->mCValueName,(_Bool)0,info))));
            (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_462->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__456->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__456->mCValueName,((char*)(__right_value372=make_type_name_string(left_type_462,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 242, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj115=come_value_473->c_value;
            come_value_473->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__456->mCValueName));
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj116=come_value_473->type;
            come_value_473->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_462));
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_473->var=var__456;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_473));
            come_call_finalizer3(come_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_462->mClass->mNumber&&left_type_462->mPointerNum==0) {
            var__456->mType->mAllocaValue=(_Bool)1;
            if(            var__456->mType->mNoSolvedGenericsType) {
                var__456->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer3(type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__477=((struct sVar*)((void*)(__right_value381=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value380=__builtin_string(self->name)))))));
        (__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value381,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        var__477) {
            if(            var__477->mType->mHeap) {
                free_object(((struct sType*)(__right_value382=come_call_cloner(sType_clone, var__477->mType))),var__477->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2void$phvoid$ph$p_remove(info->lv_table->mVars,((char*)(__right_value383=__builtin_string(self->name))));
            (__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_478=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_478)),info,(_Bool)0);
            come_call_finalizer3(type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_479=node_compile(self->right_value,info);
        if(        !Value_479) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_480=string_operator_equals(((char*)(__right_value386=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_481=string_operator_equals(((char*)(__right_value387=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_482=string_operator_equals(((char*)(__right_value388=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_483=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_484=right_value_483->type;
        dec_stack_ptr(1,info);
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_484)),info,(_Bool)0);
        }
        else {
        }
        var__477=get_variable_from_table(info->lv_table,self->name);
        var_type_485=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__477->mType));
        var_type_485->mStatic=(_Bool)0;
        if(        !array_initializer_480&&!struct_initializer_481&&!var__477->mType->mStatic&&!var_type_485->mConstant&&list$1sNode$ph$p_length(var_type_485->mArrayNum)==0) {
            if(            var_type_485->mClass->mNumber) {
            }
            else if(            (var_type_485->mClass->mStruct||var_type_485->mClass->mUnion||var_type_485->mClass->mEnum)||var_type_485->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__477->mCValueName,((char*)(__right_value392=make_type_name_string(var_type_485,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_486=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__477->mType));
        if(        array_initializer_480) {
            var__487=((struct sVar*)((void*)(__right_value395=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value394=__builtin_string(self->name)))))));
            (__right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value395,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value396=make_define_var(var__487->mType,var__487->mCValueName,(_Bool)0,info))),right_value_483->c_value);
            (__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 315, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj120=come_value_488->c_value;
            come_value_488->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_488));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_481) {
            var__489=((struct sVar*)((void*)(__right_value401=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value400=__builtin_string(self->name)))))));
            (__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value401,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value402=make_define_var(var__489->mType,var__489->mCValueName,(_Bool)0,info))),right_value_483->c_value);
            (__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_490=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 325, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj121=come_value_490->c_value;
            come_value_490->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_490));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__477->mType->mStatic||var__477->mType->mConstant) {
            multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value408=check_assign_type(((char*)(__right_value407=xsprintf("\%s is assining to",((char*)(__right_value406=string_to_string(self->name)))))),left_type_486,right_type_484,right_value_483,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_6_491=multiple_assign_var8->v1;
            Err_492=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            (_if_conditional6=(Err_492)),            (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value408,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result296__ = (_Bool)1;
                (Err_492 = come_decrement_ref_count2(Err_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result296__;
            }
            else {
            }
            add_come_code(info,"%s=%s;\n",((char*)(__right_value409=make_define_var(left_type_486,var__477->mCValueName,(_Bool)0,info))),right_value_483->c_value);
            (__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 338, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj122=come_value_493->c_value;
            come_value_493->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_493));
            transpiler_clear_last_code(info);
            (Err_492 = come_decrement_ref_count2(Err_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_484->mHeap&&left_type_486->mHeap&&left_type_486->mPointerNum>0&&right_type_484->mPointerNum>0) {
            multiple_assign_var9=((struct tuple2$2bool$char$ph*)(__right_value415=check_assign_type(((char*)(__right_value414=xsprintf("\%s is assining to",((char*)(__right_value413=string_to_string(self->name)))))),left_type_486,right_type_484,right_value_483,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_7_494=multiple_assign_var9->v1;
            Err_495=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional7=(Err_495)),            (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value415,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result297__ = (_Bool)1;
                (Err_495 = come_decrement_ref_count2(Err_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result297__;
            }
            else {
            }
            std_move(left_type_486,right_type_484,right_value_483,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value416=make_define_var(left_type_486,var__477->mCValueName,(_Bool)0,info))));
            (__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_496=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 354, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj123=come_value_496->c_value;
            come_value_496->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__477->mCValueName,right_value_483->c_value));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj124=come_value_496->type;
            come_value_496->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_486));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_496->var=var__477;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_496));
            add_come_last_code(info,"%s",come_value_496->c_value);
            (Err_495 = come_decrement_ref_count2(Err_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_496,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_486->mChannel&&new_channel_482) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value421=make_define_var(left_type_486,var__477->mCValueName,(_Bool)0,info))));
            (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__477->mCValueName);
            come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 368, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj125=come_value_497->c_value;
            come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__477->mCValueName));
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj126=come_value_497->type;
            come_value_497->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 370, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_497->type->mPointerNum=1;
            come_value_497->var=var__477;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
            add_come_last_code(info,"%s",come_value_497->c_value);
            come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_486->mPointerNum>0&&left_type_486->mHeap&&string_operator_equals(right_type_484->mClass->mName,"void")&&right_type_484->mPointerNum>0) {
            multiple_assign_var10=((struct tuple2$2bool$char$ph*)(__right_value429=check_assign_type(((char*)(__right_value428=xsprintf("\%s is assining to",((char*)(__right_value427=string_to_string(self->name)))))),left_type_486,right_type_484,right_value_483,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_8_498=multiple_assign_var10->v1;
            Err_499=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional8=(Err_499)),            (__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value429,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                __result298__ = (_Bool)1;
                (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result298__;
            }
            else {
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value430=make_define_var(left_type_486,var__477->mCValueName,(_Bool)0,info))));
            (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_500=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 388, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj127=come_value_500->c_value;
            come_value_500->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__477->mCValueName,right_value_483->c_value));
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=come_value_500->type;
            come_value_500->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_486));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_500->var=var__477;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_500));
            add_come_last_code(info,"%s",come_value_500->c_value);
            (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_500,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value437=check_assign_type(((char*)(__right_value436=xsprintf("\%s is assining to",((char*)(__right_value435=string_to_string(self->name)))))),left_type_486,right_type_484,right_value_483,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_9_501=multiple_assign_var11->v1;
            Err_502=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            (_if_conditional9=(Err_502)),            (__right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value437,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result299__ = (_Bool)1;
                (Err_502 = come_decrement_ref_count2(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result299__;
            }
            else {
            }
            if(            right_type_484->mHeap&&left_type_486->mHeap&&left_type_486->mPointerNum>0&&right_type_484->mPointerNum>0) {
                std_move(left_type_486,right_type_484,right_value_483,info,(_Bool)0);
            }
            if(            left_type_486->mHeap&&!right_value_483->type->mHeap) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value438=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_10_503=multiple_assign_var12->v1;
                Err_504=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_504)),                come_call_finalizer3(__right_value438,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result300__ = (_Bool)1;
                    (Err_504 = come_decrement_ref_count2(Err_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_502 = come_decrement_ref_count2(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result300__;
                }
                else {
                }
                (Err_504 = come_decrement_ref_count2(Err_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value439=make_define_var(left_type_486,var__477->mCValueName,(_Bool)0,info))));
            (__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_505=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 416, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj129=come_value_505->c_value;
            come_value_505->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__477->mCValueName,right_value_483->c_value));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value_505->type;
            come_value_505->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_486));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_505->var=var__477;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_505));
            add_come_last_code(info,"%s",come_value_505->c_value);
            (Err_502 = come_decrement_ref_count2(Err_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_486,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_506=node_compile(self->right_value,info);
        if(        !Value_506) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_507=string_operator_equals(((char*)(__right_value444=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_508=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_509=right_value_508->type;
        dec_stack_ptr(1,info);
        current_stack_frame_struct_510=info->current_stack_frame_struct;
        if(        (_if_conditional11=(current_stack_frame_struct_510&&((struct sVar*)((void*)(__right_value447=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value446=__builtin_string(self->name)))))))==((void*)0))),        (__right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value447,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional11) {
            parent_var_511=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_511!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_511->mFunName,info->come_fun->mName)) {
                    left_type_512=parent_var_511->mType;
                    if(                    left_type_512->mPointerNum>0&&right_type_509->mPointerNum>0&&right_type_509->mHeap&&left_type_512->mHeap) {
                        multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value450=check_assign_type(((char*)(__right_value449=xsprintf("\%s is assigning to",((char*)(__right_value448=string_to_string(self->name)))))),left_type_512,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_11_513=multiple_assign_var13->v1;
                        Err_514=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        if(                        (_if_conditional12=(Err_514)),                        (__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value450,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional12) {
                            __result301__ = (_Bool)1;
                            (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result301__;
                        }
                        else {
                        }
                        c_value_515=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_511->mCValueName));
                        decrement_ref_count_object(parent_var_511->mType,c_value_515,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_512,right_type_509,right_value_508,info,(_Bool)0);
                        come_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 457, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_511->mType->mOriginIsArray) {
                            __dec_obj131=come_value_516->c_value;
                            come_value_516->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_511->mCValueName,right_value_508->c_value));
                            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj132=come_value_516->c_value;
                            come_value_516->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_511->mCValueName,right_value_508->c_value));
                            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj133=come_value_516->type;
                        come_value_516->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_512));
                        come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_516->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_516->c_value);
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_516));
                        __result302__ = (_Bool)1;
                        (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_515 = come_decrement_ref_count2(c_value_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result302__;
                        (Err_514 = come_decrement_ref_count2(Err_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_515 = come_decrement_ref_count2(c_value_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_512->mPointerNum>0&&right_type_509->mPointerNum>0&&string_operator_equals(right_type_509->mClass->mName,"void")&&left_type_512->mHeap) {
                        multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value459=check_assign_type(((char*)(__right_value458=xsprintf("\%s is assigning to",((char*)(__right_value457=string_to_string(self->name)))))),left_type_512,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_12_517=multiple_assign_var14->v1;
                        Err_518=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        if(                        (_if_conditional13=(Err_518)),                        (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value459,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional13) {
                            __result303__ = (_Bool)1;
                            (Err_518 = come_decrement_ref_count2(Err_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result303__;
                        }
                        else {
                        }
                        c_value_519=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_511->mCValueName));
                        decrement_ref_count_object(parent_var_511->mType,c_value_519,info,(_Bool)0,(_Bool)0);
                        come_value_520=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 483, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_511->mType->mOriginIsArray) {
                            __dec_obj134=come_value_520->c_value;
                            come_value_520->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_511->mCValueName,right_value_508->c_value));
                            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj135=come_value_520->c_value;
                            come_value_520->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_511->mCValueName,right_value_508->c_value));
                            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj136=come_value_520->type;
                        come_value_520->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_512));
                        come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_520->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_520->c_value);
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_520));
                        __result304__ = (_Bool)1;
                        (Err_518 = come_decrement_ref_count2(Err_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_519 = come_decrement_ref_count2(c_value_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result304__;
                        (Err_518 = come_decrement_ref_count2(Err_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_519 = come_decrement_ref_count2(c_value_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_520,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value468=check_assign_type(((char*)(__right_value467=xsprintf("\%s is assigning to",((char*)(__right_value466=string_to_string(self->name)))))),left_type_512,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                        come_exception_var_13_521=multiple_assign_var15->v1;
                        Err_522=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        if(                        (_if_conditional14=(Err_522)),                        (__right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value468,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional14) {
                            __result305__ = (_Bool)1;
                            (Err_522 = come_decrement_ref_count2(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result305__;
                        }
                        else {
                        }
                        if(                        left_type_512->mHeap&&!right_value_508->type->mHeap) {
                            multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value469=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_exception_var_14_523=multiple_assign_var16->v1;
                            Err_524=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            if(                            (_if_conditional15=(Err_524)),                            come_call_finalizer3(__right_value469,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional15) {
                                __result306__ = (_Bool)1;
                                (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (Err_522 = come_decrement_ref_count2(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                return __result306__;
                            }
                            else {
                            }
                            (Err_524 = come_decrement_ref_count2(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_value_525=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 511, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_511->mType->mOriginIsArray) {
                            __dec_obj137=come_value_525->c_value;
                            come_value_525->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_511->mCValueName,right_value_508->c_value));
                            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj138=come_value_525->c_value;
                            come_value_525->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_511->mCValueName,right_value_508->c_value));
                            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj139=come_value_525->type;
                        come_value_525->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_512));
                        come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_525->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_525->c_value);
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_525));
                        __result307__ = (_Bool)1;
                        (Err_522 = come_decrement_ref_count2(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result307__;
                        (Err_522 = come_decrement_ref_count2(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_525,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__526=get_variable_from_table(info->lv_table,self->name);
        if(        var__526==((void*)0)) {
            var__526=get_variable_from_table(info->gv_table,self->name);
            if(            var__526==((void*)0)) {
                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value475=err_msg(info,"var not found(%s)(X) at storing variable\n",self->name)));
                come_exception_var_15_527=multiple_assign_var17->v1;
                Err_528=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_528)),                come_call_finalizer3(__right_value475,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    __result308__ = (_Bool)1;
                    (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result308__;
                }
                else {
                }
                (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        var__526->mType==((void*)0)) {
            __dec_obj140=var__526->mType;
            var__526->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_509));
            come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_529=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__526->mType));
        if(        (var__526->mType->mStatic||var__526->mType->mConstant)&&!var__526->mGlobal) {
            multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value480=check_assign_type(((char*)(__right_value479=xsprintf("\%s is assining to",((char*)(__right_value478=string_to_string(self->name)))))),left_type_529,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_16_530=multiple_assign_var18->v1;
            Err_531=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_531)),            (__right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value480,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                __result309__ = (_Bool)1;
                (Err_531 = come_decrement_ref_count2(Err_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result309__;
            }
            else {
            }
            come_value_532=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 555, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj141=come_value_532->c_value;
            come_value_532->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__526->mCValueName,right_value_508->c_value));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj142=come_value_532->type;
            come_value_532->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_529));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_532->var=var__526;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_532));
            add_come_last_code(info,"%s",come_value_532->c_value);
            (Err_531 = come_decrement_ref_count2(Err_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_509->mHeap&&left_type_529->mHeap&&left_type_529->mPointerNum>0&&right_type_509->mPointerNum>0) {
            multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value487=check_assign_type(((char*)(__right_value486=xsprintf("\%s is assining to",((char*)(__right_value485=string_to_string(self->name)))))),left_type_529,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_17_533=multiple_assign_var19->v1;
            Err_534=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional18=(Err_534)),            (__right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value487,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional18) {
                __result310__ = (_Bool)1;
                (Err_534 = come_decrement_ref_count2(Err_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result310__;
            }
            else {
            }
            decrement_ref_count_object(left_type_529,var__526->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_529,right_type_509,right_value_508,info,(_Bool)0);
            come_value_535=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 574, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj143=come_value_535->c_value;
            come_value_535->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__526->mCValueName,right_value_508->c_value));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj144=come_value_535->type;
            come_value_535->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_529));
            come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_535->var=var__526;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_535));
            add_come_last_code(info,"%s",come_value_535->c_value);
            (Err_534 = come_decrement_ref_count2(Err_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_529->mPointerNum>0&&left_type_529->mHeap&&string_operator_equals(right_type_509->mClass->mName,"void")&&right_type_509->mPointerNum>0) {
            multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value494=check_assign_type(((char*)(__right_value493=xsprintf("\%s is assining to",((char*)(__right_value492=string_to_string(self->name)))))),left_type_529,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_18_536=multiple_assign_var20->v1;
            Err_537=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional19=(Err_537)),            (__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value494,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                __result311__ = (_Bool)1;
                (Err_537 = come_decrement_ref_count2(Err_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result311__;
            }
            else {
            }
            decrement_ref_count_object(left_type_529,var__526->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_538=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 592, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj145=come_value_538->c_value;
            come_value_538->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__526->mCValueName,right_value_508->c_value));
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj146=come_value_538->type;
            come_value_538->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_529));
            come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_538->var=var__526;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_538));
            add_come_last_code(info,"%s",come_value_538->c_value);
            (Err_537 = come_decrement_ref_count2(Err_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_538,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_529->mChannel&&new_channel_507) {
            come_value_539=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 603, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj147=come_value_539->c_value;
            come_value_539->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__526->mCValueName));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj148=come_value_539->type;
            come_value_539->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 605, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_539->type->mPointerNum=1;
            come_value_539->var=var__526;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_539));
            add_come_last_code(info,"%s",come_value_539->c_value);
            come_call_finalizer3(come_value_539,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var21=((struct tuple2$2bool$char$ph*)(__right_value506=check_assign_type(((char*)(__right_value505=xsprintf("\%s is assining to",((char*)(__right_value504=string_to_string(self->name)))))),left_type_529,right_type_509,right_value_508,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_19_540=multiple_assign_var21->v1;
            Err_541=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional20=(Err_541)),            (__right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value506,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                __result312__ = (_Bool)1;
                (Err_541 = come_decrement_ref_count2(Err_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result312__;
            }
            else {
            }
            if(            left_type_529->mHeap&&!right_value_508->type->mHeap) {
                multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value507=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_20_542=multiple_assign_var22->v1;
                Err_543=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                if(                (_if_conditional21=(Err_543)),                come_call_finalizer3(__right_value507,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result313__ = (_Bool)1;
                    (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_541 = come_decrement_ref_count2(Err_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result313__;
                }
                else {
                }
                (Err_543 = come_decrement_ref_count2(Err_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_value_544=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 624, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj149=come_value_544->c_value;
            come_value_544->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__526->mCValueName,right_value_508->c_value));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj150=come_value_544->type;
            come_value_544->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_529));
            come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_544->var=var__526;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_544));
            add_come_last_code(info,"%s",come_value_544->c_value);
            (Err_541 = come_decrement_ref_count2(Err_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_508,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result237__;
void* __right_value261 = (void*)0;
struct sType* result_362;
void* __right_value262 = (void*)0;
struct sType* __dec_obj50;
void* __right_value263 = (void*)0;
struct sType* __dec_obj51;
void* __right_value271 = (void*)0;
struct list$1void$ph* __dec_obj55;
void* __right_value272 = (void*)0;
struct sType* __dec_obj56;
void* __right_value273 = (void*)0;
struct sType* __dec_obj57;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value277 = (void*)0;
char* __dec_obj60;
void* __right_value278 = (void*)0;
char* __dec_obj61;
void* __right_value279 = (void*)0;
char* __dec_obj62;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __dec_obj66;
void* __right_value288 = (void*)0;
char* __dec_obj67;
void* __right_value289 = (void*)0;
struct list$1void$ph* __dec_obj68;
void* __right_value297 = (void*)0;
struct list$1char$ph* __dec_obj72;
void* __right_value298 = (void*)0;
struct sType* __dec_obj73;
struct sType* __result251__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_362=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_362->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj50=result_362->mOriginalLoadVarType;
        result_362->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj51=result_362->mChannelType;
        result_362->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj55=result_362->mGenericsTypes;
        result_362->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj55,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_362->mNoSolvedGenericsType;
        result_362->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj57=result_362->mAnyOriginalType;
        result_362->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj58=result_362->mSizeNum;
        result_362->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_362->mAlignas;
        result_362->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj60=result_362->mTupleName;
        result_362->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj61=result_362->mAttribute;
        result_362->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_362->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_362->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_362->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_362->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_362->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_362->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_362->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_362->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_362->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_362->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_362->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_362->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_362->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_362->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_362->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_362->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_362->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_362->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_362->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_362->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_362->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_362->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_362->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_362->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_362->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_362->mAsmName;
        result_362->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_362->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_362->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=result_362->mArrayNum;
        result_362->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_362->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_362->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_362->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_362->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj67=result_362->mOriginalTypeName;
        result_362->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_362->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_362->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_362->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj68=result_362->mParamTypes;
        result_362->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj68,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj72=result_362->mParamNames;
        result_362->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj72,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj73=result_362->mResultType;
        result_362->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_362->mVarArgs=self->mVarArgs;
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_362;
    come_call_finalizer3(result_362,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj33;
struct sType* __dec_obj34;
struct list$1void$ph* __dec_obj35;
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
            __dec_obj33=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj34=self->mChannelType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj35=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj35,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
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
void* __dec_obj36;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj36=self->item;
            come_call_finalizer3(__dec_obj36,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
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

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_355;
    result_355=0;
    result_355+=int_get_hash_key(((int)self->mClass));
    result_355+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_355+=int_get_hash_key(((int)self->mChannelType));
    result_355+=int_get_hash_key(((int)self->mGenericsTypes));
    result_355+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_355+=int_get_hash_key(((int)self->mAnyClass));
    result_355+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_355+=int_get_hash_key(((int)self->mSizeNum));
    result_355+=int_get_hash_key(((int)self->mAlignas));
    result_355+=int_get_hash_key(((int)self->mTupleName));
    result_355+=int_get_hash_key(((int)self->mAttribute));
    result_355+=int_get_hash_key(((int)self->mAllocaValue));
    result_355+=int_get_hash_key(((int)self->mUnsigned));
    result_355+=int_get_hash_key(((int)self->mShort));
    result_355+=int_get_hash_key(((int)self->mLong));
    result_355+=int_get_hash_key(((int)self->mLongLong));
    result_355+=int_get_hash_key(((int)self->mConstant));
    result_355+=int_get_hash_key(((int)self->mAtomic));
    result_355+=int_get_hash_key(((int)self->mRegister));
    result_355+=int_get_hash_key(((int)self->mVolatile));
    result_355+=int_get_hash_key(((int)self->mStatic));
    result_355+=int_get_hash_key(((int)self->mUniq));
    result_355+=int_get_hash_key(((int)self->mRecord));
    result_355+=int_get_hash_key(((int)self->mExtern));
    result_355+=int_get_hash_key(((int)self->mRestrict));
    result_355+=int_get_hash_key(((int)self->mImmutable));
    result_355+=int_get_hash_key(((int)self->mHeap));
    result_355+=int_get_hash_key(((int)self->mChannel));
    result_355+=int_get_hash_key(((int)self->mNoHeap));
    result_355+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_355+=int_get_hash_key(((int)self->mException));
    result_355+=int_get_hash_key(((int)self->mGenerate));
    result_355+=int_get_hash_key(((int)self->mCreateVTable));
    result_355+=int_get_hash_key(((int)self->mDynamic));
    result_355+=int_get_hash_key(((int)self->mInline));
    result_355+=int_get_hash_key(((int)self->mNullValue));
    result_355+=int_get_hash_key(((int)self->mGuardValue));
    result_355+=int_get_hash_key(((int)self->mAsmName));
    result_355+=int_get_hash_key(((int)self->mTypedef));
    result_355+=int_get_hash_key(((int)self->mMultipleTypes));
    result_355+=int_get_hash_key(((int)self->mOriginIsArray));
    result_355+=int_get_hash_key(((int)self->mArrayNum));
    result_355+=int_get_hash_key(((int)self->mPointerNum));
    result_355+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_355+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_355+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_355+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_355+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_355+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_355+=int_get_hash_key(((int)self->mArrayPointerType));
    result_355+=int_get_hash_key(((int)self->mLambdaArray));
    result_355+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_355+=int_get_hash_key(((int)self->mParamTypes));
    result_355+=int_get_hash_key(((int)self->mParamNames));
    result_355+=int_get_hash_key(((int)self->mResultType));
    result_355+=int_get_hash_key(((int)self->mVarArgs));
    return result_355;
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
struct list_item$1void$ph* it_356;
struct list_item$1void$ph* it2_357;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_356=left->head;
    it2_357=right->head;
    while(it_356!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_356->item, it2_357->item)) {
            return (_Bool)0;
        }
        it_356=it_356->next;
        it2_357=it2_357->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_358;
struct list_item$1sNode$ph* it2_359;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_358=left->head;
    it2_359=right->head;
    while(it_358!=((void*)0)) {
        if(        !sNode_equals(it_358->item,it2_359->item)) {
            return (_Bool)0;
        }
        it_358=it_358->next;
        it2_359=it2_359->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_360;
struct list_item$1char$ph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !string_equals(it_360->item,it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result238__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1void$ph* result_364;
struct list_item$1void$ph* it_365;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1void$ph* __result241__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_364=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_365=self->head;
    while(it_365!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_364,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_365->item)));
        }
        else {
            list$1void$ph$p_add(result_364,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_365->item)));
        }
        it_365=it_365->next;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_364;
    come_call_finalizer3(result_364,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_363;
    result_363=0;
    result_363+=int_get_hash_key(((int)self->head));
    result_363+=int_get_hash_key(((int)self->tail));
    result_363+=int_get_hash_key(((int)self->len));
    result_363+=int_get_hash_key(((int)self->it));
    return result_363;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
void* __result_obj__=(void*)0;
struct list$1void$ph* __result239__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1void$ph* litem_366;
void* __dec_obj52;
void* __right_value267 = (void*)0;
struct list_item$1void$ph* litem_367;
void* __dec_obj53;
void* __right_value268 = (void*)0;
struct list_item$1void$ph* litem_368;
void* __dec_obj54;
struct list$1void$ph* __result240__;
    if(    self->len==0) {
        litem_366=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value266=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=((void*)0);
        litem_366->next=((void*)0);
        __dec_obj52=litem_366->item;
        litem_366->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_366;
        self->head=litem_366;
    }
    else if(    self->len==1) {
        litem_367=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value267=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->head;
        litem_367->next=((void*)0);
        __dec_obj53=litem_367->item;
        litem_367->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_367;
        self->head->next=litem_367;
    }
    else {
        litem_368=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value268=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=self->tail;
        litem_368->next=((void*)0);
        __dec_obj54=litem_368->item;
        litem_368->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_368;
        self->tail=litem_368;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result242__;
void* __right_value274 = (void*)0;
struct sNode* result_369;
struct sNode* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_369=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_369->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_369->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_369->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_369->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_369->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_369->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_369->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_369->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_369->kind=self->kind;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_369;
    ((result_369) ? result_369 = come_decrement_ref_count2(result_369, ((struct sNode*)result_369)->finalize, ((struct sNode*)result_369)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result244__;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1sNode$ph* result_370;
struct list_item$1sNode$ph* it_371;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* __result247__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_370=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_371=self->head;
    while(it_371!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_370,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_371->item)));
        }
        else {
            list$1sNode$ph$p_add(result_370,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_371->item)));
        }
        it_371=it_371->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_370;
    come_call_finalizer3(result_370,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list$1sNode$ph* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1sNode$ph* litem_372;
struct sNode* __dec_obj63;
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_373;
struct sNode* __dec_obj64;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_374;
struct sNode* __dec_obj65;
struct list$1sNode$ph* __result246__;
    if(    self->len==0) {
        litem_372=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value282=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj63=litem_372->item;
        litem_372->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj64=litem_373->item;
        litem_373->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj65=litem_374->item;
        litem_374->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
struct list$1char$ph* __result248__;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1char$ph* result_375;
struct list_item$1char$ph* it_376;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* __result250__;
    if(    self==((void*)0)) {
        __result248__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_375=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_376=self->head;
    while(it_376!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_375,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_376->item)));
        }
        else {
            list$1char$ph$p_add(result_375,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_376->item)));
        }
        it_376=it_376->next;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_375;
    come_call_finalizer3(result_375,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
struct list_item$1char$ph* litem_377;
char* __dec_obj69;
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_378;
char* __dec_obj70;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_379;
char* __dec_obj71;
struct list$1char$ph* __result249__;
    if(    self->len==0) {
        litem_377=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value292=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj69=litem_377->item;
        litem_377->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj70=litem_378->item;
        litem_378->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj71=litem_379->item;
        litem_379->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result252__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_382;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_383;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result257__;
    if(    self==((void*)0)) {
        __result252__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_382=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_383=self->head;
    while(it_383!=((void*)0)) {
        if(        1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(result_382,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_383->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(result_382,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_383->item)));
        }
        it_383=it_383->next;
    }
    __result257__ = gComeFunResultObject = __result_obj__ = result_382;
    come_call_finalizer3(result_382,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result253__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_380;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_381;
    it_380=self->head;
    while(it_380!=((void*)0)) {
        prev_it_381=it_380;
        it_380=it_380->next;
        come_call_finalizer3(prev_it_381,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj77;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj77=self->item;
            come_call_finalizer3(__dec_obj77,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
struct sType* __dec_obj78;
char* __dec_obj79;
struct sNode* __dec_obj80;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj78=self->v1;
            come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj79=self->v2;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj80=self->v3;
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v3) ? self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_384;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj81;
void* __right_value304 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_385;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj82;
void* __right_value305 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_386;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj83;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result254__;
    if(    self->len==0) {
        litem_384=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value303=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=((void*)0);
        litem_384->next=((void*)0);
        __dec_obj81=litem_384->item;
        litem_384->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_384;
        self->head=litem_384;
    }
    else if(    self->len==1) {
        litem_385=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value304=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=self->head;
        litem_385->next=((void*)0);
        __dec_obj82=litem_385->item;
        litem_385->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_385;
        self->head->next=litem_385;
    }
    else {
        litem_386=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value305=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=self->tail;
        litem_386->next=((void*)0);
        __dec_obj83=litem_386->item;
        litem_386->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_386;
        self->tail=litem_386;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sType$phchar$phsNode$ph* __result255__;
void* __right_value306 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_387;
void* __right_value307 = (void*)0;
struct sType* __dec_obj84;
void* __right_value308 = (void*)0;
char* __dec_obj85;
void* __right_value309 = (void*)0;
struct sNode* __dec_obj86;
struct tuple3$3sType$phchar$phsNode$ph* __result256__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_387=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_387->v1;
        result_387->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_387->v2;
        result_387->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj86=result_387->v3;
        result_387->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_387;
    come_call_finalizer3(result_387,tuple3$3sType$phchar$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
struct sType* __dec_obj87;
char* __dec_obj88;
struct sNode* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj87=self->v1;
            come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj88=self->v2;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj89=self->v3;
            if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v3) ? self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_388;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_389;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        come_call_finalizer3(prev_it_389,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj92;
char* __dec_obj93;
struct sType* __dec_obj94;
struct sNode* __dec_obj95;
struct list$1char$ph* __dec_obj96;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj97;
char* __dec_obj98;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj92=self->sname;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj93=self->name;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj94=self->type;
            come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj95=self->right_value;
            if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->right_value) ? self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(        self->multiple_assign==gComeFunResultObject) {
            __dec_obj96=self->multiple_assign;
            come_call_finalizer3(__dec_obj96,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_assign,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(        self->multiple_declare==gComeFunResultObject) {
            __dec_obj97=self->multiple_declare;
            come_call_finalizer3(__dec_obj97,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        if(        self->attribute==gComeFunResultObject) {
            __dec_obj98=self->attribute;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2void$phvoid$ph$p_operator_load_element(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_391;
unsigned int hash_392;
unsigned int it_393;
void* __result260__;
void* __result261__;
void* __result262__;
void* __result263__;
default_value_391 = (void*)0;
    memset(&default_value_391,0,sizeof(void*));
    hash_392=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_393=hash_392;
    while((_Bool)1) {
        if(        self->item_existance[it_393]) {
            if(            come_call_equals((void*)0, self->keys[it_393], ((char*)key))) {
                __result260__ = gComeFunResultObject = __result_obj__ = self->items[it_393];
                come_call_finalizer3(default_value_391,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
            it_393++;
            if(            it_393>=self->size) {
                it_393=0;
            }
            else if(            it_393==hash_392) {
                __result261__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_391);
                come_call_finalizer3(default_value_391,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result261__;
            }
        }
        else {
            __result262__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_391);
            come_call_finalizer3(default_value_391,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result262__;
        }
    }
    __result263__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_391);
    come_call_finalizer3(default_value_391,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_remove(struct map$2void$phvoid$ph* self, void* key){
void* __result_obj__=(void*)0;
unsigned int hash_394;
unsigned int it_395;
struct map$2void$phvoid$ph* __result268__;
    hash_394=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_395=hash_394;
    while((_Bool)1) {
        if(        self->item_existance[it_395]) {
            if(            come_call_equals((void*)0, self->keys[it_395], key)) {
                list$1void$p$p_remove(self->key_list,self->keys[it_395]);
                self->item_existance[it_395]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_395],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->keys[it_395]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_395],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                }
                self->items[it_395]=((void*)0);
                self->len--;
                break;
            }
            it_395++;
            if(            it_395>=self->size) {
                it_395=0;
            }
            else if(            it_395==hash_394) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1void$p* list$1void$p$p_remove(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
int it2_396;
struct list_item$1void$p* it_397;
struct list$1void$p* __result267__;
    it2_396=0;
    it_397=self->head;
    while(it_397!=((void*)0)) {
        if(        come_call_equals((void*)0, it_397->item, item)) {
            list$1void$p$p_delete(self,it2_396,it2_396+1);
            break;
        }
        it2_396++;
        it_397=it_397->next;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1void$p* list$1void$p$p_delete(struct list$1void$p* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_398;
struct list$1void$p* __result264__;
struct list_item$1void$p* it_401;
int i_402;
struct list_item$1void$p* prev_it_403;
struct list_item$1void$p* it_404;
int i_405;
struct list_item$1void$p* prev_it_406;
struct list_item$1void$p* it_407;
struct list_item$1void$p* head_prev_it_408;
struct list_item$1void$p* tail_it_409;
int i_410;
struct list_item$1void$p* prev_it_411;
struct list$1void$p* __result266__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_398=tail;
        tail=head;
        head=tmp_398;
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
        list$1void$p$p_reset(self);
    }
    else if(    head==0) {
        it_401=self->head;
        i_402=0;
        while(it_401!=((void*)0)) {
            if(            i_402<tail) {
                prev_it_403=it_401;
                it_401=it_401->next;
                i_402++;
                come_call_finalizer3(prev_it_403,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_402==tail) {
                self->head=it_401;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_401=it_401->next;
                i_402++;
            }
        }
    }
    else if(    tail==self->len) {
        it_404=self->head;
        i_405=0;
        while(it_404!=((void*)0)) {
            if(            i_405==head) {
                self->tail=it_404->prev;
                self->tail->next=((void*)0);
            }
            if(            i_405>=head) {
                prev_it_406=it_404;
                it_404=it_404->next;
                i_405++;
                come_call_finalizer3(prev_it_406,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_404=it_404->next;
                i_405++;
            }
        }
    }
    else {
        it_407=self->head;
        head_prev_it_408=((void*)0);
        tail_it_409=((void*)0);
        i_410=0;
        while(it_407!=((void*)0)) {
            if(            i_410==head) {
                head_prev_it_408=it_407->prev;
            }
            if(            i_410==tail) {
                tail_it_409=it_407;
            }
            if(            i_410>=head&&i_410<tail) {
                prev_it_411=it_407;
                it_407=it_407->next;
                i_410++;
                come_call_finalizer3(prev_it_411,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_407=it_407->next;
                i_410++;
            }
        }
        if(        head_prev_it_408!=((void*)0)) {
            head_prev_it_408->next=tail_it_409;
        }
        if(        tail_it_409!=((void*)0)) {
            tail_it_409->prev=head_prev_it_408;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1void$p* list$1void$p$p_reset(struct list$1void$p* self){
void* __result_obj__=(void*)0;
struct list_item$1void$p* it_399;
struct list_item$1void$p* prev_it_400;
struct list$1void$p* __result265__;
    it_399=self->head;
    while(it_399!=((void*)0)) {
        prev_it_400=it_399;
        it_399=it_399->next;
        come_call_finalizer3(prev_it_400,list_item$1void$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void list_item$1void$p$p_finalize(struct list_item$1void$p* self){
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
char* __dec_obj99;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_416;
struct tuple3$3sType$phchar$phsNode$ph* __result270__;
struct tuple3$3sType$phchar$phsNode$ph* __result271__;
struct tuple3$3sType$phchar$phsNode$ph* result_417;
struct tuple3$3sType$phchar$phsNode$ph* __result272__;
result_416 = (void*)0;
result_417 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_416,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_416;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->it=self->head;
    if(    self->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_417,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_417;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph$p_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_419;
struct tuple3$3sType$phchar$phsNode$ph* __result273__;
struct tuple3$3sType$phchar$phsNode$ph* __result274__;
struct tuple3$3sType$phchar$phsNode$ph* result_420;
struct tuple3$3sType$phchar$phsNode$ph* __result275__;
result_419 = (void*)0;
result_420 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_419,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_419;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_420,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_420;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj100;
struct sType* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj100=self->c_value;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj101=self->type;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj102=self->c_value_without_right_value_objects;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj103=self->c_value_without_cast_object_value;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_434;
char* __result278__;
char* __result279__;
char* result_435;
char* __result280__;
result_434 = (void*)0;
result_435 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_434,0,sizeof(char*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_434;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->it=self->head;
    if(    self->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_435,0,sizeof(char*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_435;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
void* __result_obj__=(void*)0;
char* result_437;
char* __result281__;
char* __result282__;
char* result_438;
char* __result283__;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_437,0,sizeof(char*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_437;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_438,0,sizeof(char*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_438;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1void$ph* it_441;
int i_442;
void* __result284__;
void* default_value_443;
void* __result285__;
default_value_443 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_441=self->head;
    i_442=0;
    while(it_441!=((void*)0)) {
        if(        position==i_442) {
            __result284__ = gComeFunResultObject = __result_obj__ = it_441->item;
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
        it_441=it_441->next;
        i_442++;
    }
    memset(&default_value_443,0,sizeof(void*));
    __result285__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_443);
    come_call_finalizer3(default_value_443,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj104;
char* __dec_obj105;
struct sType* __dec_obj106;
char* __dec_obj107;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj105=self->mCValueName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj106=self->mType;
            come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj107=self->mFunName;
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
char* __dec_obj111;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj111=self->v2;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_464;
struct sNode* __result289__;
struct sNode* __result290__;
struct sNode* result_465;
struct sNode* __result291__;
result_464 = (void*)0;
result_465 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_464,0,sizeof(struct sNode*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_464;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->head;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_465,0,sizeof(struct sNode*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_465;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct sNode* result_467;
struct sNode* __result292__;
struct sNode* __result293__;
struct sNode* result_468;
struct sNode* __result294__;
result_467 = (void*)0;
result_468 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_467,0,sizeof(struct sNode*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_467;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_468,0,sizeof(struct sNode*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_468;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
struct list_item$1CVALUE$ph* litem_474;
struct CVALUE* __dec_obj117;
void* __right_value378 = (void*)0;
struct list_item$1CVALUE$ph* litem_475;
struct CVALUE* __dec_obj118;
void* __right_value379 = (void*)0;
struct list_item$1CVALUE$ph* litem_476;
struct CVALUE* __dec_obj119;
struct list$1CVALUE$ph* __result295__;
    if(    self->len==0) {
        litem_474=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value377=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_474->prev=((void*)0);
        litem_474->next=((void*)0);
        __dec_obj117=litem_474->item;
        litem_474->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_474;
        self->head=litem_474;
    }
    else if(    self->len==1) {
        litem_475=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value378=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_475->prev=self->head;
        litem_475->next=((void*)0);
        __dec_obj118=litem_475->item;
        litem_475->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_475;
        self->head->next=litem_475;
    }
    else {
        litem_476=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value379=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_476->prev=self->tail;
        litem_476->next=((void*)0);
        __dec_obj119=litem_476->item;
        litem_476->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj119,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_476;
        self->tail=litem_476;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
struct sNewChannel* __result314__;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value512,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result314__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result315__;
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("sNewChannel")));
    (__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value514 = (void*)0;
struct sNode* node_545;
_Bool Value_546;
_Bool __result316__;
_Bool __result317__;
    node_545=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_546=node_compile(node_545,info);
    if(    !Value_546) {
        __result316__ = (_Bool)0;
        ((node_545) ? node_545 = come_decrement_ref_count2(node_545, ((struct sNode*)node_545)->finalize, ((struct sNode*)node_545)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result316__;
    }
    else {
    }
    __result317__ = (_Bool)1;
    ((node_545) ? node_545 = come_decrement_ref_count2(node_545, ((struct sNode*)node_545)->finalize, ((struct sNode*)node_545)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result317__;
}

static void sNewChannel_finalize(struct sNewChannel* self){
char* __dec_obj151;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj151=self->sname;
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value515 = (void*)0;
struct sNode* __dec_obj152;
struct sNode* __dec_obj153;
struct sWriteChannelNode* __result318__;
    ((struct sNodeBase*)(__right_value515=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value515,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj152=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj153=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value516 = (void*)0;
char* __result319__;
    __result319__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value516=__builtin_string("sWriteChannelNode")));
    (__right_value516 = come_decrement_ref_count2(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result319__;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_547;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_548;
_Bool Value_549;
_Bool __result320__;
void* __right_value518 = (void*)0;
struct CVALUE* right_value_550;
struct sType* right_type_551;
void* __right_value519 = (void*)0;
struct sType* left_type_552;
struct sType* channel_type_553;
void* __right_value520 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_21_555=0;
char* Err_556=0;
_Bool _if_conditional22;
_Bool __result321__;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct buffer* buf_557;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct CVALUE* come_value2_558;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
char* __dec_obj157;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj158;
_Bool __result322__;
    Value_547=node_compile(self->exp,info);
    if(    !Value_547) {
        return (_Bool)0;
    }
    else {
    }
    come_value_548=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    Value_549=node_compile(self->right_value,info);
    if(    !Value_549) {
        __result320__ = (_Bool)0;
        come_call_finalizer3(come_value_548,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result320__;
    }
    else {
    }
    right_value_550=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_551=right_value_550->type;
    dec_stack_ptr(1,info);
    left_type_552=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_548->type));
    channel_type_553=(struct sType*)come_increment_ref_count(left_type_552->mChannelType);
    static int var_num_554=0;
    var_num_554++;
    if(    right_value_550->type->mHeap) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value520=err_msg(info,"channel can't get heap type")));
        come_exception_var_21_555=multiple_assign_var23->v1;
        Err_556=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional22=(Err_556)),        come_call_finalizer3(__right_value520,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional22) {
            __result321__ = (_Bool)1;
            (Err_556 = come_decrement_ref_count2(Err_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_548,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(channel_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result321__;
        }
        else {
        }
        (Err_556 = come_decrement_ref_count2(Err_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buf_557=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 710, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_557,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_554,((char*)(__right_value523=make_type_name_string(channel_type_553,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_557,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value524=make_type_name_string(channel_type_553,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_554,var_num_554);
    (__right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_557,"*__channel_p%d = %s;\n",var_num_554,right_value_550->c_value);
    add_come_code(info,((char*)(__right_value525=buffer_to_string(buf_557))));
    (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_558=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 718, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj157=come_value2_558->c_value;
    come_value2_558->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_548->c_value,var_num_554,((char*)(__right_value528=make_type_name_string(channel_type_553,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj158=come_value2_558->type;
    come_value2_558->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 722, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_558->type->mPointerNum=1;
    come_value2_558->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_558));
    add_come_last_code(info,"%s",come_value2_558->c_value);
    __result322__ = (_Bool)1;
    come_call_finalizer3(come_value_548,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_552,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_553,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result322__;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
char* __dec_obj154;
struct sNode* __dec_obj155;
struct sNode* __dec_obj156;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj154=self->sname;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj155=self->exp;
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(        self->right_value==gComeFunResultObject) {
            __dec_obj156=self->right_value;
            if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->right_value) ? self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj159;
struct sReadChannelNode* __result323__;
    ((struct sNodeBase*)(__right_value532=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value532,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
void* __right_value533 = (void*)0;
char* __result324__;
    __result324__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value533=__builtin_string("sReadChannelNode")));
    (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result324__;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_559;
_Bool Value_560;
_Bool __result325__;
void* __right_value534 = (void*)0;
struct CVALUE* come_value_561;
void* __right_value535 = (void*)0;
struct sType* var_type_562;
void* __right_value536 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_22_563=0;
char* Err_564=0;
_Bool _if_conditional23;
_Bool __result326__;
struct sType* channel_type_565;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct CVALUE* come_value2_567;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* __dec_obj162;
void* __right_value543 = (void*)0;
struct sType* __dec_obj163;
_Bool __result327__;
    exp_559=(struct sNode*)come_increment_ref_count(self->exp);
    Value_560=node_compile(exp_559,info);
    if(    !Value_560) {
        __result325__ = (_Bool)0;
        ((exp_559) ? exp_559 = come_decrement_ref_count2(exp_559, ((struct sNode*)exp_559)->finalize, ((struct sNode*)exp_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result325__;
    }
    else {
    }
    come_value_561=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    var_type_562=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_561->type));
    if(    !var_type_562->mChannel) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value536=err_msg(info,"require right type is channel")));
        come_exception_var_22_563=multiple_assign_var24->v1;
        Err_564=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional23=(Err_564)),        come_call_finalizer3(__right_value536,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional23) {
            __result326__ = (_Bool)1;
            (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_559) ? exp_559 = come_decrement_ref_count2(exp_559, ((struct sNode*)exp_559)->finalize, ((struct sNode*)exp_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(var_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result326__;
        }
        else {
        }
        (Err_564 = come_decrement_ref_count2(Err_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    channel_type_565=(struct sType*)come_increment_ref_count(var_type_562->mChannelType);
    static int var_num_566=0;
    var_num_566++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_566,((char*)(__right_value537=make_type_name_string(channel_type_565,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_567=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 775, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj162=come_value2_567->c_value;
    come_value2_567->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_561->c_value,var_num_566,((char*)(__right_value540=make_type_name_string(channel_type_565,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value541=make_type_name_string(channel_type_565,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_566));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj163=come_value2_567->type;
    come_value2_567->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_565));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_567->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_567));
    add_come_last_code(info,"%s",come_value2_567->c_value);
    __result327__ = (_Bool)1;
    ((exp_559) ? exp_559 = come_decrement_ref_count2(exp_559, ((struct sNode*)exp_559)->finalize, ((struct sNode*)exp_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(come_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_567,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result327__;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
char* __dec_obj160;
struct sNode* __dec_obj161;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj160=self->sname;
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj161=self->exp;
            if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value555 = (void*)0;
struct sNode* __result330__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 792, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value546=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 792, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result330__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value555=_inf_value1));
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value546,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value555) ? __right_value555 = come_decrement_ref_count2(__right_value555, ((struct sNode*)__right_value555)->finalize, ((struct sNode*)__right_value555)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result328__;
void* __right_value547 = (void*)0;
struct sStoreNode* result_568;
void* __right_value548 = (void*)0;
char* __dec_obj164;
void* __right_value549 = (void*)0;
char* __dec_obj165;
void* __right_value550 = (void*)0;
struct sType* __dec_obj166;
void* __right_value551 = (void*)0;
struct sNode* __dec_obj167;
void* __right_value552 = (void*)0;
struct list$1char$ph* __dec_obj168;
void* __right_value553 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj169;
void* __right_value554 = (void*)0;
char* __dec_obj170;
struct sStoreNode* __result329__;
    if(    self==(void*)0) {
        __result328__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    result_568=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_568->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_568->sname;
        result_568->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj165=result_568->name;
        result_568->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj166=result_568->type;
        result_568->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj167=result_568->right_value;
        result_568->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj168=result_568->multiple_assign;
        result_568->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->multiple_assign));
        come_call_finalizer3(__dec_obj168,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj169=result_568->multiple_declare;
        result_568->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj169,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj170=result_568->attribute;
        result_568->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result329__ = gComeFunResultObject = __result_obj__ = result_568;
    come_call_finalizer3(result_568,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value561 = (void*)0;
struct CVALUE* result_569;
struct sType* __dec_obj175;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
char* __dec_obj176;
char* __dec_obj177;
struct CVALUE* __result333__;
    result_569=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value));
    if(    come_value->type->mAnyOriginalType) {
        __dec_obj175=result_569->type;
        result_569->type=(struct sType*)come_increment_ref_count(come_value->type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj176=result_569->c_value;
        result_569->c_value=(char*)come_increment_ref_count(xsprintf("((%s)%s)",((char*)(__right_value562=make_type_name_string(result_569->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value->c_value));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
        __dec_obj177=result_569->c_value_without_cast_object_value;
        result_569->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_value->c_value);
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        come_value->type->mNoHeap) {
            result_569->type->mHeap=(_Bool)0;
        }
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_569;
    come_call_finalizer3(come_value,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_569,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result331__;
void* __right_value556 = (void*)0;
struct CVALUE* result_570;
void* __right_value557 = (void*)0;
char* __dec_obj171;
void* __right_value558 = (void*)0;
struct sType* __dec_obj172;
void* __right_value559 = (void*)0;
char* __dec_obj173;
void* __right_value560 = (void*)0;
char* __dec_obj174;
struct CVALUE* __result332__;
    if(    self==(void*)0) {
        __result331__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    result_570=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj171=result_570->c_value;
        result_570->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj172=result_570->type;
        result_570->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_570->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj173=result_570->c_value_without_right_value_objects;
        result_570->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj174=result_570->c_value_without_cast_object_value;
        result_570->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = result_570;
    come_call_finalizer3(result_570,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
char* __dec_obj178;
struct sLoadNode* __result334__;
    ((struct sNodeBase*)(__right_value564=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value564,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj178=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result334__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value566 = (void*)0;
char* __result335__;
    __result335__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value566=__builtin_string("sLoadNode")));
    (__right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result335__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_571;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
_Bool _if_conditional24;
struct sVar* parent_var_572;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct CVALUE* come_value_573;
struct sType* type_574;
void* __right_value571 = (void*)0;
char* __dec_obj181;
void* __right_value572 = (void*)0;
char* __dec_obj182;
void* __right_value573 = (void*)0;
struct sType* __dec_obj183;
void* __right_value574 = (void*)0;
struct CVALUE* __dec_obj184;
_Bool __result336__;
struct sVar* var__575;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sFun* fun_576;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_577;
void* __right_value579 = (void*)0;
char* __dec_obj185;
struct sType* __dec_obj186;
_Bool __result337__;
void* __right_value580 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_23_578=0;
char* Err_579=0;
_Bool _if_conditional25;
_Bool __result338__;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct CVALUE* come_value_580;
void* __right_value583 = (void*)0;
char* __dec_obj187;
void* __right_value584 = (void*)0;
struct sType* __dec_obj188;
void* __right_value585 = (void*)0;
struct CVALUE* __dec_obj189;
void* __right_value586 = (void*)0;
struct sType* __dec_obj190;
_Bool __result340__;
    current_stack_frame_struct_571=info->current_stack_frame_struct;
    if(    (_if_conditional24=(current_stack_frame_struct_571&&((struct sVar*)((void*)(__right_value568=map$2void$phvoid$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value567=__builtin_string(self->name)))))))==((void*)0))),    (__right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value568,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional24) {
        parent_var_572=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_572!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_572->mFunName,info->come_fun->mName)) {
                come_value_573=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 839, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                type_574=parent_var_572->mType;
                if(                parent_var_572->mType->mOriginIsArray) {
                    __dec_obj181=come_value_573->c_value;
                    come_value_573->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_572->mCValueName));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj182=come_value_573->c_value;
                    come_value_573->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_572->mCValueName));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj183=come_value_573->type;
                come_value_573->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_574));
                come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_573->var=((void*)0);
                __dec_obj184=come_value_573;
                come_value_573=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_573),info));
                come_call_finalizer3(__dec_obj184,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                add_come_last_code(info,"%s",come_value_573->c_value);
                list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_573));
                __result336__ = (_Bool)1;
                come_call_finalizer3(come_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result336__;
                come_call_finalizer3(come_value_573,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__575=get_variable_from_table(info->lv_table,self->name);
    if(    var__575==((void*)0)) {
        var__575=get_variable_from_table(info->gv_table,self->name);
        if(        var__575==((void*)0)) {
            fun_576=((struct sFun*)((void*)(__right_value576=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value575=__builtin_string(self->name)))))));
            (__right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value576,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            if(            fun_576) {
                come_value_577=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 873, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj185=come_value_577->c_value;
                come_value_577->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_576->mName));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj186=come_value_577->type;
                come_value_577->type=(struct sType*)come_increment_ref_count(fun_576->mLambdaType);
                come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_577->var=((void*)0);
                list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_577));
                __result337__ = (_Bool)1;
                come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result337__;
                come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value580=err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name)));
                come_exception_var_23_578=multiple_assign_var25->v1;
                Err_579=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                if(                (_if_conditional25=(Err_579)),                come_call_finalizer3(__right_value580,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    __result338__ = (_Bool)1;
                    (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result338__;
                }
                else {
                }
                (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_value_580=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 891, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj187=come_value_580->c_value;
    come_value_580->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__575->mCValueName));
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj188=come_value_580->type;
    come_value_580->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__575->mType));
    come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_580->var=var__575;
    __dec_obj189=come_value_580;
    come_value_580=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_580),info));
    come_call_finalizer3(__dec_obj189,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_580));
    if(    list$1sNode$ph$p_length(come_value_580->type->mArrayNum)==1) {
        __dec_obj190=come_value_580->type->mOriginalLoadVarType;
        come_value_580->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_580->type));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph$p_reset(come_value_580->type->mArrayNum);
        come_value_580->type->mPointerNum++;
        come_value_580->type->mOriginalTypeNamePointerNum=come_value_580->type->mPointerNum;
    }
    __result340__ = (_Bool)1;
    come_call_finalizer3(come_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result340__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj179;
char* __dec_obj180;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj180=self->name;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNode$ph* it_581;
struct list_item$1sNode$ph* prev_it_582;
struct list$1sNode$ph* __result339__;
    it_581=self->head;
    while(it_581!=((void*)0)) {
        prev_it_582=it_581;
        it_581=it_581->next;
        come_call_finalizer3(prev_it_582,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value587 = (void*)0;
_Bool _if_conditional26;
struct sLoadNode* load_node_583;
    if(    (_if_conditional26=(string_operator_equals(((char*)(__right_value587=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional26) {
        load_node_583=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_583->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value594 = (void*)0;
struct sNode* __result343__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 926, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value590=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 926, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value594=_inf_value2));
    come_call_finalizer3(__right_value590,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value594) ? __right_value594 = come_decrement_ref_count2(__right_value594, ((struct sNode*)__right_value594)->finalize, ((struct sNode*)__right_value594)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result341__;
void* __right_value591 = (void*)0;
struct sLoadNode* result_584;
void* __right_value592 = (void*)0;
char* __dec_obj191;
void* __right_value593 = (void*)0;
char* __dec_obj192;
struct sLoadNode* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_584=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj191=result_584->sname;
        result_584->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj192=result_584->name;
        result_584->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_584;
    come_call_finalizer3(result_584,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
char* __dec_obj193;
struct sFunLoadNode* __result344__;
    ((struct sNodeBase*)(__right_value595=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value595,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result344__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value597 = (void*)0;
char* __result345__;
    __result345__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value597=__builtin_string("sFunLoadNode")));
    (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result345__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sFun* fun_585;
void* __right_value600 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_24_586=0;
char* Err_587=0;
_Bool _if_conditional27;
_Bool __result346__;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_588;
void* __right_value603 = (void*)0;
char* __dec_obj196;
struct sType* __dec_obj197;
    fun_585=((struct sFun*)((void*)(__right_value599=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value598=__builtin_string(self->name)))))));
    (__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value599,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_585==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value600=err_msg(info,"fun not found(%s) at loading variable\n",self->name)));
        come_exception_var_24_586=multiple_assign_var26->v1;
        Err_587=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional27=(Err_587)),        come_call_finalizer3(__right_value600,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result346__ = (_Bool)1;
            (Err_587 = come_decrement_ref_count2(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result346__;
        }
        else {
        }
        (Err_587 = come_decrement_ref_count2(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        come_value_588=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 953, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj196=come_value_588->c_value;
        come_value_588->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_585->mName));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj197=come_value_588->type;
        come_value_588->type=(struct sType*)come_increment_ref_count(fun_585->mLambdaType);
        come_call_finalizer3(__dec_obj197,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_588->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_588));
        come_call_finalizer3(come_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj194;
char* __dec_obj195;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj194=self->sname;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        if(        self->name==gComeFunResultObject) {
            __dec_obj195=self->name;
            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value604 = (void*)0;
void* __right_value615 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj208;
struct sArrayInitializer* __result353__;
    ((struct sNodeBase*)(__right_value604=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value604,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->initializer;
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, initializer));
    come_call_finalizer3(__dec_obj208,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value616 = (void*)0;
char* __result354__;
    __result354__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value616=__builtin_string("sArrayInitializer")));
    (__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result354__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_599;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct buffer* buf_600;
int i_601;
struct sType* element_type_602;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_603;
struct tuple2$2sNode$phsNode$ph* it_606;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var27 = (void*)0;
struct sNode* index_609=0;
struct sNode* value_610=0;
struct CVALUE* come_value_611;
_Bool Value_612;
_Bool __result361__;
void* __right_value619 = (void*)0;
struct CVALUE* __dec_obj211;
_Bool Value_613;
_Bool __result362__;
void* __right_value620 = (void*)0;
struct CVALUE* come_value2_614;
void* __right_value621 = (void*)0;
struct sType* __dec_obj212;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value624 = (void*)0;
char* __dec_obj213;
void* __right_value625 = (void*)0;
struct sType* __dec_obj214;
_Bool __result363__;
    initializer_599=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_600=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 984, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_600,"{");
    i_601=0;
    element_type_602=((void*)0);
    for(    o2_saved_603=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_599)),it_606=list$1tuple2$2sNode$phsNode$ph$ph$p_begin((o2_saved_603));    !list$1tuple2$2sNode$phsNode$ph$ph$p_end((o2_saved_603));    it_606=list$1tuple2$2sNode$phsNode$ph$ph$p_next((o2_saved_603))    ){
        multiple_assign_var27=it_606;
        index_609=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v1);
        value_610=(struct sNode*)come_increment_ref_count(multiple_assign_var27->v2);
        come_value_611=((void*)0);
        if(        index_609) {
            Value_612=node_compile(index_609,info);
            if(            !Value_612) {
                __result361__ = (_Bool)0;
                ((index_609) ? index_609 = come_decrement_ref_count2(index_609, ((struct sNode*)index_609)->finalize, ((struct sNode*)index_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((value_610) ? value_610 = come_decrement_ref_count2(value_610, ((struct sNode*)value_610)->finalize, ((struct sNode*)value_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_603,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_599,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result361__;
            }
            else {
            }
            __dec_obj211=come_value_611;
            come_value_611=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj211,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            dec_stack_ptr(1,info);
        }
        Value_613=node_compile(value_610,info);
        if(        !Value_613) {
            __result362__ = (_Bool)0;
            ((index_609) ? index_609 = come_decrement_ref_count2(index_609, ((struct sNode*)index_609)->finalize, ((struct sNode*)index_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((value_610) ? value_610 = come_decrement_ref_count2(value_610, ((struct sNode*)value_610)->finalize, ((struct sNode*)value_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_603,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_599,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result362__;
        }
        else {
        }
        come_value2_614=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj212=element_type_602;
        element_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_614->type));
        come_call_finalizer3(__dec_obj212,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        come_value_611) {
            buffer_append_format(buf_600,"[%s] = %s",come_value_611->c_value,come_value2_614->c_value);
        }
        else {
            buffer_append_str(buf_600,come_value2_614->c_value);
        }
        i_601++;
        if(        i_601!=list$1tuple2$2sNode$phsNode$ph$ph$p_length(initializer_599)) {
            buffer_append_str(buf_600,",");
        }
        ((index_609) ? index_609 = come_decrement_ref_count2(index_609, ((struct sNode*)index_609)->finalize, ((struct sNode*)index_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((value_610) ? value_610 = come_decrement_ref_count2(value_610, ((struct sNode*)value_610)->finalize, ((struct sNode*)value_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_603,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_600,"}");
    come_value_615=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1023, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj213=come_value_615->c_value;
    come_value_615->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_600));
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=come_value_615->type;
    come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_602));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_615->type->mPointerNum++;
    come_value_615->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_615));
    __result363__ = (_Bool)1;
    come_call_finalizer3(initializer_599,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result363__;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result347__;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_591;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_592;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result352__;
    if(    self==((void*)0)) {
        __result347__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    result_591=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_592=self->head;
    while(it_592!=((void*)0)) {
        if(        1) {
            list$1tuple2$2sNode$phsNode$ph$ph$p_add(result_591,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2sNode$phsNode$ph_clone, it_592->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph$p_add(result_591,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2sNode$phsNode$ph_clone, it_592->item)));
        }
        it_592=it_592->next;
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_591;
    come_call_finalizer3(result_591,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result348__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_589;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_590;
    it_589=self->head;
    while(it_589!=((void*)0)) {
        prev_it_590=it_589;
        it_589=it_589->next;
        come_call_finalizer3(prev_it_590,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* __dec_obj198;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj198=self->item;
            come_call_finalizer3(__dec_obj198,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self){
struct sNode* __dec_obj199;
struct sNode* __dec_obj200;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj199=self->v1;
            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v1) ? self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj200=self->v2;
            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __result_obj__=(void*)0;
void* __right_value607 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_593;
struct tuple2$2sNode$phsNode$ph* __dec_obj201;
void* __right_value608 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_594;
struct tuple2$2sNode$phsNode$ph* __dec_obj202;
void* __right_value609 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_595;
struct tuple2$2sNode$phsNode$ph* __dec_obj203;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result349__;
    if(    self->len==0) {
        litem_593=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value607=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_593->prev=((void*)0);
        litem_593->next=((void*)0);
        __dec_obj201=litem_593->item;
        litem_593->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj201,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_593;
        self->head=litem_593;
    }
    else if(    self->len==1) {
        litem_594=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value608=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_594->prev=self->head;
        litem_594->next=((void*)0);
        __dec_obj202=litem_594->item;
        litem_594->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj202,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_594;
        self->head->next=litem_594;
    }
    else {
        litem_595=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value609=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_595->prev=self->tail;
        litem_595->next=((void*)0);
        __dec_obj203=litem_595->item;
        litem_595->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj203,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_595;
        self->tail=litem_595;
    }
    self->len++;
    __result349__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNode$phsNode$ph* __result350__;
void* __right_value610 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_596;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj205;
struct tuple2$2sNode$phsNode$ph* __result351__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_596=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj204=result_596->v1;
        result_596->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj205=result_596->v2;
        result_596->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_596;
    come_call_finalizer3(result_596,tuple2$2sNode$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self){
struct sNode* __dec_obj206;
struct sNode* __dec_obj207;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj206=self->v1;
            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v1) ? self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj207=self->v2;
            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_597;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_598;
    it_597=self->head;
    while(it_597!=((void*)0)) {
        prev_it_598=it_597;
        it_597=it_597->next;
        come_call_finalizer3(prev_it_598,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj209;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj210;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj209=self->sname;
            __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj210=self->initializer;
            come_call_finalizer3(__dec_obj210,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNode$phsNode$ph* result_604;
struct tuple2$2sNode$phsNode$ph* __result355__;
struct tuple2$2sNode$phsNode$ph* __result356__;
struct tuple2$2sNode$phsNode$ph* result_605;
struct tuple2$2sNode$phsNode$ph* __result357__;
result_604 = (void*)0;
result_605 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_604,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result355__ = gComeFunResultObject = __result_obj__ = result_604;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    self->it=self->head;
    if(    self->it) {
        __result356__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    memset(&result_605,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result357__ = gComeFunResultObject = __result_obj__ = result_605;
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph$p_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNode$phsNode$ph* result_607;
struct tuple2$2sNode$phsNode$ph* __result358__;
struct tuple2$2sNode$phsNode$ph* __result359__;
struct tuple2$2sNode$phsNode$ph* result_608;
struct tuple2$2sNode$phsNode$ph* __result360__;
result_607 = (void*)0;
result_608 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_607,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result358__ = gComeFunResultObject = __result_obj__ = result_607;
        gComeFunResultObject = (void*)0;
        return __result358__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result359__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    memset(&result_608,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result360__ = gComeFunResultObject = __result_obj__ = result_608;
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static int list$1tuple2$2sNode$phsNode$ph$ph$p_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_616;
void* __right_value628 = (void*)0;
struct sNode* index_617;
_Bool no_comma_618;
void* __right_value629 = (void*)0;
struct sNode* exp_619;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
_Bool no_comma_621;
void* __right_value632 = (void*)0;
struct sNode* exp_622;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* index_625;
_Bool no_comma_626;
void* __right_value638 = (void*)0;
struct sNode* exp_627;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
_Bool no_comma_628;
void* __right_value641 = (void*)0;
struct sNode* exp_629;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value649 = (void*)0;
struct sNode* __result370__;
    expected_next_character(123,info);
    initializer_616=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1041, "struct list$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_617=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_618=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_619=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_618;
        list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1057, "struct tuple2$2sNode$phsNode$ph", tuple2$2sNode$phsNode$ph_finalize, tuple2$2sNode$phsNode$ph_clone, tuple2$2sNode$phsNode$ph_get_hash_key, tuple2$2sNode$phsNode$ph_equals)),(struct sNode*)come_increment_ref_count(index_617),(struct sNode*)come_increment_ref_count(exp_619))));
        ((index_617) ? index_617 = come_decrement_ref_count2(index_617, ((struct sNode*)index_617)->finalize, ((struct sNode*)index_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((exp_619) ? exp_619 = come_decrement_ref_count2(exp_619, ((struct sNode*)exp_619)->finalize, ((struct sNode*)exp_619)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        no_comma_621=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_622=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_621;
        list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1065, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_622))));
        ((exp_622) ? exp_622 = come_decrement_ref_count2(exp_622, ((struct sNode*)exp_622)->finalize, ((struct sNode*)exp_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_625=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_626=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_627=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_626;
            list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1092, "struct tuple2$2sNode$phsNode$ph", tuple2$2sNode$phsNode$ph_finalize, tuple2$2sNode$phsNode$ph_clone, tuple2$2sNode$phsNode$ph_get_hash_key, tuple2$2sNode$phsNode$ph_equals)),(struct sNode*)come_increment_ref_count(index_625),(struct sNode*)come_increment_ref_count(exp_627))));
            ((index_625) ? index_625 = come_decrement_ref_count2(index_625, ((struct sNode*)index_625)->finalize, ((struct sNode*)index_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp_627) ? exp_627 = come_decrement_ref_count2(exp_627, ((struct sNode*)exp_627)->finalize, ((struct sNode*)exp_627)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            no_comma_628=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_628;
            list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1100, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_629))));
            ((exp_629) ? exp_629 = come_decrement_ref_count2(exp_629, ((struct sNode*)exp_629)->finalize, ((struct sNode*)exp_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1106, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value645=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1106, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_616),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value649=_inf_value3));
    come_call_finalizer3(initializer_616,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value645,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value649) ? __right_value649 = come_decrement_ref_count2(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self){
unsigned int result_620;
    result_620=0;
    result_620+=int_get_hash_key(((int)self->v1));
    result_620+=int_get_hash_key(((int)self->v2));
    return result_620;
}

static _Bool tuple2$2sNode$phsNode$ph_equals(struct tuple2$2sNode$phsNode$ph* left, struct tuple2$2sNode$phsNode$ph* right){
    if(    !sNode_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj215;
struct sNode* __dec_obj216;
struct tuple2$2sNode$phsNode$ph* __result364__;
    __dec_obj215=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj216=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
    __result364__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    ((v1) ? v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
struct sNode* __dec_obj217;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj217=self->v2;
            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2void$psNode$ph* __result365__;
void* __right_value633 = (void*)0;
struct tuple2$2void$psNode$ph* result_623;
void* __right_value634 = (void*)0;
struct sNode* __dec_obj218;
struct tuple2$2void$psNode$ph* __result366__;
    if(    self==(void*)0) {
        __result365__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    result_623=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_623->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj218=result_623->v2;
        result_623->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result366__ = gComeFunResultObject = __result_obj__ = result_623;
    come_call_finalizer3(result_623,tuple2$2void$psNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_624;
    result_624=0;
    result_624+=int_get_hash_key(((int)self->v1));
    result_624+=int_get_hash_key(((int)self->v2));
    return result_624;
}

static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right){
    if(    !voidp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj219;
struct tuple2$2void$psNode$ph* __result367__;
    self->v1=v1;
    __dec_obj219=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
    __result367__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
struct sNode* __dec_obj220;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj220=self->v2;
            if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result368__;
void* __right_value646 = (void*)0;
struct sArrayInitializer* result_630;
void* __right_value647 = (void*)0;
char* __dec_obj221;
void* __right_value648 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj222;
struct sArrayInitializer* __result369__;
    if(    self==(void*)0) {
        __result368__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    result_630=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_630->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_630->sname;
        result_630->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_630->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj222=result_630->initializer;
        result_630->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, self->initializer));
        come_call_finalizer3(__dec_obj222,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_630;
    come_call_finalizer3(result_630,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value650 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj233;
struct sStructInitializer* __result377__;
    ((struct sNodeBase*)(__right_value650=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value650,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj233=self->initializer;
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, initializer));
    come_call_finalizer3(__dec_obj233,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result377__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value662 = (void*)0;
char* __result378__;
    __result378__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value662=__builtin_string("sStructInitializer")));
    (__right_value662 = come_decrement_ref_count2(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result378__;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_641;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct buffer* buf_642;
int i_643;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_644;
struct tuple2$2char$phsNode$ph* it_647;
struct tuple2$2char$phsNode$ph* multiple_assign_var28 = (void*)0;
char* name_650=0;
struct sNode* value_651=0;
_Bool Value_652;
_Bool __result385__;
void* __right_value665 = (void*)0;
struct CVALUE* come_value2_653;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct CVALUE* come_value_654;
void* __right_value668 = (void*)0;
char* __dec_obj236;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sType* __dec_obj237;
_Bool __result386__;
    initializer_641=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1127, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_642,"{");
    i_643=0;
    for(    o2_saved_644=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_641)),it_647=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_644));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_644));    it_647=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_644))    ){
        multiple_assign_var28=it_647;
        name_650=(char*)come_increment_ref_count(multiple_assign_var28->v1);
        value_651=(struct sNode*)come_increment_ref_count(multiple_assign_var28->v2);
        Value_652=node_compile(value_651,info);
        if(        !Value_652) {
            __result385__ = (_Bool)0;
            (name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_651) ? value_651 = come_decrement_ref_count2(value_651, ((struct sNode*)value_651)->finalize, ((struct sNode*)value_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(o2_saved_644,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result385__;
        }
        else {
        }
        come_value2_653=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        name_650) {
            buffer_append_format(buf_642,".%s = %s",name_650,come_value2_653->c_value);
        }
        else {
            buffer_append_format(buf_642,"%s",come_value2_653->c_value);
        }
        i_643++;
        if(        i_643!=list$1tuple2$2char$phsNode$ph$ph$p_length(initializer_641)) {
            buffer_append_str(buf_642,",");
        }
        (name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((value_651) ? value_651 = come_decrement_ref_count2(value_651, ((struct sNode*)value_651)->finalize, ((struct sNode*)value_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value2_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_644,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_642,"}");
    come_value_654=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1154, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj236=come_value_654->c_value;
    come_value_654->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_642));
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=come_value_654->type;
    come_value_654->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1157, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj237,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_654->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_654));
    __result386__ = (_Bool)1;
    come_call_finalizer3(initializer_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result386__;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result371__;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_633;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_634;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result376__;
    if(    self==((void*)0)) {
        __result371__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_633=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_634=self->head;
    while(it_634!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_633,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_634->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_633,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_634->item)));
        }
        it_634=it_634->next;
    }
    __result376__ = gComeFunResultObject = __result_obj__ = result_633;
    come_call_finalizer3(result_633,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result372__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result372__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_631;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_632;
    it_631=self->head;
    while(it_631!=((void*)0)) {
        prev_it_632=it_631;
        it_631=it_631->next;
        come_call_finalizer3(prev_it_632,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* __dec_obj223;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj223=self->item;
            come_call_finalizer3(__dec_obj223,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
char* __dec_obj224;
struct sNode* __dec_obj225;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj224=self->v1;
            __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj225=self->v2;
            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __result_obj__=(void*)0;
void* __right_value653 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_635;
struct tuple2$2char$phsNode$ph* __dec_obj226;
void* __right_value654 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_636;
struct tuple2$2char$phsNode$ph* __dec_obj227;
void* __right_value655 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_637;
struct tuple2$2char$phsNode$ph* __dec_obj228;
struct list$1tuple2$2char$phsNode$ph$ph* __result373__;
    if(    self->len==0) {
        litem_635=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value653=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_635->prev=((void*)0);
        litem_635->next=((void*)0);
        __dec_obj226=litem_635->item;
        litem_635->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj226,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_635;
        self->head=litem_635;
    }
    else if(    self->len==1) {
        litem_636=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value654=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_636->prev=self->head;
        litem_636->next=((void*)0);
        __dec_obj227=litem_636->item;
        litem_636->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj227,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_636;
        self->head->next=litem_636;
    }
    else {
        litem_637=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value655=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_637->prev=self->tail;
        litem_637->next=((void*)0);
        __dec_obj228=litem_637->item;
        litem_637->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj228,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_637;
        self->tail=litem_637;
    }
    self->len++;
    __result373__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsNode$ph* __result374__;
void* __right_value656 = (void*)0;
struct tuple2$2char$phsNode$ph* result_638;
void* __right_value657 = (void*)0;
char* __dec_obj229;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj230;
struct tuple2$2char$phsNode$ph* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_638=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj229=result_638->v1;
        result_638->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj230=result_638->v2;
        result_638->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result375__ = gComeFunResultObject = __result_obj__ = result_638;
    come_call_finalizer3(result_638,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
char* __dec_obj231;
struct sNode* __dec_obj232;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj231=self->v1;
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj232=self->v2;
            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,1,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_639;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_640;
    it_639=self->head;
    while(it_639!=((void*)0)) {
        prev_it_640=it_639;
        it_639=it_639->next;
        come_call_finalizer3(prev_it_640,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
char* __dec_obj234;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj235;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj234=self->sname;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj235=self->initializer;
            come_call_finalizer3(__dec_obj235,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsNode$ph* result_645;
struct tuple2$2char$phsNode$ph* __result379__;
struct tuple2$2char$phsNode$ph* __result380__;
struct tuple2$2char$phsNode$ph* result_646;
struct tuple2$2char$phsNode$ph* __result381__;
result_645 = (void*)0;
result_646 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_645,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result379__ = gComeFunResultObject = __result_obj__ = result_645;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    self->it=self->head;
    if(    self->it) {
        __result380__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    memset(&result_646,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result381__ = gComeFunResultObject = __result_obj__ = result_646;
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsNode$ph* result_648;
struct tuple2$2char$phsNode$ph* __result382__;
struct tuple2$2char$phsNode$ph* __result383__;
struct tuple2$2char$phsNode$ph* result_649;
struct tuple2$2char$phsNode$ph* __result384__;
result_648 = (void*)0;
result_649 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_648,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result382__ = gComeFunResultObject = __result_obj__ = result_648;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result383__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result383__;
    }
    memset(&result_649,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result384__ = gComeFunResultObject = __result_obj__ = result_649;
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_655;
void* __right_value673 = (void*)0;
char* name_656;
_Bool no_comma_657;
void* __right_value674 = (void*)0;
struct sNode* exp_658;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
_Bool no_comma_660;
void* __right_value677 = (void*)0;
struct sNode* exp_661;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
char* name_662;
_Bool no_comma_663;
void* __right_value681 = (void*)0;
struct sNode* exp_664;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
_Bool no_comma_665;
void* __right_value684 = (void*)0;
struct sNode* exp_666;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value692 = (void*)0;
struct sNode* __result390__;
    expected_next_character(123,info);
    initializer_655=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1170, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_656=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_657=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_658=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_657;
        list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1185, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(name_656),(struct sNode*)come_increment_ref_count(exp_658))));
        (name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_658) ? exp_658 = come_decrement_ref_count2(exp_658, ((struct sNode*)exp_658)->finalize, ((struct sNode*)exp_658)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        no_comma_660=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_661=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_660;
        list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1193, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_661))));
        ((exp_661) ? exp_661 = come_decrement_ref_count2(exp_661, ((struct sNode*)exp_661)->finalize, ((struct sNode*)exp_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_662=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_663=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_664=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_663;
            list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1219, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(name_662),(struct sNode*)come_increment_ref_count(exp_664))));
            (name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_664) ? exp_664 = come_decrement_ref_count2(exp_664, ((struct sNode*)exp_664)->finalize, ((struct sNode*)exp_664)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            no_comma_665=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_666=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_665;
            list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1227, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_666))));
            ((exp_666) ? exp_666 = come_decrement_ref_count2(exp_666, ((struct sNode*)exp_666)->finalize, ((struct sNode*)exp_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1233, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value688=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1233, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_655),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value692=_inf_value4));
    come_call_finalizer3(initializer_655,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value688,sStructInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value692) ? __right_value692 = come_decrement_ref_count2(__right_value692, ((struct sNode*)__right_value692)->finalize, ((struct sNode*)__right_value692)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_659;
    result_659=0;
    result_659+=int_get_hash_key(((int)self->v1));
    result_659+=int_get_hash_key(((int)self->v2));
    return result_659;
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
void* __result_obj__=(void*)0;
char* __dec_obj238;
struct sNode* __dec_obj239;
struct tuple2$2char$phsNode$ph* __result387__;
    __dec_obj238=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
    __result387__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
void* __result_obj__=(void*)0;
struct sStructInitializer* __result388__;
void* __right_value689 = (void*)0;
struct sStructInitializer* result_667;
void* __right_value690 = (void*)0;
char* __dec_obj240;
void* __right_value691 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj241;
struct sStructInitializer* __result389__;
    if(    self==(void*)0) {
        __result388__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    result_667=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_667->sname;
        result_667->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj241=result_667->initializer;
        result_667->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->initializer));
        come_call_finalizer3(__dec_obj241,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result389__ = gComeFunResultObject = __result_obj__ = result_667;
    come_call_finalizer3(result_667,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result389__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param){
void* __right_value698 = (void*)0;
struct sVar* self_668;
void* __right_value699 = (void*)0;
char* __dec_obj246;
void* __right_value700 = (void*)0;
struct sType* __dec_obj247;
void* __right_value701 = (void*)0;
char* __dec_obj248;
void* __right_value702 = (void*)0;
char* __dec_obj249;
void* __right_value703 = (void*)0;
char* __dec_obj250;
char* __dec_obj251;
void* __right_value712 = (void*)0;
    self_668=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1238, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj246=self_668->mName;
    self_668->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj247=self_668->mType;
    self_668->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj247,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj248=self_668->mCValueName;
        self_668->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_671=0;
        __dec_obj249=self_668->mCValueName;
        self_668->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_671++));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_668->mAllocaValue=(_Bool)0;
    self_668->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj250=self_668->mFunName;
        self_668->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj251=self_668->mFunName;
        self_668->mFunName=((void*)0);
        __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2void$phvoid$ph$p_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_668));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_668,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result391__;
void* __right_value693 = (void*)0;
struct sVar* result_670;
void* __right_value694 = (void*)0;
char* __dec_obj242;
void* __right_value695 = (void*)0;
char* __dec_obj243;
void* __right_value696 = (void*)0;
struct sType* __dec_obj244;
void* __right_value697 = (void*)0;
char* __dec_obj245;
struct sVar* __result392__;
    if(    self==(void*)0) {
        __result391__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    result_670=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj242=result_670->mName;
        result_670->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj243=result_670->mCValueName;
        result_670->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj244=result_670->mType;
        result_670->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj244,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_670->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_670->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_670->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj245=result_670->mFunName;
        result_670->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result392__ = gComeFunResultObject = __result_obj__ = result_670;
    come_call_finalizer3(result_670,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_669;
    result_669=0;
    result_669+=int_get_hash_key(((int)self->mName));
    result_669+=int_get_hash_key(((int)self->mCValueName));
    result_669+=int_get_hash_key(((int)self->mType));
    result_669+=int_get_hash_key(((int)self->mGlobal));
    result_669+=int_get_hash_key(((int)self->mAllocaValue));
    result_669+=int_get_hash_key(((int)self->mNoFree));
    result_669+=int_get_hash_key(((int)self->mFunName));
    return result_669;
}

static _Bool sVar_equals(struct sVar* left, struct sVar* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mCValueName,right->mCValueName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoFree,right->mNoFree)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2void$phvoid$ph* map$2void$phvoid$ph$p_insert(struct map$2void$phvoid$ph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_689;
unsigned int it_690;
_Bool same_key_exist_691;
char* it2_694;
struct map$2void$phvoid$ph* __result410__;
    if(    self->len*10>=self->size) {
        map$2void$phvoid$ph$p_rehash(self);
    }
    hash_689=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_690=hash_689;
    while((_Bool)1) {
        if(        self->item_existance[it_690]) {
            if(            come_call_equals((void*)0, self->keys[it_690], key)) {
                if(                1) {
                    list$1void$p$p_remove(self->key_list,self->keys[it_690]);
                    come_call_finalizer3(self->keys[it_690],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->keys[it_690]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1void$p$p_remove(self->key_list,self->keys[it_690]);
                    self->keys[it_690]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_690],(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                    self->items[it_690]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_690]=item;
                }
                break;
            }
            it_690++;
            if(            it_690>=self->size) {
                it_690=0;
            }
            else if(            it_690==hash_689) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_690]=(_Bool)1;
            if(            1) {
                self->keys[it_690]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_690]=key;
            }
            if(            1) {
                self->items[it_690]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_690]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_691=(_Bool)0;
    for(    it2_694=((char*)list$1void$p$p_begin(self->key_list));    !list$1void$p$p_end(self->key_list);    it2_694=((char*)list$1void$p$p_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_694, key)) {
            same_key_exist_691=(_Bool)1;
        }
    }
    if(    !same_key_exist_691) {
        list$1void$p$p_push_back(self->key_list,key);
    }
    __result410__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

static void map$2void$phvoid$ph$p_rehash(struct map$2void$phvoid$ph* self){
int size_672;
void* __right_value704 = (void*)0;
void** keys_673;
void* __right_value705 = (void*)0;
void** items_674;
void* __right_value706 = (void*)0;
_Bool* item_existance_675;
int len_676;
void* it_679;
void* default_value_682;
void* __right_value707 = (void*)0;
void* it2_683;
unsigned int hash_686;
int n_687;
void* default_value_688;
void* __right_value708 = (void*)0;
default_value_682 = (void*)0;
default_value_688 = (void*)0;
    size_672=self->size*10;
    keys_673=(void**)come_increment_ref_count(((void**)(__right_value704=(void**)come_calloc(1, sizeof(void*)*(1*(size_672)), "./comelang.h", 2902, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_674=(void**)come_increment_ref_count(((void**)(__right_value705=(void**)come_calloc(1, sizeof(void*)*(1*(size_672)), "./comelang.h", 2903, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_675=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value706=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_672)), "./comelang.h", 2904, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_676=0;
    for(    it_679=map$2void$phvoid$ph$p_begin(self);    !map$2void$phvoid$ph$p_end(self);    it_679=map$2void$phvoid$ph$p_next(self)    ){
        memset(&default_value_682,0,sizeof(void*));
        it2_683=((void*)(__right_value707=map$2void$phvoid$ph$p_at(self,it_679,(void*)come_increment_ref_count(default_value_682))));
        come_call_finalizer3(__right_value707,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        hash_686=come_call_get_hash_key((void*)0, ((void*)it_679))%size_672;
        n_687=hash_686;
        while((_Bool)1) {
            if(            item_existance_675[n_687]) {
                n_687++;
                if(                n_687>=size_672) {
                    n_687=0;
                }
                else if(                n_687==hash_686) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_675[n_687]=(_Bool)1;
                keys_673[n_687]=it_679;
                items_674[n_687]=((void*)(__right_value708=map$2void$phvoid$ph$p_at(self,it_679,(void*)come_increment_ref_count(default_value_688))));
                come_call_finalizer3(__right_value708,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                len_676++;
                come_call_finalizer3(default_value_688,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                break;
                come_call_finalizer3(default_value_688,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
            }
        }
        come_call_finalizer3(default_value_682,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_673;
    self->items=items_674;
    self->item_existance=item_existance_675;
    self->size=size_672;
    self->len=len_676;
}

static void* map$2void$phvoid$ph$p_begin(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_677;
void* __result393__;
void* __result394__;
void* result_678;
void* __result395__;
result_677 = (void*)0;
result_678 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_677,0,sizeof(void*));
        __result393__ = gComeFunResultObject = __result_obj__ = result_677;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result394__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    memset(&result_678,0,sizeof(void*));
    __result395__ = gComeFunResultObject = __result_obj__ = result_678;
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static _Bool map$2void$phvoid$ph$p_end(struct map$2void$phvoid$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2void$phvoid$ph$p_next(struct map$2void$phvoid$ph* self){
void* __result_obj__=(void*)0;
void* result_680;
void* __result396__;
void* __result397__;
void* result_681;
void* __result398__;
result_680 = (void*)0;
result_681 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_680,0,sizeof(void*));
        __result396__ = gComeFunResultObject = __result_obj__ = result_680;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result397__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    memset(&result_681,0,sizeof(void*));
    __result398__ = gComeFunResultObject = __result_obj__ = result_681;
    gComeFunResultObject = (void*)0;
    return __result398__;
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_684;
unsigned int it_685;
void* __result399__;
void* __result400__;
void* __result401__;
void* __result402__;
    hash_684=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_685=hash_684;
    while((_Bool)1) {
        if(        self->item_existance[it_685]) {
            if(            come_call_equals((void*)0, self->keys[it_685], key)) {
                __result399__ = gComeFunResultObject = __result_obj__ = self->items[it_685];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result399__;
            }
            it_685++;
            if(            it_685>=self->size) {
                it_685=0;
            }
            else if(            it_685==hash_684) {
                __result400__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result400__;
            }
        }
        else {
            __result401__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result401__;
        }
    }
    __result402__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

static void* list$1void$p$p_begin(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_692;
void* __result403__;
void* __result404__;
void* result_693;
void* __result405__;
result_692 = (void*)0;
result_693 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_692,0,sizeof(void*));
        __result403__ = gComeFunResultObject = __result_obj__ = result_692;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    self->it=self->head;
    if(    self->it) {
        __result404__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result404__;
    }
    memset(&result_693,0,sizeof(void*));
    __result405__ = gComeFunResultObject = __result_obj__ = result_693;
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static _Bool list$1void$p$p_end(struct list$1void$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$p$p_next(struct list$1void$p* self){
void* __result_obj__=(void*)0;
void* result_695;
void* __result406__;
void* __result407__;
void* result_696;
void* __result408__;
result_695 = (void*)0;
result_696 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_695,0,sizeof(void*));
        __result406__ = gComeFunResultObject = __result_obj__ = result_695;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result407__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result407__;
    }
    memset(&result_696,0,sizeof(void*));
    __result408__ = gComeFunResultObject = __result_obj__ = result_696;
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static struct list$1void$p* list$1void$p$p_push_back(struct list$1void$p* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value709 = (void*)0;
struct list_item$1void$p* litem_697;
void* __right_value710 = (void*)0;
struct list_item$1void$p* litem_698;
void* __right_value711 = (void*)0;
struct list_item$1void$p* litem_699;
struct list$1void$p* __result409__;
    if(    self->len==0) {
        litem_697=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value709=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1457, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_697->prev=((void*)0);
        litem_697->next=((void*)0);
        litem_697->item=item;
        self->tail=litem_697;
        self->head=litem_697;
    }
    else if(    self->len==1) {
        litem_698=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value710=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1467, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_698->prev=self->head;
        litem_698->next=((void*)0);
        litem_698->item=item;
        self->tail=litem_698;
        self->head->next=litem_698;
    }
    else {
        litem_699=(struct list_item$1void$p*)come_increment_ref_count(((struct list_item$1void$p*)(__right_value711=(struct list_item$1void$p*)come_calloc(1, sizeof(struct list_item$1void$p)*(1), "./comelang.h", 1477, "struct list_item$1void$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_699->prev=self->tail;
        litem_699->next=((void*)0);
        litem_699->item=item;
        self->tail->next=litem_699;
        self->tail=litem_699;
    }
    self->len++;
    __result409__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result409__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value713 = (void*)0;
struct sVar* self_700;
void* __right_value714 = (void*)0;
char* __dec_obj252;
void* __right_value715 = (void*)0;
struct sType* __dec_obj253;
void* __right_value716 = (void*)0;
char* __dec_obj254;
void* __right_value717 = (void*)0;
    self_700=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1265, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj252=self_700->mName;
    self_700->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj253=self_700->mType;
    self_700->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj253,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_700->mGlobal=(_Bool)1;
    __dec_obj254=self_700->mCValueName;
    self_700->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_700->mAllocaValue=(_Bool)0;
    self_700->mNoFree=(_Bool)0;
    map$2void$phvoid$ph$p_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_700));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_700,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value718 = (void*)0;
struct sVar* self_701;
void* __right_value719 = (void*)0;
char* __dec_obj255;
void* __right_value720 = (void*)0;
struct sType* __dec_obj256;
void* __right_value721 = (void*)0;
char* __dec_obj257;
void* __right_value722 = (void*)0;
    self_701=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1282, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    __dec_obj255=self_701->mName;
    self_701->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=self_701->mType;
    self_701->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj256,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_701->mGlobal=(_Bool)1;
    __dec_obj257=self_701->mCValueName;
    self_701->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_701->mAllocaValue=(_Bool)0;
    self_701->mNoFree=(_Bool)0;
    map$2void$phvoid$ph$p_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_701));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_701,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_702;
_Bool is_type_name_flag_703;
_Bool multiple_declare_704;
char* p_705;
int sline_706;
void* __right_value723 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* type_707=0;
char* name_708=0;
_Bool err_709=0;
void* __right_value724 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var30 = (void*)0;
struct sType* type_710=0;
char* name_711=0;
void* __right_value725 = (void*)0;
_Bool no_output_err_712;
_Bool no_comma_713;
_Bool no_output_come_code_714;
void* __right_value726 = (void*)0;
struct sNode* exp_715;
_Bool attr_define_716;
char* p_717;
int sline_718;
void* __right_value727 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* type_719=0;
char* name_720=0;
_Bool err_721=0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sFun* fun_722;
void* __right_value730 = (void*)0;
char* buf2_723;
struct list$1char$ph* multiple_assign_724;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct list$1char$ph* __dec_obj262;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* buf3_725;
void* __right_value735 = (void*)0;
_Bool no_comma_726;
void* __right_value736 = (void*)0;
struct sNode* right_value_727;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj263;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value742 = (void*)0;
struct sNode* node_728;
struct sNode* __result411__;
void* __right_value743 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c2_729=0;
char* Err_730=0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value748 = (void*)0;
struct sNode* node_731;
struct sNode* __result414__;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_733;
void* __right_value751 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* base_type_734=0;
char* name_735=0;
_Bool err_736=0;
void* __right_value752 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var34 = (void*)0;
struct sType* type2_737=0;
char* var_name_738=0;
_Bool no_comma_739;
void* __right_value753 = (void*)0;
struct sNode* exp_740;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
_Bool no_comma_745;
void* __right_value759 = (void*)0;
struct sNode* exp_746;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var35 = (void*)0;
struct sType* type2_749=0;
char* var_name_750=0;
_Bool no_comma_751;
void* __right_value768 = (void*)0;
struct sNode* exp_752;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
_Bool no_comma_753;
void* __right_value771 = (void*)0;
struct sNode* exp_754;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct sNode* right_node_755;
void* __right_value776 = (void*)0;
char* var_name2_756;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value781 = (void*)0;
struct sNode* node_757;
struct sNode* __result420__;
void* __right_value782 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var36 = (void*)0;
struct sType* type_758=0;
char* name_759=0;
_Bool err_760=0;
void* __right_value783 = (void*)0;
char* __dec_obj279;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value792 = (void*)0;
struct sNode* self_node_763;
void* __right_value793 = (void*)0;
struct sNode* right_node_764;
void* __right_value794 = (void*)0;
struct sNode* node_765;
struct sNode* __result424__;
void* __right_value795 = (void*)0;
struct sNode* __result425__;
void* __right_value796 = (void*)0;
struct sNode* right_value_766;
void* __right_value797 = (void*)0;
struct sNode* __dec_obj288;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value802 = (void*)0;
struct sNode* node_767;
struct sNode* __result426__;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
_Bool _elif_conditional1;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value808 = (void*)0;
struct sNode* node_768;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj289;
struct sNode* __result427__;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value813 = (void*)0;
struct sNode* node_769;
void* __right_value814 = (void*)0;
struct sNode* __dec_obj290;
struct sNode* __result428__;
char* word_770;
void* __right_value815 = (void*)0;
char* __dec_obj291;
void* __right_value816 = (void*)0;
char* __dec_obj292;
_Bool is_type_name_flag_771;
void* __right_value817 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_772=0;
char* name_773=0;
_Bool err_774=0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value820 = (void*)0;
struct sNode* node_775;
struct sNode* __result429__;
struct sNode* right_value_776;
_Bool no_comma_777;
void* __right_value821 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value822 = (void*)0;
struct sNode* __dec_obj294;
void* __right_value823 = (void*)0;
struct sNode* __dec_obj295;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value827 = (void*)0;
struct sNode* node_778;
struct sNode* __result430__;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value831 = (void*)0;
struct sNode* node_779;
struct sNode* __result431__;
void* __right_value832 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c3_780=0;
char* Err_781=0;
word_770 = (void*)0;
    sline_real_702=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_703=is_type_name(buf,info);
    multiple_declare_704=(_Bool)0;
    if(    is_type_name_flag_703) {
        p_705=info->p;
        sline_706=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value723=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_707=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
            name_708=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            err_709=multiple_assign_var29->v3;
            come_call_finalizer3(__right_value723,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            err_709) {
                parse_sharp_v5(info);
                multiple_assign_var30=((struct tuple2$2sType$phchar$ph*)(__right_value724=parse_variable_name((struct sType*)come_increment_ref_count(type_707),(_Bool)1,info)));
                type_710=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_711=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                come_call_finalizer3(__right_value724,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value725=skip_block(info)));
                        (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
                    }
                    else {
                        no_output_err_712=info->no_output_err;
                        no_comma_713=info->no_comma;
                        no_output_come_code_714=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_715=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_713;
                        info->no_output_err=no_output_err_712;
                        info->no_output_come_code=no_output_come_code_714;
                        ((exp_715) ? exp_715 = come_decrement_ref_count2(exp_715, ((struct sNode*)exp_715)->finalize, ((struct sNode*)exp_715)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    }
                }
                if(                !is_type_name(name_711,info)&&*info->p==44) {
                    multiple_declare_704=(_Bool)1;
                }
                come_call_finalizer3(type_710,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_711 = come_decrement_ref_count2(name_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_708 = come_decrement_ref_count2(name_708, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_705;
        info->sline=sline_706;
    }
    attr_define_716=(_Bool)0;
    if(    is_type_name_flag_703&&info->defining_class) {
        p_717=info->p;
        sline_718=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value727=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_719=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_720=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_721=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value727,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        err_721&&strmemcmp(info->p,"self")) {
            attr_define_716=(_Bool)1;
        }
        info->p=p_717;
        info->sline=sline_718;
        come_call_finalizer3(type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_720 = come_decrement_ref_count2(name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_722=((struct sFun*)((void*)(__right_value729=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value728=__builtin_string(buf)))))));
    (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    come_call_finalizer3(__right_value729,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_723=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_724=((void*)0);
        if(        *info->p==44) {
            __dec_obj262=multiple_assign_724;
            multiple_assign_724=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1391, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj262,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1char$ph$p_push_back(multiple_assign_724,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_723)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_725=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph$p_push_back(multiple_assign_724,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_725)));
                (buf3_725 = come_decrement_ref_count2(buf3_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_726=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_727=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_726;
            parse_sharp_v5(info);
            __dec_obj263=right_value_727;
            right_value_727=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_727),info));
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1421, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value741=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1421, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf2_723)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_724),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_727),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_728=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value741,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_702;
            __result411__ = gComeFunResultObject = __result_obj__ = node_728;
            ((right_value_727) ? right_value_727 = come_decrement_ref_count2(right_value_727, ((struct sNode*)right_value_727)->finalize, ((struct sNode*)right_value_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_728) ? node_728 = come_decrement_ref_count2(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            (buf2_723 = come_decrement_ref_count2(buf2_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(multiple_assign_724,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result411__;
            ((right_value_727) ? right_value_727 = come_decrement_ref_count2(right_value_727, ((struct sNode*)right_value_727)->finalize, ((struct sNode*)right_value_727)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_728) ? node_728 = come_decrement_ref_count2(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value743=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_exception_var_c2_729=multiple_assign_var32->v1;
            Err_730=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_730)?(puts(Err_730),exit(0)):(0));
            come_call_finalizer3(__right_value743,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            exit(1);
            (Err_730 = come_decrement_ref_count2(Err_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (buf2_723 = come_decrement_ref_count2(buf2_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(multiple_assign_724,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1431, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value745=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1431, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_731=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value745,sNewChannel_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_702;
        __result414__ = gComeFunResultObject = __result_obj__ = node_731;
        ((node_731) ? node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result414__;
        ((node_731) ? node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    multiple_declare_704) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_733=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1439, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value751=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_734=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name_735=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_736=multiple_assign_var33->v3;
        come_call_finalizer3(__right_value751,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_736) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var34=((struct tuple2$2sType$phchar$ph*)(__right_value752=parse_variable_name((struct sType*)come_increment_ref_count(base_type_734),(_Bool)1,info)));
        type2_737=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
        var_name_738=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        come_call_finalizer3(__right_value752,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_737->mClass->mStruct&&list$1sNode$ph$p_length(type2_737->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_739=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_740=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_739;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_733,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1466, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_737),(char*)come_increment_ref_count(var_name_738),(struct sNode*)come_increment_ref_count(exp_740))));
                ((exp_740) ? exp_740 = come_decrement_ref_count2(exp_740, ((struct sNode*)exp_740)->finalize, ((struct sNode*)exp_740)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_745=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_746=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_745;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_733,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1476, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_737),(char*)come_increment_ref_count(var_name_738),(struct sNode*)come_increment_ref_count(exp_746))));
                ((exp_746) ? exp_746 = come_decrement_ref_count2(exp_746, ((struct sNode*)exp_746)->finalize, ((struct sNode*)exp_746)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_733,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1480, "struct tuple3$3sType$phchar$phvoid$p", tuple3$3sType$phchar$phvoid$p_finalize, tuple3$3sType$phchar$phvoid$p_clone, tuple3$3sType$phchar$phvoid$p_get_hash_key, tuple3$3sType$phchar$phvoid$p_equals)),(struct sType*)come_increment_ref_count(type2_737),(char*)come_increment_ref_count(var_name_738),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var35=((struct tuple2$2sType$phchar$ph*)(__right_value767=parse_variable_name((struct sType*)come_increment_ref_count(base_type_734),(_Bool)0,info)));
            type2_749=(struct sType*)come_increment_ref_count(multiple_assign_var35->v1);
            var_name_750=(char*)come_increment_ref_count(multiple_assign_var35->v2);
            come_call_finalizer3(__right_value767,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_749->mClass->mStruct&&list$1sNode$ph$p_length(type2_749->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_751=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_752=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_751;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_733,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1502, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_749),(char*)come_increment_ref_count(var_name_750),(struct sNode*)come_increment_ref_count(exp_752))));
                    ((exp_752) ? exp_752 = come_decrement_ref_count2(exp_752, ((struct sNode*)exp_752)->finalize, ((struct sNode*)exp_752)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    no_comma_753=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_754=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_753;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_733,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1514, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_749),(char*)come_increment_ref_count(var_name_750),(struct sNode*)come_increment_ref_count(exp_754))));
                    ((exp_754) ? exp_754 = come_decrement_ref_count2(exp_754, ((struct sNode*)exp_754)->finalize, ((struct sNode*)exp_754)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_733,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1518, "struct tuple3$3sType$phchar$phvoid$p", tuple3$3sType$phchar$phvoid$p_finalize, tuple3$3sType$phchar$phvoid$p_clone, tuple3$3sType$phchar$phvoid$p_get_hash_key, tuple3$3sType$phchar$phvoid$p_equals)),(struct sType*)come_increment_ref_count(type2_749),(char*)come_increment_ref_count(var_name_750),((void*)0))));
            }
            come_call_finalizer3(type2_749,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_750 = come_decrement_ref_count2(var_name_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_755=((void*)0);
        var_name2_756=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1525, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value780=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1525, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_733),(struct sType*)come_increment_ref_count(base_type_734),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_757=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value780,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_702;
        __result420__ = gComeFunResultObject = __result_obj__ = node_757;
        come_call_finalizer3(multiple_declare_733,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_735 = come_decrement_ref_count2(name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_737,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_738 = come_decrement_ref_count2(var_name_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_755) ? right_node_755 = come_decrement_ref_count2(right_node_755, ((struct sNode*)right_node_755)->finalize, ((struct sNode*)right_node_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (var_name2_756 = come_decrement_ref_count2(var_name2_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_757) ? node_757 = come_decrement_ref_count2(node_757, ((struct sNode*)node_757)->finalize, ((struct sNode*)node_757)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result420__;
        come_call_finalizer3(multiple_declare_733,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_735 = come_decrement_ref_count2(name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_737,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_738 = come_decrement_ref_count2(var_name_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_755) ? right_node_755 = come_decrement_ref_count2(right_node_755, ((struct sNode*)right_node_755)->finalize, ((struct sNode*)right_node_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        (var_name2_756 = come_decrement_ref_count2(var_name2_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_757) ? node_757 = come_decrement_ref_count2(node_757, ((struct sNode*)node_757)->finalize, ((struct sNode*)node_757)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    attr_define_716) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var36=((struct tuple3$3sType$phchar$phbool$*)(__right_value782=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_758=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
        name_759=(char*)come_increment_ref_count(multiple_assign_var36->v2);
        err_760=multiple_assign_var36->v3;
        come_call_finalizer3(__right_value782,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
        parse_sharp_v5(info);
        if(        !err_760) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj279=name_759;
        name_759=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1void$ph$p_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1548, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_759),(struct sType*)come_increment_ref_count(type_758))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value791=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1556, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_763=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value791,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
            right_node_764=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_765=(struct sNode*)come_increment_ref_count(store_field(self_node_763,(struct sNode*)come_increment_ref_count(right_node_764),(char*)come_increment_ref_count(name_759),info));
            info->sline_real=sline_real_702;
            __result424__ = gComeFunResultObject = __result_obj__ = node_765;
            ((self_node_763) ? self_node_763 = come_decrement_ref_count2(self_node_763, ((struct sNode*)self_node_763)->finalize, ((struct sNode*)self_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((right_node_764) ? right_node_764 = come_decrement_ref_count2(right_node_764, ((struct sNode*)right_node_764)->finalize, ((struct sNode*)right_node_764)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_765) ? node_765 = come_decrement_ref_count2(node_765, ((struct sNode*)node_765)->finalize, ((struct sNode*)node_765)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(type_758,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            gComeFunResultObject = (void*)0;
            return __result424__;
            ((self_node_763) ? self_node_763 = come_decrement_ref_count2(self_node_763, ((struct sNode*)self_node_763)->finalize, ((struct sNode*)self_node_763)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((right_node_764) ? right_node_764 = come_decrement_ref_count2(right_node_764, ((struct sNode*)right_node_764)->finalize, ((struct sNode*)right_node_764)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((node_765) ? node_765 = come_decrement_ref_count2(node_765, ((struct sNode*)node_765)->finalize, ((struct sNode*)node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            info->sline_real=sline_real_702;
            __result425__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=create_null_node(info)));
            come_call_finalizer3(type_758,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value795) ? __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result425__;
        }
        come_call_finalizer3(type_758,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_703&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_766=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj288=right_value_766;
        right_value_766=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_766),info));
        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1581, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value801=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1581, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_766),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_767=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value801,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_702;
        __result426__ = gComeFunResultObject = __result_obj__ = node_767;
        ((right_value_766) ? right_value_766 = come_decrement_ref_count2(right_value_766, ((struct sNode*)right_value_766)->finalize, ((struct sNode*)right_value_766)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result426__;
        ((right_value_766) ? right_value_766 = come_decrement_ref_count2(right_value_766, ((struct sNode*)right_value_766)->finalize, ((struct sNode*)right_value_766)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_703||((struct sFun*)((void*)(__right_value804=map$2void$phvoid$ph$p_operator_load_element(info->funcs,((char*)(__right_value803=__builtin_string(buf))))))))),    (__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__)),
    come_call_finalizer3(__right_value804,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, __result_obj__),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1586, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value807=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1586, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_768=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value807,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj289=node_768;
        node_768=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_768),info));
        if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_702;
        __result427__ = gComeFunResultObject = __result_obj__ = node_768;
        ((node_768) ? node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result427__;
        ((node_768) ? node_768 = come_decrement_ref_count2(node_768, ((struct sNode*)node_768)->finalize, ((struct sNode*)node_768)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    !is_type_name_flag_703) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1594, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value812=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1594, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_769=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value812,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj290=node_769;
        node_769=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_769),info));
        if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_702;
        __result428__ = gComeFunResultObject = __result_obj__ = node_769;
        ((node_769) ? node_769 = come_decrement_ref_count2(node_769, ((struct sNode*)node_769)->finalize, ((struct sNode*)node_769)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result428__;
        ((node_769) ? node_769 = come_decrement_ref_count2(node_769, ((struct sNode*)node_769)->finalize, ((struct sNode*)node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj291=word_770;
            word_770=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj292=word_770;
            word_770=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_771=is_type_name(word_770,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_771) {
            parse_sharp_v5(info);
            multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value817=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_772=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
            name_773=(char*)come_increment_ref_count(multiple_assign_var37->v2);
            err_774=multiple_assign_var37->v3;
            come_call_finalizer3(__right_value817,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(            !err_774) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1631, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value819=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1631, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_773),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_775=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value819,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_702;
                __result429__ = gComeFunResultObject = __result_obj__ = node_775;
                ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(type_772,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_773 = come_decrement_ref_count2(name_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_770 = come_decrement_ref_count2(word_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result429__;
                ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_776=((void*)0);
                if(                type_772->mClass->mStruct&&list$1sNode$ph$p_length(type_772->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_777=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj293=right_value_776;
                    right_value_776=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_777;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj294=right_value_776;
                    right_value_776=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj295=right_value_776;
                right_value_776=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_776),info));
                if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1660, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value826=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1660, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_773),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_772),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_776),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_778=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value826,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_702;
                __result430__ = gComeFunResultObject = __result_obj__ = node_778;
                ((right_value_776) ? right_value_776 = come_decrement_ref_count2(right_value_776, ((struct sNode*)right_value_776)->finalize, ((struct sNode*)right_value_776)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_778) ? node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(type_772,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_773 = come_decrement_ref_count2(name_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_770 = come_decrement_ref_count2(word_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result430__;
                ((right_value_776) ? right_value_776 = come_decrement_ref_count2(right_value_776, ((struct sNode*)right_value_776)->finalize, ((struct sNode*)right_value_776)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_778) ? node_778 = come_decrement_ref_count2(node_778, ((struct sNode*)node_778)->finalize, ((struct sNode*)node_778)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1665, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value830=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1665, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_773),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_772),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_779=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value830,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline_real=sline_real_702;
                __result431__ = gComeFunResultObject = __result_obj__ = node_779;
                ((node_779) ? node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(type_772,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_773 = come_decrement_ref_count2(name_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_770 = come_decrement_ref_count2(word_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                gComeFunResultObject = (void*)0;
                return __result431__;
                ((node_779) ? node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
            come_call_finalizer3(type_772,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_773 = come_decrement_ref_count2(name_773, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_770 = come_decrement_ref_count2(word_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value832=err_msg(info,"unexpected word(%s)(1)\n",buf)));
    come_exception_var_c3_780=multiple_assign_var38->v1;
    Err_781=(char*)come_increment_ref_count(multiple_assign_var38->v2);
    ((Err_781)?(puts(Err_781),exit(0)):(0));
    come_call_finalizer3(__right_value832,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, __result_obj__);
    exit(2);
    (Err_781 = come_decrement_ref_count2(Err_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
struct sType* __dec_obj258;
char* __dec_obj259;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj258=self->v1;
            come_call_finalizer3(__dec_obj258,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj259=self->v2;
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
struct sType* __dec_obj260;
char* __dec_obj261;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj260=self->v1;
            come_call_finalizer3(__dec_obj260,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj261=self->v2;
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
void* __result_obj__=(void*)0;
struct sNewChannel* __result412__;
void* __right_value746 = (void*)0;
struct sNewChannel* result_732;
void* __right_value747 = (void*)0;
char* __dec_obj264;
struct sNewChannel* __result413__;
    if(    self==(void*)0) {
        __result412__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    result_732=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_732->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_732->sname;
        result_732->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_732->sline_real=self->sline_real;
    }
    __result413__ = gComeFunResultObject = __result_obj__ = result_732;
    come_call_finalizer3(result_732,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __result_obj__=(void*)0;
void* __right_value754 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_741;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj265;
void* __right_value755 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_742;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj266;
void* __right_value756 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_743;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj267;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result415__;
    if(    self->len==0) {
        litem_741=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value754=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1457, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_741->prev=((void*)0);
        litem_741->next=((void*)0);
        __dec_obj265=litem_741->item;
        litem_741->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj265,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_741;
        self->head=litem_741;
    }
    else if(    self->len==1) {
        litem_742=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value755=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1467, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_742->prev=self->head;
        litem_742->next=((void*)0);
        __dec_obj266=litem_742->item;
        litem_742->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj266,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_742;
        self->head->next=litem_742;
    }
    else {
        litem_743=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value756=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1477, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_743->prev=self->tail;
        litem_743->next=((void*)0);
        __dec_obj267=litem_743->item;
        litem_743->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj267,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_743;
        self->tail=litem_743;
    }
    self->len++;
    __result415__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self){
unsigned int result_744;
    result_744=0;
    result_744+=int_get_hash_key(((int)self->v1));
    result_744+=int_get_hash_key(((int)self->v2));
    result_744+=int_get_hash_key(((int)self->v3));
    return result_744;
}

static _Bool tuple3$3sType$phchar$phsNode$ph_equals(struct tuple3$3sType$phchar$phsNode$ph* left, struct tuple3$3sType$phchar$phsNode$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj268;
char* __dec_obj269;
struct sNode* __dec_obj270;
struct tuple3$3sType$phchar$phsNode$ph* __result416__;
    __dec_obj268=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj268,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj269=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj270=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
    __result416__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
struct sType* __dec_obj271;
char* __dec_obj272;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj271=self->v1;
            come_call_finalizer3(__dec_obj271,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj272=self->v2;
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self){
void* __result_obj__=(void*)0;
struct tuple3$3sType$phchar$phvoid$p* __result417__;
void* __right_value762 = (void*)0;
struct tuple3$3sType$phchar$phvoid$p* result_747;
void* __right_value763 = (void*)0;
struct sType* __dec_obj273;
void* __right_value764 = (void*)0;
char* __dec_obj274;
struct tuple3$3sType$phchar$phvoid$p* __result418__;
    if(    self==(void*)0) {
        __result417__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result417__;
    }
    result_747=(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "tuple3$3sType$phchar$phvoid$p_clone", 3, "struct tuple3$3sType$phchar$phvoid$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj273=result_747->v1;
        result_747->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj273,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj274=result_747->v2;
        result_747->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_747->v3=self->v3;
    }
    __result418__ = gComeFunResultObject = __result_obj__ = result_747;
    come_call_finalizer3(result_747,tuple3$3sType$phchar$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self){
unsigned int result_748;
    result_748=0;
    result_748+=int_get_hash_key(((int)self->v1));
    result_748+=int_get_hash_key(((int)self->v2));
    result_748+=int_get_hash_key(((int)self->v3));
    return result_748;
}

static _Bool tuple3$3sType$phchar$phvoid$p_equals(struct tuple3$3sType$phchar$phvoid$p* left, struct tuple3$3sType$phchar$phvoid$p* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj275;
char* __dec_obj276;
struct tuple3$3sType$phchar$phvoid$p* __result419__;
    __dec_obj275=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj275,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj276=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result419__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sType$phchar$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result419__;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
struct sType* __dec_obj277;
char* __dec_obj278;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj277=self->v1;
            come_call_finalizer3(__dec_obj277,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj278=self->v2;
            __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj280;
struct sType* __dec_obj281;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj280=self->v1;
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj281=self->v2;
            come_call_finalizer3(__dec_obj281,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
void* __result_obj__=(void*)0;
struct tuple2$2char$phsType$ph* __result421__;
void* __right_value784 = (void*)0;
struct tuple2$2char$phsType$ph* result_761;
void* __right_value785 = (void*)0;
char* __dec_obj282;
void* __right_value786 = (void*)0;
struct sType* __dec_obj283;
struct tuple2$2char$phsType$ph* __result422__;
    if(    self==(void*)0) {
        __result421__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result421__;
    }
    result_761=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj282=result_761->v1;
        result_761->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj283=result_761->v2;
        result_761->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj283,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result422__ = gComeFunResultObject = __result_obj__ = result_761;
    come_call_finalizer3(result_761,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result422__;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_762;
    result_762=0;
    result_762+=int_get_hash_key(((int)self->v1));
    result_762+=int_get_hash_key(((int)self->v2));
    return result_762;
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
char* __dec_obj284;
struct sType* __dec_obj285;
struct tuple2$2char$phsType$ph* __result423__;
    __dec_obj284=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj285=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj285,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result423__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
char* __dec_obj286;
struct sType* __dec_obj287;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj286=self->v1;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,1,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj287=self->v2;
            come_call_finalizer3(__dec_obj287,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* expression_node_v95(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* node_782;
void* __right_value833 = (void*)0;
struct sNode* exp_783;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value839 = (void*)0;
struct sNode* __result434__;
void* __right_value840 = (void*)0;
struct sNode* __dec_obj298;
struct sNode* __result435__;
node_782 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_783=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1691, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value835=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1691, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_783),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result434__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value839=_inf_value15));
        ((exp_783) ? exp_783 = come_decrement_ref_count2(exp_783, ((struct sNode*)exp_783)->finalize, ((struct sNode*)exp_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node_782) ? node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value835,sReadChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value839) ? __right_value839 = come_decrement_ref_count2(__right_value839, ((struct sNode*)__right_value839)->finalize, ((struct sNode*)__right_value839)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result434__;
        ((exp_783) ? exp_783 = come_decrement_ref_count2(exp_783, ((struct sNode*)exp_783)->finalize, ((struct sNode*)exp_783)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else {
        __dec_obj298=node_782;
        node_782=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result435__ = gComeFunResultObject = __result_obj__ = node_782;
    ((node_782) ? node_782 = come_decrement_ref_count2(node_782, ((struct sNode*)node_782)->finalize, ((struct sNode*)node_782)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result435__;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
void* __result_obj__=(void*)0;
struct sReadChannelNode* __result432__;
void* __right_value836 = (void*)0;
struct sReadChannelNode* result_784;
void* __right_value837 = (void*)0;
char* __dec_obj296;
void* __right_value838 = (void*)0;
struct sNode* __dec_obj297;
struct sReadChannelNode* __result433__;
    if(    self==(void*)0) {
        __result432__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result432__;
    }
    result_784=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_784->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_784->sname;
        result_784->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_784->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj297=result_784->exp;
        result_784->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result433__ = gComeFunResultObject = __result_obj__ = result_784;
    come_call_finalizer3(result_784,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result433__;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value841 = (void*)0;
struct sNode* right_value_785;
void* __right_value842 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value849 = (void*)0;
struct sNode* __result438__;
void* __right_value850 = (void*)0;
struct sNode* __result439__;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_785=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj299=right_value_785;
        right_value_785=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_785),info));
        if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1714, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value844=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1714, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_785),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result438__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value849=_inf_value16));
        ((right_value_785) ? right_value_785 = come_decrement_ref_count2(right_value_785, ((struct sNode*)right_value_785)->finalize, ((struct sNode*)right_value_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(__right_value844,sWriteChannelNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value849) ? __right_value849 = come_decrement_ref_count2(__right_value849, ((struct sNode*)__right_value849)->finalize, ((struct sNode*)__right_value849)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result438__;
        ((right_value_785) ? right_value_785 = come_decrement_ref_count2(right_value_785, ((struct sNode*)right_value_785)->finalize, ((struct sNode*)right_value_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    __result439__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value850=post_position_operator((struct sNode*)come_increment_ref_count(node),info)));
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((__right_value850) ? __right_value850 = come_decrement_ref_count2(__right_value850, ((struct sNode*)__right_value850)->finalize, ((struct sNode*)__right_value850)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result439__;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
void* __result_obj__=(void*)0;
struct sWriteChannelNode* __result436__;
void* __right_value845 = (void*)0;
struct sWriteChannelNode* result_786;
void* __right_value846 = (void*)0;
char* __dec_obj300;
void* __right_value847 = (void*)0;
struct sNode* __dec_obj301;
void* __right_value848 = (void*)0;
struct sNode* __dec_obj302;
struct sWriteChannelNode* __result437__;
    if(    self==(void*)0) {
        __result436__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result436__;
    }
    result_786=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_786->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_786->sname;
        result_786->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_786->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj301=result_786->exp;
        result_786->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj302=result_786->right_value;
        result_786->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result437__ = gComeFunResultObject = __result_obj__ = result_786;
    come_call_finalizer3(result_786,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result437__;
}

