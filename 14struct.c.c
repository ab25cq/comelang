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
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
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
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$ph* key_list;
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void come_print_heap_info(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
static struct smart_pointer$1char$* smart_pointer$1char$_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
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
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
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
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info);
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
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char$* smart_pointer$1char$_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__62;
    __dec_obj13=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__62 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,smart_pointer$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__65;
    __dec_obj14=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__65 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,smart_pointer$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__67;
    __dec_obj15=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__67 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__67,smart_pointer$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__67;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__69;
    __dec_obj16=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,smart_pointer$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__72;
    __dec_obj17=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,smart_pointer$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__77;
    __dec_obj18=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__77 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,smart_pointer$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__79;
    __dec_obj19=self->memory,
    self->memory=(struct buffer*)come_increment_ref_count(value);
    /*b*/ come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__79 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__79,smart_pointer$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__79;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->memory,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_139;
struct list$1char$* __result_obj__82;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1char$_push_back(self,values[i_139]);
    }
    __result_obj__82 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__82,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__82;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_140;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_141;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_142;
struct list$1char$* __result_obj__81;
    if(    self->len==0) {
        litem_140=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1274, "struct list_item$1char$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1284, "struct list_item$1char$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1294, "struct list_item$1char$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__81 = self;
    return __result_obj__81;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_143;
struct list_item$1char$* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_145;
struct list$1char$p* __result_obj__85;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1char$p_push_back(self,values[i_145]);
    }
    __result_obj__85 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_146;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_147;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_148;
struct list$1char$p* __result_obj__84;
    if(    self->len==0) {
        litem_146=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1274, "struct list_item$1char$p*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1284, "struct list_item$1char$p*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1294, "struct list_item$1char$p*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__84 = self;
    return __result_obj__84;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_149;
struct list_item$1char$p* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_151;
struct list$1short$* __result_obj__88;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1short$_push_back(self,values[i_151]);
    }
    __result_obj__88 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_152;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_153;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_154;
struct list$1short$* __result_obj__87;
    if(    self->len==0) {
        litem_152=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1274, "struct list_item$1short$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1284, "struct list_item$1short$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1294, "struct list_item$1short$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__87 = self;
    return __result_obj__87;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_155;
struct list_item$1short$* prev_it_156;
    it_155=self->head;
    while(it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_157;
struct list$1int$* __result_obj__91;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1int$_push_back(self,values[i_157]);
    }
    __result_obj__91 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__91,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_158;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_159;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_160;
struct list$1int$* __result_obj__90;
    if(    self->len==0) {
        litem_158=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1274, "struct list_item$1int$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1284, "struct list_item$1int$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1294, "struct list_item$1int$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__90 = self;
    return __result_obj__90;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_161;
struct list_item$1int$* prev_it_162;
    it_161=self->head;
    while(it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_163;
struct list$1long$* __result_obj__94;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_163=0;    i_163<num_value;    i_163++    ){
        list$1long$_push_back(self,values[i_163]);
    }
    __result_obj__94 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__94,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__94;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_164;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_165;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_166;
struct list$1long$* __result_obj__93;
    if(    self->len==0) {
        litem_164=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1274, "struct list_item$1long$*"))));
        litem_164->prev=((void*)0);
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head=litem_164;
    }
    else if(    self->len==1) {
        litem_165=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1284, "struct list_item$1long$*"))));
        litem_165->prev=self->head;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head->next=litem_165;
    }
    else {
        litem_166=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1294, "struct list_item$1long$*"))));
        litem_166->prev=self->tail;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail->next=litem_166;
        self->tail=litem_166;
    }
    self->len++;
    __result_obj__93 = self;
    return __result_obj__93;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_167;
struct list_item$1long$* prev_it_168;
    it_167=self->head;
    while(it_167!=((void*)0)) {
        prev_it_168=it_167;
        it_167=it_167->next;
        /*c*/ come_call_finalizer3(prev_it_168,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_169;
struct list$1float$* __result_obj__97;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_169=0;    i_169<num_value;    i_169++    ){
        list$1float$_push_back(self,values[i_169]);
    }
    __result_obj__97 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__97,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_170;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_171;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_172;
struct list$1float$* __result_obj__96;
    if(    self->len==0) {
        litem_170=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1274, "struct list_item$1float$*"))));
        litem_170->prev=((void*)0);
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head=litem_170;
    }
    else if(    self->len==1) {
        litem_171=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1284, "struct list_item$1float$*"))));
        litem_171->prev=self->head;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head->next=litem_171;
    }
    else {
        litem_172=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1294, "struct list_item$1float$*"))));
        litem_172->prev=self->tail;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail->next=litem_172;
        self->tail=litem_172;
    }
    self->len++;
    __result_obj__96 = self;
    return __result_obj__96;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_173;
struct list_item$1float$* prev_it_174;
    it_173=self->head;
    while(it_173!=((void*)0)) {
        prev_it_174=it_173;
        it_173=it_173->next;
        /*c*/ come_call_finalizer3(prev_it_174,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_175;
struct list$1double$* __result_obj__100;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1double$_push_back(self,values[i_175]);
    }
    __result_obj__100 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__100,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__100;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_176;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_177;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_178;
struct list$1double$* __result_obj__99;
    if(    self->len==0) {
        litem_176=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1274, "struct list_item$1double$*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1284, "struct list_item$1double$*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1294, "struct list_item$1double$*"))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__99 = self;
    return __result_obj__99;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_179;
struct list_item$1double$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*c*/ come_call_finalizer3(prev_it_180,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__138;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__138 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__138,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__138;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_214;
struct list_item$1char$ph* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        /*c*/ come_call_finalizer3(prev_it_215,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value173 = (void*)0;
struct list_item$1char$ph* litem_219;
char* __dec_obj20;
void* __right_value174 = (void*)0;
struct list_item$1char$ph* litem_220;
char* __dec_obj21;
void* __right_value175 = (void*)0;
struct list_item$1char$ph* litem_221;
char* __dec_obj22;
struct list$1char$ph* __result_obj__140;
    if(    self->len==0) {
        litem_219=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value173=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1274, "struct list_item$1char$ph*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        __dec_obj20=litem_219->item,
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value174=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1284, "struct list_item$1char$ph*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        __dec_obj21=litem_220->item,
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value175=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1294, "struct list_item$1char$ph*"))));
        litem_221->prev=self->tail;
        litem_221->next=((void*)0);
        __dec_obj22=litem_221->item,
        litem_221->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_221;
        self->tail=litem_221;
    }
    self->len++;
    __result_obj__140 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__140;
}

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_274;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_275;
_Bool existance_generics_276;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_277;
struct tuple2$2char$phsType$ph* it_280;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_283=0;
struct sType* type_284=0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
_Bool _if_conditional1;
void* __right_value241 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
        return;
    }
    name_274=(char*)come_increment_ref_count(klass->mName);
    buf_275=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer*"))));
    buffer_append_format(buf_275,"struct %s\n{\n",klass->mName);
    existance_generics_276=(_Bool)0;
    for(    o2_saved_277=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_280=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_277));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_277));    it_280=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_277))    ){
        multiple_assign_var1=it_280;
        name_283=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_284=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_284,info)||is_contained_generics_types(type_284,info)) {
            existance_generics_276=(_Bool)1;
        }
        type_284->mStatic=(_Bool)0;
        buffer_append_str(buf_275,"    ");
        buffer_append_str(buf_275,((char*)(__right_value233=make_define_var(type_284,name_283,(_Bool)0,info))));
        (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_275,";\n");
        (name_283 = come_decrement_ref_count(name_283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_284,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_277,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_275,"};\n");
    }
    else {
        buffer_append_format(buf_275,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value235=map$2char$phbuffer$ph$p_operator_load_element(info->struct_definition,((char*)(__right_value234=__builtin_string(name_274))))))==((void*)0)&&!existance_generics_276)),    (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value235,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_274)),(struct buffer*)come_increment_ref_count(buf_275));
    }
    (name_274 = come_decrement_ref_count(name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_275,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_278;
struct tuple2$2char$phsType$ph* __result_obj__197;
struct tuple2$2char$phsType$ph* __result_obj__198;
struct tuple2$2char$phsType$ph* result_279;
struct tuple2$2char$phsType$ph* __result_obj__199;
result_278 = (void*)0;
result_279 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_278,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__197 = result_278;
        return __result_obj__197;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__198 = self->it->item;
        return __result_obj__198;
    }
    memset(&result_279,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__199 = result_279;
    return __result_obj__199;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_281;
struct tuple2$2char$phsType$ph* __result_obj__200;
struct tuple2$2char$phsType$ph* __result_obj__201;
struct tuple2$2char$phsType$ph* result_282;
struct tuple2$2char$phsType$ph* __result_obj__202;
result_281 = (void*)0;
result_282 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_281,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__200 = result_281;
        return __result_obj__200;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_282,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__202 = result_282;
    return __result_obj__202;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mChannelType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_285;
struct list_item$1sType$ph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        /*c*/ come_call_finalizer3(prev_it_286,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_287;
struct list_item$1sNode$ph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*c*/ come_call_finalizer3(prev_it_288,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_289;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_290;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        prev_it_290=it_289;
        it_289=it_289->next;
        /*c*/ come_call_finalizer3(prev_it_290,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_291;
unsigned int hash_292;
unsigned int it_293;
struct buffer* __result_obj__203;
struct buffer* __result_obj__204;
struct buffer* __result_obj__205;
struct buffer* __result_obj__206;
default_value_291 = (void*)0;
    memset(&default_value_291,0,sizeof(struct buffer*));
    hash_292=string_get_hash_key(((char*)key))%self->size;
    it_293=hash_292;
    while((_Bool)1) {
        if(        self->item_existance[it_293]) {
            if(            string_equals(self->keys[it_293],key)) {
                __result_obj__203 = come_increment_ref_count(self->items[it_293]);
                /*c*/ come_call_finalizer3(default_value_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__203,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__203;
            }
            it_293++;
            if(            it_293>=self->size) {
                it_293=0;
            }
            else if(            it_293==hash_292) {
                __result_obj__204 = come_increment_ref_count(default_value_291);
                /*c*/ come_call_finalizer3(default_value_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__204,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__204;
            }
        }
        else {
            __result_obj__205 = come_increment_ref_count(default_value_291);
            /*c*/ come_call_finalizer3(default_value_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__205,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__205;
        }
    }
    __result_obj__206 = come_increment_ref_count(default_value_291);
    /*c*/ come_call_finalizer3(default_value_291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__206,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_311;
unsigned int it_312;
_Bool same_key_exist_329;
char* it2_332;
struct map$2char$phbuffer$ph* __result_obj__227;
    if(    self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_311=string_get_hash_key(((char*)key))%self->size;
    it_312=hash_311;
    while((_Bool)1) {
        if(        self->item_existance[it_312]) {
            if(            string_equals(self->keys[it_312],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_312]);
                    (self->keys[it_312] = come_decrement_ref_count(self->keys[it_312], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_312]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_312]);
                    self->keys[it_312]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_312],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_312]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_312]=item;
                }
                break;
            }
            it_312++;
            if(            it_312>=self->size) {
                it_312=0;
            }
            else if(            it_312==hash_311) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_312]=(_Bool)1;
            if(            1) {
                self->keys[it_312]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_312]=key;
            }
            if(            1) {
                self->items[it_312]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_312]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_329=(_Bool)0;
    for(    it2_332=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_332=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_332,key)) {
            same_key_exist_329=(_Bool)1;
        }
    }
    if(    !same_key_exist_329) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__227 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_294;
void* __right_value236 = (void*)0;
char** keys_295;
void* __right_value237 = (void*)0;
struct buffer** items_296;
void* __right_value238 = (void*)0;
_Bool* item_existance_297;
int len_298;
char* it_301;
struct buffer* default_value_304;
void* __right_value239 = (void*)0;
struct buffer* it2_305;
unsigned int hash_308;
int n_309;
struct buffer* default_value_310;
void* __right_value240 = (void*)0;
default_value_304 = (void*)0;
default_value_310 = (void*)0;
    size_294=self->size*10;
    keys_295=(char**)come_increment_ref_count(((char**)(__right_value236=(char**)come_calloc(1, sizeof(char*)*(1*(size_294)), "./comelang.h", 2328, "char**"))));
    items_296=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value237=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_294)), "./comelang.h", 2329, "struct buffer**"))));
    item_existance_297=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value238=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_294)), "./comelang.h", 2330, "_Bool*"))));
    len_298=0;
    for(    it_301=map$2char$phbuffer$ph_begin(self);    !map$2char$phbuffer$ph_end(self);    it_301=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_304,0,sizeof(struct buffer*));
        it2_305=((struct buffer*)(__right_value239=map$2char$phbuffer$ph_at(self,it_301,(struct buffer*)come_increment_ref_count(default_value_304))));
        /*c*/ come_call_finalizer3(__right_value239,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_308=string_get_hash_key(((char*)it_301))%size_294;
        n_309=hash_308;
        while((_Bool)1) {
            if(            item_existance_297[n_309]) {
                n_309++;
                if(                n_309>=size_294) {
                    n_309=0;
                }
                else if(                n_309==hash_308) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_297[n_309]=(_Bool)1;
                keys_295[n_309]=it_301;
                items_296[n_309]=((struct buffer*)(__right_value240=map$2char$phbuffer$ph_at(self,it_301,(struct buffer*)come_increment_ref_count(default_value_310))));
                /*c*/ come_call_finalizer3(__right_value240,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_298++;
                /*c*/ come_call_finalizer3(default_value_310,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_310,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_304,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_295;
    self->items=items_296;
    self->item_existance=item_existance_297;
    self->size=size_294;
    self->len=len_298;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_299;
char* __result_obj__207;
char* __result_obj__208;
char* result_300;
char* __result_obj__209;
result_299 = (void*)0;
result_300 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_299,0,sizeof(char*));
        __result_obj__207 = result_299;
        return __result_obj__207;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__208 = self->key_list->it->item;
        return __result_obj__208;
    }
    memset(&result_300,0,sizeof(char*));
    __result_obj__209 = result_300;
    return __result_obj__209;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_302;
char* __result_obj__210;
char* __result_obj__211;
char* result_303;
char* __result_obj__212;
result_302 = (void*)0;
result_303 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_302,0,sizeof(char*));
        __result_obj__210 = result_302;
        return __result_obj__210;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__211 = self->key_list->it->item;
        return __result_obj__211;
    }
    memset(&result_303,0,sizeof(char*));
    __result_obj__212 = result_303;
    return __result_obj__212;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_306;
unsigned int it_307;
struct buffer* __result_obj__213;
struct buffer* __result_obj__214;
struct buffer* __result_obj__215;
struct buffer* __result_obj__216;
    hash_306=string_get_hash_key(((char*)key))%self->size;
    it_307=hash_306;
    while((_Bool)1) {
        if(        self->item_existance[it_307]) {
            if(            string_equals(self->keys[it_307],key)) {
                __result_obj__213 = come_increment_ref_count(self->items[it_307]);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__213,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__213;
            }
            it_307++;
            if(            it_307>=self->size) {
                it_307=0;
            }
            else if(            it_307==hash_306) {
                __result_obj__214 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__214,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__214;
            }
        }
        else {
            __result_obj__215 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__215,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__215;
        }
    }
    __result_obj__216 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__216,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_313;
struct list_item$1char$ph* it_314;
struct list$1char$ph* __result_obj__220;
    it2_313=0;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        if(        string_equals(it_314->item,item)) {
            list$1char$ph_delete(self,it2_313,it2_313+1);
            break;
        }
        it2_313++;
        it_314=it_314->next;
    }
    __result_obj__220 = self;
    return __result_obj__220;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_315;
