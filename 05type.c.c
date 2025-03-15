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

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
    struct sMemHeaderTiny* mFreeMem[4096];
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

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
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
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
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

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
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
    struct list$1sType$ph* mGenericsTypes;
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
    struct list$1sType$ph* mParamTypes;
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
    struct list$1sType$ph* mParamTypes;
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
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
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

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
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

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
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
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
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
    struct sType* class_type;
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
    struct map$2char$phchar$ph* module_params;
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
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool emb_cpp;
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

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
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

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct tuple2$2bool$void$p
{
    _Bool v1;
    void* v2;
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
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
_Bool output_source_file(struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_paren(struct sInfo* info);
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
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile(struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
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
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key);
static _Bool list$1char$ph$p_contained(struct list$1char$ph* self, char* item);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2);
static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
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
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self);
static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list_item$1sNode$ph_equals(struct list_item$1sNode$ph* left, struct list_item$1sNode$ph* right);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_155;
    result_155=0;
    result_155+=int_get_hash_key(((int)self->buf));
    result_155+=int_get_hash_key(((int)self->len));
    result_155+=int_get_hash_key(((int)self->size));
    return result_155;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__78;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__78 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__78,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__81;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__83;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__83 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__83,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__83;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__85;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__85 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__85,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__88;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__93;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__93 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__93,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__93;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__95;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__95 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__95,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_177;
struct list$1char$* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_177=0;    i_177<num_value;    i_177++    ){
        list$1char$$p_push_back(self,values[i_177]);
    }
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__98,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_178;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_179;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_180;
struct list$1char$* __result_obj__97;
    if(    self->len==0) {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1466, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=((void*)0);
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head=litem_178;
    }
    else if(    self->len==1) {
        litem_179=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1476, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_179->prev=self->head;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head->next=litem_179;
    }
    else {
        litem_180=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1486, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_180->prev=self->tail;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail->next=litem_180;
        self->tail=litem_180;
    }
    self->len++;
    __result_obj__97 = self;
    return __result_obj__97;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_181;