struct list$1char$ph* __result_obj__217;
struct list_item$1char$ph* it_318;
int i_319;
struct list_item$1char$ph* prev_it_320;
struct list_item$1char$ph* it_321;
int i_322;
struct list_item$1char$ph* prev_it_323;
struct list_item$1char$ph* it_324;
struct list_item$1char$ph* head_prev_it_325;
struct list_item$1char$ph* tail_it_326;
int i_327;
struct list_item$1char$ph* prev_it_328;
struct list$1char$ph* __result_obj__219;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_315=tail;
        tail=head;
        head=tmp_315;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__217 = self;
        return __result_obj__217;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_318=self->head;
        i_319=0;
        while(it_318!=((void*)0)) {
            if(            i_319<tail) {
                prev_it_320=it_318;
                it_318=it_318->next;
                i_319++;
                /*c*/ come_call_finalizer3(prev_it_320,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_319==tail) {
                self->head=it_318;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_318=it_318->next;
                i_319++;
            }
        }
    }
    else if(    tail==self->len) {
        it_321=self->head;
        i_322=0;
        while(it_321!=((void*)0)) {
            if(            i_322==head) {
                self->tail=it_321->prev;
                self->tail->next=((void*)0);
            }
            if(            i_322>=head) {
                prev_it_323=it_321;
                it_321=it_321->next;
                i_322++;
                /*c*/ come_call_finalizer3(prev_it_323,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_321=it_321->next;
                i_322++;
            }
        }
    }
    else {
        it_324=self->head;
        head_prev_it_325=((void*)0);
        tail_it_326=((void*)0);
        i_327=0;
        while(it_324!=((void*)0)) {
            if(            i_327==head) {
                head_prev_it_325=it_324->prev;
            }
            if(            i_327==tail) {
                tail_it_326=it_324;
            }
            if(            i_327>=head&&i_327<tail) {
                prev_it_328=it_324;
                it_324=it_324->next;
                i_327++;
                /*c*/ come_call_finalizer3(prev_it_328,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_324=it_324->next;
                i_327++;
            }
        }
        if(        head_prev_it_325!=((void*)0)) {
            head_prev_it_325->next=tail_it_326;
        }
        if(        tail_it_326!=((void*)0)) {
            tail_it_326->prev=head_prev_it_325;
        }
    }
    __result_obj__219 = self;
    return __result_obj__219;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_316;
struct list_item$1char$ph* prev_it_317;
struct list$1char$ph* __result_obj__218;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        /*c*/ come_call_finalizer3(prev_it_317,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__218 = self;
    return __result_obj__218;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_330;
char* __result_obj__221;
char* __result_obj__222;
char* result_331;
char* __result_obj__223;
result_330 = (void*)0;
result_331 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_330,0,sizeof(char*));
        __result_obj__221 = result_330;
        return __result_obj__221;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__222 = self->it->item;
        return __result_obj__222;
    }
    memset(&result_331,0,sizeof(char*));
    __result_obj__223 = result_331;
    return __result_obj__223;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_333;
char* __result_obj__224;
char* __result_obj__225;
char* result_334;
char* __result_obj__226;
result_333 = (void*)0;
result_334 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_333,0,sizeof(char*));
        __result_obj__224 = result_333;
        return __result_obj__224;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__225 = self->it->item;
        return __result_obj__225;
    }
    memset(&result_334,0,sizeof(char*));
    __result_obj__226 = result_334;
    return __result_obj__226;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct buffer* buf_335;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_336;
struct tuple2$2char$phsType$ph* it_337;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name_338=0;
struct sType* type_339=0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
char* id_340;
void* __right_value246 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    buf_335=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer*"))));
    if(    klass->mParentClassName) {
        buffer_append_format(buf_335,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_335,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_336=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_337=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_336));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_336));    it_337=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_336))    ){
        multiple_assign_var2=it_337;
        name_338=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_339=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_339->mStatic=(_Bool)0;
        buffer_append_str(buf_335,"    ");
        buffer_append_str(buf_335,((char*)(__right_value244=make_define_var_no_solved(type_339,name_338,(_Bool)0,(_Bool)1,info))));
        (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_335,";\n");
        (name_338 = come_decrement_ref_count(name_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_339,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_336,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_335,"};\n");
    }
    else {
        buffer_append_format(buf_335,"} %s;\n",klass->mAttribute);
    }
    id_340=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_340,"%s",((char*)(__right_value246=buffer_to_string(buf_335))));
    (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_335,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (id_340 = come_decrement_ref_count(id_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_341;
struct sClass* klass_342;
int i_343;
void* __right_value247 = (void*)0;
_Bool result_344;
    type2_341=type->mNoSolvedGenericsType;
    if(    type2_341&&is_contained_generics_types(type2_341,info)) {
        return (_Bool)1;
    }
    klass_342=type->mClass;
    if(    klass_342->mGenerics) {
        return (_Bool)1;
    }
    for(    i_343=0;    i_343<list$1sType$ph_length(type->mGenericsTypes);    i_343++    ){
        result_344=is_contained_generics_types(((struct sType*)(__right_value247=list$1sType$ph$p_operator_load_element(type->mGenericsTypes,i_343))),info);
        /*c*/ come_call_finalizer3(__right_value247,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        result_344) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_345;
int i_346;
struct sType* __result_obj__228;
struct sType* default_value_347;
struct sType* __result_obj__229;
default_value_347 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_345=self->head;
    i_346=0;
    while(it_345!=((void*)0)) {
        if(        position==i_346) {
            __result_obj__228 = come_increment_ref_count(it_345->item);
            /*c*/ come_call_finalizer3(__result_obj__228,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__228;
        }
        it_345=it_345->next;
        i_346++;
    }
    memset(&default_value_347,0,sizeof(struct sType*));
    __result_obj__229 = come_increment_ref_count(default_value_347);
    /*c*/ come_call_finalizer3(default_value_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__229,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_348;
struct sClass* klass_349;
int i_350;
void* __right_value248 = (void*)0;
_Bool result_351;
    type2_348=type->mNoSolvedGenericsType;
    if(    type2_348&&is_contained_method_generics_types(type2_348,info)) {
        return (_Bool)1;
    }
    klass_349=type->mClass;
    if(    klass_349->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_350=0;    i_350<list$1sType$ph_length(type->mGenericsTypes);    i_350++    ){
        result_351=is_contained_method_generics_types(((struct sType*)(__right_value248=list$1sType$ph$p_operator_load_element(type->mGenericsTypes,i_350))),info);
        /*c*/ come_call_finalizer3(__right_value248,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        result_351) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value249 = (void*)0;
char* new_name_352;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct sClass* generics_class_355;
void* __right_value252 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c1_359=0;
char* Err_360=0;
_Bool __result_obj__234;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct sClass* new_class_382;
int i_383;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_384;
struct tuple2$2char$phsType$ph* it_385;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* name_386=0;
struct sType* type_387=0;
void* __right_value263 = (void*)0;
struct sType* new_type_388;
void* __right_value267 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* __dec_obj54;
void* __right_value313 = (void*)0;
struct sType* __dec_obj55;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool __result_obj__266;
    new_name_352=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2char$phsClass$ph_find(info->classes,new_name_352)) {
        generics_class_355=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value250=__builtin_string(type->mClass->mName)))));
        (__right_value250 = come_decrement_ref_count(__right_value250, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        generics_class_355==((void*)0)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value252=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            come_exception_var_c1_359=multiple_assign_var3->v1;
            Err_360=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_360)?(puts(Err_360),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value252,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__234 = (_Bool)0;
            (Err_360 = come_decrement_ref_count(Err_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_class_355,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (new_name_352 = come_decrement_ref_count(new_name_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__234;
            (Err_360 = come_decrement_ref_count(Err_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_352)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 140, "struct sClass*")),(char*)come_increment_ref_count(new_name_352),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_382=((struct sClass*)(__right_value262=map$2char$phsClass$ph_at(info->classes,((char*)(__right_value261=__builtin_string(new_name_352))),((void*)0))));
        (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value262,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_383=0;
        for(        o2_saved_384=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((generics_class_355->mFields)),it_385=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_384));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_384));        it_385=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_384))        ){
            multiple_assign_var4=it_385;
            name_386=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            type_387=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
            new_type_388=(struct sType*)come_increment_ref_count(solve_generics(type_387,generics_type,info));
            list$1tuple2$2char$phsType$ph$ph_push_back(new_class_382->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 150, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_386)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_388)))));
            (name_386 = come_decrement_ref_count(name_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_387,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(new_type_388,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_384,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj54=type->mNoSolvedGenericsType,
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_382;
        list$1sType$ph_reset(type->mGenericsTypes);
        output_struct(new_class_382,info);
        /*c*/ come_call_finalizer3(generics_class_355,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(type->mGenericsTypes)>0) {
            __dec_obj55=type->mNoSolvedGenericsType,
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value315=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value314=__builtin_string(new_name_352))))));
        (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value315,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_reset(type->mGenericsTypes);
    }
    __result_obj__266 = (_Bool)1;
    (new_name_352 = come_decrement_ref_count(new_name_352, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__266;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key){
unsigned int hash_353;
int it_354;
    hash_353=string_get_hash_key(((char*)key))%self->size;
    it_354=hash_353;
    while((_Bool)1) {
        if(        self->item_existance[it_354]) {
            if(            string_equals(self->keys[it_354],key)) {
                return (_Bool)1;
            }
            it_354++;
            if(            it_354>=self->size) {
                it_354=0;
            }
            else if(            it_354==hash_353) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_356;
unsigned int hash_357;
unsigned int it_358;
struct sClass* __result_obj__230;
struct sClass* __result_obj__231;
struct sClass* __result_obj__232;
struct sClass* __result_obj__233;
default_value_356 = (void*)0;
    memset(&default_value_356,0,sizeof(struct sClass*));
    hash_357=string_get_hash_key(((char*)key))%self->size;
    it_358=hash_357;
    while((_Bool)1) {
        if(        self->item_existance[it_358]) {
            if(            string_equals(self->keys[it_358],key)) {
                __result_obj__230 = come_increment_ref_count(self->items[it_358]);
                /*c*/ come_call_finalizer3(default_value_356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__230,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__230;
            }
            it_358++;
            if(            it_358>=self->size) {
                it_358=0;
            }
            else if(            it_358==hash_357) {
                __result_obj__231 = come_increment_ref_count(default_value_356);
                /*c*/ come_call_finalizer3(default_value_356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__231,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__231;
            }
        }
        else {
            __result_obj__232 = come_increment_ref_count(default_value_356);
            /*c*/ come_call_finalizer3(default_value_356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__232,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__232;
        }
    }
    __result_obj__233 = come_increment_ref_count(default_value_356);
    /*c*/ come_call_finalizer3(default_value_356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__233,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_378;
unsigned int it_379;
_Bool same_key_exist_380;
char* it2_381;
struct map$2char$phsClass$ph* __result_obj__245;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_378=string_get_hash_key(((char*)key))%self->size;
    it_379=hash_378;
    while((_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            string_equals(self->keys[it_379],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_379]);
                    (self->keys[it_379] = come_decrement_ref_count(self->keys[it_379], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_379]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_379]);
                    self->keys[it_379]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_379],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_379]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_379]=item;
                }
                break;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_379]=(_Bool)1;
            if(            1) {
                self->keys[it_379]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_379]=key;
            }
            if(            1) {
                self->items[it_379]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_379]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_380=(_Bool)0;
    for(    it2_381=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_381=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_381,key)) {
            same_key_exist_380=(_Bool)1;
        }
    }
    if(    !same_key_exist_380) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__245 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_361;
void* __right_value253 = (void*)0;
char** keys_362;
void* __right_value254 = (void*)0;
struct sClass** items_363;
void* __right_value255 = (void*)0;
_Bool* item_existance_364;
int len_365;
char* it_368;
struct sClass* default_value_371;
void* __right_value256 = (void*)0;
struct sClass* it2_372;
unsigned int hash_375;
int n_376;
struct sClass* default_value_377;
void* __right_value257 = (void*)0;
default_value_371 = (void*)0;
default_value_377 = (void*)0;
    size_361=self->size*10;
    keys_362=(char**)come_increment_ref_count(((char**)(__right_value253=(char**)come_calloc(1, sizeof(char*)*(1*(size_361)), "./comelang.h", 2328, "char**"))));
    items_363=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value254=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_361)), "./comelang.h", 2329, "struct sClass**"))));
    item_existance_364=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value255=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_361)), "./comelang.h", 2330, "_Bool*"))));
    len_365=0;
    for(    it_368=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_368=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_371,0,sizeof(struct sClass*));
        it2_372=((struct sClass*)(__right_value256=map$2char$phsClass$ph_at(self,it_368,(struct sClass*)come_increment_ref_count(default_value_371))));
        /*c*/ come_call_finalizer3(__right_value256,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_375=string_get_hash_key(((char*)it_368))%size_361;
        n_376=hash_375;
        while((_Bool)1) {
            if(            item_existance_364[n_376]) {
                n_376++;
                if(                n_376>=size_361) {
                    n_376=0;
                }
                else if(                n_376==hash_375) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_364[n_376]=(_Bool)1;
                keys_362[n_376]=it_368;
                items_363[n_376]=((struct sClass*)(__right_value257=map$2char$phsClass$ph_at(self,it_368,(struct sClass*)come_increment_ref_count(default_value_377))));
                /*c*/ come_call_finalizer3(__right_value257,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_365++;
                /*c*/ come_call_finalizer3(default_value_377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_377,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_371,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_362;
    self->items=items_363;
    self->item_existance=item_existance_364;
    self->size=size_361;
    self->len=len_365;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_366;
char* __result_obj__235;
char* __result_obj__236;
char* result_367;
char* __result_obj__237;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_366,0,sizeof(char*));
        __result_obj__235 = result_366;
        return __result_obj__235;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__236 = self->key_list->it->item;
        return __result_obj__236;
    }
    memset(&result_367,0,sizeof(char*));
    __result_obj__237 = result_367;
    return __result_obj__237;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_369;
char* __result_obj__238;
char* __result_obj__239;
char* result_370;
char* __result_obj__240;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_369,0,sizeof(char*));
        __result_obj__238 = result_369;
        return __result_obj__238;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__239 = self->key_list->it->item;
        return __result_obj__239;
    }
    memset(&result_370,0,sizeof(char*));
    __result_obj__240 = result_370;
    return __result_obj__240;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_373;
unsigned int it_374;
struct sClass* __result_obj__241;
struct sClass* __result_obj__242;
struct sClass* __result_obj__243;
struct sClass* __result_obj__244;
    hash_373=string_get_hash_key(((char*)key))%self->size;
    it_374=hash_373;
    while((_Bool)1) {
        if(        self->item_existance[it_374]) {
            if(            string_equals(self->keys[it_374],key)) {
                __result_obj__241 = come_increment_ref_count(self->items[it_374]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__241,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__241;
            }
            it_374++;
            if(            it_374>=self->size) {
                it_374=0;
            }
            else if(            it_374==hash_373) {
                __result_obj__242 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__242,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__243,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__243;
        }
    }
    __result_obj__244 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value264 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_389;
struct tuple2$2char$phsType$ph* __dec_obj23;
void* __right_value265 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_390;
struct tuple2$2char$phsType$ph* __dec_obj24;
void* __right_value266 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_391;
struct tuple2$2char$phsType$ph* __dec_obj25;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__246;
    if(    self->len==0) {
        litem_389=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value264=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1274, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_389->prev=((void*)0);
        litem_389->next=((void*)0);
        __dec_obj23=litem_389->item,
        litem_389->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj23,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_389;
        self->head=litem_389;
    }
    else if(    self->len==1) {
        litem_390=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value265=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1284, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_390->prev=self->head;
        litem_390->next=((void*)0);
        __dec_obj24=litem_390->item,
        litem_390->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj24,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_390;
        self->head->next=litem_390;
    }
    else {
        litem_391=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value266=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1294, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_391->prev=self->tail;
        litem_391->next=((void*)0);
        __dec_obj25=litem_391->item,
        litem_391->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj25,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_391;
        self->tail=litem_391;
    }
    self->len++;
    __result_obj__246 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__247;
void* __right_value268 = (void*)0;
struct sType* result_392;
void* __right_value269 = (void*)0;
struct sType* __dec_obj26;
void* __right_value270 = (void*)0;
struct sType* __dec_obj27;
void* __right_value278 = (void*)0;
struct list$1sType$ph* __dec_obj31;
void* __right_value279 = (void*)0;
struct sType* __dec_obj32;
void* __right_value280 = (void*)0;
struct sType* __dec_obj33;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj35;
void* __right_value284 = (void*)0;
char* __dec_obj36;
void* __right_value285 = (void*)0;
char* __dec_obj37;
void* __right_value286 = (void*)0;
char* __dec_obj38;
void* __right_value294 = (void*)0;
struct list$1sNode$ph* __dec_obj42;
void* __right_value295 = (void*)0;
char* __dec_obj43;
void* __right_value296 = (void*)0;
struct list$1sType$ph* __dec_obj44;
void* __right_value304 = (void*)0;
struct list$1char$ph* __dec_obj48;
void* __right_value305 = (void*)0;
struct sType* __dec_obj49;
struct sType* __result_obj__261;
    if(    self==(void*)0) {
        __result_obj__247 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__247,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__247;
    }
    result_392=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_392->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj26=result_392->mOriginalLoadVarType,
        result_392->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj27=result_392->mChannelType,
        result_392->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj31=result_392->mGenericsTypes,
        result_392->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj31,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj32=result_392->mNoSolvedGenericsType,
        result_392->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj33=result_392->mAnyOriginalType,
        result_392->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj34=result_392->mSizeNum,
        result_392->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj35=result_392->mAlignas,
        result_392->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj36=result_392->mTupleName,
        result_392->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj37=result_392->mAttribute,
        result_392->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_392->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_392->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_392->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_392->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_392->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_392->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_392->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_392->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_392->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_392->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_392->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_392->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_392->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_392->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_392->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_392->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_392->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_392->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_392->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_392->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_392->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_392->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_392->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_392->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_392->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj38=result_392->mAsmName,
        result_392->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_392->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_392->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj42=result_392->mArrayNum,
        result_392->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_392->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_392->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_392->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_392->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj43=result_392->mOriginalTypeName,
        result_392->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_392->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_392->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_392->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj44=result_392->mParamTypes,
        result_392->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj44,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj48=result_392->mParamNames,
        result_392->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj48,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj49=result_392->mResultType,
        result_392->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->mVarArgs=self->mVarArgs;
    }
    __result_obj__261 = come_increment_ref_count(result_392);
    /*c*/ come_call_finalizer3(result_392,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__248;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sType$ph* result_393;
struct list_item$1sType$ph* it_394;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1sType$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__248,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__248;
    }
    result_393=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_394=self->head;
    while(it_394!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_393,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_394->item)));
        }
        else {
            list$1sType$ph_add(result_393,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_394->item)));
        }
        it_394=it_394->next;
    }
    __result_obj__251 = come_increment_ref_count(result_393);
    /*c*/ come_call_finalizer3(result_393,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__249;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__249 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value273 = (void*)0;
struct list_item$1sType$ph* litem_395;
struct sType* __dec_obj28;
void* __right_value274 = (void*)0;
struct list_item$1sType$ph* litem_396;
struct sType* __dec_obj29;
void* __right_value275 = (void*)0;
struct list_item$1sType$ph* litem_397;
struct sType* __dec_obj30;
struct list$1sType$ph* __result_obj__250;
    if(    self->len==0) {
        litem_395=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value273=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_395->prev=((void*)0);
        litem_395->next=((void*)0);
        __dec_obj28=litem_395->item,
        litem_395->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_395;
        self->head=litem_395;
    }
    else if(    self->len==1) {
        litem_396=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value274=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_396->prev=self->head;
        litem_396->next=((void*)0);
        __dec_obj29=litem_396->item,
        litem_396->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_396;
        self->head->next=litem_396;
    }
    else {
        litem_397=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value275=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_397->prev=self->tail;
        litem_397->next=((void*)0);
        __dec_obj30=litem_397->item,
        litem_397->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_397;
        self->tail=litem_397;
    }
    self->len++;
    __result_obj__250 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_398;
struct list_item$1sType$ph* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        /*c*/ come_call_finalizer3(prev_it_399,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__252;
void* __right_value281 = (void*)0;
struct sNode* result_400;
struct sNode* __result_obj__253;
    if(    self==(void*)0) {
        __result_obj__252 = come_increment_ref_count((void*)0);
        ((__result_obj__252) ? __result_obj__252 = come_decrement_ref_count(__result_obj__252, ((struct sNode*)__result_obj__252)->finalize, ((struct sNode*)__result_obj__252)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__252;
    }
    result_400=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_400->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_400->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_400->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_400->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_400->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_400->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_400->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_400->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_400->kind=self->kind;
    }
    __result_obj__253 = come_increment_ref_count(result_400);
    ((result_400) ? result_400 = come_decrement_ref_count(result_400, ((struct sNode*)result_400)->finalize, ((struct sNode*)result_400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__253) ? __result_obj__253 = come_decrement_ref_count(__result_obj__253, ((struct sNode*)__result_obj__253)->finalize, ((struct sNode*)__result_obj__253)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__253;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__254;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1sNode$ph* result_401;
struct list_item$1sNode$ph* it_402;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sNode$ph* __result_obj__257;
    if(    self==((void*)0)) {
        __result_obj__254 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__254,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__254;
    }
    result_401=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_402=self->head;
    while(it_402!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_401,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_402->item)));
        }
        else {
            list$1sNode$ph_add(result_401,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_402->item)));
        }
        it_402=it_402->next;
    }
    __result_obj__257 = come_increment_ref_count(result_401);
    /*c*/ come_call_finalizer3(result_401,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__255;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__255 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__255,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_403;
struct sNode* __dec_obj39;
void* __right_value290 = (void*)0;
struct list_item$1sNode$ph* litem_404;
struct sNode* __dec_obj40;
void* __right_value291 = (void*)0;
struct list_item$1sNode$ph* litem_405;
struct sNode* __dec_obj41;
struct list$1sNode$ph* __result_obj__256;
    if(    self->len==0) {
        litem_403=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_403->prev=((void*)0);
        litem_403->next=((void*)0);
        __dec_obj39=litem_403->item,
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_403;
        self->head=litem_403;
    }
    else if(    self->len==1) {
        litem_404=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value290=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_404->prev=self->head;
        litem_404->next=((void*)0);
        __dec_obj40=litem_404->item,
        litem_404->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_404;
        self->head->next=litem_404;
    }
    else {
        litem_405=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value291=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_405->prev=self->tail;
        litem_405->next=((void*)0);
        __dec_obj41=litem_405->item,
        litem_405->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_405;
        self->tail=litem_405;
    }
    self->len++;
    __result_obj__256 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__256;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_406;
struct list_item$1sNode$ph* prev_it_407;
    it_406=self->head;
    while(it_406!=((void*)0)) {
        prev_it_407=it_406;
        it_406=it_406->next;
        /*c*/ come_call_finalizer3(prev_it_407,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__258;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct list$1char$ph* result_408;
struct list_item$1char$ph* it_409;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1char$ph* __result_obj__260;
    if(    self==((void*)0)) {
        __result_obj__258 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__258,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__258;
    }
    result_408=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_409=self->head;
    while(it_409!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_408,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_409->item)));
        }
        else {
            list$1char$ph_add(result_408,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_409->item)));
        }
        it_409=it_409->next;
    }
    __result_obj__260 = come_increment_ref_count(result_408);
    /*c*/ come_call_finalizer3(result_408,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_410;
char* __dec_obj45;
void* __right_value300 = (void*)0;
struct list_item$1char$ph* litem_411;
char* __dec_obj46;
void* __right_value301 = (void*)0;
struct list_item$1char$ph* litem_412;
char* __dec_obj47;
struct list$1char$ph* __result_obj__259;
    if(    self->len==0) {
        litem_410=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_410->prev=((void*)0);
        litem_410->next=((void*)0);
        __dec_obj45=litem_410->item,
        litem_410->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_410;
        self->head=litem_410;
    }
    else if(    self->len==1) {
        litem_411=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value300=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_411->prev=self->head;
        litem_411->next=((void*)0);
        __dec_obj46=litem_411->item,
        litem_411->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_411;
        self->head->next=litem_411;
    }
    else {
        litem_412=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value301=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_412->prev=self->tail;
        litem_412->next=((void*)0);
        __dec_obj47=litem_412->item,
        litem_412->item=(char*)come_increment_ref_count(item);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_412;
        self->tail=litem_412;
    }
    self->len++;
    __result_obj__259 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_413;
struct list_item$1char$ph* prev_it_414;
    it_413=self->head;
    while(it_413!=((void*)0)) {
        prev_it_414=it_413;
        it_413=it_413->next;
        /*c*/ come_call_finalizer3(prev_it_414,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self){
struct tuple2$2char$phsType$ph* __result_obj__262;
void* __right_value307 = (void*)0;
struct tuple2$2char$phsType$ph* result_415;
void* __right_value308 = (void*)0;
char* __dec_obj50;
void* __right_value309 = (void*)0;
struct sType* __dec_obj51;
struct tuple2$2char$phsType$ph* __result_obj__263;
    if(    self==(void*)0) {
        __result_obj__262 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__262,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__262;
    }
    result_415=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj50=result_415->v1,
        result_415->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj51=result_415->v2,
        result_415->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__263 = come_increment_ref_count(result_415);
    /*c*/ come_call_finalizer3(result_415,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_416;
    result_416=0;
    result_416+=int_get_hash_key(((int)self->v1));
    result_416+=int_get_hash_key(((int)self->v2));
    return result_416;
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
    if(    !list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
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
    if(    !list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_417;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_418;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_417=left->head;
    it2_418=right->head;
    while(it_417!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_417->item,it2_418->item)) {
            return (_Bool)0;
        }
        it_417=it_417->next;
        it2_418=it2_418->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_419;
struct list_item$1sType$ph* it2_420;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_419=left->head;
    it2_420=right->head;
    while(it_419!=((void*)0)) {
        if(        !sType_equals(it_419->item,it2_420->item)) {
            return (_Bool)0;
        }
        it_419=it_419->next;
        it2_420=it2_420->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_421;
struct list_item$1sNode$ph* it2_422;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_421=left->head;
    it2_422=right->head;
    while(it_421!=((void*)0)) {
        if(        !sNode_equals(it_421->item,it2_422->item)) {
            return (_Bool)0;
        }
        it_421=it_421->next;
        it2_422=it2_422->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_423;
struct list_item$1char$ph* it2_424;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_423=left->head;
    it2_424=right->head;
    while(it_423!=((void*)0)) {
        if(        !string_equals(it_423->item,it2_424->item)) {
            return (_Bool)0;
        }
        it_423=it_423->next;
        it2_424=it2_424->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj52;
struct sType* __dec_obj53;
struct tuple2$2char$phsType$ph* __result_obj__264;
    __dec_obj52=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj53=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__264 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_425;
struct list_item$1sType$ph* prev_it_426;
struct list$1sType$ph* __result_obj__265;
    it_425=self->head;
    while(it_425!=((void*)0)) {
        prev_it_426=it_425;
        it_425=it_425->next;
        /*c*/ come_call_finalizer3(prev_it_426,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = self;
    return __result_obj__265;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj56;
void* __right_value330 = (void*)0;
struct sClass* __dec_obj64;
struct sStructNode* __result_obj__273;
    ((struct sNodeBase*)(__right_value316=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value316,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj56=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj64=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    /*b*/ come_call_finalizer3(__dec_obj64,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__273 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__273,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __right_value331 = (void*)0;
char* __result_obj__274;
    __result_obj__274 = come_increment_ref_count(((char*)(__right_value331=__builtin_string("sStructNode"))));
    (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__274 = come_decrement_ref_count(__result_obj__274, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__274;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_435;
void* __right_value332 = (void*)0;
char* name_436;
_Bool __result_obj__275;
    klass_435=(struct sClass*)come_increment_ref_count(self->mClass);
    name_436=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_435,info);
    __result_obj__275 = (_Bool)1;
    /*c*/ come_call_finalizer3(klass_435,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_436 = come_decrement_ref_count(name_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__267;
void* __right_value318 = (void*)0;
struct sClass* result_427;
void* __right_value319 = (void*)0;
char* __dec_obj57;
void* __right_value327 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj61;
void* __right_value328 = (void*)0;
char* __dec_obj62;
void* __right_value329 = (void*)0;
char* __dec_obj63;
struct sClass* __result_obj__272;
    if(    self==(void*)0) {
        __result_obj__267 = (void*)0;
        return __result_obj__267;
    }
    result_427=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(    self!=((void*)0)) {
        result_427->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_427->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_427->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_427->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_427->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_427->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_427->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_427->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj57=result_427->mName,
        result_427->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_427->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_427->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj61=result_427->mFields,
        result_427->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsType$ph$ph$p_clone, self->mFields));
        /*b*/ come_call_finalizer3(__dec_obj61,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj62=result_427->mParentClassName,
        result_427->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj63=result_427->mAttribute,
        result_427->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_427->mDynamic=self->mDynamic;
    }
    __result_obj__272 = result_427;
    /*c*/ come_call_finalizer3(result_427,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__268;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_428;
struct list_item$1tuple2$2char$phsType$ph$ph* it_429;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__271;
    if(    self==((void*)0)) {
        __result_obj__268 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__268,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__268;
    }
    result_428=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1185, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it_429=self->head;
    while(it_429!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsType$ph$ph_add(result_428,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_429->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result_428,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_429->item)));
        }
        it_429=it_429->next;
    }
    __result_obj__271 = come_increment_ref_count(result_428);
    /*c*/ come_call_finalizer3(result_428,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__269;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__269 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value322 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_430;
struct tuple2$2char$phsType$ph* __dec_obj58;
void* __right_value323 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_431;
struct tuple2$2char$phsType$ph* __dec_obj59;
void* __right_value324 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_432;
struct tuple2$2char$phsType$ph* __dec_obj60;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__270;
    if(    self->len==0) {
        litem_430=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value322=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_430->prev=((void*)0);
        litem_430->next=((void*)0);
        __dec_obj58=litem_430->item,
        litem_430->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_430;
        self->head=litem_430;
    }
    else if(    self->len==1) {
        litem_431=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value323=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_431->prev=self->head;
        litem_431->next=((void*)0);
        __dec_obj59=litem_431->item,
        litem_431->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_431;
        self->head->next=litem_431;
    }
    else {
        litem_432=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value324=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_432->prev=self->tail;
        litem_432->next=((void*)0);
        __dec_obj60=litem_432->item,
        litem_432->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_432;
        self->tail=litem_432;
    }
    self->len++;
    __result_obj__270 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_433;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_434;
    it_433=self->head;
    while(it_433!=((void*)0)) {
        prev_it_434=it_433;
        it_433=it_433->next;
        /*c*/ come_call_finalizer3(prev_it_434,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStructNode_finalize(struct sStructNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mClass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info){
void* __right_value333 = (void*)0;
char* __dec_obj65;
struct sStructNobodyNode* __result_obj__276;
    ((struct sNodeBase*)(__right_value333=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value333,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj65=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__276 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__276,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __right_value334 = (void*)0;
char* __result_obj__277;
    __result_obj__277 = come_increment_ref_count(((char*)(__right_value334=__builtin_string("sStructNobodyNode"))));
    (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__277 = come_decrement_ref_count(__result_obj__277, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__277;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
char* name_437;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
_Bool __result_obj__278;
    name_437=(char*)come_increment_ref_count(self->mName);
    map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_437)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value336=xsprintf("struct %s;\n",name_437))))));
    (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result_obj__278 = (_Bool)1;
    (name_437 = come_decrement_ref_count(name_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __right_value338 = (void*)0;
struct sNothingNode* __result_obj__279;
    ((struct sNodeBase*)(__right_value338=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value338,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__279 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __right_value339 = (void*)0;
char* __result_obj__280;
    __result_obj__280 = come_increment_ref_count(((char*)(__right_value339=__builtin_string("sNothingNode"))));
    (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__280;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value344 = (void*)0;
struct sNode* __result_obj__283;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 259, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value341=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 259, "struct sNothingNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result_obj__283 = come_increment_ref_count(((struct sNode*)(__right_value344=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value341,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value344) ? __right_value344 = come_decrement_ref_count(__right_value344, ((struct sNode*)__right_value344)->finalize, ((struct sNode*)__right_value344)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__283) ? __result_obj__283 = come_decrement_ref_count(__result_obj__283, ((struct sNode*)__result_obj__283)->finalize, ((struct sNode*)__result_obj__283)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__283;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
struct sNothingNode* __result_obj__281;
void* __right_value342 = (void*)0;
struct sNothingNode* result_438;
void* __right_value343 = (void*)0;
char* __dec_obj66;
struct sNothingNode* __result_obj__282;
    if(    self==(void*)0) {
        __result_obj__281 = (void*)0;
        return __result_obj__281;
    }
    result_438=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(    self!=((void*)0)) {
        result_438->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj66=result_438->sname,
        result_438->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_438->sline_real=self->sline_real;
    }
    __result_obj__282 = result_438;
    /*c*/ come_call_finalizer3(result_438,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* __dec_obj67;
void* __right_value347 = (void*)0;
struct sClass* __dec_obj68;
struct list$1sNode$ph* __dec_obj69;
struct sClassNode* __result_obj__284;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value345,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj67=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj68=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    /*b*/ come_call_finalizer3(__dec_obj68,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj69=self->mMethods,
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    /*b*/ come_call_finalizer3(__dec_obj69,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__284 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(klass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(methods,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __right_value348 = (void*)0;
char* __result_obj__285;
    __result_obj__285 = come_increment_ref_count(((char*)(__right_value348=__builtin_string("sClassNode"))));
    (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__285 = come_decrement_ref_count(__result_obj__285, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
struct sClass* klass_439;
void* __right_value349 = (void*)0;
char* name_440;
void* __right_value350 = (void*)0;
_Bool _if_conditional2;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
_Bool _if_conditional3;
void* __right_value354 = (void*)0;
struct sClass* klass2_441;
void* __right_value355 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj70;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* type_442;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* override__443;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1sNode$ph* o2_saved_465;
struct sNode* it_468;
_Bool Value_471;
_Bool __result_obj__303;
_Bool __result_obj__304;
    klass_439=(struct sClass*)come_increment_ref_count(self->mClass);
    name_440=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value350=map$2char$phsClass$ph_at(info->classes,name_440,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value350,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional2) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(name_440),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_439)));
    }
    if(    (_if_conditional3=(((struct sClass*)(__right_value352=map$2char$phsClass$ph_at(info->classes,name_440,((void*)0))))&&list$1tuple2$2char$phsType$ph$ph_length(((struct sClass*)(__right_value353=map$2char$phsClass$ph_at(info->classes,name_440,((void*)0))))->mFields)==0)),    /*c*/ come_call_finalizer3(__right_value352,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    /*c*/ come_call_finalizer3(__right_value353,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        klass2_441=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,name_440,((void*)0)));
        __dec_obj70=klass2_441->mFields,
        klass2_441->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsType$ph$ph$p_clone, klass_439->mFields));
        /*b*/ come_call_finalizer3(__dec_obj70,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(klass2_441,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_442=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 298, "struct sType*")),(char*)come_increment_ref_count(name_440),(_Bool)0,info));
    override__443=((struct sType*)(__right_value359=map$2char$phsType$ph_at(info->types,((char*)(__right_value358=__builtin_string(name_440))),((void*)0))));
    (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value359,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    override__443) {
        if(        override__443->mTypedef) {
            type_442->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_440)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_442)));
    output_struct(klass_439,info);
    for(    o2_saved_465=(struct list$1sNode$ph*)come_increment_ref_count((self->mMethods)),it_468=list$1sNode$ph_begin((o2_saved_465));    !list$1sNode$ph_end((o2_saved_465));    it_468=list$1sNode$ph_next((o2_saved_465))    ){
        Value_471=node_compile(it_468,info);
        if(        !Value_471) {
            __result_obj__303 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_465,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(klass_439,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_440 = come_decrement_ref_count(name_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_442,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__303;
        }
        else {
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_465,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    info->output_header_file) {
        output_struct_come_header(klass_439,info);
    }
    __result_obj__304 = (_Bool)1;
    /*c*/ come_call_finalizer3(klass_439,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_440 = come_decrement_ref_count(name_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_442,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static void sClassNode_finalize(struct sClassNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mClass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethods,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_444;
unsigned int it_445;
struct sType* __result_obj__286;
struct sType* __result_obj__287;
struct sType* __result_obj__288;
struct sType* __result_obj__289;
    hash_444=string_get_hash_key(((char*)key))%self->size;
    it_445=hash_444;
    while((_Bool)1) {
        if(        self->item_existance[it_445]) {
            if(            string_equals(self->keys[it_445],key)) {
                __result_obj__286 = come_increment_ref_count(self->items[it_445]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__286;
            }
            it_445++;
            if(            it_445>=self->size) {
                it_445=0;
            }
            else if(            it_445==hash_444) {
                __result_obj__287 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__287;
            }
        }
        else {
            __result_obj__288 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__288,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__288;
        }
    }
    __result_obj__289 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_461;
unsigned int it_462;
_Bool same_key_exist_463;
char* it2_464;
struct map$2char$phsType$ph* __result_obj__296;
    if(    self->len*10>=self->size) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_461=string_get_hash_key(((char*)key))%self->size;
    it_462=hash_461;
    while((_Bool)1) {
        if(        self->item_existance[it_462]) {
            if(            string_equals(self->keys[it_462],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_462]);
                    (self->keys[it_462] = come_decrement_ref_count(self->keys[it_462], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_462]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_462]);
                    self->keys[it_462]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_462],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_462]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_462]=item;
                }
                break;
            }
            it_462++;
            if(            it_462>=self->size) {
                it_462=0;
            }
            else if(            it_462==hash_461) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_462]=(_Bool)1;
            if(            1) {
                self->keys[it_462]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_462]=key;
            }
            if(            1) {
                self->items[it_462]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_462]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_463=(_Bool)0;
    for(    it2_464=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_464=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_464,key)) {
            same_key_exist_463=(_Bool)1;
        }
    }
    if(    !same_key_exist_463) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__296 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_446;
void* __right_value360 = (void*)0;
char** keys_447;
void* __right_value361 = (void*)0;
struct sType** items_448;
void* __right_value362 = (void*)0;
_Bool* item_existance_449;
int len_450;
char* it_453;
struct sType* default_value_456;
void* __right_value363 = (void*)0;
struct sType* it2_457;
unsigned int hash_458;
int n_459;
struct sType* default_value_460;
void* __right_value364 = (void*)0;
default_value_456 = (void*)0;
default_value_460 = (void*)0;
    size_446=self->size*10;
    keys_447=(char**)come_increment_ref_count(((char**)(__right_value360=(char**)come_calloc(1, sizeof(char*)*(1*(size_446)), "./comelang.h", 2328, "char**"))));
    items_448=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value361=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_446)), "./comelang.h", 2329, "struct sType**"))));
    item_existance_449=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value362=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_446)), "./comelang.h", 2330, "_Bool*"))));
    len_450=0;
    for(    it_453=map$2char$phsType$ph_begin(self);    !map$2char$phsType$ph_end(self);    it_453=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_456,0,sizeof(struct sType*));
        it2_457=((struct sType*)(__right_value363=map$2char$phsType$ph_at(self,it_453,(struct sType*)come_increment_ref_count(default_value_456))));
        /*c*/ come_call_finalizer3(__right_value363,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_458=string_get_hash_key(((char*)it_453))%size_446;
        n_459=hash_458;
        while((_Bool)1) {
            if(            item_existance_449[n_459]) {
                n_459++;
                if(                n_459>=size_446) {
                    n_459=0;
                }
                else if(                n_459==hash_458) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_449[n_459]=(_Bool)1;
                keys_447[n_459]=it_453;
                items_448[n_459]=((struct sType*)(__right_value364=map$2char$phsType$ph_at(self,it_453,(struct sType*)come_increment_ref_count(default_value_460))));
                /*c*/ come_call_finalizer3(__right_value364,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_450++;
                /*c*/ come_call_finalizer3(default_value_460,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_460,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_456,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_447;
    self->items=items_448;
    self->item_existance=item_existance_449;
    self->size=size_446;
    self->len=len_450;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_451;
char* __result_obj__290;
char* __result_obj__291;
char* result_452;
char* __result_obj__292;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_451,0,sizeof(char*));
        __result_obj__290 = result_451;
        return __result_obj__290;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__291 = self->key_list->it->item;
        return __result_obj__291;
    }
    memset(&result_452,0,sizeof(char*));
    __result_obj__292 = result_452;
    return __result_obj__292;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_454;
char* __result_obj__293;
char* __result_obj__294;
char* result_455;
char* __result_obj__295;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_454,0,sizeof(char*));
        __result_obj__293 = result_454;
        return __result_obj__293;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__294 = self->key_list->it->item;
        return __result_obj__294;
    }
    memset(&result_455,0,sizeof(char*));
    __result_obj__295 = result_455;
    return __result_obj__295;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_466;
struct sNode* __result_obj__297;
struct sNode* __result_obj__298;
struct sNode* result_467;
struct sNode* __result_obj__299;
result_466 = (void*)0;
result_467 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_466,0,sizeof(struct sNode*));
        __result_obj__297 = result_466;
        return __result_obj__297;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__298 = self->it->item;
        return __result_obj__298;
    }
    memset(&result_467,0,sizeof(struct sNode*));
    __result_obj__299 = result_467;
    return __result_obj__299;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_469;
struct sNode* __result_obj__300;
struct sNode* __result_obj__301;
struct sNode* result_470;
struct sNode* __result_obj__302;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_469,0,sizeof(struct sNode*));
        __result_obj__300 = result_469;
        return __result_obj__300;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__301 = self->it->item;
        return __result_obj__301;
    }
    memset(&result_470,0,sizeof(struct sNode*));
    __result_obj__302 = result_470;
    return __result_obj__302;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
struct sClass* klass_472;
void* __right_value367 = (void*)0;
_Bool _if_conditional4;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sClass* __dec_obj71;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sClass* __dec_obj72;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* type_475;
void* __right_value375 = (void*)0;
struct sType* override__476;
void* __right_value376 = (void*)0;
struct sClass* parent_class_477;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
char* parent_class_name_478;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c2_479=0;
char* Err_480=0;
struct sNode* __result_obj__306;
_Bool multiple_declare_481;
char* p_482;
int sline_483;
void* __right_value381 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_484=0;
char* name_485=0;
_Bool err_486=0;
void* __right_value382 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* base_type_487=0;
char* name_488=0;
_Bool err_489=0;
void* __right_value383 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var8 = (void*)0;
struct sType* type2_490=0;
char* name2_491=0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_492=0;
char* name2_493=0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type2_494=0;
char* name_495=0;
_Bool err_496=0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* struct_attribute2_497;
void* __right_value393 = (void*)0;
char* __dec_obj73;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* __dec_obj74;
char* __dec_obj75;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* __dec_obj76;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value405 = (void*)0;
struct sNode* node_498;
_Bool Value_500;
struct sNode* __result_obj__309;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value408 = (void*)0;
struct sNode* __result_obj__310;
klass_472 = (void*)0;
    if(    (_if_conditional4=(((struct sClass*)(__right_value367=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value367,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        __dec_obj71=klass_472,
        klass_472=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 327, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj71,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_472));
    }
    else {
        __dec_obj72=klass_472,
        klass_472=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
        /*b*/ come_call_finalizer3(__dec_obj72,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_reset(klass_472->mFields);
    }
    type_475=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 335, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
    override__476=((struct sType*)(__right_value375=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value375,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    override__476) {
        if(        override__476->mTypedef) {
            type_475->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475)));
    parent_class_477=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value377=parse_word(info)));
        (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        parent_class_name_478=(char*)come_increment_ref_count(parse_word(info));
        parent_class_477=((struct sClass*)(__right_value379=map$2char$phsClass$ph$p_operator_load_element(info->classes,parent_class_name_478)));
        /*c*/ come_call_finalizer3(__right_value379,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        parent_class_477==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value380=err_msg(info,"invalid class name(%s)",parent_class_name_478)));
            come_exception_var_c2_479=multiple_assign_var5->v1;
            Err_480=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_480)?(puts(Err_480),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value380,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__306 = come_increment_ref_count(((void*)0));
            (Err_480 = come_decrement_ref_count(Err_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (parent_class_name_478 = come_decrement_ref_count(parent_class_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(klass_472,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__306;
            (Err_480 = come_decrement_ref_count(Err_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (parent_class_name_478 = come_decrement_ref_count(parent_class_name_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_declare_481=(_Bool)0;
        {
            p_482=info->p;
            sline_483=info->sline;
            multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value381=backtrace_parse_type((_Bool)1,info)));
            type_484=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_485=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_486=multiple_assign_var6->v3;
            /*c*/ come_call_finalizer3(__right_value381,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            err_486&&*info->p==44) {
                multiple_declare_481=(_Bool)1;
            }
            info->p=p_482;
            info->sline=sline_483;
            /*c*/ come_call_finalizer3(type_484,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_485 = come_decrement_ref_count(name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        multiple_declare_481) {
            multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value382=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_487=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name_488=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            err_489=multiple_assign_var7->v3;
            /*c*/ come_call_finalizer3(__right_value382,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            multiple_assign_var8=((struct tuple2$2sType$phchar$ph*)(__right_value383=parse_variable_name((struct sType*)come_increment_ref_count(base_type_487),(_Bool)1,info)));
            type2_490=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name2_491=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            /*c*/ come_call_finalizer3(__right_value383,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_472->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 391, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_491),(struct sType*)come_increment_ref_count(type2_490))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value386=parse_variable_name((struct sType*)come_increment_ref_count(base_type_487),(_Bool)0,info)));
                type2_492=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name2_493=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                /*c*/ come_call_finalizer3(__right_value386,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_472->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 399, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_493),(struct sType*)come_increment_ref_count(type2_492))));
                /*c*/ come_call_finalizer3(type2_492,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name2_493 = come_decrement_ref_count(name2_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(base_type_487,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_488 = come_decrement_ref_count(name_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_490,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name2_491 = come_decrement_ref_count(name2_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value389=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_494=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_495=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_496=multiple_assign_var10->v3;
            /*c*/ come_call_finalizer3(__right_value389,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_496) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_472->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 410, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_495),(struct sType*)come_increment_ref_count(type2_494))));
            /*c*/ come_call_finalizer3(type2_494,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_495 = come_decrement_ref_count(name_495, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    struct_attribute2_497=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_477) {
        __dec_obj73=klass_472->mParentClassName,
        klass_472->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_477->mName));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_472->mName)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_472)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_497,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj74=klass_472->mAttribute,
        klass_472->mAttribute=(char*)come_increment_ref_count(struct_attribute2_497);
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_497,"")) {
        __dec_obj75=klass_472->mAttribute,
        klass_472->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj76=klass_472->mAttribute,
        klass_472->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value396=string_operator_add(struct_attribute," "))),struct_attribute2_497));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 446, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value400=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 446, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_472,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_498=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value400,sStructNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_500=node_compile(node_498,info);
    if(    !Value_500) {
        __result_obj__309 = come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(klass_472,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (struct_attribute2_497 = come_decrement_ref_count(struct_attribute2_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__309) ? __result_obj__309 = come_decrement_ref_count(__result_obj__309, ((struct sNode*)__result_obj__309)->finalize, ((struct sNode*)__result_obj__309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__309;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 452, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value407=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 452, "struct sNothingNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result_obj__310 = come_increment_ref_count(((struct sNode*)(__right_value408=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(klass_472,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (struct_attribute2_497 = come_decrement_ref_count(struct_attribute2_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((node_498) ? node_498 = come_decrement_ref_count(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value407,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value408) ? __right_value408 = come_decrement_ref_count(__right_value408, ((struct sNode*)__right_value408)->finalize, ((struct sNode*)__right_value408)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__310) ? __result_obj__310 = come_decrement_ref_count(__result_obj__310, ((struct sNode*)__result_obj__310)->finalize, ((struct sNode*)__result_obj__310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__310;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_473;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_474;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__305;
    it_473=self->head;
    while(it_473!=((void*)0)) {
        prev_it_474=it_473;
        it_473=it_473->next;
        /*c*/ come_call_finalizer3(prev_it_474,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__305 = self;
    return __result_obj__305;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
struct sStructNode* __result_obj__307;
void* __right_value401 = (void*)0;
struct sStructNode* result_499;
void* __right_value402 = (void*)0;
char* __dec_obj77;
void* __right_value403 = (void*)0;
char* __dec_obj78;
void* __right_value404 = (void*)0;
struct sClass* __dec_obj79;
struct sStructNode* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = (void*)0;
        return __result_obj__307;
    }
    result_499=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*"));
    if(    self!=((void*)0)) {
        result_499->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj77=result_499->sname,
        result_499->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_499->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj78=result_499->mName,
        result_499->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj79=result_499->mClass,
        result_499->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        /*b*/ come_call_finalizer3(__dec_obj79,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__308 = result_499;
    /*c*/ come_call_finalizer3(result_499,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct buffer* result_501;
char* head_502;
char* tail_503;
void* __right_value411 = (void*)0;
char* __result_obj__311;
    parse_sharp_v5(info);
    result_501=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 458, "struct buffer*"))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_502=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_503=info->p;
            buffer_append(result_501,head_502,tail_503-head_502);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__311 = come_increment_ref_count(((char*)(__right_value411=buffer_to_string(result_501))));
    /*c*/ come_call_finalizer3(result_501,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value411 = come_decrement_ref_count(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__311 = come_decrement_ref_count(__result_obj__311, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__311;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_504;
void* __right_value412 = (void*)0;
char* struct_attribute_505;
void* __right_value413 = (void*)0;
char* type_name_506;
struct sClass* struct_class_507;
void* __right_value414 = (void*)0;
_Bool _if_conditional5;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sClass* __dec_obj80;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sClass* __dec_obj81;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sType* type_508;
void* __right_value423 = (void*)0;
struct sType* override__509;
char* source_tail_510;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct buffer* header_511;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
char* id_512;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value435 = (void*)0;
struct sNode* __result_obj__314;
void* __right_value436 = (void*)0;
char* T_514;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c3_515=0;
char* Err_516=0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
_Bool _if_conditional6;
void* __right_value441 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c4_517=0;
char* Err_518=0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sClass* generics_class_519;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type2_520=0;
char* name_521=0;
_Bool err_522=0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* name2_523;
void* __right_value449 = (void*)0;
struct sType* type3_524;
_Bool no_comma_525;
void* __right_value450 = (void*)0;
struct sNode* node_526;
struct sNode* __dec_obj84;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* source_tail_527;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct buffer* header_528;
void* __right_value458 = (void*)0;
char* id_529;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value462 = (void*)0;
struct sNode* __result_obj__315;
struct sClass* struct_class_530;
void* __right_value463 = (void*)0;
_Bool _if_conditional7;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sClass* __dec_obj85;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sClass* __dec_obj86;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* type_531;
void* __right_value471 = (void*)0;
struct sType* override__532;
struct sClass* parent_class_533;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* parent_class_name_534;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c5_535=0;
char* Err_536=0;
struct sNode* __result_obj__316;
_Bool multiple_declare_537;
char* p_538;
int sline_539;
void* __right_value476 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_540=0;
char* name_541=0;
_Bool err_542=0;
void* __right_value477 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* base_type_543=0;
char* name_544=0;
_Bool err_545=0;
void* __right_value478 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var17 = (void*)0;
struct sType* type2_546=0;
char* name2_547=0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_548=0;
char* name2_549=0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* type2_550=0;
char* name_551=0;
_Bool err_552=0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* struct_attribute2_553;
char* source_tail_554;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct buffer* header_555;
void* __right_value490 = (void*)0;
char* id_556;
void* __right_value491 = (void*)0;
char* __dec_obj87;
char* __dec_obj88;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
char* __dec_obj89;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value497 = (void*)0;
struct sNode* __result_obj__317;
char* source_head_557;
void* __right_value498 = (void*)0;
char* type_name_558;
void* __right_value499 = (void*)0;
char* id_559;
struct sClass* parent_class_560;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* parent_class_name_561;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c6_562=0;
char* Err_563=0;
struct sNode* __result_obj__318;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct list$1sClass$p* parent_classes_564;
struct sClass* parent_class2_567;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sClass* struct_class_571;
void* __right_value513 = (void*)0;
char* __dec_obj90;
struct sClass* defining_class_572;
void* __right_value514 = (void*)0;
_Bool _if_conditional8;
void* __right_value515 = (void*)0;
void* __right_value521 = (void*)0;
struct list$1sClass$p* o2_saved_578;
struct sClass* parent_581;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_584;
struct tuple2$2char$phsType$ph* it_585;
void* __right_value522 = (void*)0;
char* head_586;
char* p_saved_587;
int sline_saved_588;
char* sname_saved_589;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1sNode$ph* methods_590;
void* __right_value525 = (void*)0;
char* __dec_obj91;
char* __dec_obj92;
struct map$2char$phchar$ph* __dec_obj93;
_Bool include__593;
_Bool multiple_declare_594;
char* p_595;
int sline_596;
void* __right_value526 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* type_597=0;
char* name_598=0;
_Bool err_599=0;
_Bool define_function_flag_600;
char* p_601;
int sline_602;
_Bool invalid_type_603;
void* __right_value527 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_604=0;
char* fun_name_605=0;
_Bool err_606=0;
char* word_607;
void* __right_value528 = (void*)0;
char* __dec_obj94;
void* __right_value529 = (void*)0;
char* __dec_obj95;
char* __dec_obj96;
void* __right_value530 = (void*)0;
char* __dec_obj97;
char* tail_608;
int pointer_num_609;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj98;
void* __right_value533 = (void*)0;
struct sNode* method_610;
struct sType* __dec_obj99;
void* __right_value537 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* base_type_614=0;
char* name_615=0;
_Bool err_616=0;
void* __right_value538 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var24 = (void*)0;
struct sType* type2_617=0;
char* name2_618=0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var25 = (void*)0;
struct sType* type2_619=0;
char* name2_620=0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
char* module_name_621;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1char$ph* params_622;
void* __right_value548 = (void*)0;
char* word_623;
void* __right_value549 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c7_624=0;
char* Err_625=0;
void* __right_value550 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c8_626=0;
char* Err_627=0;
void* __right_value551 = (void*)0;
char* __dec_obj103;
void* __right_value552 = (void*)0;
char* __dec_obj104;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
_Bool _if_conditional9;
void* __right_value555 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c9_631=0;
char* Err_632=0;
struct sNode* __result_obj__334;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct sClassModule* module_633;
void* __right_value558 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c10_634=0;
char* Err_635=0;
void* __right_value559 = (void*)0;
void* __right_value565 = (void*)0;
struct map$2char$phchar$ph* __dec_obj106;
int i_639;
struct list$1char$ph* o2_saved_640;
char* it_641;
void* __right_value566 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
char* __dec_obj107;
void* __right_value575 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type2_666=0;
char* name_667=0;
_Bool err_668=0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __dec_obj108;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value587 = (void*)0;
struct sNode* __result_obj__352;
void* __right_value588 = (void*)0;
struct sNode* __result_obj__353;
struct_class_507 = (void*)0;
struct_class_530 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_504=head;
        struct_attribute_505=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_506=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional5=(((struct sClass*)(__right_value414=map$2char$phsClass$ph_at(info->classes,type_name_506,((void*)0))))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value414,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj80=struct_class_507,
                struct_class_507=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 495, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_506)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj80,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_506),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 497, "struct sClass*")),(char*)come_increment_ref_count(type_name_506),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
            }
            else {
                __dec_obj81=struct_class_507,
                struct_class_507=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_506,((void*)0)));
                /*b*/ come_call_finalizer3(__dec_obj81,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            type_508=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 502, "struct sType*")),(char*)come_increment_ref_count(type_name_506),(_Bool)0,info));
            override__509=((struct sType*)(__right_value423=map$2char$phsType$ph_at(info->types,type_name_506,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value423,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            override__509) {
                if(                override__509->mTypedef) {
                    type_508->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_506),(struct sType*)come_increment_ref_count(type_508));
            source_tail_510=info->p;
            header_511=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 513, "struct buffer*"))));
            buffer_append(header_511,source_head_504,source_tail_510-source_head_504);
            id_512=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value426=__builtin_string(type_name_506))),";"));
            (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_come_struct_header(info,id_512,"%s",((char*)(__right_value428=buffer_to_string(header_511))));
            (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 519, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value431=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 519, "struct sStructNobodyNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_506)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result_obj__314 = come_increment_ref_count(((struct sNode*)(__right_value435=_inf_value4)));
            /*c*/ come_call_finalizer3(struct_class_507,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_508,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_511,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_512 = come_decrement_ref_count(id_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_505 = come_decrement_ref_count(struct_attribute_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_506 = come_decrement_ref_count(type_name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value431,sStructNobodyNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value435) ? __right_value435 = come_decrement_ref_count(__right_value435, ((struct sNode*)__right_value435)->finalize, ((struct sNode*)__right_value435)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__314) ? __result_obj__314 = come_decrement_ref_count(__result_obj__314, ((struct sNode*)__result_obj__314)->finalize, ((struct sNode*)__result_obj__314)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__314;
            /*c*/ come_call_finalizer3(struct_class_507,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_508,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_511,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_512 = come_decrement_ref_count(id_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==60) {
            list$1char$ph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_514=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph_push_back(info->generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, T_514)));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_514 = come_decrement_ref_count(T_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value438=err_msg(info,"invalid generics struct definition")));
                    come_exception_var_c3_515=multiple_assign_var11->v1;
                    Err_516=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    ((Err_516)?(puts(Err_516),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value438,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_516 = come_decrement_ref_count(Err_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (T_514 = come_decrement_ref_count(T_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value440=map$2char$phsClass$ph_at(info->generics_classes,((char*)(__right_value439=__builtin_string(type_name_506))),((void*)0))))!=((void*)0))),            (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value440,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value441=err_msg(info,"redefined generics struct(%s)",type_name_506)));
                come_exception_var_c4_517=multiple_assign_var12->v1;
                Err_518=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                ((Err_518)?(puts(Err_518),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value441,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_518 = come_decrement_ref_count(Err_518, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            generics_class_519=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 551, "struct sClass*")),(char*)come_increment_ref_count(type_name_506),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            map$2char$phsClass$ph_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_506)),(struct sClass*)come_increment_ref_count(generics_class_519));
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value445=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_520=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_521=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_522=multiple_assign_var13->v3;
                /*c*/ come_call_finalizer3(__right_value445,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_522) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_519->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 576, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_521),(struct sType*)come_increment_ref_count(type2_520))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_523=(char*)come_increment_ref_count(parse_word(info));
                        type3_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_520));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_525=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_526=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_525;
                            __dec_obj84=type3_524->mSizeNum,
                            type3_524->mSizeNum=(struct sNode*)come_increment_ref_count(node_526);
                            (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                            ((node_526) ? node_526 = come_decrement_ref_count(node_526, ((struct sNode*)node_526)->finalize, ((struct sNode*)node_526)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_519->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 598, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_523),(struct sType*)come_increment_ref_count(type3_524))));
                        (name2_523 = come_decrement_ref_count(name2_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(type3_524,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_519->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 602, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_521),(struct sType*)come_increment_ref_count(type2_520))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*c*/ come_call_finalizer3(type2_520,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_521 = come_decrement_ref_count(name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                /*c*/ come_call_finalizer3(type2_520,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_521 = come_decrement_ref_count(name_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            ((struct tuple2$2char$phchar$ph*)(__right_value455=parse_attribute(info,(_Bool)0)));
            /*c*/ come_call_finalizer3(__right_value455,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1char$ph_reset(info->generics_type_names);
            source_tail_527=info->p;
            header_528=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 626, "struct buffer*"))));
            buffer_append_str(header_528,"struct ");
            buffer_append(header_528,source_head_504,source_tail_527-source_head_504);
            id_529=(char*)come_increment_ref_count(__builtin_string(type_name_506));
            add_come_code_at_come_struct_header(info,id_529,"%s;\n",((char*)(__right_value459=buffer_to_string(header_528))));
            (__right_value459 = come_decrement_ref_count(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 633, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value461=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 633, "struct sNothingNode*")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result_obj__315 = come_increment_ref_count(((struct sNode*)(__right_value462=_inf_value5)));
            /*c*/ come_call_finalizer3(generics_class_519,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_528,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_529 = come_decrement_ref_count(id_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_505 = come_decrement_ref_count(struct_attribute_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_506 = come_decrement_ref_count(type_name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value461,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value462) ? __right_value462 = come_decrement_ref_count(__right_value462, ((struct sNode*)__right_value462)->finalize, ((struct sNode*)__right_value462)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__315) ? __result_obj__315 = come_decrement_ref_count(__result_obj__315, ((struct sNode*)__result_obj__315)->finalize, ((struct sNode*)__result_obj__315)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__315;
            /*c*/ come_call_finalizer3(generics_class_519,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_528,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_529 = come_decrement_ref_count(id_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value463=map$2char$phsClass$ph_at(info->classes,type_name_506,((void*)0))))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value463,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __dec_obj85=struct_class_530,
                struct_class_530=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 638, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_506)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj85,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_506)),(struct sClass*)come_increment_ref_count(struct_class_530));
            }
            else {
                __dec_obj86=struct_class_530,
                struct_class_530=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_506,((void*)0)));
                /*b*/ come_call_finalizer3(__dec_obj86,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(struct_class_530->mFields);
            }
            type_531=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 646, "struct sType*")),(char*)come_increment_ref_count(type_name_506),(_Bool)0,info));
            override__532=((struct sType*)(__right_value471=map$2char$phsType$ph_at(info->types,type_name_506,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value471,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            override__532) {
                if(                override__532->mTypedef) {
                    type_531->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_506),(struct sType*)come_increment_ref_count(type_531));
            parent_class_533=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value472=parse_word(info)));
                (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                parent_class_name_534=(char*)come_increment_ref_count(parse_word(info));
                parent_class_533=((struct sClass*)(__right_value474=map$2char$phsClass$ph$p_operator_load_element(info->classes,parent_class_name_534)));
                /*c*/ come_call_finalizer3(__right_value474,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                parent_class_533==((void*)0)) {
                    multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value475=err_msg(info,"invalid class name(%s)",parent_class_name_534)));
                    come_exception_var_c5_535=multiple_assign_var14->v1;
                    Err_536=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    ((Err_536)?(puts(Err_536),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value475,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__316 = come_increment_ref_count(((void*)0));
                    (Err_536 = come_decrement_ref_count(Err_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (parent_class_name_534 = come_decrement_ref_count(parent_class_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(struct_class_530,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (struct_attribute_505 = come_decrement_ref_count(struct_attribute_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_506 = come_decrement_ref_count(type_name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__316;
                    (Err_536 = come_decrement_ref_count(Err_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (parent_class_name_534 = come_decrement_ref_count(parent_class_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_declare_537=(_Bool)0;
                {
                    p_538=info->p;
                    sline_539=info->sline;
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value476=backtrace_parse_type((_Bool)1,info)));
                    type_540=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_541=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_542=multiple_assign_var15->v3;
                    /*c*/ come_call_finalizer3(__right_value476,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    err_542&&*info->p==44) {
                        multiple_declare_537=(_Bool)1;
                    }
                    info->p=p_538;
                    info->sline=sline_539;
                    /*c*/ come_call_finalizer3(type_540,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_541 = come_decrement_ref_count(name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                multiple_declare_537) {
                    multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value477=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_543=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                    name_544=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                    err_545=multiple_assign_var16->v3;
                    /*c*/ come_call_finalizer3(__right_value477,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var17=((struct tuple2$2sType$phchar$ph*)(__right_value478=parse_variable_name((struct sType*)come_increment_ref_count(base_type_543),(_Bool)1,info)));
                    type2_546=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                    name2_547=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                    /*c*/ come_call_finalizer3(__right_value478,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_530->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 700, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_547),(struct sType*)come_increment_ref_count(type2_546))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value481=parse_variable_name((struct sType*)come_increment_ref_count(base_type_543),(_Bool)0,info)));
                        type2_548=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name2_549=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        /*c*/ come_call_finalizer3(__right_value481,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_530->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 708, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_549),(struct sType*)come_increment_ref_count(type2_548))));
                        /*c*/ come_call_finalizer3(type2_548,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (name2_549 = come_decrement_ref_count(name2_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(base_type_543,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_544 = come_decrement_ref_count(name_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name2_547 = come_decrement_ref_count(name2_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value484=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_550=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name_551=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    err_552=multiple_assign_var19->v3;
                    /*c*/ come_call_finalizer3(__right_value484,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_552) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_530->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 718, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_551),(struct sType*)come_increment_ref_count(type2_550))));
                    /*c*/ come_call_finalizer3(type2_550,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_551 = come_decrement_ref_count(name_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            struct_attribute2_553=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph_reset(info->generics_type_names);
            source_tail_554=info->p;
            header_555=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 743, "struct buffer*"))));
            buffer_append(header_555,source_head_504,source_tail_554-source_head_504);
            id_556=(char*)come_increment_ref_count(__builtin_string(type_name_506));
            add_come_code_at_come_struct_header(info,id_556,"%s;\n",((char*)(__right_value491=buffer_to_string(header_555))));
            (__right_value491 = come_decrement_ref_count(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            string_operator_equals(struct_attribute_505,"")&&string_operator_equals(struct_attribute2_553,"")) {
            }
            else if(            string_operator_equals(struct_attribute_505,"")) {
                __dec_obj87=struct_class_530->mAttribute,
                struct_class_530->mAttribute=(char*)come_increment_ref_count(struct_attribute2_553);
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_553,"")) {
                __dec_obj88=struct_class_530->mAttribute,
                struct_class_530->mAttribute=(char*)come_increment_ref_count(struct_attribute_505);
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj89=struct_class_530->mAttribute,
                struct_class_530->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value492=string_operator_add(struct_attribute_505," "))),struct_attribute2_553));
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 761, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value496=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 761, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_506)),struct_class_530,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result_obj__317 = come_increment_ref_count(((struct sNode*)(__right_value497=_inf_value6)));
            /*c*/ come_call_finalizer3(struct_class_530,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (struct_attribute2_553 = come_decrement_ref_count(struct_attribute2_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_555,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_556 = come_decrement_ref_count(id_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_505 = come_decrement_ref_count(struct_attribute_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_506 = come_decrement_ref_count(type_name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value496,sStructNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value497) ? __right_value497 = come_decrement_ref_count(__right_value497, ((struct sNode*)__right_value497)->finalize, ((struct sNode*)__right_value497)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__317;
            /*c*/ come_call_finalizer3(struct_class_530,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_531,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (struct_attribute2_553 = come_decrement_ref_count(struct_attribute2_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_555,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_556 = come_decrement_ref_count(id_556, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (struct_attribute_505 = come_decrement_ref_count(struct_attribute_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_506 = come_decrement_ref_count(type_name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_557=head;
        type_name_558=(char*)come_increment_ref_count(parse_word(info));
        id_559=(char*)come_increment_ref_count(__builtin_string(type_name_558));
        add_come_code_at_come_struct_header(info,id_559,"struct %s;\n",type_name_558);
        parent_class_560=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value500=parse_word(info)));
            (__right_value500 = come_decrement_ref_count(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            parent_class_name_561=(char*)come_increment_ref_count(parse_word(info));
            parent_class_560=((struct sClass*)(__right_value502=map$2char$phsClass$ph$p_operator_load_element(info->classes,parent_class_name_561)));
            /*c*/ come_call_finalizer3(__right_value502,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            parent_class_560==((void*)0)) {
                multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value503=err_msg(info,"invalid class name(%s)",parent_class_name_561)));
                come_exception_var_c6_562=multiple_assign_var20->v1;
                Err_563=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                ((Err_563)?(puts(Err_563),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value503,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__318 = come_increment_ref_count(((void*)0));
                (Err_563 = come_decrement_ref_count(Err_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (parent_class_name_561 = come_decrement_ref_count(parent_class_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name_558 = come_decrement_ref_count(type_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_559 = come_decrement_ref_count(id_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__318;
                (Err_563 = come_decrement_ref_count(Err_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (parent_class_name_561 = come_decrement_ref_count(parent_class_name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        parent_classes_564=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 786, "struct list$1sClass$p*"))));
        parent_class2_567=parent_class_560;
        while(parent_class2_567) {
            list$1sClass$p_add(parent_classes_564,parent_class2_567);
            if(            parent_class_560->mParentClassName) {
                parent_class2_567=((struct sClass*)(__right_value510=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value509=__builtin_string(parent_class_560->mParentClassName))))));
                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value510,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                parent_class2_567=((void*)0);
            }
        }
        struct_class_571=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 799, "struct sClass*")),(char*)come_increment_ref_count(type_name_558),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        if(        parent_class_560) {
            __dec_obj90=struct_class_571->mParentClassName,
            struct_class_571->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, parent_class_560->mName));
            __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        defining_class_572=info->defining_class;
        info->defining_class=struct_class_571;
        if(        (_if_conditional8=(((struct sClass*)(__right_value514=map$2char$phsClass$ph_at(info->classes,type_name_558,((void*)0))))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value514,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_558),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_571)));
        }
        for(        o2_saved_578=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value521=list$1sClass$p_reverse(parent_classes_564))))),parent_581=list$1sClass$p_begin((o2_saved_578)) ,        /*c*/ come_call_finalizer3(__right_value521,list$1sClass$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        0;        !list$1sClass$p_end((o2_saved_578));        parent_581=list$1sClass$p_next((o2_saved_578))        ){
            for(            o2_saved_584=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((parent_581->mFields)),it_585=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_584));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_584));            it_585=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_584))            ){
                list$1tuple2$2char$phsType$ph$ph_add(struct_class_571->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_585)));
            }
            /*c*/ come_call_finalizer3(o2_saved_584,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_578,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        expected_next_character(123,info);
        head_586=info->p;
        p_saved_587=((void*)0);
        sline_saved_588=0;
        sname_saved_589=((void*)0);
        methods_590=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 825, "struct list$1sNode$ph*"))));
        while((_Bool)1) {
            if(            p_saved_587) {
                if(                *info->p==0) {
                    info->p=p_saved_587;
                    info->sline=sline_saved_588;
                    __dec_obj91=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_589));
                    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_587=((void*)0);
                    sline_saved_588=0;
                    __dec_obj92=sname_saved_589,
                    sname_saved_589=((void*)0);
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj93=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj93,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__593=parsecmp("include",info);
            multiple_declare_594=(_Bool)0;
            if(            include__593==(_Bool)0) {
                p_595=info->p;
                sline_596=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value526=backtrace_parse_type((_Bool)1,info)));
                    type_597=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                    name_598=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    err_599=multiple_assign_var21->v3;
                    /*c*/ come_call_finalizer3(__right_value526,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    err_599&&*info->p==44) {
                        multiple_declare_594=(_Bool)1;
                    }
                    /*c*/ come_call_finalizer3(type_597,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_598 = come_decrement_ref_count(name_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_595;
                info->sline=sline_596;
            }
            define_function_flag_600=(_Bool)0;
            if(            include__593==(_Bool)0) {
                p_601=info->p;
                sline_602=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_600=(_Bool)1;
                }
                else {
                    invalid_type_603=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value527=backtrace_parse_type((_Bool)0,info)));
                        result_type_604=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                        fun_name_605=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                        err_606=multiple_assign_var22->v3;
                        /*c*/ come_call_finalizer3(__right_value527,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_605 = come_decrement_ref_count(fun_name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    word_607=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj94=word_607,
                        word_607=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_607,"extern")) {
                            __dec_obj95=word_607,
                            word_607=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                    }
                    else {
                        __dec_obj96=word_607,
                        word_607=((void*)0);
                        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_607) {
                        if(                        is_type_name(word_607,info)) {
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
                                __dec_obj97=word_607,
                                word_607=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                        }
                        if(                        strlen(word_607)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_600=(_Bool)1;
                        }
                    }
                    (word_607 = come_decrement_ref_count(word_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_601;
                info->sline=sline_602;
            }
            if(            define_function_flag_600) {
                tail_608=info->p;
                pointer_num_609=1;
                __dec_obj98=info->class_type,
                info->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 935, "struct sType*")),(char*)come_increment_ref_count(type_name_558),(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->class_type->mPointerNum=pointer_num_609;
                info->in_class=(_Bool)1;
                method_610=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj99=info->class_type,
                info->class_type=((void*)0);
                /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph_push_back(methods_590,(struct sNode*)come_increment_ref_count(method_610));
                ((method_610) ? method_610 = come_decrement_ref_count(method_610, ((struct sNode*)method_610)->finalize, ((struct sNode*)method_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            multiple_declare_594) {
                multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value537=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_614=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                name_615=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                err_616=multiple_assign_var23->v3;
                /*c*/ come_call_finalizer3(__right_value537,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var24=((struct tuple2$2sType$phchar$ph*)(__right_value538=parse_variable_name((struct sType*)come_increment_ref_count(base_type_614),(_Bool)1,info)));
                type2_617=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
                name2_618=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                /*c*/ come_call_finalizer3(__right_value538,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_571->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 952, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_618),(struct sType*)come_increment_ref_count(type2_617))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var25=((struct tuple2$2sType$phchar$ph*)(__right_value541=parse_variable_name((struct sType*)come_increment_ref_count(base_type_614),(_Bool)0,info)));
                    type2_619=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                    name2_620=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                    /*c*/ come_call_finalizer3(__right_value541,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_571->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 960, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_620),(struct sType*)come_increment_ref_count(type2_619))));
                    /*c*/ come_call_finalizer3(type2_619,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name2_620 = come_decrement_ref_count(name2_620, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                expected_next_character(59,info);
                /*c*/ come_call_finalizer3(base_type_614,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_615 = come_decrement_ref_count(name_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type2_617,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name2_618 = come_decrement_ref_count(name2_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value544=parse_word(info)));
                (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_621=(char*)come_increment_ref_count(parse_word(info));
                params_622=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 969, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_623=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_622,(char*)come_increment_ref_count(word_623));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value549=err_msg(info,"invalid source end")));
                            come_exception_var_c7_624=multiple_assign_var26->v1;
                            Err_625=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_625)?(puts(Err_625),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value549,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_625 = come_decrement_ref_count(Err_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_623 = come_decrement_ref_count(word_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value550=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c8_626=multiple_assign_var27->v1;
                            Err_627=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_627)?(puts(Err_627),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value550,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_627 = come_decrement_ref_count(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_623 = come_decrement_ref_count(word_623, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_587=info->p;
                sline_saved_588=info->sline;
                __dec_obj103=sname_saved_589,
                sname_saved_589=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj104=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_621));
                __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional9=(((struct sClassModule*)(__right_value554=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value553=__builtin_string(module_name_621))))))==((void*)0))),                (__right_value553 = come_decrement_ref_count(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value554,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value555=err_msg(info,"module not found")));
                    come_exception_var_c9_631=multiple_assign_var28->v1;
                    Err_632=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    ((Err_632)?(puts(Err_632),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value555,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__334 = come_increment_ref_count(((void*)0));
                    (Err_632 = come_decrement_ref_count(Err_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_621 = come_decrement_ref_count(module_name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_622,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_558 = come_decrement_ref_count(type_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_559 = come_decrement_ref_count(id_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(parent_classes_564,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(struct_class_571,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_saved_589 = come_decrement_ref_count(sname_saved_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(methods_590,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__result_obj__334) ? __result_obj__334 = come_decrement_ref_count(__result_obj__334, ((struct sNode*)__result_obj__334)->finalize, ((struct sNode*)__result_obj__334)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__334;
                    (Err_632 = come_decrement_ref_count(Err_632, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_633=((struct sClassModule*)(__right_value557=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value556=__builtin_string(module_name_621))))));
                (__right_value556 = come_decrement_ref_count(__right_value556, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value557,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_633->mParams)!=list$1char$ph_length(params_622)) {
                    multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value558=err_msg(info,"invalid parametor number")));
                    come_exception_var_c10_634=multiple_assign_var29->v1;
                    Err_635=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                    ((Err_635)?(puts(Err_635),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value558,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_635 = come_decrement_ref_count(Err_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj106=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "14struct.c", 1023, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj106,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_639=0;
                for(                o2_saved_640=(struct list$1char$ph*)come_increment_ref_count((module_633->mParams)),it_641=list$1char$ph_begin((o2_saved_640));                !list$1char$ph_end((o2_saved_640));                it_641=list$1char$ph_next((o2_saved_640))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_641)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value572=list$1char$ph$p_operator_load_element(params_622,i_639))))));
                    (__right_value572 = come_decrement_ref_count(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_639++;
                }
                /*c*/ come_call_finalizer3(o2_saved_640,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_633->mText;
                info->sline=module_633->mSLine;
                __dec_obj107=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_633->mSName));
                __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_621 = come_decrement_ref_count(module_name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_622,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value575=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_666=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_667=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_668=multiple_assign_var30->v3;
                /*c*/ come_call_finalizer3(__right_value575,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_668) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_571->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1042, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(type2_666))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                /*c*/ come_call_finalizer3(type2_666,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_667 = come_decrement_ref_count(name_667, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_587) {
            if(            info->p==0) {
                info->p=p_saved_587;
                info->sline=sline_saved_588;
                __dec_obj108=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_589));
                __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_587=((void*)0);
                sline_saved_588=0;
            }
        }
        list$1char$ph_reset(info->generics_type_names);
        info->defining_class=defining_class_572;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1076, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value581=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1076, "struct sClassNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_558)),(struct sClass*)come_increment_ref_count(struct_class_571),(struct list$1sNode$ph*)come_increment_ref_count(methods_590),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result_obj__352 = come_increment_ref_count(((struct sNode*)(__right_value587=_inf_value7)));
        (type_name_558 = come_decrement_ref_count(type_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_559 = come_decrement_ref_count(id_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(parent_classes_564,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(struct_class_571,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_saved_589 = come_decrement_ref_count(sname_saved_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(methods_590,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value581,sClassNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value587) ? __right_value587 = come_decrement_ref_count(__right_value587, ((struct sNode*)__right_value587)->finalize, ((struct sNode*)__right_value587)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__352;
        (type_name_558 = come_decrement_ref_count(type_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_559 = come_decrement_ref_count(id_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(parent_classes_564,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(struct_class_571,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_saved_589 = come_decrement_ref_count(sname_saved_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(methods_590,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__353 = come_increment_ref_count(((struct sNode*)(__right_value588=top_level_v97(buf,head,head_sline,info))));
    ((__right_value588) ? __right_value588 = come_decrement_ref_count(__right_value588, ((struct sNode*)__right_value588)->finalize, ((struct sNode*)__right_value588)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__353;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
struct sStructNobodyNode* __result_obj__312;
void* __right_value432 = (void*)0;
struct sStructNobodyNode* result_513;
void* __right_value433 = (void*)0;
char* __dec_obj82;
void* __right_value434 = (void*)0;
char* __dec_obj83;
struct sStructNobodyNode* __result_obj__313;
    if(    self==(void*)0) {
        __result_obj__312 = (void*)0;
        return __result_obj__312;
    }
    result_513=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*"));
    if(    self!=((void*)0)) {
        result_513->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj82=result_513->sname,
        result_513->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_513->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj83=result_513->mName,
        result_513->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__313 = result_513;
    /*c*/ come_call_finalizer3(result_513,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self){
struct list$1sClass$p* __result_obj__319;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__319 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__319,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__319;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it_565;
struct list_item$1sClass$p* prev_it_566;
    it_565=self->head;
    while(it_565!=((void*)0)) {
        prev_it_566=it_565;
        it_565=it_565->next;
        /*c*/ come_call_finalizer3(prev_it_566,list_item$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item){
void* __right_value506 = (void*)0;
struct list_item$1sClass$p* litem_568;
void* __right_value507 = (void*)0;
struct list_item$1sClass$p* litem_569;
void* __right_value508 = (void*)0;
struct list_item$1sClass$p* litem_570;
struct list$1sClass$p* __result_obj__320;
    if(    self->len==0) {
        litem_568=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value506=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1204, "struct list_item$1sClass$p*"))));
        litem_568->prev=((void*)0);
        litem_568->next=((void*)0);
        litem_568->item=item;
        self->tail=litem_568;
        self->head=litem_568;
    }
    else if(    self->len==1) {
        litem_569=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value507=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1214, "struct list_item$1sClass$p*"))));
        litem_569->prev=self->head;
        litem_569->next=((void*)0);
        litem_569->item=item;
        self->tail=litem_569;
        self->head->next=litem_569;
    }
    else {
        litem_570=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value508=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1224, "struct list_item$1sClass$p*"))));
        litem_570->prev=self->tail;
        litem_570->next=((void*)0);
        litem_570->item=item;
        self->tail->next=litem_570;
        self->tail=litem_570;
    }
    self->len++;
    __result_obj__320 = self;
    return __result_obj__320;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self){
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1sClass$p* result_573;
struct list_item$1sClass$p* it_574;
struct list$1sClass$p* __result_obj__322;
    result_573=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), "./comelang.h", 1966, "struct list$1sClass$p*"))));
    it_574=self->tail;
    while(it_574!=((void*)0)) {
        list$1sClass$p_push_back(result_573,it_574->item);
        it_574=it_574->prev;
    }
    __result_obj__322 = come_increment_ref_count(result_573);
    /*c*/ come_call_finalizer3(result_573,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__322,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item){
void* __right_value518 = (void*)0;
struct list_item$1sClass$p* litem_575;
void* __right_value519 = (void*)0;
struct list_item$1sClass$p* litem_576;
void* __right_value520 = (void*)0;
struct list_item$1sClass$p* litem_577;
struct list$1sClass$p* __result_obj__321;
    if(    self->len==0) {
        litem_575=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value518=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1274, "struct list_item$1sClass$p*"))));
        litem_575->prev=((void*)0);
        litem_575->next=((void*)0);
        litem_575->item=item;
        self->tail=litem_575;
        self->head=litem_575;
    }
    else if(    self->len==1) {
        litem_576=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value519=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1284, "struct list_item$1sClass$p*"))));
        litem_576->prev=self->head;
        litem_576->next=((void*)0);
        litem_576->item=item;
        self->tail=litem_576;
        self->head->next=litem_576;
    }
    else {
        litem_577=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value520=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1294, "struct list_item$1sClass$p*"))));
        litem_577->prev=self->tail;
        litem_577->next=((void*)0);
        litem_577->item=item;
        self->tail->next=litem_577;
        self->tail=litem_577;
    }
    self->len++;
    __result_obj__321 = self;
    return __result_obj__321;
}

static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self){
struct sClass* result_579;
struct sClass* __result_obj__323;
struct sClass* __result_obj__324;
struct sClass* result_580;
struct sClass* __result_obj__325;
result_579 = (void*)0;
result_580 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_579,0,sizeof(struct sClass*));
        __result_obj__323 = result_579;
        return __result_obj__323;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__324 = self->it->item;
        return __result_obj__324;
    }
    memset(&result_580,0,sizeof(struct sClass*));
    __result_obj__325 = result_580;
    return __result_obj__325;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self){
struct sClass* result_582;
struct sClass* __result_obj__326;
struct sClass* __result_obj__327;
struct sClass* result_583;
struct sClass* __result_obj__328;
result_582 = (void*)0;
result_583 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_582,0,sizeof(struct sClass*));
        __result_obj__326 = result_582;
        return __result_obj__326;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__327 = self->it->item;
        return __result_obj__327;
    }
    memset(&result_583,0,sizeof(struct sClass*));
    __result_obj__328 = result_583;
    return __result_obj__328;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_591;