struct list_item$1char$* prev_it_182;
    it_181=self->head;
    while(it_181!=((void*)0)) {
        prev_it_182=it_181;
        it_181=it_181->next;
        come_call_finalizer3(prev_it_182,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_183;
struct list$1char$p* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_183=0;    i_183<num_value;    i_183++    ){
        list$1char$p$p_push_back(self,values[i_183]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_184;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_185;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_186;
struct list$1char$p* __result_obj__100;
    if(    self->len==0) {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1466, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=((void*)0);
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head=litem_184;
    }
    else if(    self->len==1) {
        litem_185=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1476, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=self->head;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head->next=litem_185;
    }
    else {
        litem_186=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1486, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->tail;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail->next=litem_186;
        self->tail=litem_186;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_187;
struct list_item$1char$p* prev_it_188;
    it_187=self->head;
    while(it_187!=((void*)0)) {
        prev_it_188=it_187;
        it_187=it_187->next;
        come_call_finalizer3(prev_it_188,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_189;
struct list$1short$* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_189=0;    i_189<num_value;    i_189++    ){
        list$1short$$p_push_back(self,values[i_189]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__104,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__104;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_190;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_191;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_192;
struct list$1short$* __result_obj__103;
    if(    self->len==0) {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1466, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=((void*)0);
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head=litem_190;
    }
    else if(    self->len==1) {
        litem_191=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1476, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=self->head;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head->next=litem_191;
    }
    else {
        litem_192=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1486, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->tail;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail->next=litem_192;
        self->tail=litem_192;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_193;
struct list_item$1short$* prev_it_194;
    it_193=self->head;
    while(it_193!=((void*)0)) {
        prev_it_194=it_193;
        it_193=it_193->next;
        come_call_finalizer3(prev_it_194,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_195;
struct list$1int$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_195=0;    i_195<num_value;    i_195++    ){
        list$1int$$p_push_back(self,values[i_195]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__107,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__107;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_196;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_197;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_198;
struct list$1int$* __result_obj__106;
    if(    self->len==0) {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1466, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=((void*)0);
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail=litem_196;
        self->head=litem_196;
    }
    else if(    self->len==1) {
        litem_197=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1476, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=self->head;
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head->next=litem_197;
    }
    else {
        litem_198=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1486, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->tail;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail->next=litem_198;
        self->tail=litem_198;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_199;
struct list_item$1int$* prev_it_200;
    it_199=self->head;
    while(it_199!=((void*)0)) {
        prev_it_200=it_199;
        it_199=it_199->next;
        come_call_finalizer3(prev_it_200,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_201;
struct list$1long$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_201=0;    i_201<num_value;    i_201++    ){
        list$1long$$p_push_back(self,values[i_201]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__110,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__110;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_202;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_203;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_204;
struct list$1long$* __result_obj__109;
    if(    self->len==0) {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1466, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=((void*)0);
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail=litem_202;
        self->head=litem_202;
    }
    else if(    self->len==1) {
        litem_203=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1476, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=self->head;
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head->next=litem_203;
    }
    else {
        litem_204=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1486, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->tail;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail->next=litem_204;
        self->tail=litem_204;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_205;
struct list_item$1long$* prev_it_206;
    it_205=self->head;
    while(it_205!=((void*)0)) {
        prev_it_206=it_205;
        it_205=it_205->next;
        come_call_finalizer3(prev_it_206,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_207;
struct list$1float$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_207=0;    i_207<num_value;    i_207++    ){
        list$1float$$p_push_back(self,values[i_207]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__113,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__113;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_208;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_209;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_210;
struct list$1float$* __result_obj__112;
    if(    self->len==0) {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1466, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail=litem_208;
        self->head=litem_208;
    }
    else if(    self->len==1) {
        litem_209=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1476, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_209->prev=self->head;
        litem_209->next=((void*)0);
        litem_209->item=item;
        self->tail=litem_209;
        self->head->next=litem_209;
    }
    else {
        litem_210=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1486, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_210->prev=self->tail;
        litem_210->next=((void*)0);
        litem_210->item=item;
        self->tail->next=litem_210;
        self->tail=litem_210;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_211;
struct list_item$1float$* prev_it_212;
    it_211=self->head;
    while(it_211!=((void*)0)) {
        prev_it_212=it_211;
        it_211=it_211->next;
        come_call_finalizer3(prev_it_212,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_213;
struct list$1double$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_213=0;    i_213<num_value;    i_213++    ){
        list$1double$$p_push_back(self,values[i_213]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__116,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__116;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_214;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_215;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_216;
struct list$1double$* __result_obj__115;
    if(    self->len==0) {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1466, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=((void*)0);
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail=litem_214;
        self->head=litem_214;
    }
    else if(    self->len==1) {
        litem_215=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1476, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_215->prev=self->head;
        litem_215->next=((void*)0);
        litem_215->item=item;
        self->tail=litem_215;
        self->head->next=litem_215;
    }
    else {
        litem_216=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1486, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_216->prev=self->tail;
        litem_216->next=((void*)0);
        litem_216->item=item;
        self->tail->next=litem_216;
        self->tail=litem_216;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_217;
struct list_item$1double$* prev_it_218;
    it_217=self->head;
    while(it_217!=((void*)0)) {
        prev_it_218=it_217;
        it_217=it_217->next;
        come_call_finalizer3(prev_it_218,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_219;
struct vector$1char$* __result_obj__119;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2283, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_219=0;    i_219<num_value;    i_219++    ){
        vector$1char$$p_add(self,values[i_219]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__119,vector$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__119;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_220;
char* items_221;
void* __right_value128 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__118;
memset(&i_222, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_220=self->size*2;
        items_221=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_220)), "./comelang.h", 2410, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_222=0;        i_222<self->size;        i_222++        ){
            self->items[i_222]=items_221[i_222];
        }
        self->size=new_size_220;
        come_free(items_221);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_224;
struct vector$1char$p* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2283, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_224=0;    i_224<num_value;    i_224++    ){
        vector$1char$p$p_add(self,values[i_224]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__122;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_225;
char** items_226;
void* __right_value132 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__121;
memset(&i_227, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_225=self->size*2;
        items_226=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_225)), "./comelang.h", 2410, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_227=0;        i_227<self->size;        i_227++        ){
            self->items[i_227]=items_226[i_227];
        }
        self->size=new_size_225;
        come_free(items_226);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_228;
    if(    0) {
        for(        i_228=0;        i_228<self->len;        i_228++        ){
            (self->items[i_228] = come_decrement_ref_count(self->items[i_228], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_229;
struct vector$1short$* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2283, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_229=0;    i_229<num_value;    i_229++    ){
        vector$1short$$p_add(self,values[i_229]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__125;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_230;
short* items_231;
void* __right_value136 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__124;
memset(&i_232, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_230=self->size*2;
        items_231=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_230)), "./comelang.h", 2410, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_232=0;        i_232<self->size;        i_232++        ){
            self->items[i_232]=items_231[i_232];
        }
        self->size=new_size_230;
        come_free(items_231);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_233;
    if(    0) {
        for(        i_233=0;        i_233<self->len;        i_233++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_234;
struct vector$1int$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2283, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_234=0;    i_234<num_value;    i_234++    ){
        vector$1int$$p_add(self,values[i_234]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__128;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_235;
int* items_236;
void* __right_value140 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__127;
memset(&i_237, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_235=self->size*2;
        items_236=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_235)), "./comelang.h", 2410, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_237=0;        i_237<self->size;        i_237++        ){
            self->items[i_237]=items_236[i_237];
        }
        self->size=new_size_235;
        come_free(items_236);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_238;
    if(    0) {
        for(        i_238=0;        i_238<self->len;        i_238++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_239;
struct vector$1long$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2283, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_239=0;    i_239<num_value;    i_239++    ){
        vector$1long$$p_add(self,values[i_239]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__131;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_240;
long* items_241;
void* __right_value144 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__130;
memset(&i_242, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_240=self->size*2;
        items_241=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_240)), "./comelang.h", 2410, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_242=0;        i_242<self->size;        i_242++        ){
            self->items[i_242]=items_241[i_242];
        }
        self->size=new_size_240;
        come_free(items_241);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_243;
    if(    0) {
        for(        i_243=0;        i_243<self->len;        i_243++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_244;
struct vector$1float$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2283, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_244=0;    i_244<num_value;    i_244++    ){
        vector$1float$$p_add(self,values[i_244]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__134;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_245;
float* items_246;
void* __right_value148 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__133;
memset(&i_247, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_245=self->size*2;
        items_246=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_245)), "./comelang.h", 2410, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_247=0;        i_247<self->size;        i_247++        ){
            self->items[i_247]=items_246[i_247];
        }
        self->size=new_size_245;
        come_free(items_246);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_248;
    if(    0) {
        for(        i_248=0;        i_248<self->len;        i_248++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_249;
struct vector$1double$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2283, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_249=0;    i_249<num_value;    i_249++    ){
        vector$1double$$p_add(self,values[i_249]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_250;
double* items_251;
void* __right_value152 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__136;
memset(&i_252, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_250=self->size*2;
        items_251=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_250)), "./comelang.h", 2410, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_252=0;        i_252<self->size;        i_252++        ){
            self->items[i_252]=items_251[i_252];
        }
        self->size=new_size_250;
        come_free(items_251);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_253;
    if(    0) {
        for(        i_253=0;        i_253<self->len;        i_253++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__175,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_287;
struct list_item$1char$ph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        come_call_finalizer3(prev_it_288,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_293;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_294;
char* __dec_obj22;
struct list$1char$ph* __result_obj__177;
    if(    self->len==0) {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1466, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=((void*)0);
        litem_292->next=((void*)0);
        __dec_obj20=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_292;
        self->head=litem_292;
    }
    else if(    self->len==1) {
        litem_293=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1476, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_293->prev=self->head;
        litem_293->next=((void*)0);
        __dec_obj21=litem_293->item;
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_293;
        self->head->next=litem_293;
    }
    else {
        litem_294=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1486, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_294->prev=self->tail;
        litem_294->next=((void*)0);
        __dec_obj22=litem_294->item;
        litem_294->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_294;
        self->tail=litem_294;
    }
    self->len++;
    __result_obj__177 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sClass* klass_347;
void* __right_value260 = (void*)0;
struct sType* type_357;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sClass* generics_class_361;
void* __right_value263 = (void*)0;
_Bool generics_type_name_362;
void* __right_value264 = (void*)0;
_Bool mgenerics_type_name_368;
    klass_347=((struct sClass*)(__right_value259=map$2char$phsClass$ph$p_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value259,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type_357=((struct sType*)(__right_value260=map$2char$phsType$ph$p_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value260,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_class_361=((struct sClass*)(__right_value262=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value261=__builtin_string(buf))))));
    (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value262,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    generics_type_name_362=list$1char$ph$p_contained(info->generics_type_names,((char*)(__right_value263=__builtin_string(buf))));
    (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    mgenerics_type_name_368=list$1char$ph$p_contained(info->method_generics_type_names,((char*)(__right_value264=__builtin_string(buf))));
    (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    gComeC) {
        return (type_357&&type_357->mTypedef)||(klass_347&&klass_347->mNumber)||(klass_347&&klass_347->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_361||generics_type_name_362||mgenerics_type_name_368||klass_347||type_357||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_348;
unsigned int hash_349;
unsigned int it_350;
struct sClass* __result_obj__234;
struct sClass* __result_obj__235;
struct sClass* __result_obj__236;
struct sClass* __result_obj__237;
default_value_348 = (void*)0;
    memset(&default_value_348,0,sizeof(struct sClass*));
    hash_349=string_get_hash_key(((char*)key))%self->size;
    it_350=hash_349;
    while((_Bool)1) {
        if(        self->item_existance[it_350]) {
            if(            string_equals(self->keys[it_350],key)) {
                __result_obj__234 = come_increment_ref_count(self->items[it_350]);
                come_call_finalizer3(default_value_348,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__234,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__234;
            }
            it_350++;
            if(            it_350>=self->size) {
                it_350=0;
            }
            else if(            it_350==hash_349) {
                __result_obj__235 = come_increment_ref_count(default_value_348);
                come_call_finalizer3(default_value_348,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__235,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__235;
            }
        }
        else {
            __result_obj__236 = come_increment_ref_count(default_value_348);
            come_call_finalizer3(default_value_348,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__236,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__236;
        }
    }
    __result_obj__237 = come_increment_ref_count(default_value_348);
    come_call_finalizer3(default_value_348,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__237,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_351;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_352;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_353;
struct list_item$1sType$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_355;
struct list_item$1sNode$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char* key){
struct sType* default_value_358;
unsigned int hash_359;
unsigned int it_360;
struct sType* __result_obj__238;
struct sType* __result_obj__239;
struct sType* __result_obj__240;
struct sType* __result_obj__241;
default_value_358 = (void*)0;
    memset(&default_value_358,0,sizeof(struct sType*));
    hash_359=string_get_hash_key(((char*)key))%self->size;
    it_360=hash_359;
    while((_Bool)1) {
        if(        self->item_existance[it_360]) {
            if(            string_equals(self->keys[it_360],key)) {
                __result_obj__238 = come_increment_ref_count(self->items[it_360]);
                come_call_finalizer3(default_value_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__238,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__238;
            }
            it_360++;
            if(            it_360>=self->size) {
                it_360=0;
            }
            else if(            it_360==hash_359) {
                __result_obj__239 = come_increment_ref_count(default_value_358);
                come_call_finalizer3(default_value_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__239;
            }
        }
        else {
            __result_obj__240 = come_increment_ref_count(default_value_358);
            come_call_finalizer3(default_value_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
    }
    __result_obj__241 = come_increment_ref_count(default_value_358);
    come_call_finalizer3(default_value_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__241,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static _Bool list$1char$ph$p_contained(struct list$1char$ph* self, char* item){
char* it_365;
    for(    it_365=list$1char$ph$p_begin(self);    !list$1char$ph$p_end(self);    it_365=list$1char$ph$p_next(self)    ){
        if(        string_equals(it_365,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_363;
char* __result_obj__242;
char* __result_obj__243;
char* result_364;
char* __result_obj__244;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_363,0,sizeof(char*));
        __result_obj__242 = result_363;
        return __result_obj__242;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__243 = self->it->item;
        return __result_obj__243;
    }
    memset(&result_364,0,sizeof(char*));
    __result_obj__244 = result_364;
    return __result_obj__244;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_366;
char* __result_obj__245;
char* __result_obj__246;
char* result_367;
char* __result_obj__247;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result_obj__245 = result_366;
        return __result_obj__245;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__246 = self->it->item;
        return __result_obj__246;
    }
    memset(&result_367,0,sizeof(char*));
    __result_obj__247 = result_367;
    return __result_obj__247;
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sType$ph* o2_saved_369;
struct sType* it_372;
_Bool __result_obj__254;
    for(    o2_saved_369=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_372=list$1sType$ph$p_begin((o2_saved_369));    !list$1sType$ph$p_end((o2_saved_369));    it_372=list$1sType$ph$p_next((o2_saved_369))    ){
        if(        is_contained_generics_class(it_372,info)) {
            __result_obj__254 = (_Bool)1;
            come_call_finalizer3(o2_saved_369,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__254;
        }
    }
    come_call_finalizer3(o2_saved_369,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_370;
struct sType* __result_obj__248;
struct sType* __result_obj__249;
struct sType* result_371;
struct sType* __result_obj__250;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_370,0,sizeof(struct sType*));
        __result_obj__248 = result_370;
        return __result_obj__248;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__249 = self->it->item;
        return __result_obj__249;
    }
    memset(&result_371,0,sizeof(struct sType*));
    __result_obj__250 = result_371;
    return __result_obj__250;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_373;
struct sType* __result_obj__251;
struct sType* __result_obj__252;
struct sType* result_374;
struct sType* __result_obj__253;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_373,0,sizeof(struct sType*));
        __result_obj__251 = result_373;
        return __result_obj__251;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__252 = self->it->item;
        return __result_obj__252;
    }
    memset(&result_374,0,sizeof(struct sType*));
    __result_obj__253 = result_374;
    return __result_obj__253;
}

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sType$ph* param_types_375;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1char$ph* param_names_376;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1char$ph* param_default_parametors_377;
_Bool var_args_378;
void* __right_value274 = (void*)0;
void* __right_value310 = (void*)0;
struct sType* type__382;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
_Bool void_param_403;
char* p_404;
int sline_405;
void* __right_value313 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* param_type_406=0;
char* param_name_407=0;
_Bool err_408=0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__273;
void* __right_value320 = (void*)0;
struct sType* param_type2_419;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* p_423;
_Bool no_comma_424;
void* __right_value326 = (void*)0;
struct sNode* node_425;
char* p2_426;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__275;
    param_types_375=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 75, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_names_376=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 76, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_default_parametors_377=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05type.c", 77, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    var_args_378=(_Bool)0;
    if(    in_constructor_) {
        list$1char$ph$p_add(param_names_376,(char*)come_increment_ref_count(xsprintf("self")));
        type__382=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        type__382->mHeap=(_Bool)1;
        list$1sType$ph$p_add(param_types_375,(struct sType*)come_increment_ref_count(type__382));
        list$1char$ph$p_add(param_default_parametors_377,((void*)0));
        come_call_finalizer3(type__382,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->in_class) {
        list$1char$ph$p_add(param_names_376,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sType$ph$p_add(param_types_375,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type)));
        list$1char$ph$p_add(param_default_parametors_377,((void*)0));
    }
    expected_next_character(40,info);
    void_param_403=(_Bool)0;
    {
        p_404=info->p;
        sline_405=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_403=(_Bool)1;
            }
        }
        info->p=p_404;
        info->sline=sline_405;
    }
    if(    void_param_403) {
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
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value313=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_406=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_407=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_408=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value313,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_408) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result_obj__273 = come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value319=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 139, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$", tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals)),(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)((void*)0)),(_Bool)0))));
                come_call_finalizer3(param_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_407 = come_decrement_ref_count(param_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_types_375,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_names_376,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(param_default_parametors_377,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value319,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__273,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__273;
            }
            param_type2_419=(struct sType*)come_increment_ref_count(solve_generics(param_type_406,info->generics_type,info));
            list$1sType$ph$p_push_back(param_types_375,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_419)));
            list$1char$ph$p_push_back(param_names_376,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_407)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_423=info->p;
                no_comma_424=info->no_comma;
                info->no_comma=(_Bool)1;
                node_425=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_424;
                p2_426=info->p;
                char buf_427[p2_426-p_423+1];
                memset(&buf_427, 0, sizeof(char)                *(p2_426-p_423+1)                );
                memcpy(buf_427,p_423,p2_426-p_423);
                buf_427[p2_426-p_423]=0;
                list$1char$ph$p_push_back(param_default_parametors_377,(char*)come_increment_ref_count(__builtin_string(buf_427)));
                ((node_425) ? node_425 = come_decrement_ref_count(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                list$1char$ph$p_push_back(param_default_parametors_377,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_378=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_407 = come_decrement_ref_count(param_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(param_type2_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (param_name_407 = come_decrement_ref_count(param_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(param_type2_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            come_call_finalizer3(param_type_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (param_name_407 = come_decrement_ref_count(param_name_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_type2_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __result_obj__275 = come_increment_ref_count(((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value329=tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$**)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "05type.c", 197, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$", tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key, tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals)),(struct list$1sType$ph*)come_increment_ref_count(param_types_375),(struct list$1char$ph*)come_increment_ref_count(param_names_376),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_377),var_args_378))));
    come_call_finalizer3(param_types_375,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_names_376,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(param_default_parametors_377,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value329,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__275,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__255;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__255 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__255,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value271 = (void*)0;
struct list_item$1char$ph* litem_379;
char* __dec_obj23;
void* __right_value272 = (void*)0;
struct list_item$1char$ph* litem_380;
char* __dec_obj24;
void* __right_value273 = (void*)0;
struct list_item$1char$ph* litem_381;
char* __dec_obj25;
struct list$1char$ph* __result_obj__256;
    if(    self->len==0) {
        litem_379=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value271=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1396, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj23=litem_379->item;
        litem_379->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value272=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1406, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj24=litem_380->item;
        litem_380->item=(char*)come_increment_ref_count(item);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value273=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1416, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj25=litem_381->item;
        litem_381->item=(char*)come_increment_ref_count(item);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result_obj__256 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__256;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__257;
void* __right_value275 = (void*)0;
struct sType* result_383;
void* __right_value276 = (void*)0;
struct sType* __dec_obj26;
void* __right_value277 = (void*)0;
struct sType* __dec_obj27;
void* __right_value285 = (void*)0;
struct list$1sType$ph* __dec_obj31;
void* __right_value286 = (void*)0;
struct sType* __dec_obj32;
void* __right_value287 = (void*)0;
struct sType* __dec_obj33;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj35;
void* __right_value291 = (void*)0;
char* __dec_obj36;
void* __right_value292 = (void*)0;
char* __dec_obj37;
void* __right_value293 = (void*)0;
char* __dec_obj38;
void* __right_value301 = (void*)0;
struct list$1sNode$ph* __dec_obj42;
void* __right_value302 = (void*)0;
char* __dec_obj43;
void* __right_value303 = (void*)0;
struct list$1sType$ph* __dec_obj44;
void* __right_value308 = (void*)0;
struct list$1char$ph* __dec_obj45;
void* __right_value309 = (void*)0;
struct sType* __dec_obj46;
struct sType* __result_obj__269;
    if(    self==(void*)0) {
        __result_obj__257 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__257,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__257;
    }
    result_383=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_383->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj26=result_383->mOriginalLoadVarType;
        result_383->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj27=result_383->mChannelType;
        result_383->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj31=result_383->mGenericsTypes;
        result_383->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj31,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj32=result_383->mNoSolvedGenericsType;
        result_383->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj33=result_383->mAnyOriginalType;
        result_383->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj34=result_383->mSizeNum;
        result_383->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj35=result_383->mAlignas;
        result_383->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj36=result_383->mTupleName;
        result_383->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj37=result_383->mAttribute;
        result_383->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_383->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_383->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_383->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_383->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_383->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_383->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_383->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_383->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_383->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_383->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_383->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_383->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_383->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_383->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_383->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_383->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_383->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_383->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_383->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_383->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_383->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_383->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_383->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_383->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_383->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj38=result_383->mAsmName;
        result_383->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_383->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_383->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj42=result_383->mArrayNum;
        result_383->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj42,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_383->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_383->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_383->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_383->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj43=result_383->mOriginalTypeName;
        result_383->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_383->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_383->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_383->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj44=result_383->mParamTypes;
        result_383->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj44,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj45=result_383->mParamNames;
        result_383->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj46=result_383->mResultType;
        result_383->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->mVarArgs=self->mVarArgs;
    }
    __result_obj__269 = come_increment_ref_count(result_383);
    come_call_finalizer3(result_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__269,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__258;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1sType$ph* result_384;
struct list_item$1sType$ph* it_385;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sType$ph* __result_obj__260;
    if(    self==((void*)0)) {
        __result_obj__258 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__258,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__258;
    }
    result_384=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1377, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_385=self->head;
    while(it_385!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_384,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_385->item)));
        }
        else {
            list$1sType$ph$p_add(result_384,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_385->item)));
        }
        it_385=it_385->next;
    }
    __result_obj__260 = come_increment_ref_count(result_384);
    come_call_finalizer3(result_384,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__260,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value280 = (void*)0;
struct list_item$1sType$ph* litem_386;
struct sType* __dec_obj28;
void* __right_value281 = (void*)0;
struct list_item$1sType$ph* litem_387;
struct sType* __dec_obj29;
void* __right_value282 = (void*)0;
struct list_item$1sType$ph* litem_388;
struct sType* __dec_obj30;
struct list$1sType$ph* __result_obj__259;
    if(    self->len==0) {
        litem_386=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value280=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1396, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj28=litem_386->item;
        litem_386->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value281=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1406, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj29=litem_387->item;
        litem_387->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value282=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1416, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj30=litem_388->item;
        litem_388->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result_obj__259 = self;
    come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_389;
struct list_item$1sType$ph* prev_it_390;
    it_389=self->head;
    while(it_389!=((void*)0)) {
        prev_it_390=it_389;
        it_389=it_389->next;
        come_call_finalizer3(prev_it_390,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__261;
void* __right_value288 = (void*)0;
struct sNode* result_391;
struct sNode* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = come_increment_ref_count((void*)0);
        ((__result_obj__261) ? __result_obj__261 = come_decrement_ref_count(__result_obj__261, ((struct sNode*)__result_obj__261)->finalize, ((struct sNode*)__result_obj__261)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
    ((result_391) ? result_391 = come_decrement_ref_count(result_391, ((struct sNode*)result_391)->finalize, ((struct sNode*)result_391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__262) ? __result_obj__262 = come_decrement_ref_count(__result_obj__262, ((struct sNode*)__result_obj__262)->finalize, ((struct sNode*)__result_obj__262)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__262;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__263;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1sNode$ph* result_392;
struct list_item$1sNode$ph* it_393;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1sNode$ph* __result_obj__266;
    if(    self==((void*)0)) {
        __result_obj__263 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__263,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__263;
    }
    result_392=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1377, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
    come_call_finalizer3(result_392,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__266,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__264;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__264 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__264,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value296 = (void*)0;
struct list_item$1sNode$ph* litem_394;
struct sNode* __dec_obj39;
void* __right_value297 = (void*)0;
struct list_item$1sNode$ph* litem_395;
struct sNode* __dec_obj40;
void* __right_value298 = (void*)0;
struct list_item$1sNode$ph* litem_396;
struct sNode* __dec_obj41;
struct list$1sNode$ph* __result_obj__265;
    if(    self->len==0) {
        litem_394=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value296=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1396, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=((void*)0);
        litem_394->next=((void*)0);
        __dec_obj39=litem_394->item;
        litem_394->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_394;
        self->head=litem_394;
    }
    else if(    self->len==1) {
        litem_395=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value297=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1406, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_395->prev=self->head;
        litem_395->next=((void*)0);
        __dec_obj40=litem_395->item;
        litem_395->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_395;
        self->head->next=litem_395;
    }
    else {
        litem_396=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value298=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1416, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_396->prev=self->tail;
        litem_396->next=((void*)0);
        __dec_obj41=litem_396->item;
        litem_396->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail->next=litem_396;
        self->tail=litem_396;
    }
    self->len++;
    __result_obj__265 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__265;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_397;
struct list_item$1sNode$ph* prev_it_398;
    it_397=self->head;
    while(it_397!=((void*)0)) {
        prev_it_398=it_397;
        it_397=it_397->next;
        come_call_finalizer3(prev_it_398,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__267;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct list$1char$ph* result_399;
struct list_item$1char$ph* it_400;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __result_obj__268;
    if(    self==((void*)0)) {
        __result_obj__267 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__267,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__267;
    }
    result_399=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1377, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
    __result_obj__268 = come_increment_ref_count(result_399);
    come_call_finalizer3(result_399,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__268,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_401;
struct list_item$1char$ph* prev_it_402;
    it_401=self->head;
    while(it_401!=((void*)0)) {
        prev_it_402=it_401;
        it_401=it_401->next;
        come_call_finalizer3(prev_it_402,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__270;
void* __right_value314 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* result_409;
void* __right_value315 = (void*)0;
struct list$1sType$ph* __dec_obj47;
void* __right_value316 = (void*)0;
struct list$1char$ph* __dec_obj48;
void* __right_value317 = (void*)0;
struct list$1char$ph* __dec_obj49;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__271;
    if(    self==(void*)0) {
        __result_obj__270 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__270,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__270;
    }
    result_409=(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_increment_ref_count((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)come_calloc(1, sizeof(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$)*(1), "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_clone", 3, "struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj47=result_409->v1;
        result_409->v1=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->v1));
        come_call_finalizer3(__dec_obj47,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_409->v2;
        result_409->v2=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v2));
        come_call_finalizer3(__dec_obj48,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj49=result_409->v3;
        result_409->v3=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->v3));
        come_call_finalizer3(__dec_obj49,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_409->v4=self->v4;
    }
    __result_obj__271 = come_increment_ref_count(result_409);
    come_call_finalizer3(result_409,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__271,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static unsigned int tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_get_hash_key(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
unsigned int result_410;
    result_410=0;
    result_410+=int_get_hash_key(((int)self->v1));
    result_410+=int_get_hash_key(((int)self->v2));
    result_410+=int_get_hash_key(((int)self->v3));
    result_410+=int_get_hash_key(((int)self->v4));
    return result_410;
}

static _Bool tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_equals(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* left, struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* right){
    if(    !list$1sType$ph$p_equals(left->v1,right->v1)) {
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

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_411;
struct list_item$1sType$ph* it2_412;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_411=left->head;
    it2_412=right->head;
    while(it_411!=((void*)0)) {
        if(        !sType_equals(it_411->item,it2_412->item)) {
            return (_Bool)0;
        }
        it_411=it_411->next;
        it2_412=it2_412->next;
    }
    return (_Bool)1;
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
    if(    !list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_413;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_414;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_413=left->head;
    it2_414=right->head;
    while(it_413!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_413->item,it2_414->item)) {
            return (_Bool)0;
        }
        it_413=it_413->next;
        it2_414=it2_414->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_415;
struct list_item$1sNode$ph* it2_416;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_415=left->head;
    it2_416=right->head;
    while(it_415!=((void*)0)) {
        if(        !sNode_equals(it_415->item,it2_416->item)) {
            return (_Bool)0;
        }
        it_415=it_415->next;
        it2_416=it2_416->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_417;
struct list_item$1char$ph* it2_418;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_417=left->head;
    it2_418=right->head;
    while(it_417!=((void*)0)) {
        if(        !string_equals(it_417->item,it2_418->item)) {
            return (_Bool)0;
        }
        it_417=it_417->next;
        it2_418=it2_418->next;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$_initialize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self, struct list$1sType$ph* v1, struct list$1char$ph* v2, struct list$1char$ph* v3, _Bool v4){
struct list$1sType$ph* __dec_obj50;
struct list$1char$ph* __dec_obj51;
struct list$1char$ph* __dec_obj52;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* __result_obj__272;
    __dec_obj50=self->v1;
    self->v1=(struct list$1sType$ph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj50,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj51=self->v2;
    self->v2=(struct list$1char$ph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj52=self->v3;
    self->v3=(struct list$1char$ph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj52,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->v4=v4;
    __result_obj__272 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__272,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value321 = (void*)0;
struct list_item$1sType$ph* litem_420;
struct sType* __dec_obj53;
void* __right_value322 = (void*)0;
struct list_item$1sType$ph* litem_421;
struct sType* __dec_obj54;
void* __right_value323 = (void*)0;
struct list_item$1sType$ph* litem_422;
struct sType* __dec_obj55;
struct list$1sType$ph* __result_obj__274;
    if(    self->len==0) {
        litem_420=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value321=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1466, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=((void*)0);
        litem_420->next=((void*)0);
        __dec_obj53=litem_420->item;
        litem_420->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_420;
        self->head=litem_420;
    }
    else if(    self->len==1) {
        litem_421=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value322=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1476, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->head;
        litem_421->next=((void*)0);
        __dec_obj54=litem_421->item;
        litem_421->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_421;
        self->head->next=litem_421;
    }
    else {
        litem_422=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value323=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1486, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_422->prev=self->tail;
        litem_422->next=((void*)0);
        __dec_obj55=litem_422->item;
        litem_422->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_422;
        self->tail=litem_422;
    }
    self->len++;
    __result_obj__274 = self;
    come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value330 = (void*)0;
struct sType* left_type2_428;
void* __right_value331 = (void*)0;
struct sType* right_type2_429;
struct sType* left_no_solved_generics_type_430;
struct sType* right_no_solved_generics_type_431;
struct sClass* left_class_432;
struct sClass* right_class_433;
_Bool parent_class_434;
void* __right_value332 = (void*)0;
_Bool __null_value1;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__277;
_Bool __null_value2;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__278;
struct sClass* klass_435;
_Bool flag__436;
void* __right_value339 = (void*)0;
_Bool __null_value3;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__279;
_Bool __null_value4;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__280;
_Bool __null_value5;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__281;
void* __right_value349 = (void*)0;
char* left_type3_437;
void* __right_value350 = (void*)0;
char* __dec_obj57;
void* __right_value351 = (void*)0;
struct sType* __dec_obj58;
void* __right_value352 = (void*)0;
struct sType* __dec_obj59;
_Bool __null_value6;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__282;
void* __right_value356 = (void*)0;
char* left_type3_438;
void* __right_value357 = (void*)0;
char* __dec_obj60;
void* __right_value358 = (void*)0;
struct sType* __dec_obj61;
void* __right_value359 = (void*)0;
struct sType* __dec_obj62;
_Bool __null_value7;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__283;
_Bool __null_value8;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__284;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__286;
int i_439;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_443=0;
char* Err_444=0;
_Bool _if_conditional1;
_Bool __null_value9;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__289;
void* __right_value374 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var3 = (void*)0;
_Bool come_exception_var_2_445=0;
char* Err_446=0;
_Bool _if_conditional2;
_Bool __null_value10;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__290;
_Bool __null_value11;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__291;
_Bool __null_value12;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__292;
void* __right_value384 = (void*)0;
char* left_type3_447;
void* __right_value385 = (void*)0;
char* __dec_obj63;
void* __right_value386 = (void*)0;
struct sType* __dec_obj64;
void* __right_value387 = (void*)0;
struct sType* __dec_obj65;
_Bool __null_value13;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__293;
void* __right_value391 = (void*)0;
char* left_type3_448;
void* __right_value392 = (void*)0;
char* __dec_obj66;
void* __right_value393 = (void*)0;
struct sType* __dec_obj67;
void* __right_value394 = (void*)0;
struct sType* __dec_obj68;
_Bool __null_value14;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__294;
void* __right_value398 = (void*)0;
char* __dec_obj69;
void* __right_value399 = (void*)0;
struct sType* __dec_obj70;
void* __right_value400 = (void*)0;
struct sType* __dec_obj71;
_Bool __null_value15;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__295;
void* __right_value404 = (void*)0;
char* left_type3_449;
void* __right_value405 = (void*)0;
char* __dec_obj72;
void* __right_value406 = (void*)0;
struct sType* __dec_obj73;
void* __right_value407 = (void*)0;
struct sType* __dec_obj74;
_Bool __null_value16;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__296;
void* __right_value411 = (void*)0;
char* left_type3_450;
void* __right_value412 = (void*)0;
char* __dec_obj75;
void* __right_value413 = (void*)0;
struct sType* __dec_obj76;
void* __right_value414 = (void*)0;
struct sType* __dec_obj77;
_Bool __null_value17;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__297;
_Bool __null_value18;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__298;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__299;
_Bool __null_value19;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__300;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__301;
_Bool __null_value20;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__302;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__303;
_Bool __null_value21;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__304;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__305;
_Bool __null_value22;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__306;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__307;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* buf2_451;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* __dec_obj78;
void* __right_value451 = (void*)0;
struct sType* __dec_obj79;
void* __right_value452 = (void*)0;
struct sType* __dec_obj80;
_Bool __null_value23;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__308;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__309;
_Bool __null_value24;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__310;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__311;
_Bool __null_value25;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__312;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__313;
_Bool __null_value26;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__314;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__315;
_Bool __null_value27;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__316;
void* __right_value476 = (void*)0;
char* tmp_452;
void* __right_value477 = (void*)0;
char* __dec_obj81;
void* __right_value478 = (void*)0;
struct sType* __dec_obj82;
void* __right_value479 = (void*)0;
struct sType* __dec_obj83;
_Bool __null_value28;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__317;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__318;
_Bool __null_value29;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__319;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__320;
void* __right_value490 = (void*)0;
char* tmp_453;
void* __right_value491 = (void*)0;
char* __dec_obj84;
void* __right_value492 = (void*)0;
struct sType* __dec_obj85;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__321;
_Bool __null_value30;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__322;
int i_454;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_455=0;
char* Err_456=0;
_Bool _if_conditional3;
_Bool __null_value31;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__323;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple2$2bool$char$ph* __result_obj__324;
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
    left_type2_428=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
    right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_430=((void*)0);
    if(    left_type2_428->mNoSolvedGenericsType) {
        left_no_solved_generics_type_430=left_type2_428->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_431=((void*)0);
    if(    right_type2_429->mNoSolvedGenericsType) {
        right_no_solved_generics_type_431=right_type2_429->mNoSolvedGenericsType;
    }
    left_class_432=left_type2_428->mClass;
    right_class_433=right_type2_429->mClass;
    parent_class_434=(_Bool)0;
    if(    string_operator_not_equals(left_class_432->mName,right_class_433->mName)) {
        while(left_class_432&&right_class_433) {
            if(            string_operator_equals(left_class_432->mName,right_class_433->mName)) {
                parent_class_434=(_Bool)1;
            }
            if(            right_class_433->mParentClassName) {
                right_class_433=((struct sClass*)(__right_value332=map$2char$phsClass$ph$p_operator_load_element(info->classes,right_class_433->mParentClassName)));
                come_call_finalizer3(__right_value332,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                right_class_433=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type2_428->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            string_operator_equals(left_type2_428->mClass->mName,"lambda")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__277 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value335=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 243, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value1,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value335,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__277,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__277;
            }
        }
        else if(        left_type2_428->mPointerNum==0&&right_type->mPointerNum>0) {
            if(            list$1sNode$ph$p_length(left_type2_428->mArrayNum)>0) {
            }
            else if(            string_operator_equals(left_type2_428->mClass->mName,"lambda")||string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__278 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value338=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 258, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value2,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value338,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__278,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__278;
            }
        }
        else if(        left_type2_428->mPointerNum>0&&right_type->mPointerNum>0) {
            klass_435=right_type->mClass;
            flag__436=(_Bool)0;
            while(klass_435) {
                if(                string_operator_equals(klass_435->mName,left_type2_428->mClass->mName)) {
                    flag__436=(_Bool)1;
                }
                if(                klass_435->mParentClassName) {
                    klass_435=((struct sClass*)(__right_value339=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_435->mParentClassName)));
                    come_call_finalizer3(__right_value339,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    klass_435=((void*)0);
                }
            }
            if(            string_operator_equals(left_type2_428->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_428->mClass->mName,"lambda")) {
            }
            else if(            left_type2_428->mException) {
            }
            else if(            left_no_solved_generics_type_430&&right_no_solved_generics_type_431&&(list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes)>0||list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes)>0)) {
            }
            else if(            strlen(left_type2_428->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_428->mClass->mName,"tuple",strlen("tuple"))==0&&(strlen(right_type->mClass->mName)>=strlen("tuple"))) {
            }
            else if(            string_operator_equals(right_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type2_428->mClass->mName,right_type->mClass->mName)&&!flag__436) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                    info->err_num++;
                    __result_obj__279 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value342=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 300, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value3,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value342,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__279,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__279;
                }
            }
        }
    }
    if(    left_no_solved_generics_type_430&&right_no_solved_generics_type_431) {
        if(        strlen(left_type2_428->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_428->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is tuple, right type is none tuple\n");
                info->err_num++;
                __result_obj__280 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value345=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 319, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value4,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value345,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__280,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__280;
            }
        }
        else if(        right_type->mPointerNum==0&&left_type2_428->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_428->mClass->mNumber&&left_type2_428->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes),left_no_solved_generics_type_430->mClass->mName,left_type2_428->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes),right_no_solved_generics_type_431->mClass->mName,right_type2_429->mClass->mName);
                    info->err_num++;
                    __result_obj__281 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value348=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 333, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value5,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value348,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__281,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__281;
                }
            }
            else {
                left_type3_437=(char*)come_increment_ref_count(make_type_name_string(left_type2_428,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj57=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_437,come_value->c_value));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj58=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
                come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj59=right_type2_429;
                right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
                come_call_finalizer3(__dec_obj59,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_437 = come_decrement_ref_count(left_type3_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_428->mClass->mFloat&&left_type2_428->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes),left_no_solved_generics_type_430->mClass->mName,left_type2_428->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes),right_no_solved_generics_type_431->mClass->mName,right_type2_429->mClass->mName);
                    info->err_num++;
                    __result_obj__282 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value355=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 354, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value6,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value355,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__282,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__282;
                }
            }
            else {
                left_type3_438=(char*)come_increment_ref_count(make_type_name_string(left_type2_428,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj60=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_438,come_value->c_value));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj61=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj62=right_type2_429;
                right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
                come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (left_type3_438 = come_decrement_ref_count(left_type3_438, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)&&left_type2_428->mPointerNum==right_type2_429->mPointerNum) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"void")&&left_type2_428->mPointerNum>0&&string_operator_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)&&(left_type2_428->mPointerNum!=right_type2_429->mPointerNum||left_type2_428->mHeap!=right_type2_429->mHeap)) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)&&(left_type2_428->mPointerNum!=right_type2_429->mPointerNum||left_type2_428->mHeap!=right_type2_429->mHeap)) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type class_name %s\n",left_type2_428->mClass->mName);
            printf("right type class_name %s\n",right_type2_429->mClass->mName);
            printf("left type pointernum %d\n",left_type2_428->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type2_428->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes),left_no_solved_generics_type_430->mClass->mName,left_type2_428->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes),right_no_solved_generics_type_431->mClass->mName,right_type2_429->mClass->mName);
            info->err_num++;
            __result_obj__283 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value362=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 383, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value7,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value362,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__283,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__283;
        }
        else if(        list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_430->mClass->mName,"void")&&left_no_solved_generics_type_430->mPointerNum>0&&right_no_solved_generics_type_431->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_431->mClass->mName,"void")&&right_no_solved_generics_type_431->mPointerNum>0&&left_no_solved_generics_type_430->mPointerNum>0)) {
            }
            else {
                if(                list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes)!=list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes),left_no_solved_generics_type_430->mClass->mName,left_type2_428->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes),right_no_solved_generics_type_431->mClass->mName,right_type2_429->mClass->mName);
                        info->err_num++;
                        __result_obj__284 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value365=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 399, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value8,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__right_value365,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__result_obj__284,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__284;
                    }
                    __result_obj__286 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value367=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 402, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value367,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__286,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__286;
                }
                for(                i_439=0;                i_439<list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes);                i_439++                ){
                    multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value370=check_assign_type(msg,((struct sType*)(__right_value368=list$1sType$ph$p_operator_load_element(left_no_solved_generics_type_430->mGenericsTypes,i_439))),((struct sType*)(__right_value369=list$1sType$ph$p_operator_load_element(right_no_solved_generics_type_431->mGenericsTypes,i_439))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_1_443=multiple_assign_var2->v1;
                    Err_444=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                    if(                    (_if_conditional1=(Err_444)),                    come_call_finalizer3(__right_value368,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    come_call_finalizer3(__right_value369,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    come_call_finalizer3(__right_value370,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional1) {
                        __result_obj__289 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value373=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 407, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value9,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        (Err_444 = come_decrement_ref_count(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__right_value373,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__result_obj__289,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__289;
                    }
                    else {
                    }
                    (Err_444 = come_decrement_ref_count(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                multiple_assign_var3=((struct tuple2$2bool$char$ph*)(__right_value374=check_assign_type(msg,left_no_solved_generics_type_430,right_no_solved_generics_type_431,come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_2_445=multiple_assign_var3->v1;
                Err_446=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_446)),                come_call_finalizer3(__right_value374,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__290 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value377=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 412, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value10,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_446 = come_decrement_ref_count(Err_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value377,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__290,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__290;
                }
                else {
                }
                (Err_446 = come_decrement_ref_count(Err_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    strlen(left_type2_428->mClass->mName)>=strlen("tuple")&&memcmp(left_type2_428->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is tuple, right type is none tuple\n");
            info->err_num++;
            __result_obj__291 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value380=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 429, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value11,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value380,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__291,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__291;
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_428->mClass->mNumber&&left_type2_428->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes),left_no_solved_generics_type_430->mClass->mName,left_type2_428->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes),right_no_solved_generics_type_431->mClass->mName,right_type2_429->mClass->mName);
                info->err_num++;
                __result_obj__292 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value383=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 441, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value12,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value383,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__292,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__292;
            }
        }
        else {
            left_type3_447=(char*)come_increment_ref_count(make_type_name_string(left_type2_428,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj63=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_447,come_value->c_value));
            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj64=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj65=right_type2_429;
            right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_447 = come_decrement_ref_count(left_type3_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_428->mClass->mFloat&&left_type2_428->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(left_no_solved_generics_type_430->mGenericsTypes),left_no_solved_generics_type_430->mClass->mName,left_type2_428->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sType$ph$p_length(right_no_solved_generics_type_431->mGenericsTypes),right_no_solved_generics_type_431->mClass->mName,right_type2_429->mClass->mName);
                info->err_num++;
                __result_obj__293 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value390=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 462, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value13,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value390,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__293,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__293;
            }
        }
        else {
            left_type3_448=(char*)come_increment_ref_count(make_type_name_string(left_type2_428,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj66=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_448,come_value->c_value));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj67=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj68=right_type2_429;
            right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_448 = come_decrement_ref_count(left_type3_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    left_type2_428->mHeap&&!right_type2_429->mHeap&&left_type2_428->mPointerNum>0&&right_type2_429->mPointerNum>0&&string_operator_not_equals(right_type2_429->mClass->mName,"void")&&!info->in_generics_fun&&!left_type2_428->mMultipleTypes&&!right_type->mMultipleTypes) {
        printf("%s %d %s\n",info->sname,info->sline,msg);
        printf("left type is %s pointer num %d heap %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum,left_type2_428->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum,right_type2_429->mHeap);
        info->err_num++;
        __result_obj__294 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value397=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 482, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value14,(char*)come_increment_ref_count(xsprintf("ERR"))))));
        come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__right_value397,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__result_obj__294,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__294;
    }
    else if(    parent_class_434&&left_type2_428->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj69=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type2_428->mClass->mName,come_value->c_value));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj70=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value->var=((void*)0);
        __dec_obj71=right_type2_429;
        right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_428->mClass->mNumber&&left_type2_428->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__295 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value403=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 500, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value15,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value403,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__295,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__295;
            }
        }
        else {
            left_type3_449=(char*)come_increment_ref_count(make_type_name_string(left_type2_428,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj72=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type3_449,come_value->c_value));
            __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj73=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj74=right_type2_429;
            right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_449 = come_decrement_ref_count(left_type3_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type2_428->mClass->mFloat&&left_type2_428->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__296 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value410=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 521, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value16,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value410,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__296,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__296;
            }
        }
        else {
            left_type3_450=(char*)come_increment_ref_count(make_type_name_string(left_type2_428,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj75=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type3_450,come_value->c_value));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj76=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj77=right_type2_429;
            right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (left_type3_450 = come_decrement_ref_count(left_type3_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    string_operator_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)&&left_type2_428->mPointerNum>0&&right_type2_429->mPointerNum>0&&!right_type2_429->mAllocaValue&&!left_type->mAnyClass&&!right_type2_429->mAnyClass) {
        if(        left_type2_428->mHeap&&!right_type2_429->mHeap) {
            printf("%s %d %s\n",info->sname,info->sline,msg);
            printf("left type is %s pointer num %d heap %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum,left_type2_428->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum,right_type2_429->mHeap);
            info->err_num++;
            __result_obj__297 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value417=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 542, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value17,(char*)come_increment_ref_count(xsprintf("ERR"))))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value417,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__297,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__297;
        }
    }
    else if(    check_no_pointer) {
        if(        left_type2_428->mPointerNum>0) {
            if(            right_type2_429->mPointerNum>0) {
                if(                string_operator_equals(left_type2_428->mClass->mName,"void")||string_operator_equals(right_type2_429->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type2_428->mClass->mName,"va_list")||string_operator_equals(right_type2_429->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)) {
                    if(                    print_err_msg) {
                        printf("%s %d %s\n",info->sname,info->sline,msg);
                        printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                        info->err_num++;
                        __result_obj__298 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value420=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 558, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value18,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                        come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__right_value420,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__result_obj__298,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__298;
                    }
                    __result_obj__299 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value422=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 560, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value422,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__299,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__299;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                    info->err_num++;
                    __result_obj__300 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value425=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 571, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value19,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value425,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__300,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__300;
                }
                __result_obj__301 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value427=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 574, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value427,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__301,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__301;
            }
        }
        else if(        left_type2_428->mPointerNum==0&&right_type2_429->mPointerNum>0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__302 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value430=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 583, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value20,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value430,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__302,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__302;
            }
            __result_obj__303 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value432=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 585, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value432,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__303,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__303;
        }
        else if(        left_type2_428->mPointerNum>0&&right_type2_429->mPointerNum==0&&string_operator_equals(right_type2_429->mClass->mName,"lambda")&&string_operator_equals(left_type2_428->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__304 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value435=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 595, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value21,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value435,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__304,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__304;
            }
            __result_obj__305 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value437=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 597, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value437,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__305,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__305;
        }
    }
    else if(    !left_type2_428->mNullValue&&right_type2_429->mNullValue) {
        if(        string_operator_equals(left_type2_428->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_429->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"va_list")||string_operator_equals(right_type2_429->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"void")&&right_type2_429->mPointerNum==0) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__306 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value440=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 611, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value22,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value440,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__306,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__306;
            }
            __result_obj__307 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value442=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 613, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value442,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__307,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__307;
        }
        else {
            buf2_451=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 616, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(buf2_451,((char*)(__right_value449=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value445=string_to_string(come_value->c_value))),((char*)(__right_value446=string_to_string(info->sname))),((char*)(__right_value447=int_to_string(info->sline))),((char*)(__right_value448=int_to_string(gComeDebugStackFrameID++)))))));
            (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value448 = come_decrement_ref_count(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value449 = come_decrement_ref_count(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj78=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_451));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj79=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value->var=((void*)0);
            __dec_obj80=right_type2_429;
            right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(buf2_451,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else if(    string_operator_equals(left_type2_428->mClass->mName,"char")&&left_type2_428->mPointerNum==1) {
        if(        string_operator_equals(right_type2_429->mClass->mName,"char")&&right_type2_429->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_429->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"va_list")||string_operator_equals(right_type2_429->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__308 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value455=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 640, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value23,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value455,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__308,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__308;
            }
            __result_obj__309 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value457=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 643, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value457,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__309,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__309;
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"void")&&right_type2_429->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__310 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value460=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 653, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value24,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value460,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__310,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__310;
            }
            __result_obj__311 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value462=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 655, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value462,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__311,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__311;
        }
        else if(        string_operator_not_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)&&!(left_type2_428->mPointerNum>0&&right_type2_429->mPointerNum==0)) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__312 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value465=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 663, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value25,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value465,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__312,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__312;
            }
            __result_obj__313 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value467=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 665, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value467,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__313,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__313;
        }
    }
    else if(    string_operator_equals(left_type2_428->mClass->mName,"void")&&left_type2_428->mPointerNum==1) {
        if(        string_operator_equals(right_type2_429->mClass->mName,"void")&&right_type2_429->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_429->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"va_list")||string_operator_equals(right_type2_429->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"void")&&right_type2_429->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_429->mClass->mName,"void")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__314 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value470=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 685, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value26,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value470,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__314,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__314;
            }
            __result_obj__315 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value472=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 687, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value472,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__315,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__315;
        }
        else if(        right_type2_429->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                    info->err_num++;
                    __result_obj__316 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value475=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 696, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value27,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value475,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__316,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__316;
                }
            }
            else {
                tmp_452=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj81=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_452));
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj82=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
                come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value->var=((void*)0);
                __dec_obj83=right_type2_429;
                right_type2_429=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
                come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (tmp_452 = come_decrement_ref_count(tmp_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    else if(    left_type2_428->mPointerNum>0||(left_type2_428->mPointerNum==0&&left_type2_428->mClass->mStruct)) {
        if(        right_type2_429->mPointerNum>0||(right_type2_429->mPointerNum==0&&right_type2_429->mClass->mStruct)) {
            if(            string_operator_equals(left_type2_428->mClass->mName,"void")||string_operator_equals(right_type2_429->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type2_428->mClass->mName,"va_list")||string_operator_equals(right_type2_429->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type2_428->mClass->mName,right_type2_429->mClass->mName)) {
                if(                print_err_msg) {
                    printf("%s %d %s\n",info->sname,info->sline,msg);
                    printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                    info->err_num++;
                    __result_obj__317 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value482=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 721, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value28,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value482,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__317,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__317;
                }
                __result_obj__318 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value484=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 723, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value484,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__318,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__318;
            }
            else if(            int_operator_not_equals(left_type2_428->mPointerNum,right_type2_429->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
            }
            else if(            list$1sNode$ph$p_length(right_type2_429->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum,list$1sNode$ph$p_length(left_type2_428->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum,list$1sNode$ph$p_length(right_type2_429->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"void")||string_operator_equals(right_type2_429->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"va_list")||string_operator_equals(right_type2_429->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_429->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type2_428->mClass->mName,"lambda")&&string_operator_equals(right_type2_429->mClass->mName,"lambda")) {
        }
        else if(        left_type2_428->mPointerNum>0&&right_type2_429->mPointerNum==0&&string_operator_equals(right_type2_429->mClass->mName,"lambda")&&string_operator_equals(left_type2_428->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__319 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value487=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 750, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value29,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value487,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__319,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__319;
            }
            __result_obj__320 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value489=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 753, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,((void*)0)))));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value489,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__320,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__320;
        }
        else if(        left_type2_428->mPointerNum>0&&!(string_operator_equals(right_type2_429->mClass->mName,"lambda")&&string_operator_equals(left_type2_428->mClass->mName,"lambda"))&&right_type2_429->mPointerNum==0) {
            tmp_453=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj84=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_453));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj85=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type2_428));
            come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __result_obj__321 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value494=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 759, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)))));
            (tmp_453 = come_decrement_ref_count(tmp_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__right_value494,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__321,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__321;
            (tmp_453 = come_decrement_ref_count(tmp_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph$p_length(left_type2_428->mGenericsTypes)>0) {
            if(            list$1sType$ph$p_length(left_type2_428->mGenericsTypes)!=list$1sType$ph$p_length(right_type2_429->mGenericsTypes)) {
                printf("%s %d %s\n",info->sname,info->sline,msg);
                printf("left type is %s pointer num %d\n",left_type2_428->mClass->mName,left_type2_428->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_429->mClass->mName,right_type2_429->mPointerNum);
                info->err_num++;
                __result_obj__322 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value497=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 769, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value30,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__right_value497,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__322,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__322;
            }
            for(            i_454=0;            i_454<list$1sType$ph$p_length(left_type2_428->mGenericsTypes);            i_454++            ){
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value500=check_assign_type(msg,((struct sType*)(__right_value498=list$1sType$ph$p_operator_load_element(left_type2_428->mGenericsTypes,i_454))),((struct sType*)(__right_value499=list$1sType$ph$p_operator_load_element(right_type2_429->mGenericsTypes,i_454))),come_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_455=multiple_assign_var4->v1;
                Err_456=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_456)),                come_call_finalizer3(__right_value498,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                come_call_finalizer3(__right_value499,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                come_call_finalizer3(__right_value500,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    __result_obj__323 = come_increment_ref_count(((struct tuple2$2bool$char$ph*)(__right_value503=tuple2$2bool$char$ph_initialize((struct tuple2$2bool$char$ph*)come_increment_ref_count((struct tuple2$2bool$char$ph*)come_calloc(1, sizeof(struct tuple2$2bool$char$ph)*(1), "05type.c", 773, "struct tuple2$2bool$char$ph", (void*)0, (void*)0, (void*)0, (void*)0)),__null_value31,(char*)come_increment_ref_count(xsprintf("ERR"))))));
                    (Err_456 = come_decrement_ref_count(Err_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__right_value503,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__323,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__323;
                }
                else {
                }
                (Err_456 = come_decrement_ref_count(Err_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    __result_obj__324 = come_increment_ref_count(((struct tuple2$2bool$void$p*)(__right_value505=tuple2$2bool$void$p_initialize((struct tuple2$2bool$void$p*)come_increment_ref_count((struct tuple2$2bool$void$p*)come_calloc(1, sizeof(struct tuple2$2bool$void$p)*(1), "05type.c", 779, "struct tuple2$2bool$void$p", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)1,((void*)0)))));
    come_call_finalizer3(left_type2_428,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(right_type2_429,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__right_value505,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__324,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static struct tuple2$2bool$char$ph* tuple2$2bool$char$ph_initialize(struct tuple2$2bool$char$ph* self, _Bool v1, char* v2){
char* __dec_obj56;
struct tuple2$2bool$char$ph* __result_obj__276;
    self->v1=v1;
    __dec_obj56=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__276 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__276,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2bool$void$p* tuple2$2bool$void$p_initialize(struct tuple2$2bool$void$p* self, _Bool v1, void* v2){
struct tuple2$2bool$void$p* __result_obj__285;
    self->v1=v1;
    self->v2=v2;
    __result_obj__285 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__285,tuple2$2bool$void$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static void tuple2$2bool$void$p$p_finalize(struct tuple2$2bool$void$p* self){
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_440;
int i_441;
struct sType* __result_obj__287;
struct sType* default_value_442;
struct sType* __result_obj__288;
default_value_442 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_440=self->head;
    i_441=0;
    while(it_440!=((void*)0)) {
        if(        position==i_441) {
            __result_obj__287 = come_increment_ref_count(it_440->item);
            come_call_finalizer3(__result_obj__287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__287;
        }
        it_440=it_440->next;
        i_441++;
    }
    memset(&default_value_442,0,sizeof(struct sType*));
    __result_obj__288 = come_increment_ref_count(default_value_442);
    come_call_finalizer3(default_value_442,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__288,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __right_value506 = (void*)0;
struct sType* result_type_457;
char* var_name_458;
char* p_459;
int sline_460;
void* __right_value507 = (void*)0;
char* word_461;
_Bool between_brace_462;
char* p_463;
int sline_464;
void* __right_value508 = (void*)0;
char* word_465;
void* __right_value509 = (void*)0;
char* __dec_obj86;
void* __right_value510 = (void*)0;
char* __dec_obj87;
_Bool no_comma_467;
void* __right_value511 = (void*)0;
struct sNode* node_468;
struct sNode* __dec_obj88;
char* p_469;
int sline_470;
void* __right_value512 = (void*)0;
char* word_471;
void* __right_value513 = (void*)0;
struct sNode* node_472;
void* __right_value517 = (void*)0;
char* attribute_476;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __dec_obj92;
char* __dec_obj93;
void* __right_value520 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__329;
    result_type_457=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_457->mPointerNum=result_type_457->mTypedefOriginalPointerNum;
    }
    var_name_458=((void*)0);
    {
        p_459=info->p;
        sline_460=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_461=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_461,"const")||string_operator_equals(word_461,"__restrict")||string_operator_equals(word_461,"restrict")||string_operator_equals(word_461,"__user")||string_operator_equals(word_461,"volatile")||string_operator_equals(word_461,"_Nonnull")||string_operator_equals(word_461,"_Nullable")||string_operator_equals(word_461,"_Null_unspecified")||string_operator_equals(word_461,"__user")||string_operator_equals(word_461,"_Addr")) {
            }
            else {
                info->p=p_459;
                info->sline=sline_460;
            }
            (word_461 = come_decrement_ref_count(word_461, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p=p_459;
            info->sline=sline_460;
        }
    }
    between_brace_462=(_Bool)0;
    {
        p_463=info->p;
        sline_464=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_465=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_465,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_462=(_Bool)1;
                    }
                }
                (word_465 = come_decrement_ref_count(word_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_463;
        info->sline=sline_464;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_457->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_462&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj86=var_name_458;
        var_name_458=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int num_anonymous_var_name_466=0;
        num_anonymous_var_name_466++;
        __dec_obj87=var_name_458;
        var_name_458=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_466));
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    between_brace_462&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_467=info->no_comma;
        info->no_comma=(_Bool)1;
        node_468=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_467;
        __dec_obj88=result_type_457->mSizeNum;
        result_type_457->mSizeNum=(struct sNode*)come_increment_ref_count(node_468);
        if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        ((node_468) ? node_468 = come_decrement_ref_count(node_468, ((struct sNode*)node_468)->finalize, ((struct sNode*)node_468)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_469=info->p;
            sline_470=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_471=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_471,"const")||string_operator_equals(word_471,"__restrict")||string_operator_equals(word_471,"restrict")||string_operator_equals(word_471,"__user")||string_operator_equals(word_471,"volatile")||string_operator_equals(word_471,"_Nonnull")||string_operator_equals(word_471,"_Nullable")||string_operator_equals(word_471,"_Null_unspecified")||string_operator_equals(word_471,"__user")||string_operator_equals(word_471,"_Addr")) {
                }
                else {
                    info->p=p_469;
                    info->sline=sline_470;
                }
                (word_471 = come_decrement_ref_count(word_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                info->p=p_469;
                info->sline=sline_470;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_457->mArrayPointerType=(_Bool)1;
            result_type_457->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_472=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph$p_push_back(result_type_457->mArrayNum,(struct sNode*)come_increment_ref_count(node_472));
        parse_sharp_v5(info);
        result_type_457->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        ((node_472) ? node_472 = come_decrement_ref_count(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    attribute_476=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_476,"")) {
        if(        result_type_457->mAttribute) {
            __dec_obj92=result_type_457->mAttribute;
            result_type_457->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value518=string_operator_add(result_type_457->mAttribute," "))),attribute_476));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj93=result_type_457->mAttribute;
            result_type_457->mAttribute=(char*)come_increment_ref_count(attribute_476);
            __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    ((struct tuple2$2char$phchar$ph*)(__right_value520=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value520,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__329 = come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value525=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "05type.c", 941, "struct tuple2$2sType$phchar$ph", tuple2$2sType$phchar$ph_finalize, tuple2$2sType$phchar$ph_clone, tuple2$2sType$phchar$ph_get_hash_key, tuple2$2sType$phchar$ph_equals)),(struct sType*)come_increment_ref_count(result_type_457),(char*)come_increment_ref_count(var_name_458)))));
    come_call_finalizer3(base_type_name,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(result_type_457,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_458 = come_decrement_ref_count(var_name_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute_476 = come_decrement_ref_count(attribute_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value525,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__329,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__329;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value514 = (void*)0;
struct list_item$1sNode$ph* litem_473;
struct sNode* __dec_obj89;
void* __right_value515 = (void*)0;
struct list_item$1sNode$ph* litem_474;
struct sNode* __dec_obj90;
void* __right_value516 = (void*)0;
struct list_item$1sNode$ph* litem_475;
struct sNode* __dec_obj91;
struct list$1sNode$ph* __result_obj__325;
    if(    self->len==0) {
        litem_473=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value514=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1466, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_473->prev=((void*)0);
        litem_473->next=((void*)0);
        __dec_obj89=litem_473->item;
        litem_473->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_473;
        self->head=litem_473;
    }
    else if(    self->len==1) {
        litem_474=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value515=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1476, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_474->prev=self->head;
        litem_474->next=((void*)0);
        __dec_obj90=litem_474->item;
        litem_474->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail=litem_474;
        self->head->next=litem_474;
    }
    else {
        litem_475=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value516=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1486, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_475->prev=self->tail;
        litem_475->next=((void*)0);
        __dec_obj91=litem_475->item;
        litem_475->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        self->tail->next=litem_475;
        self->tail=litem_475;
    }
    self->len++;
    __result_obj__325 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__325;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__326;
void* __right_value521 = (void*)0;
struct tuple2$2sType$phchar$ph* result_477;
void* __right_value522 = (void*)0;
struct sType* __dec_obj94;
void* __right_value523 = (void*)0;
char* __dec_obj95;
struct tuple2$2sType$phchar$ph* __result_obj__327;
    if(    self==(void*)0) {
        __result_obj__326 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__326,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__326;
    }
    result_477=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj94=result_477->v1;
        result_477->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj95=result_477->v2;
        result_477->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__327 = come_increment_ref_count(result_477);
    come_call_finalizer3(result_477,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__327,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_478;
    result_478=0;
    result_478+=int_get_hash_key(((int)self->v1));
    result_478+=int_get_hash_key(((int)self->v2));
    return result_478;
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
struct sType* __dec_obj96;
char* __dec_obj97;
struct tuple2$2sType$phchar$ph* __result_obj__328;
    __dec_obj96=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj97=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__328 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__328,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__328;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_479;
int sline_480;
void* __right_value526 = (void*)0;
char* word_481;
int nest_482;
    p_479=info->p;
    sline_480=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_481=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_481,"__attribute")||string_operator_equals(word_481,"__attribute__"))&&*info->p==40) {
            nest_482=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_482++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_482--;
                    if(                    nest_482==0) {
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
        else if(        string_operator_equals(word_481,"const")||string_operator_equals(word_481,"__restrict")||string_operator_equals(word_481,"restrict")||string_operator_equals(word_481,"__user")||string_operator_equals(word_481,"volatile")||string_operator_equals(word_481,"_Nonnull")||string_operator_equals(word_481,"_Nullable")||string_operator_equals(word_481,"__nonnull")||string_operator_equals(word_481,"_Null_unspecified")||string_operator_equals(word_481,"__user")||string_operator_equals(word_481,"_Addr")||string_operator_equals(word_481,"__noreturn")||string_operator_equals(word_481,"_noreturn")||string_operator_equals(word_481,"_Noreturn")) {
        }
        else {
            info->p=p_479;
            info->sline=sline_480;
        }
        (word_481 = come_decrement_ref_count(word_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->p=p_479;
        info->sline=sline_480;
    }
}

struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
_Bool no_output_err_483;
void* __right_value527 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* type_484=0;
char* name_485=0;
_Bool err_486=0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__333;
    no_output_err_483=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value527=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_484=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
    name_485=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    err_486=multiple_assign_var5->v3;
    come_call_finalizer3(__right_value527,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_483;
    __result_obj__333 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value532=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 998, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type_484),(char*)come_increment_ref_count(name_485),err_486))));
    come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value532,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__333,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__333;
}

static void tuple3$3sType$phchar$phbool$_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phbool$* tuple3$3sType$phchar$phbool$_clone(struct tuple3$3sType$phchar$phbool$* self){
struct tuple3$3sType$phchar$phbool$* __result_obj__330;
void* __right_value528 = (void*)0;
struct tuple3$3sType$phchar$phbool$* result_487;
void* __right_value529 = (void*)0;
struct sType* __dec_obj98;
void* __right_value530 = (void*)0;
char* __dec_obj99;
struct tuple3$3sType$phchar$phbool$* __result_obj__331;
    if(    self==(void*)0) {
        __result_obj__330 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__330,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__330;
    }
    result_487=(struct tuple3$3sType$phchar$phbool$*)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "tuple3$3sType$phchar$phbool$_clone", 3, "struct tuple3$3sType$phchar$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj98=result_487->v1;
        result_487->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj99=result_487->v2;
        result_487->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_487->v3=self->v3;
    }
    __result_obj__331 = come_increment_ref_count(result_487);
    come_call_finalizer3(result_487,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__331,tuple3$3sType$phchar$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

static unsigned int tuple3$3sType$phchar$phbool$_get_hash_key(struct tuple3$3sType$phchar$phbool$* self){
unsigned int result_488;
    result_488=0;
    result_488+=int_get_hash_key(((int)self->v1));
    result_488+=int_get_hash_key(((int)self->v2));
    result_488+=int_get_hash_key(((int)self->v3));
    return result_488;
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
struct sType* __dec_obj100;
char* __dec_obj101;
struct tuple3$3sType$phchar$phbool$* __result_obj__332;
    __dec_obj100=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj101=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__332 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__332,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
char* head_489;
int head_sline_490;
void* __right_value533 = (void*)0;
char* type_name_491;
_Bool record__492;
_Bool exception__493;
_Bool constant_494;
_Bool static__495;
_Bool volatile__496;
_Bool register__497;
_Bool unsigned__498;
_Bool long__499;
_Bool long_long_500;
_Bool short__501;
_Bool restrict__502;
_Bool struct__503;
_Bool union__504;
_Bool enum__505;
_Bool no_heap_506;
_Bool extern__507;
_Bool inline__508;
_Bool uniq__509;
_Bool tuple__510;
_Bool generate__511;
struct sNode* alignas__512;
_Bool anonymous_type_513;
_Bool anonymous_name_514;
_Bool atomic__515;
_Bool object_interface_516;
void* __right_value534 = (void*)0;
char* __dec_obj102;
void* __right_value535 = (void*)0;
char* __dec_obj103;
void* __right_value536 = (void*)0;
char* __dec_obj104;
int brace_num_517;
void* __right_value537 = (void*)0;
char* __dec_obj105;
int brace_num_518;
void* __right_value538 = (void*)0;
char* __dec_obj106;
void* __right_value539 = (void*)0;
char* __dec_obj107;
void* __right_value540 = (void*)0;
char* __dec_obj108;
void* __right_value541 = (void*)0;
char* __dec_obj109;
void* __right_value542 = (void*)0;
char* __dec_obj110;
void* __right_value543 = (void*)0;
struct sNode* exp_519;
struct sNode* __dec_obj111;
void* __right_value544 = (void*)0;
char* __dec_obj112;
void* __right_value545 = (void*)0;
char* __dec_obj113;
void* __right_value546 = (void*)0;
char* __dec_obj114;
void* __right_value547 = (void*)0;
char* __dec_obj115;
void* __right_value548 = (void*)0;
char* __dec_obj116;
void* __right_value549 = (void*)0;
char* __dec_obj117;
void* __right_value550 = (void*)0;
char* __dec_obj118;
void* __right_value551 = (void*)0;
char* __dec_obj119;
void* __right_value552 = (void*)0;
char* __dec_obj120;
void* __right_value553 = (void*)0;
char* __dec_obj121;
char* p_520;
int sline_521;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
char* __dec_obj122;
void* __right_value556 = (void*)0;
char* __dec_obj123;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* __dec_obj124;
char* p_522;
int sline_523;
void* __right_value559 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c1_524=0;
char* Err_525=0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__334;
char* p_526;
int sline_527;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__335;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* node_528;
_Bool Value_529;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__336;
char* p_530;
int sline_531;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
char* __dec_obj125;
void* __right_value573 = (void*)0;
char* __dec_obj126;
void* __right_value574 = (void*)0;
char* __dec_obj127;
char* p_532;
int sline_533;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__337;
void* __right_value578 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* type_534=0;
char* name_535=0;
_Bool err_536=0;
char* p_537;
int sline_538;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__338;
void* __right_value583 = (void*)0;
char* __dec_obj128;
void* __right_value584 = (void*)0;
char* __dec_obj129;
void* __right_value585 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* type_539=0;
char* name_540=0;
_Bool err_541=0;
char* p_542;
int sline_543;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__339;
char* p_544;
int sline_545;
void* __right_value589 = (void*)0;
char* __dec_obj130;
void* __right_value590 = (void*)0;
char* __dec_obj131;
void* __right_value591 = (void*)0;
char* __dec_obj132;
void* __right_value592 = (void*)0;
char* __dec_obj133;
void* __right_value593 = (void*)0;
char* __dec_obj134;
void* __right_value594 = (void*)0;
char* __dec_obj135;
void* __right_value595 = (void*)0;
char* __dec_obj136;
char* p_546;
int sline_547;
void* __right_value596 = (void*)0;
char* __dec_obj137;
char* p_548;
int sline_549;
void* __right_value597 = (void*)0;
char* __dec_obj138;
void* __right_value598 = (void*)0;
char* __dec_obj139;
void* __right_value599 = (void*)0;
char* __dec_obj140;
char* p_550;
int sline_551;
void* __right_value600 = (void*)0;
char* __dec_obj141;
void* __right_value601 = (void*)0;
char* __dec_obj142;
void* __right_value602 = (void*)0;
char* __dec_obj143;
void* __right_value603 = (void*)0;
char* __dec_obj144;
void* __right_value604 = (void*)0;
char* __dec_obj145;
void* __right_value605 = (void*)0;
char* __dec_obj146;
void* __right_value606 = (void*)0;
char* __dec_obj147;
void* __right_value607 = (void*)0;
char* __dec_obj148;
void* __right_value608 = (void*)0;
char* __dec_obj149;
void* __right_value609 = (void*)0;
char* __dec_obj150;
void* __right_value610 = (void*)0;
char* __dec_obj151;
char* p_552;
int sline_553;
void* __right_value611 = (void*)0;
char* __dec_obj152;
void* __right_value612 = (void*)0;
char* __dec_obj153;
void* __right_value613 = (void*)0;
char* attribute_554;
int pointer_num_555;
_Bool heap_556;
_Bool refference_557;
_Bool no_refference_558;
_Bool channel_559;
_Bool any_class_560;
_Bool vtable_561;
char* tuple_name_562;
void* __right_value614 = (void*)0;
char* __dec_obj154;
_Bool lambda_flag_563;
char* pX_564;
int slineX_565;
void* __right_value615 = (void*)0;
struct sType* type_566;
char* var_name_567;
_Bool function_pointer_flag_568;
char* p_569;
int sline_570;
void* __right_value616 = (void*)0;
char* word_571;
_Bool var_name_between_brace_572;
char* p_573;
int sline_574;
void* __right_value617 = (void*)0;
char* word_575;
void* __right_value618 = (void*)0;
char* __dec_obj155;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* node_577;
_Bool Value_578;
void* __right_value621 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c2_579=0;
char* Err_580=0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__340;
int pointer_num_581;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sType* __dec_obj156;
void* __right_value627 = (void*)0;
char* __dec_obj157;
void* __right_value628 = (void*)0;
struct sNode* node_582;
_Bool Value_583;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__341;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* __dec_obj158;
void* __right_value634 = (void*)0;
char* __dec_obj159;
void* __right_value635 = (void*)0;
struct sNode* node_584;
_Bool Value_585;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__342;
int pointer_num_586;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sType* __dec_obj160;
void* __right_value641 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c3_587=0;
char* Err_588=0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__343;
void* __right_value644 = (void*)0;
char* attribute_589;
char* __dec_obj161;
void* __right_value645 = (void*)0;
char* __dec_obj162;
void* __right_value646 = (void*)0;
char* __dec_obj163;
void* __right_value647 = (void*)0;
char* __dec_obj164;
void* __right_value648 = (void*)0;
char* __dec_obj165;
_Bool no_comma_592;
void* __right_value649 = (void*)0;
struct sNode* node_593;
struct sNode* __dec_obj166;
void* __right_value650 = (void*)0;
char* attribute2_594;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
char* __dec_obj167;
char* __dec_obj168;
struct sType* result_type_595;
void* __right_value653 = (void*)0;
_Bool _if_conditional4;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __dec_obj169;
void* __right_value656 = (void*)0;
int i_596;
void* __right_value657 = (void*)0;
_Bool _if_conditional5;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* __dec_obj170;
int i_600;
void* __right_value661 = (void*)0;
_Bool _if_conditional6;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sType* __dec_obj171;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sType* __dec_obj172;
struct sNode* __dec_obj173;
void* __right_value668 = (void*)0;
char* __dec_obj174;
void* __right_value669 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var11 = (void*)0;
struct list$1sType$ph* param_types_601=0;
struct list$1char$ph* param_names_602=0;
struct list$1char$ph* param_default_parametors_603=0;
_Bool var_args_604=0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sType* __dec_obj175;
struct sType* __dec_obj176;
struct list$1sType$ph* __dec_obj177;
struct list$1char$ph* __dec_obj178;
int function_pointer_num_605;
struct sType* result_type_606;
void* __right_value673 = (void*)0;
_Bool _if_conditional7;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* __dec_obj179;
void* __right_value676 = (void*)0;
int i_607;
void* __right_value677 = (void*)0;
_Bool _if_conditional8;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sType* __dec_obj180;
int i_608;
void* __right_value681 = (void*)0;
_Bool _if_conditional9;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sType* __dec_obj181;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sType* __dec_obj182;
struct sNode* __dec_obj183;
void* __right_value688 = (void*)0;
char* __dec_obj184;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__346;
void* __right_value691 = (void*)0;
char* __dec_obj185;
_Bool function_pointer_array_610;
int function_pointer_array_num_611;
int n_612;
void* __right_value692 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var12 = (void*)0;
struct list$1sType$ph* param_types_613=0;
struct list$1char$ph* param_names_614=0;
struct list$1char$ph* param_default_parametors_615=0;
_Bool var_args_616=0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sType* __dec_obj186;
void* __right_value696 = (void*)0;
struct sType* __dec_obj187;
struct list$1sType$ph* __dec_obj188;
struct list$1char$ph* __dec_obj189;
void* __right_value697 = (void*)0;
struct sNode* exp_617;
_Bool Value_618;
void* __right_value698 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c4_619=0;
char* Err_620=0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__347;
void* __right_value701 = (void*)0;
struct CVALUE* come_value_621;
void* __right_value702 = (void*)0;
struct sType* __dec_obj190;
void* __right_value703 = (void*)0;
char* attribute_622;
char* __dec_obj191;
void* __right_value704 = (void*)0;
char* __dec_obj192;
void* __right_value705 = (void*)0;
char* __dec_obj193;
void* __right_value706 = (void*)0;
char* __dec_obj194;
void* __right_value707 = (void*)0;
char* __dec_obj195;
_Bool no_comma_625;
void* __right_value708 = (void*)0;
struct sNode* node_626;
struct sNode* __dec_obj196;
void* __right_value709 = (void*)0;
char* attribute2_627;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
char* __dec_obj197;
char* __dec_obj198;
void* __right_value712 = (void*)0;
_Bool _if_conditional10;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sType* __dec_obj199;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
char* __dec_obj200;
struct sNode* __dec_obj201;
char* __dec_obj202;
int i_628;
void* __right_value717 = (void*)0;
_Bool _if_conditional11;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sType* __dec_obj203;
struct sNode* __dec_obj204;
char* __dec_obj205;
int i_629;
void* __right_value721 = (void*)0;
_Bool _if_conditional12;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* __dec_obj206;
struct sNode* __dec_obj207;
char* __dec_obj208;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
_Bool _if_conditional13;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__348;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sType* __dec_obj209;
void* __right_value732 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* generics_type_630=0;
char* var_name_631=0;
_Bool err_632=0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__349;
void* __right_value735 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c5_633=0;
char* Err_634=0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__350;
void* __right_value738 = (void*)0;
struct sType* __dec_obj210;
void* __right_value739 = (void*)0;
char* new_name_635;
struct sNode* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
void* __right_value740 = (void*)0;
struct sClass* klass_636;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct sClass* klass_678;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sType* __dec_obj214;
struct sNode* __dec_obj215;
char* __dec_obj216;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1sType$ph* types_679;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type2_680=0;
char* name_681=0;
_Bool err_682=0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__372;
void* __right_value764 = (void*)0;
int num_tuples_683;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sType* __dec_obj217;
struct list$1sType$ph* o2_saved_684;
struct sType* it_685;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sType* __dec_obj218;
void* __right_value770 = (void*)0;
char* new_name_686;
char* __dec_obj219;
void* __right_value771 = (void*)0;
char* attribute_687;
char* __dec_obj220;
void* __right_value772 = (void*)0;
char* __dec_obj221;
void* __right_value773 = (void*)0;
char* __dec_obj222;
void* __right_value774 = (void*)0;
char* __dec_obj223;
void* __right_value775 = (void*)0;
char* __dec_obj224;
_Bool no_comma_690;
void* __right_value776 = (void*)0;
struct sNode* node_691;
struct sNode* __dec_obj225;
void* __right_value777 = (void*)0;
char* attribute2_692;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
char* __dec_obj226;
char* __dec_obj227;
void* __right_value780 = (void*)0;
struct sNode* node_693;
void* __right_value781 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var17 = (void*)0;
char* asm_name_694=0;
char* attribute2_695=0;
char* __dec_obj228;
char* __dec_obj229;
void* __right_value782 = (void*)0;
struct sType* type_before_696;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sType* __dec_obj230;
void* __right_value786 = (void*)0;
struct sNode* __list_values1___697[1];
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct list$1sNode$ph* __dec_obj231;
struct sType* __dec_obj232;
void* __right_value790 = (void*)0;
struct sType* type_before_701;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* __dec_obj233;
struct sType* __dec_obj234;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct sType* type2_702;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sType* type3_708;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct sType* type4_709;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__378;
char* __dec_obj236;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct tuple3$3sType$phchar$phbool$* __result_obj__379;
type_566 = (void*)0;
var_name_567 = (void*)0;
result_type_595 = (void*)0;
result_type_606 = (void*)0;
    head_489=info->p;
    head_sline_490=info->sline;
    info->define_struct=(_Bool)0;
    type_name_491=(char*)come_increment_ref_count(parse_word(info));
    record__492=(_Bool)0;
    exception__493=(_Bool)0;
    constant_494=(_Bool)0;
    static__495=(_Bool)0;
    volatile__496=(_Bool)0;
    register__497=(_Bool)0;
    unsigned__498=(_Bool)0;
    long__499=(_Bool)0;
    long_long_500=(_Bool)0;
    short__501=(_Bool)0;
    restrict__502=(_Bool)0;
    struct__503=(_Bool)0;
    union__504=(_Bool)0;
    enum__505=(_Bool)0;
    no_heap_506=(_Bool)0;
    extern__507=(_Bool)0;
    inline__508=(_Bool)0;
    uniq__509=(_Bool)0;
    tuple__510=(_Bool)0;
    generate__511=(_Bool)0;
    alignas__512=((void*)0);
    anonymous_type_513=(_Bool)0;
    anonymous_name_514=(_Bool)0;
    atomic__515=(_Bool)0;
    object_interface_516=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_491,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_516=(_Bool)1;
            __dec_obj102=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj103=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            atomic__515=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_491,"__extension__")) {
            __dec_obj104=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_517=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_517++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_517--;
                        if(                        brace_num_517==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj105=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"__declspec")) {
            if(            *info->p==40) {
                brace_num_518=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_518++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_518--;
                        if(                        brace_num_518==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj106=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"_Noreturn")) {
            __dec_obj107=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"__noreturn")) {
            __dec_obj108=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"_Nullable")) {
            __dec_obj109=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"_noreturn")) {
            __dec_obj110=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"_Alignas")) {
            expected_next_character(40,info);
            exp_519=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj111=alignas__512;
            alignas__512=(struct sNode*)come_increment_ref_count(exp_519);
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            expected_next_character(41,info);
            __dec_obj112=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            ((exp_519) ? exp_519 = come_decrement_ref_count(exp_519, ((struct sNode*)exp_519)->finalize, ((struct sNode*)exp_519)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        string_operator_equals(type_name_491,"const")) {
            constant_494=(_Bool)1;
            __dec_obj113=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"static")) {
            static__495=(_Bool)1;
            __dec_obj114=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"uniq")) {
            uniq__509=(_Bool)1;
            __dec_obj115=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"record")) {
            record__492=(_Bool)1;
            __dec_obj116=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"exception")) {
            exception__493=(_Bool)1;
            __dec_obj117=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"extern")) {
            extern__507=(_Bool)1;
            __dec_obj118=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"inline")||string_operator_equals(type_name_491,"__inline")||string_operator_equals(type_name_491,"__inline__")||string_operator_equals(type_name_491,"__always_inline")||string_operator_equals(type_name_491,"__forceinline")) {
            inline__508=(_Bool)1;
            __dec_obj119=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"volatile")) {
            volatile__496=(_Bool)1;
            __dec_obj120=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"generate")) {
            generate__511=(_Bool)1;
            __dec_obj121=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"struct")) {
            struct__503=(_Bool)1;
            if(            *info->p==123) {
                p_520=info->p;
                sline_521=info->sline;
                ((char*)(__right_value554=skip_block(info)));
                (__right_value554 = come_decrement_ref_count(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    anonymous_name_514=(_Bool)1;
                    anonymous_type_513=(_Bool)1;
                    __dec_obj122=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_520;
                    info->sline=sline_521;
                    break;
                }
                else {
                    anonymous_type_513=(_Bool)1;
                    __dec_obj123=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_520;
                    info->sline=sline_521;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value557=parse_struct_attribute(info)));
                (__right_value557 = come_decrement_ref_count(__right_value557, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj124=type_name_491;
                type_name_491=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_522=info->p;
                    sline_523=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_522;
                                info->sline=sline_523;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value559=err_msg(info,"invalid struct definition")));
                            come_exception_var_c1_524=multiple_assign_var6->v1;
                            Err_525=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            ((Err_525)?(puts(Err_525),exit(0)):(0));
                            come_call_finalizer3(__right_value559,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            __result_obj__334 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value561=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1233, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            (Err_525 = come_decrement_ref_count(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(__right_value561,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            come_call_finalizer3(__result_obj__334,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__334;
                            (Err_525 = come_decrement_ref_count(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_526=info->p;
                    sline_527=info->sline;
                    ((char*)(__right_value562=skip_block(info)));
                    (__right_value562 = come_decrement_ref_count(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (void)((char*)(__right_value563=parse_struct_attribute(info)));
                    (__right_value563 = come_decrement_ref_count(__right_value563, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        info->p=head_489;
                        info->sline=head_sline_490;
                        info->define_struct=(_Bool)1;
                        __result_obj__335 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value565=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1253, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                        (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        come_call_finalizer3(__right_value565,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        come_call_finalizer3(__result_obj__335,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__335;
                    }
                    else {
                        info->p=p_526;
                        info->sline=sline_527;
                        node_528=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_491),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_529=node_compile(node_528,info);
                        if(                        !Value_529) {
                            __result_obj__336 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value569=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1265, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                            ((node_528) ? node_528 = come_decrement_ref_count(node_528, ((struct sNode*)node_528)->finalize, ((struct sNode*)node_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            come_call_finalizer3(__right_value569,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            come_call_finalizer3(__result_obj__336,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__336;
                        }
                        else {
                        }
                        ((node_528) ? node_528 = come_decrement_ref_count(node_528, ((struct sNode*)node_528)->finalize, ((struct sNode*)node_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                        ((node_528) ? node_528 = come_decrement_ref_count(node_528, ((struct sNode*)node_528)->finalize, ((struct sNode*)node_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_491,"union")) {
            union__504=(_Bool)1;
            if(            *info->p==123) {
                p_530=info->p;
                sline_531=info->sline;
                ((char*)(__right_value570=skip_block(info)));
                (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value571=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value571,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_489;
                    info->sline=head_sline_490;
                    info->define_struct=(_Bool)0;
                    anonymous_type_513=(_Bool)1;
                    __dec_obj125=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_530;
                    info->sline=sline_531;
                    break;
                }
                else {
                    anonymous_type_513=(_Bool)1;
                    __dec_obj126=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_530;
                    info->sline=sline_531;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj127=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_532=info->p;
                sline_533=info->sline;
                ((char*)(__right_value575=skip_block(info)));
                (__right_value575 = come_decrement_ref_count(__right_value575, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_489;
                    info->sline=head_sline_490;
                    info->define_struct=(_Bool)1;
                    __result_obj__337 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value577=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1322, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value577,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__337,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__337;
                }
                else {
                    anonymous_type_513=(_Bool)1;
                    info->p=p_532;
                    info->sline=sline_533;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_491,"enum")) {
            enum__505=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value578=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_534=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                name_535=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_536=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value578,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(type_534,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_535 = come_decrement_ref_count(name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_537=info->p;
                sline_538=info->sline;
                ((char*)(__right_value579=skip_block(info)));
                (__right_value579 = come_decrement_ref_count(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2char$phchar$ph*)(__right_value580=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value580,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                if(                *info->p==59) {
                    info->p=head_489;
                    info->sline=head_sline_490;
                    info->define_struct=(_Bool)1;
                    __result_obj__338 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value582=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1360, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value582,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__338,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__338;
                }
                else {
                    anonymous_type_513=(_Bool)1;
                    __dec_obj128=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_537;
                    info->sline=sline_538;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj129=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value585=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_539=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_540=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_541=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value585,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(type_539,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_540 = come_decrement_ref_count(name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_542=info->p;
                sline_543=info->sline;
                ((char*)(__right_value586=skip_block(info)));
                (__right_value586 = come_decrement_ref_count(__right_value586, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                *info->p==59) {
                    info->p=head_489;
                    info->sline=head_sline_490;
                    info->define_struct=(_Bool)1;
                    __result_obj__339 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value588=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1396, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(__right_value588,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__339,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__339;
                }
                else {
                    anonymous_type_513=(_Bool)1;
                    info->p=p_542;
                    info->sline=sline_543;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_491,"long")) {
            {
                p_544=info->p;
                sline_545=info->sline;
                if(                !(xisalpha(*info->p)||*info->p==95)) {
                    info->p=p_544;
                    info->sline=sline_545;
                    __dec_obj130=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    break;
                }
                else {
                    __dec_obj131=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    if(                    string_operator_equals(type_name_491,"unsigned")) {
                        __dec_obj132=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_491,"int")) {
                            long__499=(_Bool)1;
                            unsigned__498=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_491,"signed")) {
                        __dec_obj133=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(type_name_491,"int")) {
                            long__499=(_Bool)1;
                            unsigned__498=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_491,"long")) {
                        p_544=info->p;
                        sline_545=info->sline;
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            long_long_500=(_Bool)1;
                            __dec_obj134=type_name_491;
                            type_name_491=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            long__499=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_491,"int")) {
                            long_long_500=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_491,info)) {
                            __dec_obj135=type_name_491;
                            type_name_491=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            long_long_500=(_Bool)1;
                            info->p=p_544;
                            info->sline=sline_545;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_491,info)) {
                        if(                        long__499) {
                            long_long_500=(_Bool)1;
                            long__499=(_Bool)0;
                        }
                        else {
                            long__499=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_544;
                        info->sline=sline_545;
                        __dec_obj136=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_491,"unsigned")) {
            unsigned__498=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_546=info->p;
                sline_547=info->sline;
                __dec_obj137=type_name_491;
                type_name_491=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_491,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_548=info->p;
                        sline_549=info->sline;
                        __dec_obj138=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_491,info)) {
                            short__501=(_Bool)1;
                        }
                        else {
                            short__501=(_Bool)1;
                            __dec_obj139=type_name_491;
                            type_name_491=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_548;
                            info->sline=sline_549;
                        }
                    }
                    else {
                        short__501=(_Bool)1;
                        __dec_obj140=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_491,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_550=info->p;
                        sline_551=info->sline;
                        __dec_obj141=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        is_type_name(type_name_491,info)) {
                            long__499=(_Bool)1;
                        }
                        else {
                            long__499=(_Bool)1;
                            __dec_obj142=type_name_491;
                            type_name_491=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            info->p=p_550;
                            info->sline=sline_551;
                        }
                    }
                    else {
                        long__499=(_Bool)1;
                        __dec_obj143=type_name_491;
                        type_name_491=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_491,info)) {
                    __dec_obj144=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_546;
                    info->sline=sline_547;
                    break;
                }
            }
            else {
                __dec_obj145=type_name_491;
                type_name_491=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_491,"signed")||string_operator_equals(type_name_491,"__signed__")) {
            unsigned__498=(_Bool)0;
            __dec_obj146=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"register")) {
            register__497=(_Bool)1;
            __dec_obj147=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"restrict")) {
            restrict__502=(_Bool)1;
            __dec_obj148=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"_Addr")) {
            __dec_obj149=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"__restrict")) {
            restrict__502=(_Bool)1;
            __dec_obj150=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        string_operator_equals(type_name_491,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj151=type_name_491;
            type_name_491=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__510=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_491,"short")) {
            short__501=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_552=info->p;
                sline_553=info->sline;
                __dec_obj152=type_name_491;
                type_name_491=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(type_name_491,"int")) {
                    short__501=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_491,"short")) {
                    short__501=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_491,info)) {
                    info->p=p_552;
                    info->sline=sline_553;
                }
                else {
                    __dec_obj153=type_name_491;
                    type_name_491=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    info->p=p_552;
                    info->sline=sline_553;
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
    attribute_554=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_555=0;
    heap_556=(_Bool)0;
    refference_557=(_Bool)0;
    no_refference_558=(_Bool)0;
    channel_559=(_Bool)0;
    any_class_560=(_Bool)0;
    vtable_561=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_555++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_561=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_560=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_556=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_559=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_562=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__510) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj154=tuple_name_562;
        tuple_name_562=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    atomic__515) {
        expected_next_character(41,info);
    }
    lambda_flag_563=(_Bool)0;
    {
        pX_564=info->p;
        slineX_565=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value615=parse_word(info)));
            (__right_value615 = come_decrement_ref_count(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_563=(_Bool)1;
            }
        }
        info->p=pX_564;
        info->sline=slineX_565;
    }
    function_pointer_flag_568=(_Bool)0;
    {
        p_569=info->p;
        sline_570=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_568=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_571=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_568=(_Bool)1;
                    }
                }
                (word_571 = come_decrement_ref_count(word_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_569;
        info->sline=sline_570;
    }
    var_name_between_brace_572=(_Bool)0;
    {
        p_573=info->p;
        sline_574=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_575=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_575,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_572=(_Bool)1;
                    }
                }
                (word_575 = come_decrement_ref_count(word_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_573;
        info->sline=sline_574;
    }
    if(    anonymous_type_513&&*info->p==123) {
        static int anonymous_num_576=0;
        if(        struct__503) {
            if(            string_operator_equals(type_name_491,"")) {
                __dec_obj155=type_name_491;
                type_name_491=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_576));
                __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_577=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_491),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_578=node_compile(node_577,info);
            if(            !Value_578) {
                multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value621=err_msg(info,"parse_struct is failed")));
                come_exception_var_c2_579=multiple_assign_var9->v1;
                Err_580=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                ((Err_580)?(puts(Err_580),exit(0)):(0));
                come_call_finalizer3(__right_value621,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__340 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value623=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1810, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (Err_580 = come_decrement_ref_count(Err_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_577) ? node_577 = come_decrement_ref_count(node_577, ((struct sNode*)node_577)->finalize, ((struct sNode*)node_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value623,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__340,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__340;
                (Err_580 = come_decrement_ref_count(Err_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            pointer_num_581=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_581++;
            }
            __dec_obj156=type_566;
            type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1823, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj156,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_566->mPointerNum=pointer_num_581;
            ((node_577) ? node_577 = come_decrement_ref_count(node_577, ((struct sNode*)node_577)->finalize, ((struct sNode*)node_577)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        enum__505) {
            if(            string_operator_equals(type_name_491,"")) {
                __dec_obj157=type_name_491;
                type_name_491=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_576));
                __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_582=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_491),info));
            if(            !info->no_output_err) {
                Value_583=node_compile(node_582,info);
                if(                !Value_583) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result_obj__341 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value630=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1837, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    ((node_582) ? node_582 = come_decrement_ref_count(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value630,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__341,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__341;
                }
                else {
                }
            }
            __dec_obj158=type_566;
            type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1841, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((node_582) ? node_582 = come_decrement_ref_count(node_582, ((struct sNode*)node_582)->finalize, ((struct sNode*)node_582)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        union__504) {
            if(            string_operator_equals(type_name_491,"")) {
                __dec_obj159=type_name_491;
                type_name_491=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_576));
                __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            node_584=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_491),info));
            Value_585=node_compile(node_584,info);
            if(            !Value_585) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result_obj__342 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value637=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1853, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                ((node_584) ? node_584 = come_decrement_ref_count(node_584, ((struct sNode*)node_584)->finalize, ((struct sNode*)node_584)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value637,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__342,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__342;
            }
            else {
            }
            pointer_num_586=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_586++;
            }
            __dec_obj160=type_566;
            type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1867, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_566->mPointerNum=pointer_num_586;
            ((node_584) ? node_584 = come_decrement_ref_count(node_584, ((struct sNode*)node_584)->finalize, ((struct sNode*)node_584)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value641=err_msg(info,"unexpected { character")));
            come_exception_var_c3_587=multiple_assign_var10->v1;
            Err_588=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            ((Err_588)?(puts(Err_588),exit(0)):(0));
            come_call_finalizer3(__right_value641,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__343 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value643=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 1873, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_588 = come_decrement_ref_count(Err_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value643,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__343,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__343;
            (Err_588 = come_decrement_ref_count(Err_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        attribute_589=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_589,"")) {
            __dec_obj161=type_566->mAttribute;
            type_566->mAttribute=(char*)come_increment_ref_count(attribute_589);
            __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_572&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj162=var_name_567;
                var_name_567=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_514) {
                static int num_anonymous_var_name_590=0;
                num_anonymous_var_name_590++;
                __dec_obj163=var_name_567;
                var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_590));
                __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj164=var_name_567;
                var_name_567=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_591=0;
                num_anonymous_var_name_591++;
                __dec_obj165=var_name_567;
                var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_591));
                __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_572&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_592=info->no_comma;
                info->no_comma=(_Bool)1;
                node_593=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_592;
                __dec_obj166=type_566->mSizeNum;
                type_566->mSizeNum=(struct sNode*)come_increment_ref_count(node_593);
                if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
                ((node_593) ? node_593 = come_decrement_ref_count(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_594=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_589,"")&&string_operator_not_equals(attribute2_594,"")) {
                __dec_obj167=type_566->mAttribute;
                type_566->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value651=string_operator_add(attribute_589," "))),attribute2_594));
                __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value651 = come_decrement_ref_count(__right_value651, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_594,"")) {
                __dec_obj168=type_566->mAttribute;
                type_566->mAttribute=(char*)come_increment_ref_count(attribute2_594);
                __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_594 = come_decrement_ref_count(attribute2_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_589 = come_decrement_ref_count(attribute_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    lambda_flag_563) {
        if(        (_if_conditional4=(((struct sType*)(__right_value653=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_491))))),        come_call_finalizer3(__right_value653,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional4) {
            __dec_obj169=result_type_595;
            result_type_595=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value654=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_491)))));
            come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value654,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_595->mClass=((struct sClass*)(__right_value656=map$2char$phsClass$ph$p_operator_load_element(info->classes,result_type_595->mClass->mName)));
            come_call_finalizer3(__right_value656,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_491)) {
            for(            i_596=0;            i_596<list$1char$ph$p_length(info->generics_type_names);            i_596++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value657=list$1char$ph$p_operator_load_element(info->generics_type_names,i_596))),type_name_491))),                (__right_value657 = come_decrement_ref_count(__right_value657, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional5) {
                    __dec_obj170=result_type_595;
                    result_type_595=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1941, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_596)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_491)) {
            for(            i_600=0;            i_600<list$1char$ph$p_length(info->method_generics_type_names);            i_600++            ){
                if(                (_if_conditional6=(string_operator_equals(((char*)(__right_value661=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_600))),type_name_491))),                (__right_value661 = come_decrement_ref_count(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional6) {
                    __dec_obj171=result_type_595;
                    result_type_595=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1948, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_600)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj172=result_type_595;
            result_type_595=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1953, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_595->mAtomic=result_type_595->mAtomic||atomic__515;
        result_type_595->mConstant=result_type_595->mConstant||constant_494;
        __dec_obj173=result_type_595->mAlignas;
        result_type_595->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        result_type_595->mRegister=register__497;
        result_type_595->mUnsigned=result_type_595->mUnsigned||unsigned__498;
        result_type_595->mVolatile=volatile__496;
        result_type_595->mGenerate=generate__511;
        result_type_595->mRecord=result_type_595->mRecord||record__492;
        result_type_595->mUniq=result_type_595->mUniq||uniq__509;
        result_type_595->mStatic=(result_type_595->mStatic||static__495)&&!result_type_595->mUniq;
        result_type_595->mException=result_type_595->mException||exception__493;
        result_type_595->mExtern=result_type_595->mExtern||extern__507;
        result_type_595->mInline=result_type_595->mInline||inline__508;
        result_type_595->mRestrict=result_type_595->mRestrict||restrict__502;
        result_type_595->mLongLong=result_type_595->mLongLong||long_long_500;
        result_type_595->mLong=result_type_595->mLong||long__499;
        result_type_595->mShort=result_type_595->mShort||short__501;
        result_type_595->mPointerNum=pointer_num_555;
        result_type_595->mHeap=result_type_595->mHeap||heap_556;
        result_type_595->mChannel=result_type_595->mChannel||channel_559;
        result_type_595->mAnyClass=result_type_595->mAnyClass||any_class_560;
        result_type_595->mCreateVTable=result_type_595->mCreateVTable||vtable_561;
        __dec_obj174=var_name_567;
        var_name_567=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var11=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value669=parse_params(info,(_Bool)0)));
        param_types_601=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var11->v1);
        param_names_602=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var11->v2);
        param_default_parametors_603=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var11->v3);
        var_args_604=multiple_assign_var11->v4;
        come_call_finalizer3(__right_value669,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj175=type_566;
        type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1983, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj175,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj176=type_566->mResultType;
        type_566->mResultType=(struct sType*)come_increment_ref_count(result_type_595);
        come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj177=type_566->mParamTypes;
        type_566->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_601);
        come_call_finalizer3(__dec_obj177,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj178=type_566->mParamNames;
        type_566->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_602);
        come_call_finalizer3(__dec_obj178,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_566->mVarArgs=var_args_604;
        type_566->mExtern=extern__507;
        come_call_finalizer3(result_type_595,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_601,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_602,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_603,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    function_pointer_flag_568) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_605=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_605++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional7=(((struct sType*)(__right_value673=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_491))))),        come_call_finalizer3(__right_value673,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional7) {
            __dec_obj179=result_type_606;
            result_type_606=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value674=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_491)))));
            come_call_finalizer3(__dec_obj179,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value674,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            result_type_606->mClass=((struct sClass*)(__right_value676=map$2char$phsClass$ph$p_operator_load_element(info->classes,result_type_606->mClass->mName)));
            come_call_finalizer3(__right_value676,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_491)) {
            for(            i_607=0;            i_607<list$1char$ph$p_length(info->generics_type_names);            i_607++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value677=list$1char$ph$p_operator_load_element(info->generics_type_names,i_607))),type_name_491))),                (__right_value677 = come_decrement_ref_count(__right_value677, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional8) {
                    __dec_obj180=result_type_606;
                    result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2016, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_607)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_491)) {
            for(            i_608=0;            i_608<list$1char$ph$p_length(info->method_generics_type_names);            i_608++            ){
                if(                (_if_conditional9=(string_operator_equals(((char*)(__right_value681=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_608))),type_name_491))),                (__right_value681 = come_decrement_ref_count(__right_value681, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional9) {
                    __dec_obj181=result_type_606;
                    result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2023, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_608)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
        }
        else {
            __dec_obj182=result_type_606;
            result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2028, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        result_type_606->mConstant=result_type_606->mConstant||constant_494;
        result_type_606->mAtomic=result_type_606->mAtomic||atomic__515;
        __dec_obj183=result_type_606->mAlignas;
        result_type_606->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
        result_type_606->mRegister=register__497;
        result_type_606->mUnsigned=result_type_606->mUnsigned||unsigned__498;
        result_type_606->mVolatile=volatile__496;
        result_type_606->mGenerate=generate__511;
        result_type_606->mUniq=result_type_606->mUniq||uniq__509;
        result_type_606->mStatic=(result_type_606->mStatic||static__495)&&!result_type_606->mUniq;
        result_type_606->mRecord=result_type_606->mRecord||record__492;
        result_type_606->mException=result_type_606->mException||exception__493;
        result_type_606->mExtern=result_type_606->mExtern||extern__507;
        result_type_606->mInline=result_type_606->mInline||inline__508;
        result_type_606->mRestrict=result_type_606->mRestrict||restrict__502;
        result_type_606->mLongLong=result_type_606->mLongLong||long_long_500;
        result_type_606->mLong=result_type_606->mLong||long__499;
        result_type_606->mShort=result_type_606->mShort||short__501;
        result_type_606->mPointerNum+=pointer_num_555;
        result_type_606->mHeap=result_type_606->mHeap||heap_556;
        result_type_606->mChannel=result_type_606->mChannel||channel_559;
        result_type_606->mAnyClass=result_type_606->mAnyClass||any_class_560;
        result_type_606->mCreateVTable=result_type_606->mCreateVTable||vtable_561;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj184=var_name_567;
            var_name_567=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            *info->p==40) {
                __result_obj__346 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value690=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2057, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(result_type_606),(char*)come_increment_ref_count(var_name_567),(_Bool)0))));
                come_call_finalizer3(result_type_606,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value690,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__346,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__346;
            }
        }
        else {
            static int num_anonymous_var_name_609=0;
            num_anonymous_var_name_609++;
            __dec_obj185=var_name_567;
            var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_609));
            __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        function_pointer_array_610=(_Bool)0;
        function_pointer_array_num_611=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_612=0;
            while(xisdigit(*info->p)) {
                n_612=n_612*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_611=n_612;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_610=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var12=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value692=parse_params(info,(_Bool)0)));
        param_types_613=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var12->v1);
        param_names_614=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v2);
        param_default_parametors_615=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var12->v3);
        var_args_616=multiple_assign_var12->v4;
        come_call_finalizer3(__right_value692,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj186=type_566;
        type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2089, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj187=type_566->mResultType;
        type_566->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_606));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj188=type_566->mParamTypes;
        type_566->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_613);
        come_call_finalizer3(__dec_obj188,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj189=type_566->mParamNames;
        type_566->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_614);
        come_call_finalizer3(__dec_obj189,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_566->mVarArgs=var_args_616;
        type_566->mExtern=extern__507;
        if(        function_pointer_array_610) {
            type_566->mLambdaArray=(_Bool)1;
            type_566->mLambdaArrayNum=function_pointer_array_num_611;
        }
        type_566->mFunctionPointerNum=function_pointer_num_605;
        come_call_finalizer3(result_type_606,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_types_613,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_names_614,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(param_default_parametors_615,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    string_operator_equals(type_name_491,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_617=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_618=node_compile(exp_617,info);
        if(        !Value_618) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value698=err_msg(info,"invalid __typeof__ expression")));
            come_exception_var_c4_619=multiple_assign_var13->v1;
            Err_620=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            ((Err_620)?(puts(Err_620),exit(0)):(0));
            come_call_finalizer3(__right_value698,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__347 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value700=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2113, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
            (Err_620 = come_decrement_ref_count(Err_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_617) ? exp_617 = come_decrement_ref_count(exp_617, ((struct sNode*)exp_617)->finalize, ((struct sNode*)exp_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value700,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__347,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__347;
            (Err_620 = come_decrement_ref_count(Err_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
        }
        come_value_621=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj190=type_566;
        type_566=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_621->type));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        attribute_622=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_622,"")) {
            __dec_obj191=type_566->mAttribute;
            type_566->mAttribute=(char*)come_increment_ref_count(attribute_622);
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_572&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj192=var_name_567;
                var_name_567=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_514) {
                static int num_anonymous_var_name_623=0;
                num_anonymous_var_name_623++;
                __dec_obj193=var_name_567;
                var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_623));
                __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj194=var_name_567;
                var_name_567=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_624=0;
                num_anonymous_var_name_624++;
                __dec_obj195=var_name_567;
                var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_624));
                __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_572&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_625=info->no_comma;
                info->no_comma=(_Bool)1;
                node_626=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_625;
                __dec_obj196=type_566->mSizeNum;
                type_566->mSizeNum=(struct sNode*)come_increment_ref_count(node_626);
                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
                ((node_626) ? node_626 = come_decrement_ref_count(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_627=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_622,"")&&string_operator_not_equals(attribute2_627,"")) {
                __dec_obj197=type_566->mAttribute;
                type_566->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value710=string_operator_add(attribute_622," "))),attribute2_627));
                __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value710 = come_decrement_ref_count(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_627,"")) {
                __dec_obj198=type_566->mAttribute;
                type_566->mAttribute=(char*)come_increment_ref_count(attribute2_627);
                __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_627 = come_decrement_ref_count(attribute2_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        ((exp_617) ? exp_617 = come_decrement_ref_count(exp_617, ((struct sNode*)exp_617)->finalize, ((struct sNode*)exp_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_621,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_622 = come_decrement_ref_count(attribute_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        (_if_conditional10=(((struct sType*)(__right_value712=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_491))))),        come_call_finalizer3(__right_value712,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional10) {
            __dec_obj199=type_566;
            type_566=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value713=map$2char$phsType$ph$p_operator_load_element(info->types,type_name_491)))));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__right_value713,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type_566->mTypedefOriginalPointerNum=type_566->mPointerNum;
            type_566->mClass=((struct sClass*)(__right_value715=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_566->mClass->mName)));
            come_call_finalizer3(__right_value715,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj200=type_566->mOriginalTypeName;
            type_566->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_491));
            __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            type_566->mOriginalTypeNamePointerNum=pointer_num_555;
            type_566->mOriginalTypeNameHeap=heap_556;
            type_566->mConstant=type_566->mConstant||constant_494;
            type_566->mAtomic=type_566->mAtomic||atomic__515;
            __dec_obj201=type_566->mAlignas;
            type_566->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            type_566->mRegister=register__497;
            type_566->mUnsigned=type_566->mUnsigned||unsigned__498;
            type_566->mVolatile=volatile__496;
            type_566->mGenerate=generate__511;
            type_566->mUniq=type_566->mUniq||uniq__509;
            type_566->mStatic=(type_566->mStatic||static__495)&&!type_566->mUniq;
            type_566->mRecord=type_566->mRecord||record__492;
            type_566->mException=type_566->mException||exception__493;
            type_566->mExtern=type_566->mExtern||extern__507;
            type_566->mInline=type_566->mInline||inline__508;
            type_566->mRestrict=type_566->mRestrict||restrict__502;
            type_566->mLongLong=type_566->mLongLong||long_long_500;
            type_566->mLong=type_566->mLong||long__499;
            type_566->mShort=type_566->mShort||short__501;
            type_566->mPointerNum+=pointer_num_555;
            type_566->mHeap=type_566->mHeap||heap_556;
            type_566->mChannel=type_566->mChannel||channel_559;
            type_566->mAnyClass=type_566->mAnyClass||any_class_560;
            type_566->mCreateVTable=type_566->mCreateVTable||vtable_561;
            __dec_obj202=type_566->mTupleName;
            type_566->mTupleName=(char*)come_increment_ref_count(tuple_name_562);
            __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->generics_type_names,type_name_491)) {
            for(            i_628=0;            i_628<list$1char$ph$p_length(info->generics_type_names);            i_628++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value717=list$1char$ph$p_operator_load_element(info->generics_type_names,i_628))),type_name_491))),                (__right_value717 = come_decrement_ref_count(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional11) {
                    __dec_obj203=type_566;
                    type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2212, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type%d",i_628)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj203,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_566->mConstant=type_566->mConstant||constant_494;
            type_566->mAtomic=type_566->mAtomic||atomic__515;
            __dec_obj204=type_566->mAlignas;
            type_566->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            type_566->mRegister=register__497;
            type_566->mUnsigned=type_566->mUnsigned||unsigned__498;
            type_566->mVolatile=volatile__496;
            type_566->mGenerate=generate__511;
            type_566->mUniq=type_566->mUniq||uniq__509;
            type_566->mStatic=(type_566->mStatic||static__495)&&!type_566->mUniq;
            type_566->mRecord=type_566->mRecord||record__492;
            type_566->mException=type_566->mException||exception__493;
            type_566->mExtern=type_566->mExtern||extern__507;
            type_566->mInline=type_566->mInline||inline__508;
            type_566->mRestrict=type_566->mRestrict||restrict__502;
            type_566->mLongLong=type_566->mLongLong||long_long_500;
            type_566->mLong=type_566->mLong||long__499;
            type_566->mShort=type_566->mShort||short__501;
            type_566->mPointerNum+=pointer_num_555;
            type_566->mHeap=type_566->mHeap||heap_556;
            type_566->mChannel=type_566->mChannel||channel_559;
            type_566->mAnyClass=type_566->mAnyClass||any_class_560;
            type_566->mCreateVTable=type_566->mCreateVTable||vtable_561;
            __dec_obj205=type_566->mTupleName;
            type_566->mTupleName=(char*)come_increment_ref_count(tuple_name_562);
            __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        list$1char$ph$p_contained(info->method_generics_type_names,type_name_491)) {
            for(            i_629=0;            i_629<list$1char$ph$p_length(info->method_generics_type_names);            i_629++            ){
                if(                (_if_conditional12=(string_operator_equals(((char*)(__right_value721=list$1char$ph$p_operator_load_element(info->method_generics_type_names,i_629))),type_name_491))),                (__right_value721 = come_decrement_ref_count(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                _if_conditional12) {
                    __dec_obj206=type_566;
                    type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2243, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_629)),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj206,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            type_566->mConstant=type_566->mConstant||constant_494;
            type_566->mAtomic=type_566->mAtomic||atomic__515;
            __dec_obj207=type_566->mAlignas;
            type_566->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            type_566->mRegister=register__497;
            type_566->mUnsigned=type_566->mUnsigned||unsigned__498;
            type_566->mVolatile=volatile__496;
            type_566->mGenerate=generate__511;
            type_566->mUniq=type_566->mUniq||uniq__509;
            type_566->mStatic=(type_566->mStatic||static__495)&&!type_566->mUniq;
            type_566->mRecord=type_566->mRecord||record__492;
            type_566->mException=type_566->mException||exception__493;
            type_566->mExtern=type_566->mExtern||extern__507;
            type_566->mInline=type_566->mInline||inline__508;
            type_566->mRestrict=type_566->mRestrict||restrict__502;
            type_566->mLongLong=type_566->mLongLong||long_long_500;
            type_566->mLong=type_566->mLong||long__499;
            type_566->mShort=type_566->mShort||short__501;
            type_566->mPointerNum+=pointer_num_555;
            type_566->mHeap=type_566->mHeap||heap_556;
            type_566->mChannel=type_566->mChannel||channel_559;
            type_566->mAnyClass=type_566->mAnyClass||any_class_560;
            type_566->mCreateVTable=type_566->mCreateVTable||vtable_561;
            __dec_obj208=type_566->mTupleName;
            type_566->mTupleName=(char*)come_increment_ref_count(tuple_name_562);
            __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional13=(((struct sClass*)(__right_value726=map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value725=__builtin_string(type_name_491))))))==((void*)0))),            (__right_value725 = come_decrement_ref_count(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value726,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                __result_obj__348 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value728=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2277, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value728,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__348,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__348;
            }
            __dec_obj209=type_566;
            type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2280, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj209,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            while((_Bool)1) {
                multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value732=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_630=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                var_name_631=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                err_632=multiple_assign_var14->v3;
                come_call_finalizer3(__right_value732,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_632) {
                    __result_obj__349 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value734=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2286, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer3(generics_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_631 = come_decrement_ref_count(var_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value734,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__349,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__349;
                }
                list$1sType$ph$p_push_back(type_566->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_630));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_631 = come_decrement_ref_count(var_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value735=err_msg(info,"invalid generics type(%c)(%c)(%c)",*info->p,*(info->p+1),*(info->p+2))));
                    come_exception_var_c5_633=multiple_assign_var15->v1;
                    Err_634=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    ((Err_634)?(puts(Err_634),exit(0)):(0));
                    come_call_finalizer3(__right_value735,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__350 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value737=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2303, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    (Err_634 = come_decrement_ref_count(Err_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(generics_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_631 = come_decrement_ref_count(var_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value737,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__350,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__350;
                    (Err_634 = come_decrement_ref_count(Err_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                come_call_finalizer3(generics_type_630,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_631 = come_decrement_ref_count(var_name_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            is_contained_generics_class(type_566,info)) {
                __dec_obj210=type_566;
                type_566=(struct sType*)come_increment_ref_count(solve_generics(type_566,info->generics_type,info));
                come_call_finalizer3(__dec_obj210,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_566,type_566,info)) {
                    new_name_635=(char*)come_increment_ref_count(create_generics_name(type_566,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_635);
                    exit(7);
                    (new_name_635 = come_decrement_ref_count(new_name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_566->mConstant=type_566->mConstant||constant_494;
            type_566->mAtomic=type_566->mAtomic||atomic__515;
            __dec_obj211=type_566->mAlignas;
            type_566->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
            if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            type_566->mRegister=register__497;
            type_566->mUnsigned=type_566->mUnsigned||unsigned__498;
            type_566->mVolatile=volatile__496;
            type_566->mGenerate=generate__511;
            type_566->mUniq=type_566->mUniq||uniq__509;
            type_566->mStatic=(type_566->mStatic||static__495)&&!type_566->mUniq;
            type_566->mRecord=type_566->mRecord||record__492;
            type_566->mException=type_566->mException||exception__493;
            type_566->mExtern=type_566->mExtern||extern__507;
            type_566->mInline=type_566->mInline||inline__508;
            type_566->mRestrict=type_566->mRestrict||restrict__502;
            type_566->mLongLong=type_566->mLongLong||long_long_500;
            type_566->mLong=type_566->mLong||long__499;
            type_566->mShort=type_566->mShort||short__501;
            type_566->mPointerNum+=pointer_num_555;
            type_566->mHeap=type_566->mHeap||heap_556;
            type_566->mChannel=type_566->mChannel||channel_559;
            type_566->mAnyClass=type_566->mAnyClass||any_class_560;
            type_566->mCreateVTable=type_566->mCreateVTable||vtable_561;
            __dec_obj212=type_566->mTupleName;
            type_566->mTupleName=(char*)come_increment_ref_count(tuple_name_562);
            __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj213=type_name_491;
            type_name_491=(char*)come_increment_ref_count(type_566->mClass->mName);
            __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            if(            struct__503) {
                klass_636=((struct sClass*)(__right_value740=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_name_491)));
                come_call_finalizer3(__right_value740,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_636==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_491)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2350, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__504) {
                klass_678=((struct sClass*)(__right_value750=map$2char$phsClass$ph$p_operator_load_element(info->classes,type_name_491)));
                come_call_finalizer3(__right_value750,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                klass_678==((void*)0)&&*info->p!=60) {
                    map$2char$phsClass$ph$p_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_491)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2357, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj214=type_566;
            type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2361, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(type_name_491)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj214,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_566->mConstant=type_566->mConstant||constant_494;
            type_566->mAtomic=type_566->mAtomic||atomic__515;
            __dec_obj215=type_566->mAlignas;
            type_566->mAlignas=(struct sNode*)come_increment_ref_count(alignas__512);
            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
            type_566->mRegister=register__497;
            type_566->mUnsigned=type_566->mUnsigned||unsigned__498;
            type_566->mVolatile=volatile__496;
            type_566->mGenerate=generate__511;
            type_566->mUniq=type_566->mUniq||uniq__509;
            type_566->mStatic=(type_566->mStatic||static__495)&&!type_566->mUniq;
            type_566->mRecord=type_566->mRecord||record__492;
            type_566->mException=type_566->mException||exception__493;
            type_566->mExtern=type_566->mExtern||extern__507;
            type_566->mInline=type_566->mInline||inline__508;
            type_566->mRestrict=type_566->mRestrict||restrict__502;
            type_566->mLongLong=type_566->mLongLong||long_long_500;
            type_566->mLong=type_566->mLong||long__499;
            type_566->mShort=type_566->mShort||short__501;
            type_566->mPointerNum+=pointer_num_555;
            type_566->mHeap=type_566->mHeap||heap_556;
            type_566->mChannel=type_566->mChannel||channel_559;
            type_566->mAnyClass=type_566->mAnyClass||any_class_560;
            type_566->mCreateVTable=type_566->mCreateVTable||vtable_561;
            __dec_obj216=type_566->mTupleName;
            type_566->mTupleName=(char*)come_increment_ref_count(tuple_name_562);
            __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_566->mPointerNum++;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_566->mHeap=(_Bool)1;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_566->mNoHeap=(_Bool)1;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_566->mGuardValue=(_Bool)1;
                }
                else {
                    type_566->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_566->mNoCallingDestructor=(_Bool)1;
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
                type_566->mPointerNum++;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_566->mHeap=(_Bool)1;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_566->mCreateVTable=(_Bool)1;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_566->mAnyClass=(_Bool)1;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_566->mChannel=(_Bool)1;
                if(                type_566->mNoSolvedGenericsType) {
                    type_566->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_679=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05type.c", 2504, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1sType$ph$p_push_back(types_679,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_566)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value761=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_680=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                name_681=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                err_682=multiple_assign_var16->v3;
                come_call_finalizer3(__right_value761,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_682) {
                    __result_obj__372 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value763=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2515, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0))));
                    come_call_finalizer3(type2_680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_681 = come_decrement_ref_count(name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(types_679,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value763,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_call_finalizer3(__result_obj__372,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__372;
                }
                list$1sType$ph$p_push_back(types_679,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_680)));
                come_call_finalizer3(type2_680,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_681 = come_decrement_ref_count(name_681, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_683=list$1sType$ph$p_length(types_679);
            __dec_obj217=type_566;
            type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2528, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("tuple%d",num_tuples_683)),(_Bool)0,info));
            come_call_finalizer3(__dec_obj217,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type_566->mPointerNum++;
            type_566->mHeap=(_Bool)1;
            for(            o2_saved_684=(struct list$1sType$ph*)come_increment_ref_count((types_679)),it_685=list$1sType$ph$p_begin((o2_saved_684));            !list$1sType$ph$p_end((o2_saved_684));            it_685=list$1sType$ph$p_next((o2_saved_684))            ){
                list$1sType$ph$p_push_back(type_566->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value768=come_call_cloner(sType_clone, it_685))))));
                come_call_finalizer3(__right_value768,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            come_call_finalizer3(o2_saved_684,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_566->mPointerNum++;
                    if(                    type_566->mNoSolvedGenericsType) {
                        type_566->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_566->mHeap=(_Bool)1;
                    if(                    type_566->mNoSolvedGenericsType) {
                        type_566->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_566->mCreateVTable=(_Bool)1;
                    if(                    type_566->mNoSolvedGenericsType) {
                        type_566->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_566->mAnyClass=(_Bool)1;
                    if(                    type_566->mNoSolvedGenericsType) {
                        type_566->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_566->mChannel=(_Bool)1;
                    if(                    type_566->mNoSolvedGenericsType) {
                        type_566->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_566,info)) {
                __dec_obj218=type_566;
                type_566=(struct sType*)come_increment_ref_count(solve_generics(type_566,info->generics_type,info));
                come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_566,type_566,info)) {
                    new_name_686=(char*)come_increment_ref_count(create_generics_name(type_566,info));
                    printf("output generics is failed(%s)\n",new_name_686);
                    exit(9);
                    (new_name_686 = come_decrement_ref_count(new_name_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            type_566->mMultipleTypes=(_Bool)1;
            __dec_obj219=type_name_491;
            type_name_491=(char*)come_increment_ref_count(type_566->mClass->mName);
            __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            come_call_finalizer3(types_679,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        attribute_687=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_687,"")) {
            __dec_obj220=type_566->mAttribute;
            type_566->mAttribute=(char*)come_increment_ref_count(attribute_687);
            __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_572&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj221=var_name_567;
                var_name_567=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            anonymous_name_514) {
                static int num_anonymous_var_name_688=0;
                num_anonymous_var_name_688++;
                __dec_obj222=var_name_567;
                var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_688));
                __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj223=var_name_567;
                var_name_567=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                static int num_anonymous_var_name_689=0;
                num_anonymous_var_name_689++;
                __dec_obj224=var_name_567;
                var_name_567=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_689));
                __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            if(            var_name_between_brace_572&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_690=info->no_comma;
                info->no_comma=(_Bool)1;
                node_691=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_690;
                __dec_obj225=type_566->mSizeNum;
                type_566->mSizeNum=(struct sNode*)come_increment_ref_count(node_691);
                if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0); };
                ((node_691) ? node_691 = come_decrement_ref_count(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            attribute2_692=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_687,"")&&string_operator_not_equals(attribute2_692,"")) {
                __dec_obj226=type_566->mAttribute;
                type_566->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value778=string_operator_add(attribute_687," "))),attribute2_692));
                __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value778 = come_decrement_ref_count(__right_value778, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            string_operator_not_equals(attribute2_692,"")) {
                __dec_obj227=type_566->mAttribute;
                type_566->mAttribute=(char*)come_increment_ref_count(attribute2_692);
                __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            (attribute2_692 = come_decrement_ref_count(attribute2_692, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (attribute_687 = come_decrement_ref_count(attribute_687, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            type_566->mArrayPointerType=(_Bool)1;
            type_566->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_693=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNode$ph$p_push_back(type_566->mArrayNum,(struct sNode*)come_increment_ref_count(node_693));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        ((node_693) ? node_693 = come_decrement_ref_count(node_693, ((struct sNode*)node_693)->finalize, ((struct sNode*)node_693)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    multiple_assign_var17=((struct tuple2$2char$phchar$ph*)(__right_value781=parse_attribute(info,(_Bool)0)));
    asm_name_694=(char*)come_increment_ref_count(multiple_assign_var17->v1);
    attribute2_695=(char*)come_increment_ref_count(multiple_assign_var17->v2);
    come_call_finalizer3(__right_value781,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(attribute2_695,"")) {
        __dec_obj228=type_566->mAttribute;
        type_566->mAttribute=(char*)come_increment_ref_count(attribute2_695);
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __dec_obj229=type_566->mAsmName;
    type_566->mAsmName=(char*)come_increment_ref_count(asm_name_694);
    __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    parse_sharp_v5(info);
    if(    type_566->mChannel) {
        type_before_696=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_566));
        __dec_obj230=type_566;
        type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2701, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj230,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj231=type_566->mArrayNum;
        type_566->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1___697[0]=((struct sNode*)(__right_value786=create_int_node(2,info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph**)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05type.c", 2702, "struct list$1sNode$ph", list$1sNode$ph_finalize, list$1sNode$ph_clone, list$1sNode$ph_get_hash_key, list$1sNode$ph_equals)),1,__list_values1___697)));
        come_call_finalizer3(__dec_obj231,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        ((__right_value786) ? __right_value786 = come_decrement_ref_count(__right_value786, ((struct sNode*)__right_value786)->finalize, ((struct sNode*)__right_value786)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        __dec_obj232=type_566->mChannelType;
        type_566->mChannelType=(struct sType*)come_increment_ref_count(type_before_696);
        come_call_finalizer3(__dec_obj232,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_566->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_696,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    type_566->mAnyClass&&!type_566->mClass->mProtocol) {
        type_before_701=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_566));
        type_before_701->mHeap=(_Bool)1;
        type_before_701->mPointerNum=1;
        __dec_obj233=type_566;
        type_566=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2710, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        come_call_finalizer3(__dec_obj233,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_566->mHeap=(_Bool)1;
        type_566->mPointerNum=1;
        __dec_obj234=type_566->mAnyOriginalType;
        type_566->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_701);
        come_call_finalizer3(__dec_obj234,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type_566->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_701,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    type_566->mException) {
        type2_702=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2717, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type2_702->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2718, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type0")),(_Bool)0,info)));
        list$1sType$ph$p_operator_store_element(type2_702->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2719, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("generics_type1")),(_Bool)0,info)));
        type2_702->mPointerNum=1;
        type2_702->mHeap=(_Bool)1;
        type3_708=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2723, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("tuple2")),(_Bool)0,info));
        list$1sType$ph$p_operator_store_element(type3_708->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_566));
        list$1sType$ph$p_operator_store_element(type3_708->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2725, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info)));
        ((struct sType*)(__right_value809=list$1sType$ph$p_operator_load_element(type3_708->mGenericsTypes,1)))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value809,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type4_709=(struct sType*)come_increment_ref_count(solve_generics(type2_702,type3_708,info));
        type4_709->mException=(_Bool)1;
        type4_709->mUniq=type_566->mUniq;
        __result_obj__378 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value812=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2733, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type4_709),(char*)come_increment_ref_count(var_name_567),(_Bool)1))));
        come_call_finalizer3(type2_702,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(type3_708,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(type4_709,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (asm_name_694 = come_decrement_ref_count(asm_name_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute2_695 = come_decrement_ref_count(attribute2_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value812,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(__result_obj__378,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__378;
        come_call_finalizer3(type2_702,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(type3_708,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        come_call_finalizer3(type4_709,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    string_operator_not_equals(attribute_554,"")) {
        __dec_obj236=type_566->mAttribute;
        type_566->mAttribute=(char*)come_increment_ref_count(attribute_554);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__379 = come_increment_ref_count(((struct tuple3$3sType$phchar$phbool$*)(__right_value814=tuple3$3sType$phchar$phbool$_initialize((struct tuple3$3sType$phchar$phbool$**)come_increment_ref_count((struct tuple3$3sType$phchar$phbool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phbool$)*(1), "05type.c", 2740, "struct tuple3$3sType$phchar$phbool$", tuple3$3sType$phchar$phbool$_finalize, tuple3$3sType$phchar$phbool$_clone, tuple3$3sType$phchar$phbool$_get_hash_key, tuple3$3sType$phchar$phbool$_equals)),(struct sType*)come_increment_ref_count(type_566),(char*)come_increment_ref_count(var_name_567),(_Bool)1))));
    (type_name_491 = come_decrement_ref_count(type_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((alignas__512) ? alignas__512 = come_decrement_ref_count(alignas__512, ((struct sNode*)alignas__512)->finalize, ((struct sNode*)alignas__512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute_554 = come_decrement_ref_count(attribute_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (tuple_name_562 = come_decrement_ref_count(tuple_name_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_566,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_567 = come_decrement_ref_count(var_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (asm_name_694 = come_decrement_ref_count(asm_name_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (attribute2_695 = come_decrement_ref_count(attribute2_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value814,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__379,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__379;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_597;
int i_598;
char* __result_obj__344;
char* default_value_599;
char* __result_obj__345;
default_value_599 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_597=self->head;
    i_598=0;
    while(it_597!=((void*)0)) {
        if(        position==i_598) {
            __result_obj__344 = come_increment_ref_count(it_597->item);
            (__result_obj__344 = come_decrement_ref_count(__result_obj__344, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__344;
        }
        it_597=it_597->next;
        i_598++;
    }
    memset(&default_value_599,0,sizeof(char*));
    __result_obj__345 = come_increment_ref_count(default_value_599);
    (default_value_599 = come_decrement_ref_count(default_value_599, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__345 = come_decrement_ref_count(__result_obj__345, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__345;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph$p_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_654;
unsigned int it_655;
_Bool same_key_exist_672;
char* it2_675;
struct map$2char$phsClass$ph* __result_obj__371;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph$p_rehash(self);
    }
    hash_654=string_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while((_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            string_equals(self->keys[it_655],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_655]);
                    (self->keys[it_655] = come_decrement_ref_count(self->keys[it_655], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_655]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_655]);
                    self->keys[it_655]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_655],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_655]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_655]=item;
                }
                break;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_655]=(_Bool)1;
            if(            1) {
                self->keys[it_655]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_655]=key;
            }
            if(            1) {
                self->items[it_655]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_655]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_672=(_Bool)0;
    for(    it2_675=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_675=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_675,key)) {
            same_key_exist_672=(_Bool)1;
        }
    }
    if(    !same_key_exist_672) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__371 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
}

static void map$2char$phsClass$ph$p_rehash(struct map$2char$phsClass$ph* self){
int size_637;
void* __right_value741 = (void*)0;
char** keys_638;
void* __right_value742 = (void*)0;
struct sClass** items_639;
void* __right_value743 = (void*)0;
_Bool* item_existance_640;
int len_641;
char* it_644;
struct sClass* default_value_647;
void* __right_value744 = (void*)0;
struct sClass* it2_648;
unsigned int hash_651;
int n_652;
struct sClass* default_value_653;
void* __right_value745 = (void*)0;
default_value_647 = (void*)0;
default_value_653 = (void*)0;
    size_637=self->size*10;
    keys_638=(char**)come_increment_ref_count(((char**)(__right_value741=(char**)come_calloc(1, sizeof(char*)*(1*(size_637)), "./comelang.h", 2911, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_639=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value742=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_637)), "./comelang.h", 2912, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_640=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value743=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_637)), "./comelang.h", 2913, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_641=0;
    for(    it_644=map$2char$phsClass$ph$p_begin(self);    !map$2char$phsClass$ph$p_end(self);    it_644=map$2char$phsClass$ph$p_next(self)    ){
        memset(&default_value_647,0,sizeof(struct sClass*));
        it2_648=((struct sClass*)(__right_value744=map$2char$phsClass$ph$p_at(self,it_644,(struct sClass*)come_increment_ref_count(default_value_647))));
        come_call_finalizer3(__right_value744,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_651=string_get_hash_key(((char*)it_644))%size_637;
        n_652=hash_651;
        while((_Bool)1) {
            if(            item_existance_640[n_652]) {
                n_652++;
                if(                n_652>=size_637) {
                    n_652=0;
                }
                else if(                n_652==hash_651) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_640[n_652]=(_Bool)1;
                keys_638[n_652]=it_644;
                items_639[n_652]=((struct sClass*)(__right_value745=map$2char$phsClass$ph$p_at(self,it_644,(struct sClass*)come_increment_ref_count(default_value_653))));
                come_call_finalizer3(__right_value745,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_641++;
                come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                come_call_finalizer3(default_value_653,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        come_call_finalizer3(default_value_647,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_638;
    self->items=items_639;
    self->item_existance=item_existance_640;
    self->size=size_637;
    self->len=len_641;
}

static char* map$2char$phsClass$ph$p_begin(struct map$2char$phsClass$ph* self){
char* result_642;
char* __result_obj__351;
char* __result_obj__352;
char* result_643;
char* __result_obj__353;
result_642 = (void*)0;
result_643 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_642,0,sizeof(char*));
        __result_obj__351 = result_642;
        return __result_obj__351;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__352 = self->key_list->it->item;
        return __result_obj__352;
    }
    memset(&result_643,0,sizeof(char*));
    __result_obj__353 = result_643;
    return __result_obj__353;
}

static _Bool map$2char$phsClass$ph$p_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph$p_next(struct map$2char$phsClass$ph* self){
char* result_645;
char* __result_obj__354;
char* __result_obj__355;
char* result_646;
char* __result_obj__356;
result_645 = (void*)0;
result_646 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_645,0,sizeof(char*));
        __result_obj__354 = result_645;
        return __result_obj__354;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__355 = self->key_list->it->item;
        return __result_obj__355;
    }
    memset(&result_646,0,sizeof(char*));
    __result_obj__356 = result_646;
    return __result_obj__356;
}

static struct sClass* map$2char$phsClass$ph$p_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_649;
unsigned int it_650;
struct sClass* __result_obj__357;
struct sClass* __result_obj__358;
struct sClass* __result_obj__359;
struct sClass* __result_obj__360;
    hash_649=string_get_hash_key(((char*)key))%self->size;
    it_650=hash_649;
    while((_Bool)1) {
        if(        self->item_existance[it_650]) {
            if(            string_equals(self->keys[it_650],key)) {
                __result_obj__357 = come_increment_ref_count(self->items[it_650]);
                come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__357,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__357;
            }
            it_650++;
            if(            it_650>=self->size) {
                it_650=0;
            }
            else if(            it_650==hash_649) {
                __result_obj__358 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                come_call_finalizer3(__result_obj__358,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__358;
            }
        }
        else {
            __result_obj__359 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            come_call_finalizer3(__result_obj__359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__359;
        }
    }
    __result_obj__360 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__360,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_656;
struct list_item$1char$p* it_657;
struct list$1char$p* __result_obj__364;
    it2_656=0;
    it_657=self->head;
    while(it_657!=((void*)0)) {
        if(        charp_equals(it_657->item,item)) {
            list$1char$p$p_delete(self,it2_656,it2_656+1);
            break;
        }
        it2_656++;
        it_657=it_657->next;
    }
    __result_obj__364 = self;
    return __result_obj__364;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_658;
struct list$1char$p* __result_obj__361;
struct list_item$1char$p* it_661;
int i_662;
struct list_item$1char$p* prev_it_663;
struct list_item$1char$p* it_664;
int i_665;
struct list_item$1char$p* prev_it_666;
struct list_item$1char$p* it_667;
struct list_item$1char$p* head_prev_it_668;
struct list_item$1char$p* tail_it_669;
int i_670;
struct list_item$1char$p* prev_it_671;
struct list$1char$p* __result_obj__363;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_658=tail;
        tail=head;
        head=tmp_658;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__361 = self;
        return __result_obj__361;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_661=self->head;
        i_662=0;
        while(it_661!=((void*)0)) {
            if(            i_662<tail) {
                prev_it_663=it_661;
                it_661=it_661->next;
                i_662++;
                come_call_finalizer3(prev_it_663,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_662==tail) {
                self->head=it_661;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_661=it_661->next;
                i_662++;
            }
        }
    }
    else if(    tail==self->len) {
        it_664=self->head;
        i_665=0;
        while(it_664!=((void*)0)) {
            if(            i_665==head) {
                self->tail=it_664->prev;
                self->tail->next=((void*)0);
            }
            if(            i_665>=head) {
                prev_it_666=it_664;
                it_664=it_664->next;
                i_665++;
                come_call_finalizer3(prev_it_666,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_664=it_664->next;
                i_665++;
            }
        }
    }
    else {
        it_667=self->head;
        head_prev_it_668=((void*)0);
        tail_it_669=((void*)0);
        i_670=0;
        while(it_667!=((void*)0)) {
            if(            i_670==head) {
                head_prev_it_668=it_667->prev;
            }
            if(            i_670==tail) {
                tail_it_669=it_667;
            }
            if(            i_670>=head&&i_670<tail) {
                prev_it_671=it_667;
                it_667=it_667->next;
                i_670++;
                come_call_finalizer3(prev_it_671,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_667=it_667->next;
                i_670++;
            }
        }
        if(        head_prev_it_668!=((void*)0)) {
            head_prev_it_668->next=tail_it_669;
        }
        if(        tail_it_669!=((void*)0)) {
            tail_it_669->prev=head_prev_it_668;
        }
    }
    __result_obj__363 = self;
    return __result_obj__363;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_659;
struct list_item$1char$p* prev_it_660;
struct list$1char$p* __result_obj__362;
    it_659=self->head;
    while(it_659!=((void*)0)) {
        prev_it_660=it_659;
        it_659=it_659->next;
        come_call_finalizer3(prev_it_660,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__362 = self;
    return __result_obj__362;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_673;
char* __result_obj__365;
char* __result_obj__366;
char* result_674;
char* __result_obj__367;
result_673 = (void*)0;
result_674 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_673,0,sizeof(char*));
        __result_obj__365 = result_673;
        return __result_obj__365;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__366 = self->it->item;
        return __result_obj__366;
    }
    memset(&result_674,0,sizeof(char*));
    __result_obj__367 = result_674;
    return __result_obj__367;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_676;
char* __result_obj__368;
char* __result_obj__369;
char* result_677;
char* __result_obj__370;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_676,0,sizeof(char*));
        __result_obj__368 = result_676;
        return __result_obj__368;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__369 = self->it->item;
        return __result_obj__369;
    }
    memset(&result_677,0,sizeof(char*));
    __result_obj__370 = result_677;
    return __result_obj__370;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values){
int i_698;
struct list$1sNode$ph* __result_obj__373;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_698=0;    i_698<num_value;    i_698++    ){
        list$1sNode$ph$p_push_back(self,(struct sNode*)come_increment_ref_count(values[i_698]));
    }
    __result_obj__373 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__373,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__373;
}

static struct list$1sNode$ph* list$1sNode$ph_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__374;
void* __right_value787 = (void*)0;
struct list$1sNode$ph* result_699;
struct list$1sNode$ph* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__374,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__374;
    }
    result_699=(struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "list$1sNode$ph_clone", 3, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_699->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_699->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_699->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_699->it=self->it;
    }
    __result_obj__375 = come_increment_ref_count(result_699);
    come_call_finalizer3(result_699,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    come_call_finalizer3(__result_obj__375,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
}

static unsigned int list$1sNode$ph_get_hash_key(struct list$1sNode$ph* self){
unsigned int result_700;
    result_700=0;
    result_700+=int_get_hash_key(((int)self->head));
    result_700+=int_get_hash_key(((int)self->tail));
    result_700+=int_get_hash_key(((int)self->len));
    result_700+=int_get_hash_key(((int)self->it));
    return result_700;
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

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph$p_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph$p_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_703;
int i_704;
struct sType* default_value_705;
struct list$1sType$ph* __result_obj__376;
struct list_item$1sType$ph* it_706;
int i_707;
struct sType* __dec_obj235;
struct list$1sType$ph* __result_obj__377;
default_value_705 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_703=self->len;
        for(        i_704=0;        i_704<position-len_703;        i_704++        ){
            memset(&default_value_705,0,sizeof(struct sType*));
            list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(default_value_705));
            come_call_finalizer3(default_value_705,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__376 = self;
        come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__376;
    }
    it_706=self->head;
    i_707=0;
    while(it_706!=((void*)0)) {
        if(        position==i_707) {
            __dec_obj235=it_706->item;
            it_706->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj235,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_706=it_706->next;
        i_707++;
    }
    __result_obj__377 = self;
    come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__377;
}