int i_592;
    for(    i_591=0;    i_591<self->size;    i_591++    ){
        if(        self->item_existance[i_591]) {
            if(            1) {
                (self->items[i_591] = come_decrement_ref_count(self->items[i_591], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_592=0;    i_592<self->size;    i_592++    ){
        if(        self->item_existance[i_592]) {
            if(            1) {
                (self->keys[i_592] = come_decrement_ref_count(self->keys[i_592], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value534 = (void*)0;
struct list_item$1sNode$ph* litem_611;
struct sNode* __dec_obj100;
void* __right_value535 = (void*)0;
struct list_item$1sNode$ph* litem_612;
struct sNode* __dec_obj101;
void* __right_value536 = (void*)0;
struct list_item$1sNode$ph* litem_613;
struct sNode* __dec_obj102;
struct list$1sNode$ph* __result_obj__329;
    if(    self->len==0) {
        litem_611=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value534=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1274, "struct list_item$1sNode$ph*"))));
        litem_611->prev=((void*)0);
        litem_611->next=((void*)0);
        __dec_obj100=litem_611->item,
        litem_611->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_611;
        self->head=litem_611;
    }
    else if(    self->len==1) {
        litem_612=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value535=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1284, "struct list_item$1sNode$ph*"))));
        litem_612->prev=self->head;
        litem_612->next=((void*)0);
        __dec_obj101=litem_612->item,
        litem_612->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_612;
        self->head->next=litem_612;
    }
    else {
        litem_613=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value536=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1294, "struct list_item$1sNode$ph*"))));
        litem_613->prev=self->tail;
        litem_613->next=((void*)0);
        __dec_obj102=litem_613->item,
        litem_613->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_613;
        self->tail=litem_613;
    }
    self->len++;
    __result_obj__329 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__329;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_628;
unsigned int hash_629;
unsigned int it_630;
struct sClassModule* __result_obj__330;
struct sClassModule* __result_obj__331;
struct sClassModule* __result_obj__332;
struct sClassModule* __result_obj__333;
default_value_628 = (void*)0;
    memset(&default_value_628,0,sizeof(struct sClassModule*));
    hash_629=string_get_hash_key(((char*)key))%self->size;
    it_630=hash_629;
    while((_Bool)1) {
        if(        self->item_existance[it_630]) {
            if(            string_equals(self->keys[it_630],key)) {
                __result_obj__330 = come_increment_ref_count(self->items[it_630]);
                /*c*/ come_call_finalizer3(default_value_628,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__330,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__330;
            }
            it_630++;
            if(            it_630>=self->size) {
                it_630=0;
            }
            else if(            it_630==hash_629) {
                __result_obj__331 = come_increment_ref_count(default_value_628);
                /*c*/ come_call_finalizer3(default_value_628,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__331,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__331;
            }
        }
        else {
            __result_obj__332 = come_increment_ref_count(default_value_628);
            /*c*/ come_call_finalizer3(default_value_628,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__332,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__332;
        }
    }
    __result_obj__333 = come_increment_ref_count(default_value_628);
    /*c*/ come_call_finalizer3(default_value_628,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__333,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__333;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
int i_636;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1char$ph* __dec_obj105;
struct map$2char$phchar$ph* __result_obj__336;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value560=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2089, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value561=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2090, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value562=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2091, "_Bool*"))));
    for(    i_636=0;    i_636<128;    i_636++    ){
        self->item_existance[i_636]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj105=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2101, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj105,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__336 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__336,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__335;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__335 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__335,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_637;
int i_638;
    for(    i_637=0;    i_637<self->size;    i_637++    ){
        if(        self->item_existance[i_637]) {
            if(            1) {
                (self->items[i_637] = come_decrement_ref_count(self->items[i_637], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_638=0;    i_638<self->size;    i_638++    ){
        if(        self->item_existance[i_638]) {
            if(            1) {
                (self->keys[i_638] = come_decrement_ref_count(self->keys[i_638], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_659;
unsigned int it_660;
_Bool same_key_exist_661;
char* it2_662;
struct map$2char$phchar$ph* __result_obj__347;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_659=string_get_hash_key(((char*)key))%self->size;
    it_660=hash_659;
    while((_Bool)1) {
        if(        self->item_existance[it_660]) {
            if(            string_equals(self->keys[it_660],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_660]);
                    (self->keys[it_660] = come_decrement_ref_count(self->keys[it_660], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_660]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_660]);
                    self->keys[it_660]=key;
                }
                if(                1) {
                    (self->items[it_660] = come_decrement_ref_count(self->items[it_660], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_660]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_660]=item;
                }
                break;
            }
            it_660++;
            if(            it_660>=self->size) {
                it_660=0;
            }
            else if(            it_660==hash_659) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_660]=(_Bool)1;
            if(            1) {
                self->keys[it_660]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_660]=key;
            }
            if(            1) {
                self->items[it_660]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_660]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_661=(_Bool)0;
    for(    it2_662=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_662=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_662,key)) {
            same_key_exist_661=(_Bool)1;
        }
    }
    if(    !same_key_exist_661) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__347 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__347;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_642;
void* __right_value567 = (void*)0;
char** keys_643;
void* __right_value568 = (void*)0;
char** items_644;
void* __right_value569 = (void*)0;
_Bool* item_existance_645;
int len_646;
char* it_649;
char* default_value_652;
void* __right_value570 = (void*)0;
char* it2_653;
unsigned int hash_656;
int n_657;
char* default_value_658;
void* __right_value571 = (void*)0;
default_value_652 = (void*)0;
default_value_658 = (void*)0;
    size_642=self->size*10;
    keys_643=(char**)come_increment_ref_count(((char**)(__right_value567=(char**)come_calloc(1, sizeof(char*)*(1*(size_642)), "./comelang.h", 2328, "char**"))));
    items_644=(char**)come_increment_ref_count(((char**)(__right_value568=(char**)come_calloc(1, sizeof(char*)*(1*(size_642)), "./comelang.h", 2329, "char**"))));
    item_existance_645=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value569=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_642)), "./comelang.h", 2330, "_Bool*"))));
    len_646=0;
    for(    it_649=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_649=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_652,0,sizeof(char*));
        it2_653=((char*)(__right_value570=map$2char$phchar$ph_at(self,it_649,(char*)come_increment_ref_count(default_value_652))));
        (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_656=string_get_hash_key(((char*)it_649))%size_642;
        n_657=hash_656;
        while((_Bool)1) {
            if(            item_existance_645[n_657]) {
                n_657++;
                if(                n_657>=size_642) {
                    n_657=0;
                }
                else if(                n_657==hash_656) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_645[n_657]=(_Bool)1;
                keys_643[n_657]=it_649;
                items_644[n_657]=((char*)(__right_value571=map$2char$phchar$ph_at(self,it_649,(char*)come_increment_ref_count(default_value_658))));
                (__right_value571 = come_decrement_ref_count(__right_value571, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_646++;
                (default_value_658 = come_decrement_ref_count(default_value_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_658 = come_decrement_ref_count(default_value_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_652 = come_decrement_ref_count(default_value_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_643;
    self->items=items_644;
    self->item_existance=item_existance_645;
    self->size=size_642;
    self->len=len_646;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_647;
char* __result_obj__337;
char* __result_obj__338;
char* result_648;
char* __result_obj__339;
result_647 = (void*)0;
result_648 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_647,0,sizeof(char*));
        __result_obj__337 = result_647;
        return __result_obj__337;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__338 = self->key_list->it->item;
        return __result_obj__338;
    }
    memset(&result_648,0,sizeof(char*));
    __result_obj__339 = result_648;
    return __result_obj__339;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_650;
char* __result_obj__340;
char* __result_obj__341;
char* result_651;
char* __result_obj__342;
result_650 = (void*)0;
result_651 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_650,0,sizeof(char*));
        __result_obj__340 = result_650;
        return __result_obj__340;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__341 = self->key_list->it->item;
        return __result_obj__341;
    }
    memset(&result_651,0,sizeof(char*));
    __result_obj__342 = result_651;
    return __result_obj__342;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_654;
unsigned int it_655;
char* __result_obj__343;
char* __result_obj__344;
char* __result_obj__345;
char* __result_obj__346;
    hash_654=string_get_hash_key(((char*)key))%self->size;
    it_655=hash_654;
    while((_Bool)1) {
        if(        self->item_existance[it_655]) {
            if(            string_equals(self->keys[it_655],key)) {
                __result_obj__343 = come_increment_ref_count(self->items[it_655]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__343 = come_decrement_ref_count(__result_obj__343, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__343;
            }
            it_655++;
            if(            it_655>=self->size) {
                it_655=0;
            }
            else if(            it_655==hash_654) {
                __result_obj__344 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__344 = come_decrement_ref_count(__result_obj__344, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__344;
            }
        }
        else {
            __result_obj__345 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__345 = come_decrement_ref_count(__result_obj__345, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__345;
        }
    }
    __result_obj__346 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__346 = come_decrement_ref_count(__result_obj__346, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__346;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_663;
int i_664;
char* __result_obj__348;
char* default_value_665;
char* __result_obj__349;
default_value_665 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_663=self->head;
    i_664=0;
    while(it_663!=((void*)0)) {
        if(        position==i_664) {
            __result_obj__348 = come_increment_ref_count(it_663->item);
            (__result_obj__348 = come_decrement_ref_count(__result_obj__348, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__348;
        }
        it_663=it_663->next;
        i_664++;
    }
    memset(&default_value_665,0,sizeof(char*));
    __result_obj__349 = come_increment_ref_count(default_value_665);
    (default_value_665 = come_decrement_ref_count(default_value_665, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__349 = come_decrement_ref_count(__result_obj__349, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__349;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
struct sClassNode* __result_obj__350;
void* __right_value582 = (void*)0;
struct sClassNode* result_669;
void* __right_value583 = (void*)0;
char* __dec_obj109;
void* __right_value584 = (void*)0;
char* __dec_obj110;
void* __right_value585 = (void*)0;
struct sClass* __dec_obj111;
void* __right_value586 = (void*)0;
struct list$1sNode$ph* __dec_obj112;
struct sClassNode* __result_obj__351;
    if(    self==(void*)0) {
        __result_obj__350 = (void*)0;
        return __result_obj__350;
    }
    result_669=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*"));
    if(    self!=((void*)0)) {
        result_669->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result_669->sname,
        result_669->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_669->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj110=result_669->mName,
        result_669->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj111=result_669->mClass,
        result_669->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        /*b*/ come_call_finalizer3(__dec_obj111,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj112=result_669->mMethods,
        result_669->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mMethods));
        /*b*/ come_call_finalizer3(__dec_obj112,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__351 = result_669;
    /*c*/ come_call_finalizer3(result_669,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__351;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_struct_670;
char* p_671;
int sline_672;
void* __right_value589 = (void*)0;
char* type_name_673;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
char* struct_attribute_674;
void* __right_value594 = (void*)0;
char* type_name_675;
void* __right_value595 = (void*)0;
struct sNode* __result_obj__354;
void* __right_value596 = (void*)0;
struct sNode* __result_obj__355;
    define_struct_670=(_Bool)0;
    {
        p_671=info->p;
        sline_672=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_673=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value590=parse_word(info)));
                    (__right_value590 = come_decrement_ref_count(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((char*)(__right_value591=parse_word(info)));
                    (__right_value591 = come_decrement_ref_count(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==123) {
                    ((char*)(__right_value592=skip_block(info)));
                    (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        define_struct_670=(_Bool)1;
                    }
                }
                (type_name_673 = come_decrement_ref_count(type_name_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_671;
        info->sline=sline_672;
    }
    if(    define_struct_670) {
        struct_attribute_674=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_675=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__354 = come_increment_ref_count(((struct sNode*)(__right_value595=parse_struct((char*)come_increment_ref_count(type_name_675),(char*)come_increment_ref_count(struct_attribute_674),info))));
        (struct_attribute_674 = come_decrement_ref_count(struct_attribute_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_675 = come_decrement_ref_count(type_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value595) ? __right_value595 = come_decrement_ref_count(__right_value595, ((struct sNode*)__right_value595)->finalize, ((struct sNode*)__right_value595)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__354;
        (struct_attribute_674 = come_decrement_ref_count(struct_attribute_674, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_675 = come_decrement_ref_count(type_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__355 = come_increment_ref_count(((struct sNode*)(__right_value596=string_node_v13(buf,head,head_sline,info))));
    ((__right_value596) ? __right_value596 = come_decrement_ref_count(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__355;
}

