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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph$p_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
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
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
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
static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self);
static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
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
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
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
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
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
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self);
static _Bool tuple3$3sType$phchar$phsNode$ph_equals(struct tuple3$3sType$phchar$phsNode$ph* left, struct tuple3$3sType$phchar$phsNode$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self);
static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self);
static _Bool tuple3$3sType$phchar$phvoid$p_equals(struct tuple3$3sType$phchar$phvoid$p* left, struct tuple3$3sType$phchar$phvoid$p* right);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* left, struct tuple2$2char$phsType$ph* right);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2);
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
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_158;
    result_158=0;
    result_158+=int_get_hash_key(((int)self->buf));
    result_158+=int_get_hash_key(((int)self->len));
    result_158+=int_get_hash_key(((int)self->size));
    return result_158;
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
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1489, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1499, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1509, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1489, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1499, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1509, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1489, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1499, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1509, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1489, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1499, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1509, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1489, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1499, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1509, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1489, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1499, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1509, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1489, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1499, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1509, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2306, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "./comelang.h", 2433, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2306, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "./comelang.h", 2433, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2306, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "./comelang.h", 2433, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2306, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "./comelang.h", 2433, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2306, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "./comelang.h", 2433, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2306, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "./comelang.h", 2433, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2306, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "./comelang.h", 2433, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
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
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1489, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1499, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1509, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
char* __dec_obj23;
void* __right_value299 = (void*)0;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
void* __right_value300 = (void*)0;
struct list$1char$ph* __dec_obj50;
void* __right_value312 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj57;
char* __dec_obj58;
struct sStoreNode* __result_obj__258;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj48=self->type;
    self->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj49=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
    ((void*)0);
    __dec_obj50=self->multiple_assign;
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, multiple_assign));
    come_call_finalizer3(__dec_obj50,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj57=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, multiple_declare));
    come_call_finalizer3(__dec_obj57,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->attribute;
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__258 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__258,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value313 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value313=__builtin_string("sStoreNode"))));
    (__right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count2(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sVar* var__387;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_1_409=0;
char* Err_410=0;
_Bool _if_conditional1;
_Bool __result_obj__269;
void* __right_value319 = (void*)0;
struct sType* type_411;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_412;
struct tuple3$3sType$phchar$phsNode$ph* it_415;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var2 = (void*)0;
struct sType* type_418=0;
char* var_name_419=0;
struct sNode* right_value_420=0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_2_421=0;
char* Err_422=0;
_Bool _if_conditional2;
_Bool __result_obj__276;
void* __right_value326 = (void*)0;
struct sType* left_type_423;
_Bool Value_424;
_Bool __result_obj__277;
void* __right_value327 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool Value_426;
void* __right_value331 = (void*)0;
struct CVALUE* right_value_427;
struct sType* right_type_428;
int i_429;
struct list$1char$ph* o2_saved_430;
char* it_433;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sVar* var__436;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* right_type2_437;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
char* multiple_var_name_442;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
char* __dec_obj59;
struct list$1char$ph* o2_saved_443;
char* it_444;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sType* right_type2_445;
struct sVar* var__446;
void* __right_value343 = (void*)0;
struct sType* var_type_447;
void* __right_value344 = (void*)0;
struct sType* left_type_448;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct CVALUE* right_value2_449;
void* __right_value347 = (void*)0;
char* __dec_obj60;
void* __right_value348 = (void*)0;
struct sType* __dec_obj61;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct CVALUE* come_value_450;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_3_451=0;
char* Err_452=0;
_Bool _if_conditional3;
_Bool __result_obj__286;
void* __right_value354 = (void*)0;
char* __dec_obj62;
void* __right_value355 = (void*)0;
char* __dec_obj63;
void* __right_value356 = (void*)0;
struct sType* __dec_obj64;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sVar* var__453;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_4_454=0;
char* Err_455=0;
_Bool _if_conditional4;
_Bool __result_obj__287;
void* __right_value363 = (void*)0;
struct sType* type_456;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_5_457=0;
char* Err_458=0;
_Bool _if_conditional5;
_Bool __result_obj__288;
void* __right_value366 = (void*)0;
struct sType* left_type_459;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1sNode$ph* o2_saved_460;
struct sNode* it_463;
_Bool Value_466;
void* __right_value369 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c1_467=0;
char* Err_468=0;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_469;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct CVALUE* come_value_470;
void* __right_value375 = (void*)0;
char* __dec_obj65;
void* __right_value376 = (void*)0;
struct sType* __dec_obj66;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sVar* var__474;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sType* type_475;
void* __right_value385 = (void*)0;
_Bool Value_476;
void* __right_value386 = (void*)0;
_Bool array_initializer_477;
void* __right_value387 = (void*)0;
_Bool struct_initializer_478;
void* __right_value388 = (void*)0;
_Bool new_channel_479;
void* __right_value389 = (void*)0;
struct CVALUE* right_value_480;
struct sType* right_type_481;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* var_type_482;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct sType* left_type_483;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sVar* var__484;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value_485;
void* __right_value399 = (void*)0;
char* __dec_obj70;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sVar* var__486;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_487;
void* __right_value405 = (void*)0;
char* __dec_obj71;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_6_488=0;
char* Err_489=0;
_Bool _if_conditional6;
_Bool __result_obj__296;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct CVALUE* come_value_490;
void* __right_value412 = (void*)0;
char* __dec_obj72;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var9 = (void*)0;
_Bool come_exception_var_7_491=0;
char* Err_492=0;
_Bool _if_conditional7;
_Bool __result_obj__297;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct CVALUE* come_value_493;
void* __right_value419 = (void*)0;
char* __dec_obj73;
void* __right_value420 = (void*)0;
struct sType* __dec_obj74;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value_494;
void* __right_value424 = (void*)0;
char* __dec_obj75;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sType* __dec_obj76;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var10 = (void*)0;
_Bool come_exception_var_8_495=0;
char* Err_496=0;
_Bool _if_conditional8;
_Bool __result_obj__298;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct CVALUE* come_value_497;
void* __right_value434 = (void*)0;
char* __dec_obj77;
void* __right_value435 = (void*)0;
struct sType* __dec_obj78;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_9_498=0;
char* Err_499=0;
_Bool _if_conditional9;
_Bool __result_obj__299;
void* __right_value439 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_10_500=0;
char* Err_501=0;
_Bool _if_conditional10;
_Bool __result_obj__300;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_502;
void* __right_value443 = (void*)0;
char* __dec_obj79;
void* __right_value444 = (void*)0;
struct sType* __dec_obj80;
_Bool Value_503;
void* __right_value445 = (void*)0;
_Bool new_channel_504;
void* __right_value446 = (void*)0;
struct CVALUE* right_value_505;
struct sType* right_type_506;
struct sClass* current_stack_frame_struct_507;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
_Bool _if_conditional11;
struct sVar* parent_var_508;
struct sType* left_type_509;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var13 = (void*)0;
_Bool come_exception_var_11_510=0;
char* Err_511=0;
_Bool _if_conditional12;
_Bool __result_obj__301;
void* __right_value452 = (void*)0;
char* c_value_512;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct CVALUE* come_value_513;
void* __right_value455 = (void*)0;
char* __dec_obj81;
void* __right_value456 = (void*)0;
char* __dec_obj82;
void* __right_value457 = (void*)0;
struct sType* __dec_obj83;
_Bool __result_obj__302;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_12_514=0;
char* Err_515=0;
_Bool _if_conditional13;
_Bool __result_obj__303;
void* __right_value461 = (void*)0;
char* c_value_516;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* come_value_517;
void* __right_value464 = (void*)0;
char* __dec_obj84;
void* __right_value465 = (void*)0;
char* __dec_obj85;
void* __right_value466 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__304;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var15 = (void*)0;
_Bool come_exception_var_13_518=0;
char* Err_519=0;
_Bool _if_conditional14;
_Bool __result_obj__305;
void* __right_value470 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_14_520=0;
char* Err_521=0;
_Bool _if_conditional15;
_Bool __result_obj__306;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value473 = (void*)0;
char* __dec_obj87;
void* __right_value474 = (void*)0;
char* __dec_obj88;
void* __right_value475 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__307;
struct sVar* var__523;
void* __right_value476 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_15_524=0;
char* Err_525=0;
_Bool _if_conditional16;
_Bool __result_obj__308;
void* __right_value477 = (void*)0;
struct sType* __dec_obj90;
void* __right_value478 = (void*)0;
struct sType* left_type_526;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_16_527=0;
char* Err_528=0;
_Bool _if_conditional17;
_Bool __result_obj__309;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct CVALUE* come_value_529;
void* __right_value484 = (void*)0;
char* __dec_obj91;
void* __right_value485 = (void*)0;
struct sType* __dec_obj92;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_17_530=0;
char* Err_531=0;
_Bool _if_conditional18;
_Bool __result_obj__310;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct CVALUE* come_value_532;
void* __right_value491 = (void*)0;
char* __dec_obj93;
void* __right_value492 = (void*)0;
struct sType* __dec_obj94;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_18_533=0;
char* Err_534=0;
_Bool _if_conditional19;
_Bool __result_obj__311;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct CVALUE* come_value_535;
void* __right_value498 = (void*)0;
char* __dec_obj95;
void* __right_value499 = (void*)0;
struct sType* __dec_obj96;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value502 = (void*)0;
char* __dec_obj97;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj98;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var21 = (void*)0;
_Bool come_exception_var_19_537=0;
char* Err_538=0;
_Bool _if_conditional20;
_Bool __result_obj__312;
void* __right_value509 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_20_539=0;
char* Err_540=0;
_Bool _if_conditional21;
_Bool __result_obj__313;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct CVALUE* come_value_541;
void* __right_value512 = (void*)0;
char* __dec_obj99;
void* __right_value513 = (void*)0;
struct sType* __dec_obj100;
    if(    self->multiple_declare) {
        var__387=((struct sVar*)(__right_value315=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value314=__builtin_string(self->name))))));
        (__right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value315,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__387) {
            if(            var__387->mType->mHeap) {
                free_object(((struct sType*)(__right_value316=come_call_cloner(sType_clone, var__387->mType))),var__387->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value316,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2char$phsVar$ph$p_remove(info->lv_table->mVars,((char*)(__right_value317=__builtin_string(self->name))));
            (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value318=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_1_409=multiple_assign_var1->v1;
            Err_410=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            (_if_conditional1=(Err_410)),            come_call_finalizer3(__right_value318,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                __result_obj__269 = (_Bool)1;
                (Err_410 = come_decrement_ref_count2(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__269;
            }
            else {
            }
            (Err_410 = come_decrement_ref_count2(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_411=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        for(        o2_saved_412=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_415=list$1tuple3$3sType$phchar$phsNode$ph$ph$p_begin((o2_saved_412));        !list$1tuple3$3sType$phchar$phsNode$ph$ph$p_end((o2_saved_412));        it_415=list$1tuple3$3sType$phchar$phsNode$ph$ph$p_next((o2_saved_412))        ){
            multiple_assign_var2=it_415;
            type_418=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            var_name_419=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            right_value_420=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v3);
            var__387=((struct sVar*)(__right_value321=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value320=__builtin_string(var_name_419))))));
            (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value321,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            var__387) {
                if(                var__387->mType->mHeap) {
                    free_object(((struct sType*)(__right_value322=come_call_cloner(sType_clone, var__387->mType))),var__387->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                map$2char$phsVar$ph$p_remove(info->lv_table->mVars,((char*)(__right_value323=__builtin_string(var_name_419))));
                (__right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_419,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_418)),info,(_Bool)0);
            var__387=get_variable_from_table(info->lv_table,var_name_419);
            if(            var__387==((void*)0)) {
                multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value325=err_msg(info,"var not found(%s)(ZY) at definition of variable",it_415)));
                come_exception_var_2_421=multiple_assign_var3->v1;
                Err_422=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                (_if_conditional2=(Err_422)),                come_call_finalizer3(__right_value325,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    __result_obj__276 = (_Bool)1;
                    (Err_422 = come_decrement_ref_count2(Err_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_419 = come_decrement_ref_count2(var_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_420) ? right_value_420 = come_decrement_ref_count2(right_value_420, ((struct sNode*)right_value_420)->finalize, ((struct sNode*)right_value_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(o2_saved_412,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__276;
                }
                else {
                }
                (Err_422 = come_decrement_ref_count2(Err_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            left_type_423=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__387->mType));
            if(            right_value_420) {
                Value_424=node_compile(right_value_420,info);
                if(                !Value_424) {
                    __result_obj__277 = (_Bool)0;
                    come_call_finalizer3(type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (var_name_419 = come_decrement_ref_count2(var_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_420) ? right_value_420 = come_decrement_ref_count2(right_value_420, ((struct sNode*)right_value_420)->finalize, ((struct sNode*)right_value_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(left_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(o2_saved_412,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__277;
                }
                else {
                }
                come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value328=make_define_var(left_type_423,var__387->mCValueName,(_Bool)0,info))),come_value_425->c_value);
                (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__387->mCValueName,((char*)(__right_value329=make_type_name_string(left_type_423,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value330=make_define_var(left_type_423,var__387->mCValueName,(_Bool)0,info))));
                (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_419 = come_decrement_ref_count2(var_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_420) ? right_value_420 = come_decrement_ref_count2(right_value_420, ((struct sNode*)right_value_420)->finalize, ((struct sNode*)right_value_420)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(left_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_412,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_411,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->multiple_assign) {
        Value_426=node_compile(self->right_value,info);
        if(        !Value_426) {
            return (_Bool)0;
        }
        else {
        }
        right_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_428=right_value_427->type;
        if(        right_type_428->mNoSolvedGenericsType) {
            right_type_428=right_type_428->mNoSolvedGenericsType;
        }
        i_429=0;
        for(        o2_saved_430=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_433=list$1char$ph$p_begin((o2_saved_430));        !list$1char$ph$p_end((o2_saved_430));        it_433=list$1char$ph$p_next((o2_saved_430))        ){
            if(            i_429<list$1sType$ph$p_length(right_type_428->mGenericsTypes)) {
                var__436=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value332=__builtin_string(it_433)))));
                (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__436) {
                    if(                    var__436->mType->mHeap) {
                        free_object(((struct sType*)(__right_value334=come_call_cloner(sType_clone, var__436->mType))),var__436->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    map$2char$phsVar$ph$p_remove(info->lv_table->mVars,((char*)(__right_value335=__builtin_string(it_433))));
                    (__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_437=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(right_type_428->mGenericsTypes,i_429));
                add_variable_to_table(it_433,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_437)),info,(_Bool)0);
                come_call_finalizer3(var__436,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_type2_437,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            i_429++;
        }
        come_call_finalizer3(o2_saved_430,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        static int num_multiple_var_441=0;
        multiple_var_name_442=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_441));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value339=make_define_var(right_value_427->type,multiple_var_name_442,(_Bool)0,info))));
        (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_442,right_value_427->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_442,right_value_427->c_value);
        }
        __dec_obj59=right_value_427->c_value;
        right_value_427->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, multiple_var_name_442));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        i_429=0;
        for(        o2_saved_443=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_444=list$1char$ph$p_begin((o2_saved_443));        !list$1char$ph$p_end((o2_saved_443));        it_444=list$1char$ph$p_next((o2_saved_443))        ){
            if(            i_429<list$1sType$ph$p_length(right_type_428->mGenericsTypes)) {
                right_type2_445=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value341=list$1sType$ph$p_operator_load_element(right_type_428->mGenericsTypes,i_429)))));
                come_call_finalizer3(__right_value341,sType_finalize, 0, 1, 0, 0, (void*)0);
                var__446=get_variable_from_table(info->lv_table,it_444);
                var_type_447=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__446->mType));
                var_type_447->mStatic=(_Bool)0;
                left_type_448=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__446->mType));
                right_value2_449=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 139, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj60=right_value2_449->c_value;
                right_value2_449->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_427->c_value,i_429+1));
                __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj61=right_value2_449->type;
                right_value2_449->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type2_445));
                come_call_finalizer3(__dec_obj61,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_449->var=((void*)0);
                come_value_450=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 145, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value353=check_assign_type(((char*)(__right_value352=xsprintf("\%s is assining to}",((char*)(__right_value351=string_to_string(self->name)))))),left_type_448,right_type2_445,come_value_450,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_3_451=multiple_assign_var4->v1;
                Err_452=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                if(                (_if_conditional3=(Err_452)),                (__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value353,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    __result_obj__286 = (_Bool)1;
                    come_call_finalizer3(right_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value2_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (Err_452 = come_decrement_ref_count2(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(o2_saved_443,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(right_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    (multiple_var_name_442 = come_decrement_ref_count2(multiple_var_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__286;
                }
                else {
                }
                if(                right_type2_445->mHeap&&left_type_448->mHeap&&left_type_448->mPointerNum>0&&right_type2_445->mPointerNum>0) {
                    std_move(left_type_448,right_type2_445,right_value2_449,info,(_Bool)0);
                    __dec_obj62=come_value_450->c_value;
                    come_value_450->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__446->mCValueName,right_value2_449->c_value));
                    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj63=come_value_450->c_value;
                    come_value_450->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__446->mCValueName,right_value2_449->c_value));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj64=come_value_450->type;
                come_value_450->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_448));
                come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_450->var=var__446;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value357=make_define_var(left_type_448,var__446->mCValueName,(_Bool)0,info))));
                (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_450->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_450->c_value);
                }
                come_call_finalizer3(right_type2_445,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(right_value2_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_450,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                (Err_452 = come_decrement_ref_count2(Err_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            i_429++;
        }
        come_call_finalizer3(o2_saved_443,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_value_427,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        (multiple_var_name_442 = come_decrement_ref_count2(multiple_var_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__453=((struct sVar*)(__right_value359=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value358=__builtin_string(self->name))))));
        (__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value359,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__453) {
            if(            var__453->mType->mHeap) {
                free_object(((struct sType*)(__right_value360=come_call_cloner(sType_clone, var__453->mType))),var__453->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value360,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2char$phsVar$ph$p_remove(info->lv_table->mVars,((char*)(__right_value361=__builtin_string(self->name))));
            (__right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value362=err_msg(info,"Require concrete variable type(%s)",self->name)));
            come_exception_var_4_454=multiple_assign_var5->v1;
            Err_455=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            if(            (_if_conditional4=(Err_455)),            come_call_finalizer3(__right_value362,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __result_obj__287 = (_Bool)1;
                (Err_455 = come_decrement_ref_count2(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__287;
            }
            else {
            }
            (Err_455 = come_decrement_ref_count2(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_456=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_456)),info,(_Bool)0);
        var__453=get_variable_from_table(info->lv_table,self->name);
        if(        var__453==((void*)0)) {
            var__453=get_variable_from_table(info->gv_table,self->name);
            if(            var__453==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value365=err_msg(info,"var not found(%s)(Y) at definition of variable",self->name)));
                come_exception_var_5_457=multiple_assign_var6->v1;
                Err_458=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                (_if_conditional5=(Err_458)),                come_call_finalizer3(__right_value365,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    __result_obj__288 = (_Bool)1;
                    (Err_458 = come_decrement_ref_count2(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__288;
                }
                else {
                }
                (Err_458 = come_decrement_ref_count2(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_459=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__453->mType));
        if(        left_type_459->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__453->mCValueName);
        }
        else if(        list$1sNode$ph$p_length(left_type_459->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value367=make_define_var(left_type_459,var__453->mCValueName,(_Bool)0,info))));
            (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__453->mCValueName,((char*)(__right_value368=make_type_name_string(left_type_459,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_460=(struct list$1sNode$ph*)come_increment_ref_count((left_type_459->mArrayNum)),it_463=list$1sNode$ph$p_begin((o2_saved_460));            !list$1sNode$ph$p_end((o2_saved_460));            it_463=list$1sNode$ph$p_next((o2_saved_460))            ){
                Value_466=node_compile(it_463,info);
                if(                !Value_466) {
                    multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value369=err_msg(info,"invalid array num")));
                    come_exception_var_c1_467=multiple_assign_var7->v1;
                    Err_468=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    ((Err_468)?(puts(Err_468),exit(0)):(0));
                    come_call_finalizer3(__right_value369,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_468 = come_decrement_ref_count2(Err_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                }
                come_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"*(%s)",come_value_469->c_value);
                come_call_finalizer3(come_value_469,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_460,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value371=make_define_var(left_type_459,var__453->mCValueName,(_Bool)0,info))));
            (__right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_459->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__453->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__453->mCValueName,((char*)(__right_value372=make_type_name_string(left_type_459,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value372 = come_decrement_ref_count2(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_470=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 253, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj65=come_value_470->c_value;
            come_value_470->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__453->mCValueName));
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj66=come_value_470->type;
            come_value_470->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_459));
            come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_470->var=var__453;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_470));
            come_call_finalizer3(come_value_470,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !left_type_459->mClass->mNumber&&left_type_459->mPointerNum==0) {
            var__453->mType->mAllocaValue=(_Bool)1;
            if(            var__453->mType->mNoSolvedGenericsType) {
                var__453->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        come_call_finalizer3(type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_459,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    self->alloc) {
        var__474=((struct sVar*)(__right_value381=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value380=__builtin_string(self->name))))));
        (__right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value381,sVar_finalize, 0, 1, 0, 0, (void*)0);
        if(        var__474) {
            if(            var__474->mType->mHeap) {
                free_object(((struct sType*)(__right_value382=come_call_cloner(sType_clone, var__474->mType))),var__474->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            map$2char$phsVar$ph$p_remove(info->lv_table->mVars,((char*)(__right_value383=__builtin_string(self->name))));
            (__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_475=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_475)),info,(_Bool)0);
            come_call_finalizer3(type_475,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        Value_476=node_compile(self->right_value,info);
        if(        !Value_476) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_477=string_operator_equals(((char*)(__right_value386=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_478=string_operator_equals(((char*)(__right_value387=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_479=string_operator_equals(((char*)(__right_value388=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_480=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_481=right_value_480->type;
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_481)),info,(_Bool)0);
        }
        else {
        }
        var__474=get_variable_from_table(info->lv_table,self->name);
        var_type_482=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__474->mType));
        var_type_482->mStatic=(_Bool)0;
        if(        !array_initializer_477&&!struct_initializer_478&&!var__474->mType->mStatic&&!var_type_482->mConstant&&list$1sNode$ph$p_length(var_type_482->mArrayNum)==0) {
            if(            var_type_482->mClass->mNumber) {
            }
            else if(            (var_type_482->mClass->mStruct||var_type_482->mClass->mUnion||var_type_482->mClass->mEnum)||var_type_482->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__474->mCValueName,((char*)(__right_value392=make_type_name_string(var_type_482,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_483=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__474->mType));
        if(        array_initializer_477) {
            var__484=((struct sVar*)(__right_value395=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value394=__builtin_string(self->name))))));
            (__right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value395,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value396=make_define_var(var__484->mType,var__484->mCValueName,(_Bool)0,info))),right_value_480->c_value);
            (__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_485=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 332, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj70=come_value_485->c_value;
            come_value_485->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_485));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        struct_initializer_478) {
            var__486=((struct sVar*)(__right_value401=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value400=__builtin_string(self->name))))));
            (__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value401,sVar_finalize, 0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value402=make_define_var(var__486->mType,var__486->mCValueName,(_Bool)0,info))),right_value_480->c_value);
            (__right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_487=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 349, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj71=come_value_487->c_value;
            come_value_487->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_487));
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_487,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        var__474->mType->mStatic||var__474->mType->mConstant) {
            multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value408=check_assign_type(((char*)(__right_value407=xsprintf("\%s is assining to",((char*)(__right_value406=string_to_string(self->name)))))),left_type_483,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_6_488=multiple_assign_var8->v1;
            Err_489=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            (_if_conditional6=(Err_489)),            (__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value408,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__296 = (_Bool)1;
                (Err_489 = come_decrement_ref_count2(Err_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__296;
            }
            else {
            }
            add_come_code(info,"%s=%s;\n",((char*)(__right_value409=make_define_var(left_type_483,var__474->mCValueName,(_Bool)0,info))),right_value_480->c_value);
            (__right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_490=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 369, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj72=come_value_490->c_value;
            come_value_490->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_490));
            transpiler_clear_last_code(info);
            (Err_489 = come_decrement_ref_count2(Err_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_490,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_481->mHeap&&left_type_483->mHeap&&left_type_483->mPointerNum>0&&right_type_481->mPointerNum>0) {
            multiple_assign_var9=((struct tuple2$2bool$char$ph*)(__right_value415=check_assign_type(((char*)(__right_value414=xsprintf("\%s is assining to",((char*)(__right_value413=string_to_string(self->name)))))),left_type_483,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_7_491=multiple_assign_var9->v1;
            Err_492=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional7=(Err_492)),            (__right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value415,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                __result_obj__297 = (_Bool)1;
                (Err_492 = come_decrement_ref_count2(Err_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__297;
            }
            else {
            }
            std_move(left_type_483,right_type_481,right_value_480,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value416=make_define_var(left_type_483,var__474->mCValueName,(_Bool)0,info))));
            (__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 392, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj73=come_value_493->c_value;
            come_value_493->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__474->mCValueName,right_value_480->c_value));
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj74=come_value_493->type;
            come_value_493->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_483));
            come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_493->var=var__474;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_493));
            add_come_last_code(info,"%s",come_value_493->c_value);
            (Err_492 = come_decrement_ref_count2(Err_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_483->mChannel&&new_channel_479) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value421=make_define_var(left_type_483,var__474->mCValueName,(_Bool)0,info))));
            (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__474->mCValueName);
            come_value_494=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 406, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj75=come_value_494->c_value;
            come_value_494->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__474->mCValueName));
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj76=come_value_494->type;
            come_value_494->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 408, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_494->type->mPointerNum=1;
            come_value_494->var=var__474;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_494));
            add_come_last_code(info,"%s",come_value_494->c_value);
            come_call_finalizer3(come_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_483->mPointerNum>0&&left_type_483->mHeap&&string_operator_equals(right_type_481->mClass->mName,"void")&&right_type_481->mPointerNum>0) {
            multiple_assign_var10=((struct tuple2$2bool$char$ph*)(__right_value430=check_assign_type(((char*)(__right_value429=xsprintf("\%s is assining to",((char*)(__right_value428=string_to_string(self->name)))))),left_type_483,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_8_495=multiple_assign_var10->v1;
            Err_496=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional8=(Err_496)),            (__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value430,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                __result_obj__298 = (_Bool)1;
                (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__298;
            }
            else {
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value431=make_define_var(left_type_483,var__474->mCValueName,(_Bool)0,info))));
            (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_497=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 433, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj77=come_value_497->c_value;
            come_value_497->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__474->mCValueName,right_value_480->c_value));
            __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj78=come_value_497->type;
            come_value_497->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_483));
            come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_497->var=var__474;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_497));
            add_come_last_code(info,"%s",come_value_497->c_value);
            (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_497,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value438=check_assign_type(((char*)(__right_value437=xsprintf("\%s is assining to",((char*)(__right_value436=string_to_string(self->name)))))),left_type_483,right_type_481,right_value_480,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_9_498=multiple_assign_var11->v1;
            Err_499=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            (_if_conditional9=(Err_499)),            (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value438,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result_obj__299 = (_Bool)1;
                (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__299;
            }
            else {
            }
            if(            right_type_481->mHeap&&left_type_483->mHeap&&left_type_483->mPointerNum>0&&right_type_481->mPointerNum>0) {
                std_move(left_type_483,right_type_481,right_value_480,info,(_Bool)0);
            }
            if(            left_type_483->mHeap&&!right_value_480->type->mHeap) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value439=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_10_500=multiple_assign_var12->v1;
                Err_501=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional10=(Err_501)),                come_call_finalizer3(__right_value439,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    __result_obj__300 = (_Bool)1;
                    (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__300;
                }
                else {
                }
                (Err_501 = come_decrement_ref_count2(Err_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value440=make_define_var(left_type_483,var__474->mCValueName,(_Bool)0,info))));
            (__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_502=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 468, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj79=come_value_502->c_value;
            come_value_502->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__474->mCValueName,right_value_480->c_value));
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj80=come_value_502->type;
            come_value_502->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_483));
            come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_502->var=var__474;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_502));
            add_come_last_code(info,"%s",come_value_502->c_value);
            (Err_499 = come_decrement_ref_count2(Err_499, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_502,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_480,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(var_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        Value_503=node_compile(self->right_value,info);
        if(        !Value_503) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_504=string_operator_equals(((char*)(__right_value445=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_505=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_506=right_value_505->type;
        current_stack_frame_struct_507=info->current_stack_frame_struct;
        if(        (_if_conditional11=(current_stack_frame_struct_507&&((struct sVar*)(__right_value448=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value447=__builtin_string(self->name))))))==((void*)0))),        (__right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        come_call_finalizer3(__right_value448,sVar_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional11) {
            parent_var_508=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_508!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_508->mFunName,info->come_fun->mName)) {
                    left_type_509=parent_var_508->mType;
                    if(                    left_type_509->mPointerNum>0&&right_type_506->mPointerNum>0&&right_type_506->mHeap&&left_type_509->mHeap) {
                        multiple_assign_var13=((struct tuple2$2bool$char$ph*)(__right_value451=check_assign_type(((char*)(__right_value450=xsprintf("\%s is assigning to",((char*)(__right_value449=string_to_string(self->name)))))),left_type_509,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_11_510=multiple_assign_var13->v1;
                        Err_511=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        if(                        (_if_conditional12=(Err_511)),                        (__right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value451,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional12) {
                            __result_obj__301 = (_Bool)1;
                            (Err_511 = come_decrement_ref_count2(Err_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__301;
                        }
                        else {
                        }
                        c_value_512=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_508->mCValueName));
                        decrement_ref_count_object(parent_var_508->mType,c_value_512,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_509,right_type_506,right_value_505,info,(_Bool)0);
                        come_value_513=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 508, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_508->mType->mOriginIsArray) {
                            __dec_obj81=come_value_513->c_value;
                            come_value_513->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_508->mCValueName,right_value_505->c_value));
                            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj82=come_value_513->c_value;
                            come_value_513->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_508->mCValueName,right_value_505->c_value));
                            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj83=come_value_513->type;
                        come_value_513->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_509));
                        come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_513->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_513->c_value);
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_513));
                        __result_obj__302 = (_Bool)1;
                        (Err_511 = come_decrement_ref_count2(Err_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_512 = come_decrement_ref_count2(c_value_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__302;
                        (Err_511 = come_decrement_ref_count2(Err_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_512 = come_decrement_ref_count2(c_value_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else if(                    left_type_509->mPointerNum>0&&right_type_506->mPointerNum>0&&string_operator_equals(right_type_506->mClass->mName,"void")&&left_type_509->mHeap) {
                        multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value460=check_assign_type(((char*)(__right_value459=xsprintf("\%s is assigning to",((char*)(__right_value458=string_to_string(self->name)))))),left_type_509,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_12_514=multiple_assign_var14->v1;
                        Err_515=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        if(                        (_if_conditional13=(Err_515)),                        (__right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value460,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional13) {
                            __result_obj__303 = (_Bool)1;
                            (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__303;
                        }
                        else {
                        }
                        c_value_516=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_508->mCValueName));
                        decrement_ref_count_object(parent_var_508->mType,c_value_516,info,(_Bool)0,(_Bool)0);
                        come_value_517=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 534, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_508->mType->mOriginIsArray) {
                            __dec_obj84=come_value_517->c_value;
                            come_value_517->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_508->mCValueName,right_value_505->c_value));
                            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj85=come_value_517->c_value;
                            come_value_517->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_508->mCValueName,right_value_505->c_value));
                            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj86=come_value_517->type;
                        come_value_517->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_509));
                        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_517->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_517->c_value);
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_517));
                        __result_obj__304 = (_Bool)1;
                        (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_516 = come_decrement_ref_count2(c_value_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__304;
                        (Err_515 = come_decrement_ref_count2(Err_515, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (c_value_516 = come_decrement_ref_count2(c_value_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_517,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple2$2bool$char$ph*)(__right_value469=check_assign_type(((char*)(__right_value468=xsprintf("\%s is assigning to",((char*)(__right_value467=string_to_string(self->name)))))),left_type_509,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_13_518=multiple_assign_var15->v1;
                        Err_519=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        if(                        (_if_conditional14=(Err_519)),                        (__right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        come_call_finalizer3(__right_value469,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                        _if_conditional14) {
                            __result_obj__305 = (_Bool)1;
                            (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result_obj__305;
                        }
                        else {
                        }
                        if(                        left_type_509->mHeap&&!right_value_505->type->mHeap) {
                            multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value470=err_msg(info,"require right value as heap object(%s)",self->name)));
                            come_exception_var_14_520=multiple_assign_var16->v1;
                            Err_521=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            if(                            (_if_conditional15=(Err_521)),                            come_call_finalizer3(__right_value470,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                            _if_conditional15) {
                                __result_obj__306 = (_Bool)1;
                                (Err_521 = come_decrement_ref_count2(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                return __result_obj__306;
                            }
                            else {
                            }
                            (Err_521 = come_decrement_ref_count2(Err_521, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 562, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                        if(                        parent_var_508->mType->mOriginIsArray) {
                            __dec_obj87=come_value_522->c_value;
                            come_value_522->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_508->mCValueName,right_value_505->c_value));
                            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            __dec_obj88=come_value_522->c_value;
                            come_value_522->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_508->mCValueName,right_value_505->c_value));
                            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        __dec_obj89=come_value_522->type;
                        come_value_522->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_509));
                        come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_522->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_522->c_value);
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_522));
                        __result_obj__307 = (_Bool)1;
                        (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        return __result_obj__307;
                        (Err_519 = come_decrement_ref_count2(Err_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
        }
        var__523=get_variable_from_table(info->lv_table,self->name);
        if(        var__523==((void*)0)) {
            var__523=get_variable_from_table(info->gv_table,self->name);
            if(            var__523==((void*)0)) {
                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value476=err_msg(info,"var not found(%s)(X) at storing variable",self->name)));
                come_exception_var_15_524=multiple_assign_var17->v1;
                Err_525=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_525)),                come_call_finalizer3(__right_value476,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    __result_obj__308 = (_Bool)1;
                    (Err_525 = come_decrement_ref_count2(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__308;
                }
                else {
                }
                (Err_525 = come_decrement_ref_count2(Err_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        var__523->mType==((void*)0)) {
            __dec_obj90=var__523->mType;
            var__523->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type_506));
            come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_526=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__523->mType));
        if(        (var__523->mType->mStatic||var__523->mType->mConstant)&&!var__523->mGlobal) {
            multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value481=check_assign_type(((char*)(__right_value480=xsprintf("\%s is assining to",((char*)(__right_value479=string_to_string(self->name)))))),left_type_526,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_16_527=multiple_assign_var18->v1;
            Err_528=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_528)),            (__right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value481,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional17) {
                __result_obj__309 = (_Bool)1;
                (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__309;
            }
            else {
            }
            come_value_529=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 606, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj91=come_value_529->c_value;
            come_value_529->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__523->mCValueName,right_value_505->c_value));
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj92=come_value_529->type;
            come_value_529->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_526));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_529->var=var__523;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_529));
            add_come_last_code(info,"%s",come_value_529->c_value);
            (Err_528 = come_decrement_ref_count2(Err_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_529,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        right_type_506->mHeap&&left_type_526->mHeap&&left_type_526->mPointerNum>0&&right_type_506->mPointerNum>0) {
            multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value488=check_assign_type(((char*)(__right_value487=xsprintf("\%s is assining to",((char*)(__right_value486=string_to_string(self->name)))))),left_type_526,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_17_530=multiple_assign_var19->v1;
            Err_531=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional18=(Err_531)),            (__right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value488,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional18) {
                __result_obj__310 = (_Bool)1;
                (Err_531 = come_decrement_ref_count2(Err_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__310;
            }
            else {
            }
            decrement_ref_count_object(left_type_526,var__523->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_526,right_type_506,right_value_505,info,(_Bool)0);
            come_value_532=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 625, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj93=come_value_532->c_value;
            come_value_532->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__523->mCValueName,right_value_505->c_value));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj94=come_value_532->type;
            come_value_532->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_526));
            come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_532->var=var__523;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_532));
            add_come_last_code(info,"%s",come_value_532->c_value);
            (Err_531 = come_decrement_ref_count2(Err_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_526->mPointerNum>0&&left_type_526->mHeap&&string_operator_equals(right_type_506->mClass->mName,"void")&&right_type_506->mPointerNum>0) {
            multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value495=check_assign_type(((char*)(__right_value494=xsprintf("\%s is assining to",((char*)(__right_value493=string_to_string(self->name)))))),left_type_526,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_18_533=multiple_assign_var20->v1;
            Err_534=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional19=(Err_534)),            (__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value495,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                __result_obj__311 = (_Bool)1;
                (Err_534 = come_decrement_ref_count2(Err_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__311;
            }
            else {
            }
            decrement_ref_count_object(left_type_526,var__523->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_535=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 643, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj95=come_value_535->c_value;
            come_value_535->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__523->mCValueName,right_value_505->c_value));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj96=come_value_535->type;
            come_value_535->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_526));
            come_call_finalizer3(__dec_obj96,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_535->var=var__523;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_535));
            add_come_last_code(info,"%s",come_value_535->c_value);
            (Err_534 = come_decrement_ref_count2(Err_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_535,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        left_type_526->mChannel&&new_channel_504) {
            come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 654, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj97=come_value_536->c_value;
            come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__523->mCValueName));
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj98=come_value_536->type;
            come_value_536->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 656, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_536->type->mPointerNum=1;
            come_value_536->var=var__523;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
            add_come_last_code(info,"%s",come_value_536->c_value);
            come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var21=((struct tuple2$2bool$char$ph*)(__right_value508=check_assign_type(((char*)(__right_value507=xsprintf("\%s is assining to",((char*)(__right_value506=string_to_string(self->name)))))),left_type_526,right_type_506,right_value_505,(_Bool)0,(_Bool)1,(_Bool)1,info)));
            come_exception_var_19_537=multiple_assign_var21->v1;
            Err_538=(char*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            (_if_conditional20=(Err_538)),            (__right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            (__right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value508,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional20) {
                __result_obj__312 = (_Bool)1;
                (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__312;
            }
            else {
            }
            if(            left_type_526->mHeap&&!right_value_505->type->mHeap) {
                multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value509=err_msg(info,"require right value as heap object(%s)",self->name)));
                come_exception_var_20_539=multiple_assign_var22->v1;
                Err_540=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                if(                (_if_conditional21=(Err_540)),                come_call_finalizer3(__right_value509,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result_obj__313 = (_Bool)1;
                    (Err_540 = come_decrement_ref_count2(Err_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(left_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__313;
                }
                else {
                }
                (Err_540 = come_decrement_ref_count2(Err_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_value_541=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 675, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
            __dec_obj99=come_value_541->c_value;
            come_value_541->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__523->mCValueName,right_value_505->c_value));
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj100=come_value_541->type;
            come_value_541->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type_526));
            come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_541->var=var__523;
            list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_541));
            add_come_last_code(info,"%s",come_value_541->c_value);
            (Err_538 = come_decrement_ref_count2(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_541,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(right_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__237;
void* __right_value261 = (void*)0;
struct sType* result_354;
void* __right_value262 = (void*)0;
struct sType* __dec_obj24;
void* __right_value263 = (void*)0;
struct sType* __dec_obj25;
void* __right_value271 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value272 = (void*)0;
struct sType* __dec_obj30;
void* __right_value273 = (void*)0;
struct sType* __dec_obj31;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value276 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value277 = (void*)0;
char* __dec_obj34;
void* __right_value278 = (void*)0;
char* __dec_obj35;
void* __right_value279 = (void*)0;
char* __dec_obj36;
void* __right_value287 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value288 = (void*)0;
char* __dec_obj41;
void* __right_value289 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value297 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value298 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__237 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__237,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__237;
    }
    result_354=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_354->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_354->mOriginalLoadVarType;
        result_354->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_354->mChannelType;
        result_354->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_354->mGenericsTypes;
        result_354->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_354->mNoSolvedGenericsType;
        result_354->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_354->mAnyOriginalType;
        result_354->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_354->mSizeNum;
        result_354->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_354->mAlignas;
        result_354->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_354->mTupleName;
        result_354->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_354->mAttribute;
        result_354->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_354->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_354->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_354->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_354->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_354->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_354->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_354->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_354->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_354->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_354->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_354->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_354->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_354->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_354->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_354->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_354->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_354->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_354->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_354->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_354->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_354->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_354->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_354->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_354->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_354->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_354->mAsmName;
        result_354->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_354->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_354->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_354->mArrayNum;
        result_354->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_354->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_354->mOriginalTypeName;
        result_354->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_354->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_354->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_354->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_354->mParamTypes;
        result_354->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_354->mParamNames;
        result_354->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_354->mResultType;
        result_354->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_354->mVarArgs=self->mVarArgs;
    }
    __result_obj__251 = come_increment_ref_count(result_354);
    come_call_finalizer3(result_354,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_350;
struct list_item$1sType$ph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        come_call_finalizer3(prev_it_351,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_352;
struct list_item$1sNode$ph* prev_it_353;
    it_352=self->head;
    while(it_352!=((void*)0)) {
        prev_it_353=it_352;
        it_352=it_352->next;
        come_call_finalizer3(prev_it_353,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__238;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sType$ph* result_355;
struct list_item$1sType$ph* it_356;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sType$ph* __result_obj__241;
    if(    self==((void*)0)) {
        __result_obj__238 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__238,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__238;
    }
    result_355=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1400, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_356=self->head;
    while(it_356!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_355,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_356->item)));
        }
        else {
            list$1sType$ph$p_add(result_355,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_356->item)));
        }
        it_356=it_356->next;
    }
    __result_obj__241 = come_increment_ref_count(result_355);
    come_call_finalizer3(result_355,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__239;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__239 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__239,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__239;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value266 = (void*)0;
struct list_item$1sType$ph* litem_357;
struct sType* __dec_obj26;
void* __right_value267 = (void*)0;
struct list_item$1sType$ph* litem_358;
struct sType* __dec_obj27;
void* __right_value268 = (void*)0;
struct list_item$1sType$ph* litem_359;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__240;
    if(    self->len==0) {
        litem_357=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value266=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1419, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_357->prev=((void*)0);
        litem_357->next=((void*)0);
        __dec_obj26=litem_357->item;
        litem_357->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_357;
        self->head=litem_357;
    }
    else if(    self->len==1) {
        litem_358=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value267=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1429, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=self->head;
        litem_358->next=((void*)0);
        __dec_obj27=litem_358->item;
        litem_358->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_358;
        self->head->next=litem_358;
    }
    else {
        litem_359=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value268=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1439, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->tail;
        litem_359->next=((void*)0);
        __dec_obj28=litem_359->item;
        litem_359->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_359;
        self->tail=litem_359;
    }
    self->len++;
    __result_obj__240 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__240;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_360;
struct list_item$1sType$ph* prev_it_361;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        come_call_finalizer3(prev_it_361,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__242;
void* __right_value274 = (void*)0;
struct sNode* result_362;
struct sNode* __result_obj__243;
    if(    self==(void*)0) {
        __result_obj__242 = come_increment_ref_count((void*)0);
        ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count2(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__242;
    }
    result_362=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_362->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_362->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_362->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_362->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_362->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_362->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_362->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_362->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_362->kind=self->kind;
    }
    __result_obj__243 = come_increment_ref_count(result_362);
    ((result_362) ? result_362 = come_decrement_ref_count2(result_362, ((struct sNode*)result_362)->finalize, ((struct sNode*)result_362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__243) ? __result_obj__243 = come_decrement_ref_count2(__result_obj__243, ((struct sNode*)__result_obj__243)->finalize, ((struct sNode*)__result_obj__243)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__243;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__244;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1sNode$ph* result_363;
struct list_item$1sNode$ph* it_364;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* __result_obj__247;
    if(    self==((void*)0)) {
        __result_obj__244 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__244,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__244;
    }
    result_363=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1400, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_364=self->head;
    while(it_364!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_363,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_364->item)));
        }
        else {
            list$1sNode$ph$p_add(result_363,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_364->item)));
        }
        it_364=it_364->next;
    }
    __result_obj__247 = come_increment_ref_count(result_363);
    come_call_finalizer3(result_363,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__245;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__245 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value282 = (void*)0;
struct list_item$1sNode$ph* litem_365;
struct sNode* __dec_obj37;
void* __right_value283 = (void*)0;
struct list_item$1sNode$ph* litem_366;
struct sNode* __dec_obj38;
void* __right_value284 = (void*)0;
struct list_item$1sNode$ph* litem_367;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__246;
    if(    self->len==0) {
        litem_365=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value282=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1419, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_365->prev=((void*)0);
        litem_365->next=((void*)0);
        __dec_obj37=litem_365->item;
        litem_365->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_365;
        self->head=litem_365;
    }
    else if(    self->len==1) {
        litem_366=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value283=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1429, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_366->prev=self->head;
        litem_366->next=((void*)0);
        __dec_obj38=litem_366->item;
        litem_366->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_366;
        self->head->next=litem_366;
    }
    else {
        litem_367=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value284=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1439, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_367->prev=self->tail;
        litem_367->next=((void*)0);
        __dec_obj39=litem_367->item;
        litem_367->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_367;
        self->tail=litem_367;
    }
    self->len++;
    __result_obj__246 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__246;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_368;
struct list_item$1sNode$ph* prev_it_369;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        come_call_finalizer3(prev_it_369,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__248;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1char$ph* result_370;
struct list_item$1char$ph* it_371;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* __result_obj__250;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__248,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__248;
    }
    result_370=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1400, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_371=self->head;
    while(it_371!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_370,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_371->item)));
        }
        else {
            list$1char$ph$p_add(result_370,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_371->item)));
        }
        it_371=it_371->next;
    }
    __result_obj__250 = come_increment_ref_count(result_370);
    come_call_finalizer3(result_370,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__250;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value292 = (void*)0;
struct list_item$1char$ph* litem_372;
char* __dec_obj43;
void* __right_value293 = (void*)0;
struct list_item$1char$ph* litem_373;
char* __dec_obj44;
void* __right_value294 = (void*)0;
struct list_item$1char$ph* litem_374;
char* __dec_obj45;
struct list$1char$ph* __result_obj__249;
    if(    self->len==0) {
        litem_372=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value292=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1419, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj43=litem_372->item;
        litem_372->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value293=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1429, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj44=litem_373->item;
        litem_373->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value294=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1439, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj45=litem_374->item;
        litem_374->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result_obj__249 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__249;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_375;
struct list_item$1char$ph* prev_it_376;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        come_call_finalizer3(prev_it_376,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__252;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_379;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_380;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__257;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_379=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1400, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_380=self->head;
    while(it_380!=((void*)0)) {
        if(        1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(result_379,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_380->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(result_379,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple3$3sType$phchar$phsNode$ph_clone, it_380->item)));
        }
        it_380=it_380->next;
    }
    __result_obj__257 = come_increment_ref_count(result_379);
    come_call_finalizer3(result_379,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__257,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__257;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_377;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_378;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        prev_it_378=it_377;
        it_377=it_377->next;
        come_call_finalizer3(prev_it_378,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__253;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__253 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value303 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_381;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj51;
void* __right_value304 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_382;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj52;
void* __right_value305 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_383;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj53;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__254;
    if(    self->len==0) {
        litem_381=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value303=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1419, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=((void*)0);
        litem_381->next=((void*)0);
        __dec_obj51=litem_381->item;
        litem_381->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_381;
        self->head=litem_381;
    }
    else if(    self->len==1) {
        litem_382=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value304=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1429, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->head;
        litem_382->next=((void*)0);
        __dec_obj52=litem_382->item;
        litem_382->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_382;
        self->head->next=litem_382;
    }
    else {
        litem_383=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value305=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1439, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->tail;
        litem_383->next=((void*)0);
        __dec_obj53=litem_383->item;
        litem_383->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj53,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_383;
        self->tail=litem_383;
    }
    self->len++;
    __result_obj__254 = self;
    come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__254;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__255;
void* __right_value306 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_384;
void* __right_value307 = (void*)0;
struct sType* __dec_obj54;
void* __right_value308 = (void*)0;
char* __dec_obj55;
void* __right_value309 = (void*)0;
struct sNode* __dec_obj56;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__256;
    if(    self==(void*)0) {
        __result_obj__255 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__255,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__255;
    }
    result_384=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj54=result_384->v1;
        result_384->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj55=result_384->v2;
        result_384->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj56=result_384->v3;
        result_384->v3=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v3));
        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__256 = come_increment_ref_count(result_384);
    come_call_finalizer3(result_384,tuple3$3sType$phchar$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__256,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__256;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_385;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_386;
    it_385=self->head;
    while(it_385!=((void*)0)) {
        prev_it_386=it_385;
        it_385=it_385->next;
        come_call_finalizer3(prev_it_386,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        come_call_finalizer3(self->multiple_assign,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        come_call_finalizer3(self->multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        (self->attribute = come_decrement_ref_count2(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_388;
unsigned int hash_389;
unsigned int it_390;
struct sVar* __result_obj__260;
struct sVar* __result_obj__261;
struct sVar* __result_obj__262;
struct sVar* __result_obj__263;
default_value_388 = (void*)0;
    memset(&default_value_388,0,sizeof(struct sVar*));
    hash_389=string_get_hash_key(((char*)key))%self->size;
    it_390=hash_389;
    while((_Bool)1) {
        if(        self->item_existance[it_390]) {
            if(            string_equals(self->keys[it_390],key)) {
                __result_obj__260 = come_increment_ref_count(self->items[it_390]);
                come_call_finalizer3(default_value_388,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__260,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__260;
            }
            it_390++;
            if(            it_390>=self->size) {
                it_390=0;
            }
            else if(            it_390==hash_389) {
                __result_obj__261 = come_increment_ref_count(default_value_388);
                come_call_finalizer3(default_value_388,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__261,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__261;
            }
        }
        else {
            __result_obj__262 = come_increment_ref_count(default_value_388);
            come_call_finalizer3(default_value_388,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__262,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__262;
        }
    }
    __result_obj__263 = come_increment_ref_count(default_value_388);
    come_call_finalizer3(default_value_388,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__263,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__263;
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash_391;
unsigned int it_392;
struct map$2char$phsVar$ph* __result_obj__268;
    hash_391=string_get_hash_key(((char*)key))%self->size;
    it_392=hash_391;
    while((_Bool)1) {
        if(        self->item_existance[it_392]) {
            if(            string_equals(self->keys[it_392],key)) {
                list$1char$p$p_remove(self->key_list,self->keys[it_392]);
                self->item_existance[it_392]=(_Bool)0;
                if(                1) {
                    (self->keys[it_392] = come_decrement_ref_count2(self->keys[it_392], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_392]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_392],sVar_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_392]=((void*)0);
                self->len--;
                break;
            }
            it_392++;
            if(            it_392>=self->size) {
                it_392=0;
            }
            else if(            it_392==hash_391) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__268 = self;
    return __result_obj__268;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_393;
struct list_item$1char$p* it_394;
struct list$1char$p* __result_obj__267;
    it2_393=0;
    it_394=self->head;
    while(it_394!=((void*)0)) {
        if(        charp_equals(it_394->item,item)) {
            list$1char$p$p_delete(self,it2_393,it2_393+1);
            break;
        }
        it2_393++;
        it_394=it_394->next;
    }
    __result_obj__267 = self;
    return __result_obj__267;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_395;
struct list$1char$p* __result_obj__264;
struct list_item$1char$p* it_398;
int i_399;
struct list_item$1char$p* prev_it_400;
struct list_item$1char$p* it_401;
int i_402;
struct list_item$1char$p* prev_it_403;
struct list_item$1char$p* it_404;
struct list_item$1char$p* head_prev_it_405;
struct list_item$1char$p* tail_it_406;
int i_407;
struct list_item$1char$p* prev_it_408;
struct list$1char$p* __result_obj__266;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_395=tail;
        tail=head;
        head=tmp_395;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__264 = self;
        return __result_obj__264;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_398=self->head;
        i_399=0;
        while(it_398!=((void*)0)) {
            if(            i_399<tail) {
                prev_it_400=it_398;
                it_398=it_398->next;
                i_399++;
                come_call_finalizer3(prev_it_400,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_399==tail) {
                self->head=it_398;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_398=it_398->next;
                i_399++;
            }
        }
    }
    else if(    tail==self->len) {
        it_401=self->head;
        i_402=0;
        while(it_401!=((void*)0)) {
            if(            i_402==head) {
                self->tail=it_401->prev;
                self->tail->next=((void*)0);
            }
            if(            i_402>=head) {
                prev_it_403=it_401;
                it_401=it_401->next;
                i_402++;
                come_call_finalizer3(prev_it_403,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_401=it_401->next;
                i_402++;
            }
        }
    }
    else {
        it_404=self->head;
        head_prev_it_405=((void*)0);
        tail_it_406=((void*)0);
        i_407=0;
        while(it_404!=((void*)0)) {
            if(            i_407==head) {
                head_prev_it_405=it_404->prev;
            }
            if(            i_407==tail) {
                tail_it_406=it_404;
            }
            if(            i_407>=head&&i_407<tail) {
                prev_it_408=it_404;
                it_404=it_404->next;
                i_407++;
                come_call_finalizer3(prev_it_408,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_404=it_404->next;
                i_407++;
            }
        }
        if(        head_prev_it_405!=((void*)0)) {
            head_prev_it_405->next=tail_it_406;
        }
        if(        tail_it_406!=((void*)0)) {
            tail_it_406->prev=head_prev_it_405;
        }
    }
    __result_obj__266 = self;
    return __result_obj__266;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_396;
struct list_item$1char$p* prev_it_397;
struct list$1char$p* __result_obj__265;
    it_396=self->head;
    while(it_396!=((void*)0)) {
        prev_it_397=it_396;
        it_396=it_396->next;
        come_call_finalizer3(prev_it_397,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__265 = self;
    return __result_obj__265;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_413;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__270;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__271;
struct tuple3$3sType$phchar$phsNode$ph* result_414;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__272;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_413,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__270 = result_413;
        return __result_obj__270;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__271 = self->it->item;
        return __result_obj__271;
    }
    memset(&result_414,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__272 = result_414;
    return __result_obj__272;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph$p_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_416;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__273;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__274;
struct tuple3$3sType$phchar$phsNode$ph* result_417;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__275;
result_416 = (void*)0;
result_417 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_416,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__273 = result_416;
        return __result_obj__273;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__274 = self->it->item;
        return __result_obj__274;
    }
    memset(&result_417,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__275 = result_417;
    return __result_obj__275;
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

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_431;
char* __result_obj__278;
char* __result_obj__279;
char* result_432;
char* __result_obj__280;
result_431 = (void*)0;
result_432 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_431,0,sizeof(char*));
        __result_obj__278 = result_431;
        return __result_obj__278;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__279 = self->it->item;
        return __result_obj__279;
    }
    memset(&result_432,0,sizeof(char*));
    __result_obj__280 = result_432;
    return __result_obj__280;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_434;
char* __result_obj__281;
char* __result_obj__282;
char* result_435;
char* __result_obj__283;
result_434 = (void*)0;
result_435 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_434,0,sizeof(char*));
        __result_obj__281 = result_434;
        return __result_obj__281;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__282 = self->it->item;
        return __result_obj__282;
    }
    memset(&result_435,0,sizeof(char*));
    __result_obj__283 = result_435;
    return __result_obj__283;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_438;
int i_439;
struct sType* __result_obj__284;
struct sType* default_value_440;
struct sType* __result_obj__285;
default_value_440 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_438=self->head;
    i_439=0;
    while(it_438!=((void*)0)) {
        if(        position==i_439) {
            __result_obj__284 = come_increment_ref_count(it_438->item);
            come_call_finalizer3(__result_obj__284,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__284;
        }
        it_438=it_438->next;
        i_439++;
    }
    memset(&default_value_440,0,sizeof(struct sType*));
    __result_obj__285 = come_increment_ref_count(default_value_440);
    come_call_finalizer3(default_value_440,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__285,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__285;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_461;
struct sNode* __result_obj__289;
struct sNode* __result_obj__290;
struct sNode* result_462;
struct sNode* __result_obj__291;
result_461 = (void*)0;
result_462 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_461,0,sizeof(struct sNode*));
        __result_obj__289 = result_461;
        return __result_obj__289;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__290 = self->it->item;
        return __result_obj__290;
    }
    memset(&result_462,0,sizeof(struct sNode*));
    __result_obj__291 = result_462;
    return __result_obj__291;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_464;
struct sNode* __result_obj__292;
struct sNode* __result_obj__293;
struct sNode* result_465;
struct sNode* __result_obj__294;
result_464 = (void*)0;
result_465 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_464,0,sizeof(struct sNode*));
        __result_obj__292 = result_464;
        return __result_obj__292;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__293 = self->it->item;
        return __result_obj__293;
    }
    memset(&result_465,0,sizeof(struct sNode*));
    __result_obj__294 = result_465;
    return __result_obj__294;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value377 = (void*)0;
struct list_item$1CVALUE$ph* litem_471;
struct CVALUE* __dec_obj67;
void* __right_value378 = (void*)0;
struct list_item$1CVALUE$ph* litem_472;
struct CVALUE* __dec_obj68;
void* __right_value379 = (void*)0;
struct list_item$1CVALUE$ph* litem_473;
struct CVALUE* __dec_obj69;
struct list$1CVALUE$ph* __result_obj__295;
    if(    self->len==0) {
        litem_471=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value377=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1489, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_471->prev=((void*)0);
        litem_471->next=((void*)0);
        __dec_obj67=litem_471->item;
        litem_471->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_471;
        self->head=litem_471;
    }
    else if(    self->len==1) {
        litem_472=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value378=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1499, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_472->prev=self->head;
        litem_472->next=((void*)0);
        __dec_obj68=litem_472->item;
        litem_472->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_472;
        self->head->next=litem_472;
    }
    else {
        litem_473=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value379=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1509, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_473->prev=self->tail;
        litem_473->next=((void*)0);
        __dec_obj69=litem_473->item;
        litem_473->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_473;
        self->tail=litem_473;
    }
    self->len++;
    __result_obj__295 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__295;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value514 = (void*)0;
struct sNewChannel* __result_obj__314;
    ((struct sNodeBase*)(__right_value514=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value514,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__314 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__314,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__314;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value515 = (void*)0;
char* __result_obj__315;
    __result_obj__315 = come_increment_ref_count(((char*)(__right_value515=__builtin_string("sNewChannel"))));
    (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__315 = come_decrement_ref_count2(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__315;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value516 = (void*)0;
struct sNode* node_542;
_Bool Value_543;
_Bool __result_obj__316;
_Bool __result_obj__317;
    node_542=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_543=node_compile(node_542,info);
    if(    !Value_543) {
        __result_obj__316 = (_Bool)0;
        ((node_542) ? node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__316;
    }
    else {
    }
    __result_obj__317 = (_Bool)1;
    ((node_542) ? node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__317;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value517 = (void*)0;
struct sNode* __dec_obj101;
struct sNode* __dec_obj102;
struct sWriteChannelNode* __result_obj__318;
    ((struct sNodeBase*)(__right_value517=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value517,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj101=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj102=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__318 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__318,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__318;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value518 = (void*)0;
char* __result_obj__319;
    __result_obj__319 = come_increment_ref_count(((char*)(__right_value518=__builtin_string("sWriteChannelNode"))));
    (__right_value518 = come_decrement_ref_count2(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count2(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__319;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_544;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_545;
_Bool Value_546;
_Bool __result_obj__320;
void* __right_value520 = (void*)0;
struct CVALUE* right_value_547;
struct sType* right_type_548;
void* __right_value521 = (void*)0;
struct sType* left_type_549;
struct sType* channel_type_550;
void* __right_value522 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_21_552=0;
char* Err_553=0;
_Bool _if_conditional22;
_Bool __result_obj__321;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct buffer* buf_554;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct CVALUE* come_value2_555;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
char* __dec_obj103;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj104;
_Bool __result_obj__322;
    Value_544=node_compile(self->exp,info);
    if(    !Value_544) {
        return (_Bool)0;
    }
    else {
    }
    come_value_545=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_546=node_compile(self->right_value,info);
    if(    !Value_546) {
        __result_obj__320 = (_Bool)0;
        come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result_obj__320;
    }
    else {
    }
    right_value_547=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_548=right_value_547->type;
    left_type_549=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_545->type));
    channel_type_550=(struct sType*)come_increment_ref_count(left_type_549->mChannelType);
    static int var_num_551=0;
    var_num_551++;
    if(    right_value_547->type->mHeap) {
        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value522=err_msg(info,"channel can't get heap type")));
        come_exception_var_21_552=multiple_assign_var23->v1;
        Err_553=(char*)come_increment_ref_count(multiple_assign_var23->v2);
        if(        (_if_conditional22=(Err_553)),        come_call_finalizer3(__right_value522,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional22) {
            __result_obj__321 = (_Bool)1;
            (Err_553 = come_decrement_ref_count2(Err_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(left_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(channel_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__321;
        }
        else {
        }
        (Err_553 = come_decrement_ref_count2(Err_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buf_554=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 759, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_format(buf_554,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_551,((char*)(__right_value525=make_type_name_string(channel_type_550,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_554,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value526=make_type_name_string(channel_type_550,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_551,var_num_551);
    (__right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_554,"*__channel_p%d = %s;\n",var_num_551,right_value_547->c_value);
    add_come_code(info,((char*)(__right_value527=buffer_to_string(buf_554))));
    (__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_555=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 767, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj103=come_value2_555->c_value;
    come_value2_555->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_545->c_value,var_num_551,((char*)(__right_value530=make_type_name_string(channel_type_550,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj104=come_value2_555->type;
    come_value2_555->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 771, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_555->type->mPointerNum=1;
    come_value2_555->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_555));
    add_come_last_code(info,"%s",come_value2_555->c_value);
    __result_obj__322 = (_Bool)1;
    come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(right_value_547,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(left_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_555,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__322;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value535 = (void*)0;
struct sNode* __dec_obj105;
struct sReadChannelNode* __result_obj__323;
    ((struct sNodeBase*)(__right_value535=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value535,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj105=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__323 = come_increment_ref_count(self);
    come_call_finalizer3(self,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__323,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__323;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value536 = (void*)0;
char* __result_obj__324;
    __result_obj__324 = come_increment_ref_count(((char*)(__right_value536=__builtin_string("sReadChannelNode"))));
    (__right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__324 = come_decrement_ref_count2(__result_obj__324, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__324;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_556;
_Bool Value_557;
_Bool __result_obj__325;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_558;
void* __right_value538 = (void*)0;
struct sType* var_type_559;
void* __right_value539 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_22_560=0;
char* Err_561=0;
_Bool _if_conditional23;
_Bool __result_obj__326;
struct sType* channel_type_562;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct CVALUE* come_value2_564;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
char* __dec_obj106;
void* __right_value546 = (void*)0;
struct sType* __dec_obj107;
_Bool __result_obj__327;
    exp_556=(struct sNode*)come_increment_ref_count(self->exp);
    Value_557=node_compile(exp_556,info);
    if(    !Value_557) {
        __result_obj__325 = (_Bool)0;
        ((exp_556) ? exp_556 = come_decrement_ref_count2(exp_556, ((struct sNode*)exp_556)->finalize, ((struct sNode*)exp_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__325;
    }
    else {
    }
    come_value_558=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_559=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_558->type));
    if(    !var_type_559->mChannel) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value539=err_msg(info,"require right type is channel")));
        come_exception_var_22_560=multiple_assign_var24->v1;
        Err_561=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional23=(Err_561)),        come_call_finalizer3(__right_value539,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional23) {
            __result_obj__326 = (_Bool)1;
            (Err_561 = come_decrement_ref_count2(Err_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_556) ? exp_556 = come_decrement_ref_count2(exp_556, ((struct sNode*)exp_556)->finalize, ((struct sNode*)exp_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(var_type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__326;
        }
        else {
        }
        (Err_561 = come_decrement_ref_count2(Err_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    channel_type_562=(struct sType*)come_increment_ref_count(var_type_559->mChannelType);
    static int var_num_563=0;
    var_num_563++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_563,((char*)(__right_value540=make_type_name_string(channel_type_562,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_564=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 823, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj106=come_value2_564->c_value;
    come_value2_564->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_558->c_value,var_num_563,((char*)(__right_value543=make_type_name_string(channel_type_562,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value544=make_type_name_string(channel_type_562,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_563));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj107=come_value2_564->type;
    come_value2_564->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, channel_type_562));
    come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_564->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_564));
    add_come_last_code(info,"%s",come_value2_564->c_value);
    __result_obj__327 = (_Bool)1;
    ((exp_556) ? exp_556 = come_decrement_ref_count2(exp_556, ((struct sNode*)exp_556)->finalize, ((struct sNode*)exp_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(come_value_558,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(var_type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(channel_type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_564,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__327;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value558 = (void*)0;
struct sNode* __result_obj__330;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 840, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value549=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 840, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf(""))))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result_obj__330 = come_increment_ref_count(((struct sNode*)(__right_value558=_inf_value1)));
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value549,sStoreNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value558) ? __right_value558 = come_decrement_ref_count2(__right_value558, ((struct sNode*)__right_value558)->finalize, ((struct sNode*)__right_value558)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__330) ? __result_obj__330 = come_decrement_ref_count2(__result_obj__330, ((struct sNode*)__result_obj__330)->finalize, ((struct sNode*)__result_obj__330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__330;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__328;
void* __right_value550 = (void*)0;
struct sStoreNode* result_565;
void* __right_value551 = (void*)0;
char* __dec_obj108;
void* __right_value552 = (void*)0;
char* __dec_obj109;
void* __right_value553 = (void*)0;
struct sType* __dec_obj110;
void* __right_value554 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value555 = (void*)0;
struct list$1char$ph* __dec_obj112;
void* __right_value556 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj113;
void* __right_value557 = (void*)0;
char* __dec_obj114;
struct sStoreNode* __result_obj__329;
    if(    self==(void*)0) {
        __result_obj__328 = (void*)0;
        return __result_obj__328;
    }
    result_565=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_565->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj108=result_565->sname;
        result_565->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_565->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj109=result_565->name;
        result_565->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_565->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj110=result_565->type;
        result_565->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj111=result_565->right_value;
        result_565->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj112=result_565->multiple_assign;
        result_565->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->multiple_assign));
        come_call_finalizer3(__dec_obj112,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj113=result_565->multiple_declare;
        result_565->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone, self->multiple_declare));
        come_call_finalizer3(__dec_obj113,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj114=result_565->attribute;
        result_565->attribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->attribute));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__329 = result_565;
    come_call_finalizer3(result_565,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__329;
}

struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info){
void* __right_value564 = (void*)0;
struct CVALUE* result_566;
struct sType* __dec_obj119;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
char* __dec_obj120;
char* __dec_obj121;
struct CVALUE* __result_obj__333;
    result_566=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value));
    if(    come_value->type->mAnyOriginalType) {
        __dec_obj119=result_566->type;
        result_566->type=(struct sType*)come_increment_ref_count(come_value->type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj120=result_566->c_value;
        result_566->c_value=(char*)come_increment_ref_count(xsprintf("((%s)%s)",((char*)(__right_value565=make_type_name_string(result_566->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value->c_value));
        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj121=result_566->c_value_without_cast_object_value;
        result_566->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_value->c_value);
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        come_value->type->mNoHeap) {
            result_566->type->mHeap=(_Bool)0;
        }
    }
    __result_obj__333 = come_increment_ref_count(result_566);
    come_call_finalizer3(come_value,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_566,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__331;
void* __right_value559 = (void*)0;
struct CVALUE* result_567;
void* __right_value560 = (void*)0;
char* __dec_obj115;
void* __right_value561 = (void*)0;
struct sType* __dec_obj116;
void* __right_value562 = (void*)0;
char* __dec_obj117;
void* __right_value563 = (void*)0;
char* __dec_obj118;
struct CVALUE* __result_obj__332;
    if(    self==(void*)0) {
        __result_obj__331 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__331,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__331;
    }
    result_567=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj115=result_567->c_value;
        result_567->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj116=result_567->type;
        result_567->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_567->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_567->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj117=result_567->c_value_without_right_value_objects;
        result_567->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj118=result_567->c_value_without_cast_object_value;
        result_567->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__332 = come_increment_ref_count(result_567);
    come_call_finalizer3(result_567,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__332,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__332;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
char* __dec_obj122;
struct sLoadNode* __result_obj__334;
    ((struct sNodeBase*)(__right_value567=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value567,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj122=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__334 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__334,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value569 = (void*)0;
char* __result_obj__335;
    __result_obj__335 = come_increment_ref_count(((char*)(__right_value569=__builtin_string("sLoadNode"))));
    (__right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__335 = come_decrement_ref_count2(__result_obj__335, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__335;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_568;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
_Bool _if_conditional24;
struct sVar* parent_var_569;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct CVALUE* come_value_570;
struct sType* type_571;
void* __right_value574 = (void*)0;
char* __dec_obj123;
void* __right_value575 = (void*)0;
char* __dec_obj124;
void* __right_value576 = (void*)0;
struct sType* __dec_obj125;
void* __right_value577 = (void*)0;
struct CVALUE* __dec_obj126;
_Bool __result_obj__336;
struct sVar* var__572;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sFun* fun_573;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct CVALUE* come_value_577;
void* __right_value582 = (void*)0;
char* __dec_obj127;
struct sType* __dec_obj128;
_Bool __result_obj__341;
void* __right_value583 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_23_578=0;
char* Err_579=0;
_Bool _if_conditional25;
_Bool __result_obj__342;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct CVALUE* come_value_580;
void* __right_value586 = (void*)0;
char* __dec_obj129;
void* __right_value587 = (void*)0;
struct sType* __dec_obj130;
void* __right_value588 = (void*)0;
struct CVALUE* __dec_obj131;
void* __right_value589 = (void*)0;
struct sType* __dec_obj132;
_Bool __result_obj__344;
    current_stack_frame_struct_568=info->current_stack_frame_struct;
    if(    (_if_conditional24=(current_stack_frame_struct_568&&((struct sVar*)(__right_value571=map$2char$phsVar$ph$p_operator_load_element(info->lv_table->mVars,((char*)(__right_value570=__builtin_string(self->name))))))==((void*)0))),    (__right_value570 = come_decrement_ref_count2(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value571,sVar_finalize, 0, 1, 0, 0, (void*)0),
    _if_conditional24) {
        parent_var_569=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_569!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_569->mFunName,info->come_fun->mName)) {
                come_value_570=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 887, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                type_571=parent_var_569->mType;
                if(                parent_var_569->mType->mOriginIsArray) {
                    __dec_obj123=come_value_570->c_value;
                    come_value_570->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_569->mCValueName));
                    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj124=come_value_570->c_value;
                    come_value_570->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_569->mCValueName));
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                __dec_obj125=come_value_570->type;
                come_value_570->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_571));
                come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_570->var=((void*)0);
                __dec_obj126=come_value_570;
                come_value_570=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_570),info));
                come_call_finalizer3(__dec_obj126,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                add_come_last_code(info,"%s",come_value_570->c_value);
                list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_570));
                __result_obj__336 = (_Bool)1;
                come_call_finalizer3(come_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__336;
                come_call_finalizer3(come_value_570,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__572=get_variable_from_table(info->lv_table,self->name);
    if(    var__572==((void*)0)) {
        var__572=get_variable_from_table(info->gv_table,self->name);
        if(        var__572==((void*)0)) {
            fun_573=((struct sFun*)(__right_value579=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value578=__builtin_string(self->name))))));
            (__right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(__right_value579,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            fun_573) {
                come_value_577=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 921, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
                __dec_obj127=come_value_577->c_value;
                come_value_577->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_573->mName));
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj128=come_value_577->type;
                come_value_577->type=(struct sType*)come_increment_ref_count(fun_573->mLambdaType);
                come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_577->var=((void*)0);
                list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_577));
                __result_obj__341 = (_Bool)1;
                come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__341;
                come_call_finalizer3(come_value_577,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value583=err_msg(info,"var not found(%s)(Z) at loading variable",self->name)));
                come_exception_var_23_578=multiple_assign_var25->v1;
                Err_579=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                if(                (_if_conditional25=(Err_579)),                come_call_finalizer3(__right_value583,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional25) {
                    __result_obj__342 = (_Bool)1;
                    (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__342;
                }
                else {
                }
                (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_value_580=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 939, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj129=come_value_580->c_value;
    come_value_580->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__572->mCValueName));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value_580->type;
    come_value_580->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__572->mType));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_580->var=var__572;
    __dec_obj131=come_value_580;
    come_value_580=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_580),info));
    come_call_finalizer3(__dec_obj131,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_580));
    if(    list$1sNode$ph$p_length(come_value_580->type->mArrayNum)==1) {
        __dec_obj132=come_value_580->type->mOriginalLoadVarType;
        come_value_580->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_580->type));
        come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph$p_reset(come_value_580->type->mArrayNum);
        come_value_580->type->mPointerNum++;
        come_value_580->type->mOriginalTypeNamePointerNum=come_value_580->type->mPointerNum;
    }
    __result_obj__344 = (_Bool)1;
    come_call_finalizer3(come_value_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__344;
}

static void sLoadNode_finalize(struct sLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_574;
unsigned int hash_575;
unsigned int it_576;
struct sFun* __result_obj__337;
struct sFun* __result_obj__338;
struct sFun* __result_obj__339;
struct sFun* __result_obj__340;
default_value_574 = (void*)0;
    memset(&default_value_574,0,sizeof(struct sFun*));
    hash_575=string_get_hash_key(((char*)key))%self->size;
    it_576=hash_575;
    while((_Bool)1) {
        if(        self->item_existance[it_576]) {
            if(            string_equals(self->keys[it_576],key)) {
                __result_obj__337 = come_increment_ref_count(self->items[it_576]);
                come_call_finalizer3(default_value_574,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__337,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__337;
            }
            it_576++;
            if(            it_576>=self->size) {
                it_576=0;
            }
            else if(            it_576==hash_575) {
                __result_obj__338 = come_increment_ref_count(default_value_574);
                come_call_finalizer3(default_value_574,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__338,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__338;
            }
        }
        else {
            __result_obj__339 = come_increment_ref_count(default_value_574);
            come_call_finalizer3(default_value_574,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__339,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__339;
        }
    }
    __result_obj__340 = come_increment_ref_count(default_value_574);
    come_call_finalizer3(default_value_574,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__340,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__340;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_581;
struct list_item$1sNode$ph* prev_it_582;
struct list$1sNode$ph* __result_obj__343;
    it_581=self->head;
    while(it_581!=((void*)0)) {
        prev_it_582=it_581;
        it_581=it_581->next;
        come_call_finalizer3(prev_it_582,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__343 = self;
    return __result_obj__343;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value590 = (void*)0;
_Bool _if_conditional26;
struct sLoadNode* load_node_583;
    if(    (_if_conditional26=(string_operator_equals(((char*)(__right_value590=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional26) {
        load_node_583=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_583->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value597 = (void*)0;
struct sNode* __result_obj__347;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 974, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value593=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 974, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result_obj__347 = come_increment_ref_count(((struct sNode*)(__right_value597=_inf_value2)));
    come_call_finalizer3(__right_value593,sLoadNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value597) ? __right_value597 = come_decrement_ref_count2(__right_value597, ((struct sNode*)__right_value597)->finalize, ((struct sNode*)__right_value597)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count2(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__347;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__345;
void* __right_value594 = (void*)0;
struct sLoadNode* result_584;
void* __right_value595 = (void*)0;
char* __dec_obj133;
void* __right_value596 = (void*)0;
char* __dec_obj134;
struct sLoadNode* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = (void*)0;
        return __result_obj__345;
    }
    result_584=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_584->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj133=result_584->sname;
        result_584->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj134=result_584->name;
        result_584->name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->name));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__346 = result_584;
    come_call_finalizer3(result_584,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
char* __dec_obj135;
struct sFunLoadNode* __result_obj__348;
    ((struct sNodeBase*)(__right_value598=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value598,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj135=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__348 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__348,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__348;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value600 = (void*)0;
char* __result_obj__349;
    __result_obj__349 = come_increment_ref_count(((char*)(__right_value600=__builtin_string("sFunLoadNode"))));
    (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__349 = come_decrement_ref_count2(__result_obj__349, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__349;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sFun* fun_585;
void* __right_value603 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_24_586=0;
char* Err_587=0;
_Bool _if_conditional27;
_Bool __result_obj__350;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value_588;
void* __right_value606 = (void*)0;
char* __dec_obj136;
struct sType* __dec_obj137;
    fun_585=((struct sFun*)(__right_value602=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value601=__builtin_string(self->name))))));
    (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value602,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun_585==((void*)0)) {
        multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value603=err_msg(info,"fun not found(%s) at loading variable",self->name)));
        come_exception_var_24_586=multiple_assign_var26->v1;
        Err_587=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional27=(Err_587)),        come_call_finalizer3(__right_value603,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional27) {
            __result_obj__350 = (_Bool)1;
            (Err_587 = come_decrement_ref_count2(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__350;
        }
        else {
        }
        (Err_587 = come_decrement_ref_count2(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        come_value_588=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1001, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj136=come_value_588->c_value;
        come_value_588->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_585->mName));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj137=come_value_588->type;
        come_value_588->type=(struct sType*)come_increment_ref_count(fun_585->mLambdaType);
        come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_588->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_588));
        come_call_finalizer3(come_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value607 = (void*)0;
void* __right_value618 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj143;
struct sArrayInitializer* __result_obj__357;
    ((struct sNodeBase*)(__right_value607=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value607,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj143=self->initializer;
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, initializer));
    come_call_finalizer3(__dec_obj143,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__357 = come_increment_ref_count(self);
    come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__357,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__357;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value619 = (void*)0;
char* __result_obj__358;
    __result_obj__358 = come_increment_ref_count(((char*)(__right_value619=__builtin_string("sArrayInitializer"))));
    (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__358 = come_decrement_ref_count2(__result_obj__358, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__358;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_599;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
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
_Bool __result_obj__365;
void* __right_value622 = (void*)0;
struct CVALUE* __dec_obj144;
_Bool Value_613;
_Bool __result_obj__366;
void* __right_value623 = (void*)0;
struct CVALUE* come_value2_614;
void* __right_value624 = (void*)0;
struct sType* __dec_obj145;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct CVALUE* come_value_615;
void* __right_value627 = (void*)0;
char* __dec_obj146;
void* __right_value628 = (void*)0;
struct sType* __dec_obj147;
_Bool __result_obj__367;
    initializer_599=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_600=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1032, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
                __result_obj__365 = (_Bool)0;
                ((index_609) ? index_609 = come_decrement_ref_count2(index_609, ((struct sNode*)index_609)->finalize, ((struct sNode*)index_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((value_610) ? value_610 = come_decrement_ref_count2(value_610, ((struct sNode*)value_610)->finalize, ((struct sNode*)value_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(o2_saved_603,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(initializer_599,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__365;
            }
            else {
            }
            __dec_obj144=come_value_611;
            come_value_611=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj144,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        Value_613=node_compile(value_610,info);
        if(        !Value_613) {
            __result_obj__366 = (_Bool)0;
            ((index_609) ? index_609 = come_decrement_ref_count2(index_609, ((struct sNode*)index_609)->finalize, ((struct sNode*)index_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value_610) ? value_610 = come_decrement_ref_count2(value_610, ((struct sNode*)value_610)->finalize, ((struct sNode*)value_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(o2_saved_603,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_599,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(element_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__366;
        }
        else {
        }
        come_value2_614=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj145=element_type_602;
        element_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_614->type));
        come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
        ((index_609) ? index_609 = come_decrement_ref_count2(index_609, ((struct sNode*)index_609)->finalize, ((struct sNode*)index_609)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((value_610) ? value_610 = come_decrement_ref_count2(value_610, ((struct sNode*)value_610)->finalize, ((struct sNode*)value_610)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_603,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_600,"}");
    come_value_615=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1069, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj146=come_value_615->c_value;
    come_value_615->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_600));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value_615->type;
    come_value_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_602));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_615->type->mPointerNum++;
    come_value_615->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_615));
    __result_obj__367 = (_Bool)1;
    come_call_finalizer3(initializer_599,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_600,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_615,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__367;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__351;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_591;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_592;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__356;
    if(    self==((void*)0)) {
        __result_obj__351 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__351,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__351;
    }
    result_591=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1400, "struct list$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
    __result_obj__356 = come_increment_ref_count(result_591);
    come_call_finalizer3(result_591,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__356,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__356;
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
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__352;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__352 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__352,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__352;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value610 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_593;
struct tuple2$2sNode$phsNode$ph* __dec_obj138;
void* __right_value611 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_594;
struct tuple2$2sNode$phsNode$ph* __dec_obj139;
void* __right_value612 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_595;
struct tuple2$2sNode$phsNode$ph* __dec_obj140;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__353;
    if(    self->len==0) {
        litem_593=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value610=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1419, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_593->prev=((void*)0);
        litem_593->next=((void*)0);
        __dec_obj138=litem_593->item;
        litem_593->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj138,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_593;
        self->head=litem_593;
    }
    else if(    self->len==1) {
        litem_594=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value611=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1429, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_594->prev=self->head;
        litem_594->next=((void*)0);
        __dec_obj139=litem_594->item;
        litem_594->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj139,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_594;
        self->head->next=litem_594;
    }
    else {
        litem_595=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value612=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1439, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_595->prev=self->tail;
        litem_595->next=((void*)0);
        __dec_obj140=litem_595->item;
        litem_595->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj140,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_595;
        self->tail=litem_595;
    }
    self->len++;
    __result_obj__353 = self;
    come_call_finalizer3(item,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__353;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__354;
void* __right_value613 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_596;
void* __right_value614 = (void*)0;
struct sNode* __dec_obj141;
void* __right_value615 = (void*)0;
struct sNode* __dec_obj142;
struct tuple2$2sNode$phsNode$ph* __result_obj__355;
    if(    self==(void*)0) {
        __result_obj__354 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__354,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__354;
    }
    result_596=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj141=result_596->v1;
        result_596->v1=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v1));
        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj142=result_596->v2;
        result_596->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__355 = come_increment_ref_count(result_596);
    come_call_finalizer3(result_596,tuple2$2sNode$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__355,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__355;
}

static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        come_call_finalizer3(self->initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_604;
struct tuple2$2sNode$phsNode$ph* __result_obj__359;
struct tuple2$2sNode$phsNode$ph* __result_obj__360;
struct tuple2$2sNode$phsNode$ph* result_605;
struct tuple2$2sNode$phsNode$ph* __result_obj__361;
result_604 = (void*)0;
result_605 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_604,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__359 = result_604;
        return __result_obj__359;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__360 = self->it->item;
        return __result_obj__360;
    }
    memset(&result_605,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__361 = result_605;
    return __result_obj__361;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph$p_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_607;
struct tuple2$2sNode$phsNode$ph* __result_obj__362;
struct tuple2$2sNode$phsNode$ph* __result_obj__363;
struct tuple2$2sNode$phsNode$ph* result_608;
struct tuple2$2sNode$phsNode$ph* __result_obj__364;
result_607 = (void*)0;
result_608 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_607,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__362 = result_607;
        return __result_obj__362;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__363 = self->it->item;
        return __result_obj__363;
    }
    memset(&result_608,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__364 = result_608;
    return __result_obj__364;
}

static int list$1tuple2$2sNode$phsNode$ph$ph$p_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_616;
void* __right_value631 = (void*)0;
struct sNode* index_617;
_Bool no_comma_618;
void* __right_value632 = (void*)0;
struct sNode* exp_619;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
_Bool no_comma_621;
void* __right_value635 = (void*)0;
struct sNode* exp_622;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* index_625;
_Bool no_comma_626;
void* __right_value641 = (void*)0;
struct sNode* exp_627;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
_Bool no_comma_628;
void* __right_value644 = (void*)0;
struct sNode* exp_629;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value652 = (void*)0;
struct sNode* __result_obj__374;
    expected_next_character(123,info);
    initializer_616=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1087, "struct list$1tuple2$2sNode$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
        list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1103, "struct tuple2$2sNode$phsNode$ph", tuple2$2sNode$phsNode$ph_finalize, tuple2$2sNode$phsNode$ph_clone, tuple2$2sNode$phsNode$ph_get_hash_key, tuple2$2sNode$phsNode$ph_equals)),(struct sNode*)come_increment_ref_count(index_617),(struct sNode*)come_increment_ref_count(exp_619))));
        ((index_617) ? index_617 = come_decrement_ref_count2(index_617, ((struct sNode*)index_617)->finalize, ((struct sNode*)index_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((exp_619) ? exp_619 = come_decrement_ref_count2(exp_619, ((struct sNode*)exp_619)->finalize, ((struct sNode*)exp_619)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_621=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_622=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_621;
        list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1111, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_622))));
        ((exp_622) ? exp_622 = come_decrement_ref_count2(exp_622, ((struct sNode*)exp_622)->finalize, ((struct sNode*)exp_622)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
            list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1138, "struct tuple2$2sNode$phsNode$ph", tuple2$2sNode$phsNode$ph_finalize, tuple2$2sNode$phsNode$ph_clone, tuple2$2sNode$phsNode$ph_get_hash_key, tuple2$2sNode$phsNode$ph_equals)),(struct sNode*)come_increment_ref_count(index_625),(struct sNode*)come_increment_ref_count(exp_627))));
            ((index_625) ? index_625 = come_decrement_ref_count2(index_625, ((struct sNode*)index_625)->finalize, ((struct sNode*)index_625)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_627) ? exp_627 = come_decrement_ref_count2(exp_627, ((struct sNode*)exp_627)->finalize, ((struct sNode*)exp_627)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_628=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_629=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_628;
            list$1tuple2$2sNode$phsNode$ph$ph$p_add(initializer_616,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1146, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_629))));
            ((exp_629) ? exp_629 = come_decrement_ref_count2(exp_629, ((struct sNode*)exp_629)->finalize, ((struct sNode*)exp_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1152, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value648=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1152, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_616),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result_obj__374 = come_increment_ref_count(((struct sNode*)(__right_value652=_inf_value3)));
    come_call_finalizer3(initializer_616,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value648,sArrayInitializer_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value652) ? __right_value652 = come_decrement_ref_count2(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__374) ? __result_obj__374 = come_decrement_ref_count2(__result_obj__374, ((struct sNode*)__result_obj__374)->finalize, ((struct sNode*)__result_obj__374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__374;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_initialize(struct tuple2$2sNode$phsNode$ph* self, struct sNode* v1, struct sNode* v2){
struct sNode* __dec_obj148;
struct sNode* __dec_obj149;
struct tuple2$2sNode$phsNode$ph* __result_obj__368;
    __dec_obj148=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj149=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__368 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    ((v1) ? v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__368,tuple2$2sNode$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__368;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__369;
void* __right_value636 = (void*)0;
struct tuple2$2void$psNode$ph* result_623;
void* __right_value637 = (void*)0;
struct sNode* __dec_obj150;
struct tuple2$2void$psNode$ph* __result_obj__370;
    if(    self==(void*)0) {
        __result_obj__369 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__369,tuple2$2void$psNode$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__369;
    }
    result_623=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_623->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj150=result_623->v2;
        result_623->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__370 = come_increment_ref_count(result_623);
    come_call_finalizer3(result_623,tuple2$2void$psNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__370,tuple2$2void$psNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
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
struct sNode* __dec_obj151;
struct tuple2$2void$psNode$ph* __result_obj__371;
    self->v1=v1;
    __dec_obj151=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__371 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__371,tuple2$2void$psNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__371;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__372;
void* __right_value649 = (void*)0;
struct sArrayInitializer* result_630;
void* __right_value650 = (void*)0;
char* __dec_obj152;
void* __right_value651 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj153;
struct sArrayInitializer* __result_obj__373;
    if(    self==(void*)0) {
        __result_obj__372 = (void*)0;
        return __result_obj__372;
    }
    result_630=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_630->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_630->sname;
        result_630->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_630->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj153=result_630->initializer;
        result_630->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2sNode$phsNode$ph$ph$p_clone, self->initializer));
        come_call_finalizer3(__dec_obj153,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__373 = result_630;
    come_call_finalizer3(result_630,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__373;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value653 = (void*)0;
void* __right_value664 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj159;
struct sStructInitializer* __result_obj__381;
    ((struct sNodeBase*)(__right_value653=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value653,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj159=self->initializer;
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, initializer));
    come_call_finalizer3(__dec_obj159,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__381 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__381,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__381;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value665 = (void*)0;
char* __result_obj__382;
    __result_obj__382 = come_increment_ref_count(((char*)(__right_value665=__builtin_string("sStructInitializer"))));
    (__right_value665 = come_decrement_ref_count2(__right_value665, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__382 = come_decrement_ref_count2(__result_obj__382, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__382;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_641;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct buffer* buf_642;
int i_643;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_644;
struct tuple2$2char$phsNode$ph* it_647;
struct tuple2$2char$phsNode$ph* multiple_assign_var28 = (void*)0;
char* name_650=0;
struct sNode* value_651=0;
_Bool Value_652;
_Bool __result_obj__389;
void* __right_value668 = (void*)0;
struct CVALUE* come_value2_653;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct CVALUE* come_value_654;
void* __right_value671 = (void*)0;
char* __dec_obj160;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sType* __dec_obj161;
_Bool __result_obj__390;
    initializer_641=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_642=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 1173, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append_str(buf_642,"{");
    i_643=0;
    for(    o2_saved_644=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_641)),it_647=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_644));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_644));    it_647=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_644))    ){
        multiple_assign_var28=it_647;
        name_650=(char*)come_increment_ref_count(multiple_assign_var28->v1);
        value_651=(struct sNode*)come_increment_ref_count(multiple_assign_var28->v2);
        Value_652=node_compile(value_651,info);
        if(        !Value_652) {
            __result_obj__389 = (_Bool)0;
            (name_650 = come_decrement_ref_count2(name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_651) ? value_651 = come_decrement_ref_count2(value_651, ((struct sNode*)value_651)->finalize, ((struct sNode*)value_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(o2_saved_644,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(initializer_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__389;
        }
        else {
        }
        come_value2_653=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
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
        ((value_651) ? value_651 = come_decrement_ref_count2(value_651, ((struct sNode*)value_651)->finalize, ((struct sNode*)value_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value2_653,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_644,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_642,"}");
    come_value_654=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 1199, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj160=come_value_654->c_value;
    come_value_654->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_642));
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj161=come_value_654->type;
    come_value_654->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "07var.c", 1202, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_654->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_654));
    __result_obj__390 = (_Bool)1;
    come_call_finalizer3(initializer_641,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_642,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_654,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__390;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__375;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_633;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_634;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__380;
    if(    self==((void*)0)) {
        __result_obj__375 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__375,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__375;
    }
    result_633=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1400, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
    __result_obj__380 = come_increment_ref_count(result_633);
    come_call_finalizer3(result_633,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__380,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__380;
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__376;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__376 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__376,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__376;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value656 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_635;
struct tuple2$2char$phsNode$ph* __dec_obj154;
void* __right_value657 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_636;
struct tuple2$2char$phsNode$ph* __dec_obj155;
void* __right_value658 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_637;
struct tuple2$2char$phsNode$ph* __dec_obj156;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__377;
    if(    self->len==0) {
        litem_635=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value656=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1419, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_635->prev=((void*)0);
        litem_635->next=((void*)0);
        __dec_obj154=litem_635->item;
        litem_635->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj154,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_635;
        self->head=litem_635;
    }
    else if(    self->len==1) {
        litem_636=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value657=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1429, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_636->prev=self->head;
        litem_636->next=((void*)0);
        __dec_obj155=litem_636->item;
        litem_636->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj155,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_636;
        self->head->next=litem_636;
    }
    else {
        litem_637=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value658=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1439, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_637->prev=self->tail;
        litem_637->next=((void*)0);
        __dec_obj156=litem_637->item;
        litem_637->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj156,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_637;
        self->tail=litem_637;
    }
    self->len++;
    __result_obj__377 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__377;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__378;
void* __right_value659 = (void*)0;
struct tuple2$2char$phsNode$ph* result_638;
void* __right_value660 = (void*)0;
char* __dec_obj157;
void* __right_value661 = (void*)0;
struct sNode* __dec_obj158;
struct tuple2$2char$phsNode$ph* __result_obj__379;
    if(    self==(void*)0) {
        __result_obj__378 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__378,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__378;
    }
    result_638=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj157=result_638->v1;
        result_638->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj158=result_638->v2;
        result_638->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__379 = come_increment_ref_count(result_638);
    come_call_finalizer3(result_638,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__379,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__379;
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
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_645;
struct tuple2$2char$phsNode$ph* __result_obj__383;
struct tuple2$2char$phsNode$ph* __result_obj__384;
struct tuple2$2char$phsNode$ph* result_646;
struct tuple2$2char$phsNode$ph* __result_obj__385;
result_645 = (void*)0;
result_646 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_645,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__383 = result_645;
        return __result_obj__383;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__384 = self->it->item;
        return __result_obj__384;
    }
    memset(&result_646,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__385 = result_646;
    return __result_obj__385;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_648;
struct tuple2$2char$phsNode$ph* __result_obj__386;
struct tuple2$2char$phsNode$ph* __result_obj__387;
struct tuple2$2char$phsNode$ph* result_649;
struct tuple2$2char$phsNode$ph* __result_obj__388;
result_648 = (void*)0;
result_649 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_648,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__386 = result_648;
        return __result_obj__386;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__387 = self->it->item;
        return __result_obj__387;
    }
    memset(&result_649,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__388 = result_649;
    return __result_obj__388;
}

static int list$1tuple2$2char$phsNode$ph$ph$p_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_655;
void* __right_value677 = (void*)0;
char* name_656;
_Bool no_comma_657;
void* __right_value678 = (void*)0;
struct sNode* exp_658;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
_Bool no_comma_660;
void* __right_value681 = (void*)0;
struct sNode* exp_661;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
char* name_662;
_Bool no_comma_663;
void* __right_value685 = (void*)0;
struct sNode* exp_664;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
_Bool no_comma_665;
void* __right_value688 = (void*)0;
struct sNode* exp_666;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value696 = (void*)0;
struct sNode* __result_obj__394;
    expected_next_character(123,info);
    initializer_655=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1215, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_656=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_657=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_658=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_657;
        list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1230, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(name_656),(struct sNode*)come_increment_ref_count(exp_658))));
        (name_656 = come_decrement_ref_count2(name_656, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_658) ? exp_658 = come_decrement_ref_count2(exp_658, ((struct sNode*)exp_658)->finalize, ((struct sNode*)exp_658)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_660=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_661=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_660;
        list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1238, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_661))));
        ((exp_661) ? exp_661 = come_decrement_ref_count2(exp_661, ((struct sNode*)exp_661)->finalize, ((struct sNode*)exp_661)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
            list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1264, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(name_662),(struct sNode*)come_increment_ref_count(exp_664))));
            (name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_664) ? exp_664 = come_decrement_ref_count2(exp_664, ((struct sNode*)exp_664)->finalize, ((struct sNode*)exp_664)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_665=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_666=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_665;
            list$1tuple2$2char$phsNode$ph$ph$p_add(initializer_655,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1272, "struct tuple2$2void$psNode$ph", tuple2$2void$psNode$ph_finalize, tuple2$2void$psNode$ph_clone, tuple2$2void$psNode$ph_get_hash_key, tuple2$2void$psNode$ph_equals)),((void*)0),(struct sNode*)come_increment_ref_count(exp_666))));
            ((exp_666) ? exp_666 = come_decrement_ref_count2(exp_666, ((struct sNode*)exp_666)->finalize, ((struct sNode*)exp_666)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1278, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value692=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1278, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_655),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result_obj__394 = come_increment_ref_count(((struct sNode*)(__right_value696=_inf_value4)));
    come_call_finalizer3(initializer_655,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value692,sStructInitializer_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value696) ? __right_value696 = come_decrement_ref_count2(__right_value696, ((struct sNode*)__right_value696)->finalize, ((struct sNode*)__right_value696)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__394) ? __result_obj__394 = come_decrement_ref_count2(__result_obj__394, ((struct sNode*)__result_obj__394)->finalize, ((struct sNode*)__result_obj__394)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__394;
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
char* __dec_obj162;
struct sNode* __dec_obj163;
struct tuple2$2char$phsNode$ph* __result_obj__391;
    __dec_obj162=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj163=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__391 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__391,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__391;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__392;
void* __right_value693 = (void*)0;
struct sStructInitializer* result_667;
void* __right_value694 = (void*)0;
char* __dec_obj164;
void* __right_value695 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj165;
struct sStructInitializer* __result_obj__393;
    if(    self==(void*)0) {
        __result_obj__392 = (void*)0;
        return __result_obj__392;
    }
    result_667=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_667->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_667->sname;
        result_667->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj165=result_667->initializer;
        result_667->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->initializer));
        come_call_finalizer3(__dec_obj165,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__393 = result_667;
    come_call_finalizer3(result_667,sStructInitializer_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__393;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param){
void* __right_value697 = (void*)0;
struct sVar* self_668;
void* __right_value698 = (void*)0;
char* __dec_obj166;
void* __right_value699 = (void*)0;
struct sType* __dec_obj167;
void* __right_value700 = (void*)0;
char* __dec_obj168;
void* __right_value701 = (void*)0;
char* __dec_obj169;
void* __right_value702 = (void*)0;
char* __dec_obj170;
char* __dec_obj171;
void* __right_value708 = (void*)0;
    self_668=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1283, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    __dec_obj166=self_668->mName;
    self_668->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=self_668->mType;
    self_668->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj168=self_668->mCValueName;
        self_668->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_669=0;
        __dec_obj169=self_668->mCValueName;
        self_668->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_669++));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_668->mAllocaValue=(_Bool)0;
    self_668->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj170=self_668->mFunName;
        self_668->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->come_fun->mName));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj171=self_668->mFunName;
        self_668->mFunName=((void*)0);
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2char$phsVar$ph$p_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_668));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_668,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_687;
unsigned int it_688;
_Bool same_key_exist_689;
char* it2_692;
struct map$2char$phsVar$ph* __result_obj__411;
    if(    self->len*10>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_687=string_get_hash_key(((char*)key))%self->size;
    it_688=hash_687;
    while((_Bool)1) {
        if(        self->item_existance[it_688]) {
            if(            string_equals(self->keys[it_688],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_688]);
                    (self->keys[it_688] = come_decrement_ref_count2(self->keys[it_688], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_688]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_688]);
                    self->keys[it_688]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_688],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_688]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_688]=item;
                }
                break;
            }
            it_688++;
            if(            it_688>=self->size) {
                it_688=0;
            }
            else if(            it_688==hash_687) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_688]=(_Bool)1;
            if(            1) {
                self->keys[it_688]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_688]=key;
            }
            if(            1) {
                self->items[it_688]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_688]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_689=(_Bool)0;
    for(    it2_692=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_692=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_692,key)) {
            same_key_exist_689=(_Bool)1;
        }
    }
    if(    !same_key_exist_689) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__411 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__411;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_670;
void* __right_value703 = (void*)0;
char** keys_671;
void* __right_value704 = (void*)0;
struct sVar** items_672;
void* __right_value705 = (void*)0;
_Bool* item_existance_673;
int len_674;
char* it_677;
struct sVar* default_value_680;
void* __right_value706 = (void*)0;
struct sVar* it2_681;
unsigned int hash_684;
int n_685;
struct sVar* default_value_686;
void* __right_value707 = (void*)0;
default_value_680 = (void*)0;
default_value_686 = (void*)0;
    size_670=self->size*10;
    keys_671=(char**)come_increment_ref_count(((char**)(__right_value703=(char**)come_calloc(1, sizeof(char*)*(1*(size_670)), "./comelang.h", 2934, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_672=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value704=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_670)), "./comelang.h", 2935, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_673=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value705=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_670)), "./comelang.h", 2936, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_674=0;
    for(    it_677=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_677=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_680,0,sizeof(struct sVar*));
        it2_681=((struct sVar*)(__right_value706=map$2char$phsVar$ph$p_at(self,it_677,(struct sVar*)come_increment_ref_count(default_value_680))));
        come_call_finalizer3(__right_value706,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_684=string_get_hash_key(((char*)it_677))%size_670;
        n_685=hash_684;
        while((_Bool)1) {
            if(            item_existance_673[n_685]) {
                n_685++;
                if(                n_685>=size_670) {
                    n_685=0;
                }
                else if(                n_685==hash_684) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_673[n_685]=(_Bool)1;
                keys_671[n_685]=it_677;
                items_672[n_685]=((struct sVar*)(__right_value707=map$2char$phsVar$ph$p_at(self,it_677,(struct sVar*)come_increment_ref_count(default_value_686))));
                come_call_finalizer3(__right_value707,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_674++;
                come_call_finalizer3(default_value_686,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_686,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_680,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_671;
    self->items=items_672;
    self->item_existance=item_existance_673;
    self->size=size_670;
    self->len=len_674;
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_675;
char* __result_obj__395;
char* __result_obj__396;
char* result_676;
char* __result_obj__397;
result_675 = (void*)0;
result_676 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_675,0,sizeof(char*));
        __result_obj__395 = result_675;
        return __result_obj__395;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__396 = self->key_list->it->item;
        return __result_obj__396;
    }
    memset(&result_676,0,sizeof(char*));
    __result_obj__397 = result_676;
    return __result_obj__397;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_678;
char* __result_obj__398;
char* __result_obj__399;
char* result_679;
char* __result_obj__400;
result_678 = (void*)0;
result_679 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_678,0,sizeof(char*));
        __result_obj__398 = result_678;
        return __result_obj__398;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__399 = self->key_list->it->item;
        return __result_obj__399;
    }
    memset(&result_679,0,sizeof(char*));
    __result_obj__400 = result_679;
    return __result_obj__400;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_682;
unsigned int it_683;
struct sVar* __result_obj__401;
struct sVar* __result_obj__402;
struct sVar* __result_obj__403;
struct sVar* __result_obj__404;
    hash_682=string_get_hash_key(((char*)key))%self->size;
    it_683=hash_682;
    while((_Bool)1) {
        if(        self->item_existance[it_683]) {
            if(            string_equals(self->keys[it_683],key)) {
                __result_obj__401 = come_increment_ref_count(self->items[it_683]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__401,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__401;
            }
            it_683++;
            if(            it_683>=self->size) {
                it_683=0;
            }
            else if(            it_683==hash_682) {
                __result_obj__402 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__402,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__402;
            }
        }
        else {
            __result_obj__403 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__403,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__403;
        }
    }
    __result_obj__404 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__404,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__404;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_690;
char* __result_obj__405;
char* __result_obj__406;
char* result_691;
char* __result_obj__407;
result_690 = (void*)0;
result_691 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_690,0,sizeof(char*));
        __result_obj__405 = result_690;
        return __result_obj__405;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__406 = self->it->item;
        return __result_obj__406;
    }
    memset(&result_691,0,sizeof(char*));
    __result_obj__407 = result_691;
    return __result_obj__407;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_693;
char* __result_obj__408;
char* __result_obj__409;
char* result_694;
char* __result_obj__410;
result_693 = (void*)0;
result_694 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_693,0,sizeof(char*));
        __result_obj__408 = result_693;
        return __result_obj__408;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__409 = self->it->item;
        return __result_obj__409;
    }
    memset(&result_694,0,sizeof(char*));
    __result_obj__410 = result_694;
    return __result_obj__410;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value709 = (void*)0;
struct sVar* self_695;
void* __right_value710 = (void*)0;
char* __dec_obj172;
void* __right_value711 = (void*)0;
struct sType* __dec_obj173;
void* __right_value712 = (void*)0;
char* __dec_obj174;
void* __right_value713 = (void*)0;
    self_695=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1310, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    __dec_obj172=self_695->mName;
    self_695->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj173=self_695->mType;
    self_695->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj173,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_695->mGlobal=(_Bool)1;
    __dec_obj174=self_695->mCValueName;
    self_695->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_695->mAllocaValue=(_Bool)0;
    self_695->mNoFree=(_Bool)0;
    map$2char$phsVar$ph$p_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_695));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_695,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value714 = (void*)0;
struct sVar* self_696;
void* __right_value715 = (void*)0;
char* __dec_obj175;
void* __right_value716 = (void*)0;
struct sType* __dec_obj176;
void* __right_value717 = (void*)0;
char* __dec_obj177;
void* __right_value718 = (void*)0;
    self_696=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 1327, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    __dec_obj175=self_696->mName;
    self_696->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj176=self_696->mType;
    self_696->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    come_call_finalizer3(__dec_obj176,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_696->mGlobal=(_Bool)1;
    __dec_obj177=self_696->mCValueName;
    self_696->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_696->mAllocaValue=(_Bool)0;
    self_696->mNoFree=(_Bool)0;
    map$2char$phsVar$ph$p_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_696));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(self_696,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_697;
_Bool is_type_name_flag_698;
_Bool multiple_declare_699;
char* p_700;
int sline_701;
void* __right_value719 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* type_702=0;
char* name_703=0;
_Bool err_704=0;
void* __right_value720 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var30 = (void*)0;
struct sType* type_705=0;
char* name_706=0;
void* __right_value721 = (void*)0;
_Bool no_output_err_707;
_Bool no_comma_708;
_Bool no_output_come_code_709;
void* __right_value722 = (void*)0;
struct sNode* exp_710;
_Bool attr_define_711;
char* p_712;
int sline_713;
void* __right_value723 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* type_714=0;
char* name_715=0;
_Bool err_716=0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sFun* fun_717;
void* __right_value726 = (void*)0;
char* buf2_718;
struct list$1char$ph* multiple_assign_719;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1char$ph* __dec_obj178;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
char* buf3_720;
void* __right_value731 = (void*)0;
_Bool no_comma_721;
void* __right_value732 = (void*)0;
struct sNode* right_value_722;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value738 = (void*)0;
struct sNode* node_723;
struct sNode* __result_obj__412;
void* __right_value739 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c2_724=0;
char* Err_725=0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value744 = (void*)0;
struct sNode* node_726;
struct sNode* __result_obj__415;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_728;
void* __right_value747 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var33 = (void*)0;
struct sType* base_type_729=0;
char* name_730=0;
_Bool err_731=0;
void* __right_value748 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var34 = (void*)0;
struct sType* type2_732=0;
char* var_name_733=0;
_Bool no_comma_734;
void* __right_value749 = (void*)0;
struct sNode* exp_735;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
_Bool no_comma_748;
void* __right_value755 = (void*)0;
struct sNode* exp_749;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var35 = (void*)0;
struct sType* type2_752=0;
char* var_name_753=0;
_Bool no_comma_754;
void* __right_value764 = (void*)0;
struct sNode* exp_755;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
_Bool no_comma_756;
void* __right_value767 = (void*)0;
struct sNode* exp_757;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct sNode* right_node_758;
void* __right_value772 = (void*)0;
char* var_name2_759;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value777 = (void*)0;
struct sNode* node_760;
struct sNode* __result_obj__421;
void* __right_value778 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var36 = (void*)0;
struct sType* type_761=0;
char* name_762=0;
_Bool err_763=0;
void* __right_value779 = (void*)0;
char* __dec_obj191;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value791 = (void*)0;
struct sNode* self_node_769;
void* __right_value792 = (void*)0;
struct sNode* right_node_770;
void* __right_value793 = (void*)0;
struct sNode* node_771;
struct sNode* __result_obj__426;
void* __right_value794 = (void*)0;
struct sNode* __result_obj__427;
void* __right_value795 = (void*)0;
struct sNode* right_value_772;
void* __right_value796 = (void*)0;
struct sNode* __dec_obj199;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value801 = (void*)0;
struct sNode* node_773;
struct sNode* __result_obj__428;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
_Bool _elif_conditional1;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value807 = (void*)0;
struct sNode* node_774;
void* __right_value808 = (void*)0;
struct sNode* __dec_obj200;
struct sNode* __result_obj__429;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value812 = (void*)0;
struct sNode* node_775;
void* __right_value813 = (void*)0;
struct sNode* __dec_obj201;
struct sNode* __result_obj__430;
char* word_776;
void* __right_value814 = (void*)0;
char* __dec_obj202;
void* __right_value815 = (void*)0;
char* __dec_obj203;
_Bool is_type_name_flag_777;
void* __right_value816 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var37 = (void*)0;
struct sType* type_778=0;
char* name_779=0;
_Bool err_780=0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value819 = (void*)0;
struct sNode* node_781;
struct sNode* __result_obj__431;
struct sNode* right_value_782;
_Bool no_comma_783;
void* __right_value820 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value821 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value822 = (void*)0;
struct sNode* __dec_obj206;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value826 = (void*)0;
struct sNode* node_784;
struct sNode* __result_obj__432;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value830 = (void*)0;
struct sNode* node_785;
struct sNode* __result_obj__433;
void* __right_value831 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c3_786=0;
char* Err_787=0;
word_776 = (void*)0;
    sline_real_697=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_698=is_type_name(buf,info);
    multiple_declare_699=(_Bool)0;
    if(    is_type_name_flag_698) {
        p_700=info->p;
        sline_701=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value719=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_702=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
            name_703=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            err_704=multiple_assign_var29->v3;
            come_call_finalizer3(__right_value719,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            parse_sharp_v5(info);
            if(            err_704) {
                parse_sharp_v5(info);
                multiple_assign_var30=((struct tuple2$2sType$phchar$ph*)(__right_value720=parse_variable_name((struct sType*)come_increment_ref_count(type_702),(_Bool)1,info)));
                type_705=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_706=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                come_call_finalizer3(__right_value720,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value721=skip_block(info)));
                        (__right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        no_output_err_707=info->no_output_err;
                        no_comma_708=info->no_comma;
                        no_output_come_code_709=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_710=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_708;
                        info->no_output_err=no_output_err_707;
                        info->no_output_come_code=no_output_come_code_709;
                        ((exp_710) ? exp_710 = come_decrement_ref_count2(exp_710, ((struct sNode*)exp_710)->finalize, ((struct sNode*)exp_710)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_706,info)&&*info->p==44) {
                    multiple_declare_699=(_Bool)1;
                }
                come_call_finalizer3(type_705,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_706 = come_decrement_ref_count2(name_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_703 = come_decrement_ref_count2(name_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_700;
        info->sline=sline_701;
    }
    attr_define_711=(_Bool)0;
    if(    is_type_name_flag_698&&info->defining_class) {
        p_712=info->p;
        sline_713=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value723=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_714=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_715=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_716=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value723,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        parse_sharp_v5(info);
        if(        err_716&&strmemcmp(info->p,"self")) {
            attr_define_711=(_Bool)1;
        }
        info->p=p_712;
        info->sline=sline_713;
        come_call_finalizer3(type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_715 = come_decrement_ref_count2(name_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_717=((struct sFun*)(__right_value725=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value724=__builtin_string(buf))))));
    (__right_value724 = come_decrement_ref_count2(__right_value724, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value725,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_718=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_719=((void*)0);
        if(        *info->p==44) {
            __dec_obj178=multiple_assign_719;
            multiple_assign_719=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1436, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj178,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1char$ph$p_push_back(multiple_assign_719,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf2_718)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_720=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph$p_push_back(multiple_assign_719,(char*)come_increment_ref_count(come_call_cloner(string_clone, buf3_720)));
                (buf3_720 = come_decrement_ref_count2(buf3_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_721=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_722=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_721;
            parse_sharp_v5(info);
            __dec_obj179=right_value_722;
            right_value_722=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_722),info));
            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1466, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value737=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1466, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf2_718)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_719),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_722),info,(char*)come_increment_ref_count(xsprintf(""))))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_723=(struct sNode*)come_increment_ref_count(_inf_value5);
            come_call_finalizer3(__right_value737,sStoreNode_finalize, 0, 1, 0, 0, (void*)0);
            info->sline_real=sline_real_697;
            __result_obj__412 = come_increment_ref_count(node_723);
            ((right_value_722) ? right_value_722 = come_decrement_ref_count2(right_value_722, ((struct sNode*)right_value_722)->finalize, ((struct sNode*)right_value_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_723) ? node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (buf2_718 = come_decrement_ref_count2(buf2_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(multiple_assign_719,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__412) ? __result_obj__412 = come_decrement_ref_count2(__result_obj__412, ((struct sNode*)__result_obj__412)->finalize, ((struct sNode*)__result_obj__412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__412;
            ((right_value_722) ? right_value_722 = come_decrement_ref_count2(right_value_722, ((struct sNode*)right_value_722)->finalize, ((struct sNode*)right_value_722)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_723) ? node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value739=err_msg(info,"var requires a right value(%c)",*info->p)));
            come_exception_var_c2_724=multiple_assign_var32->v1;
            Err_725=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_725)?(puts(Err_725),exit(0)):(0));
            come_call_finalizer3(__right_value739,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_725 = come_decrement_ref_count2(Err_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (buf2_718 = come_decrement_ref_count2(buf2_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(multiple_assign_719,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1476, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value741=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "07var.c", 1476, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_726=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value741,sNewChannel_finalize, 0, 1, 0, 0, (void*)0);
        info->sline_real=sline_real_697;
        __result_obj__415 = come_increment_ref_count(node_726);
        ((node_726) ? node_726 = come_decrement_ref_count2(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__415) ? __result_obj__415 = come_decrement_ref_count2(__result_obj__415, ((struct sNode*)__result_obj__415)->finalize, ((struct sNode*)__result_obj__415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__415;
        ((node_726) ? node_726 = come_decrement_ref_count2(node_726, ((struct sNode*)node_726)->finalize, ((struct sNode*)node_726)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    multiple_declare_699) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_728=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1484, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        parse_sharp_v5(info);
        multiple_assign_var33=((struct tuple3$3sType$phchar$phbool$*)(__right_value747=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_729=(struct sType*)come_increment_ref_count(multiple_assign_var33->v1);
        name_730=(char*)come_increment_ref_count(multiple_assign_var33->v2);
        err_731=multiple_assign_var33->v3;
        come_call_finalizer3(__right_value747,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        parse_sharp_v5(info);
        if(        !err_731) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var34=((struct tuple2$2sType$phchar$ph*)(__right_value748=parse_variable_name((struct sType*)come_increment_ref_count(base_type_729),(_Bool)1,info)));
        type2_732=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
        var_name_733=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        come_call_finalizer3(__right_value748,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_732->mClass->mStruct&&list$1sNode$ph$p_length(type2_732->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_734=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_735=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_734;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_728,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1511, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_732),(char*)come_increment_ref_count(var_name_733),(struct sNode*)come_increment_ref_count(exp_735))));
                ((exp_735) ? exp_735 = come_decrement_ref_count2(exp_735, ((struct sNode*)exp_735)->finalize, ((struct sNode*)exp_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_748=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_749=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_748;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_728,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1521, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_732),(char*)come_increment_ref_count(var_name_733),(struct sNode*)come_increment_ref_count(exp_749))));
                ((exp_749) ? exp_749 = come_decrement_ref_count2(exp_749, ((struct sNode*)exp_749)->finalize, ((struct sNode*)exp_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_728,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1525, "struct tuple3$3sType$phchar$phvoid$p", tuple3$3sType$phchar$phvoid$p_finalize, tuple3$3sType$phchar$phvoid$p_clone, tuple3$3sType$phchar$phvoid$p_get_hash_key, tuple3$3sType$phchar$phvoid$p_equals)),(struct sType*)come_increment_ref_count(type2_732),(char*)come_increment_ref_count(var_name_733),((void*)0))));
        }
        while(*info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var35=((struct tuple2$2sType$phchar$ph*)(__right_value763=parse_variable_name((struct sType*)come_increment_ref_count(base_type_729),(_Bool)0,info)));
            type2_752=(struct sType*)come_increment_ref_count(multiple_assign_var35->v1);
            var_name_753=(char*)come_increment_ref_count(multiple_assign_var35->v2);
            come_call_finalizer3(__right_value763,tuple2$2sType$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_752->mClass->mStruct&&list$1sNode$ph$p_length(type2_752->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_754=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_755=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_754;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_728,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1547, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_752),(char*)come_increment_ref_count(var_name_753),(struct sNode*)come_increment_ref_count(exp_755))));
                    ((exp_755) ? exp_755 = come_decrement_ref_count2(exp_755, ((struct sNode*)exp_755)->finalize, ((struct sNode*)exp_755)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    no_comma_756=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_757=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_756;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_728,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1559, "struct tuple3$3sType$phchar$phsNode$ph", tuple3$3sType$phchar$phsNode$ph_finalize, tuple3$3sType$phchar$phsNode$ph_clone, tuple3$3sType$phchar$phsNode$ph_get_hash_key, tuple3$3sType$phchar$phsNode$ph_equals)),(struct sType*)come_increment_ref_count(type2_752),(char*)come_increment_ref_count(var_name_753),(struct sNode*)come_increment_ref_count(exp_757))));
                    ((exp_757) ? exp_757 = come_decrement_ref_count2(exp_757, ((struct sNode*)exp_757)->finalize, ((struct sNode*)exp_757)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(multiple_declare_728,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1563, "struct tuple3$3sType$phchar$phvoid$p", tuple3$3sType$phchar$phvoid$p_finalize, tuple3$3sType$phchar$phvoid$p_clone, tuple3$3sType$phchar$phvoid$p_get_hash_key, tuple3$3sType$phchar$phvoid$p_equals)),(struct sType*)come_increment_ref_count(type2_752),(char*)come_increment_ref_count(var_name_753),((void*)0))));
            }
            come_call_finalizer3(type2_752,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_753 = come_decrement_ref_count2(var_name_753, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_758=((void*)0);
        var_name2_759=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1570, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value776=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1570, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_728),(struct sType*)come_increment_ref_count(base_type_729),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_760=(struct sNode*)come_increment_ref_count(_inf_value7);
        come_call_finalizer3(__right_value776,sStoreNode_finalize, 0, 1, 0, 0, (void*)0);
        info->sline_real=sline_real_697;
        __result_obj__421 = come_increment_ref_count(node_760);
        come_call_finalizer3(multiple_declare_728,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_730 = come_decrement_ref_count2(name_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_732,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_733 = come_decrement_ref_count2(var_name_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_758) ? right_node_758 = come_decrement_ref_count2(right_node_758, ((struct sNode*)right_node_758)->finalize, ((struct sNode*)right_node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_759 = come_decrement_ref_count2(var_name2_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_760) ? node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__421) ? __result_obj__421 = come_decrement_ref_count2(__result_obj__421, ((struct sNode*)__result_obj__421)->finalize, ((struct sNode*)__result_obj__421)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__421;
        come_call_finalizer3(multiple_declare_728,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(base_type_729,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_730 = come_decrement_ref_count2(name_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_732,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_733 = come_decrement_ref_count2(var_name_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_758) ? right_node_758 = come_decrement_ref_count2(right_node_758, ((struct sNode*)right_node_758)->finalize, ((struct sNode*)right_node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_759 = come_decrement_ref_count2(var_name2_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_760) ? node_760 = come_decrement_ref_count2(node_760, ((struct sNode*)node_760)->finalize, ((struct sNode*)node_760)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    attr_define_711) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var36=((struct tuple3$3sType$phchar$phbool$*)(__right_value778=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_761=(struct sType*)come_increment_ref_count(multiple_assign_var36->v1);
        name_762=(char*)come_increment_ref_count(multiple_assign_var36->v2);
        err_763=multiple_assign_var36->v3;
        come_call_finalizer3(__right_value778,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        parse_sharp_v5(info);
        if(        !err_763) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj191=name_762;
        name_762=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph$p_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1593, "struct tuple2$2char$phsType$ph", tuple2$2char$phsType$ph_finalize, tuple2$2char$phsType$ph_clone, tuple2$2char$phsType$ph_get_hash_key, tuple2$2char$phsType$ph_equals)),(char*)come_increment_ref_count(name_762),(struct sType*)come_increment_ref_count(type_761))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1601, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value790=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1601, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_769=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value790,sLoadNode_finalize, 0, 1, 0, 0, (void*)0);
            right_node_770=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_771=(struct sNode*)come_increment_ref_count(store_field(self_node_769,(struct sNode*)come_increment_ref_count(right_node_770),(char*)come_increment_ref_count(name_762),info));
            info->sline_real=sline_real_697;
            __result_obj__426 = come_increment_ref_count(node_771);
            ((self_node_769) ? self_node_769 = come_decrement_ref_count2(self_node_769, ((struct sNode*)self_node_769)->finalize, ((struct sNode*)self_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_770) ? right_node_770 = come_decrement_ref_count2(right_node_770, ((struct sNode*)right_node_770)->finalize, ((struct sNode*)right_node_770)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_771) ? node_771 = come_decrement_ref_count2(node_771, ((struct sNode*)node_771)->finalize, ((struct sNode*)node_771)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_762 = come_decrement_ref_count2(name_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__426) ? __result_obj__426 = come_decrement_ref_count2(__result_obj__426, ((struct sNode*)__result_obj__426)->finalize, ((struct sNode*)__result_obj__426)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__426;
            ((self_node_769) ? self_node_769 = come_decrement_ref_count2(self_node_769, ((struct sNode*)self_node_769)->finalize, ((struct sNode*)self_node_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_770) ? right_node_770 = come_decrement_ref_count2(right_node_770, ((struct sNode*)right_node_770)->finalize, ((struct sNode*)right_node_770)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_771) ? node_771 = come_decrement_ref_count2(node_771, ((struct sNode*)node_771)->finalize, ((struct sNode*)node_771)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_697;
            __result_obj__427 = come_increment_ref_count(((struct sNode*)(__right_value794=create_null_node(info))));
            come_call_finalizer3(type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_762 = come_decrement_ref_count2(name_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value794) ? __right_value794 = come_decrement_ref_count2(__right_value794, ((struct sNode*)__right_value794)->finalize, ((struct sNode*)__right_value794)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__427) ? __result_obj__427 = come_decrement_ref_count2(__result_obj__427, ((struct sNode*)__result_obj__427)->finalize, ((struct sNode*)__result_obj__427)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__427;
        }
        come_call_finalizer3(type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_762 = come_decrement_ref_count2(name_762, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_698&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_772=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj199=right_value_772;
        right_value_772=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_772),info));
        if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1626, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value800=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1626, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_772),info,(char*)come_increment_ref_count(xsprintf(""))))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_773=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value800,sStoreNode_finalize, 0, 1, 0, 0, (void*)0);
        info->sline_real=sline_real_697;
        __result_obj__428 = come_increment_ref_count(node_773);
        ((right_value_772) ? right_value_772 = come_decrement_ref_count2(right_value_772, ((struct sNode*)right_value_772)->finalize, ((struct sNode*)right_value_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_773) ? node_773 = come_decrement_ref_count2(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__428) ? __result_obj__428 = come_decrement_ref_count2(__result_obj__428, ((struct sNode*)__result_obj__428)->finalize, ((struct sNode*)__result_obj__428)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__428;
        ((right_value_772) ? right_value_772 = come_decrement_ref_count2(right_value_772, ((struct sNode*)right_value_772)->finalize, ((struct sNode*)right_value_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_773) ? node_773 = come_decrement_ref_count2(node_773, ((struct sNode*)node_773)->finalize, ((struct sNode*)node_773)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_698||((struct sFun*)(__right_value803=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value802=__builtin_string(buf)))))))),    (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    come_call_finalizer3(__right_value803,sFun_finalize, 0, 1, 0, 0, (void*)0),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1631, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value806=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1631, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_774=(struct sNode*)come_increment_ref_count(_inf_value10);
        come_call_finalizer3(__right_value806,sLoadNode_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj200=node_774;
        node_774=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_774),info));
        if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_697;
        __result_obj__429 = come_increment_ref_count(node_774);
        ((node_774) ? node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__429) ? __result_obj__429 = come_decrement_ref_count2(__result_obj__429, ((struct sNode*)__result_obj__429)->finalize, ((struct sNode*)__result_obj__429)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__429;
        ((node_774) ? node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_698) {
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1639, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value811=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1639, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_775=(struct sNode*)come_increment_ref_count(_inf_value11);
        come_call_finalizer3(__right_value811,sLoadNode_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj201=node_775;
        node_775=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_775),info));
        if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); };
        info->sline_real=sline_real_697;
        __result_obj__430 = come_increment_ref_count(node_775);
        ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__430) ? __result_obj__430 = come_decrement_ref_count2(__result_obj__430, ((struct sNode*)__result_obj__430)->finalize, ((struct sNode*)__result_obj__430)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__430;
        ((node_775) ? node_775 = come_decrement_ref_count2(node_775, ((struct sNode*)node_775)->finalize, ((struct sNode*)node_775)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj202=word_776;
            word_776=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj203=word_776;
            word_776=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        is_type_name_flag_777=is_type_name(word_776,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_777) {
            parse_sharp_v5(info);
            multiple_assign_var37=((struct tuple3$3sType$phchar$phbool$*)(__right_value816=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_778=(struct sType*)come_increment_ref_count(multiple_assign_var37->v1);
            name_779=(char*)come_increment_ref_count(multiple_assign_var37->v2);
            err_780=multiple_assign_var37->v3;
            come_call_finalizer3(__right_value816,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            parse_sharp_v5(info);
            if(            !err_780) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1676, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value818=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1676, "struct sLoadNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_779),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_781=(struct sNode*)come_increment_ref_count(_inf_value12);
                come_call_finalizer3(__right_value818,sLoadNode_finalize, 0, 1, 0, 0, (void*)0);
                info->sline_real=sline_real_697;
                __result_obj__431 = come_increment_ref_count(node_781);
                ((node_781) ? node_781 = come_decrement_ref_count2(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(type_778,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_779 = come_decrement_ref_count2(name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_776 = come_decrement_ref_count2(word_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__431) ? __result_obj__431 = come_decrement_ref_count2(__result_obj__431, ((struct sNode*)__result_obj__431)->finalize, ((struct sNode*)__result_obj__431)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__431;
                ((node_781) ? node_781 = come_decrement_ref_count2(node_781, ((struct sNode*)node_781)->finalize, ((struct sNode*)node_781)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_782=((void*)0);
                if(                type_778->mClass->mStruct&&list$1sNode$ph$p_length(type_778->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_783=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj204=right_value_782;
                    right_value_782=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
                    info->no_comma=no_comma_783;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj205=right_value_782;
                    right_value_782=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj206=right_value_782;
                right_value_782=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_782),info));
                if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1705, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value825=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1705, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_779),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_778),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_782),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_784=(struct sNode*)come_increment_ref_count(_inf_value13);
                come_call_finalizer3(__right_value825,sStoreNode_finalize, 0, 1, 0, 0, (void*)0);
                info->sline_real=sline_real_697;
                __result_obj__432 = come_increment_ref_count(node_784);
                ((right_value_782) ? right_value_782 = come_decrement_ref_count2(right_value_782, ((struct sNode*)right_value_782)->finalize, ((struct sNode*)right_value_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_784) ? node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(type_778,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_779 = come_decrement_ref_count2(name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_776 = come_decrement_ref_count2(word_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__432) ? __result_obj__432 = come_decrement_ref_count2(__result_obj__432, ((struct sNode*)__result_obj__432)->finalize, ((struct sNode*)__result_obj__432)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__432;
                ((right_value_782) ? right_value_782 = come_decrement_ref_count2(right_value_782, ((struct sNode*)right_value_782)->finalize, ((struct sNode*)right_value_782)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_784) ? node_784 = come_decrement_ref_count2(node_784, ((struct sNode*)node_784)->finalize, ((struct sNode*)node_784)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1710, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value829=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1710, "struct sStoreNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_779),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_778),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf(""))))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_785=(struct sNode*)come_increment_ref_count(_inf_value14);
                come_call_finalizer3(__right_value829,sStoreNode_finalize, 0, 1, 0, 0, (void*)0);
                info->sline_real=sline_real_697;
                __result_obj__433 = come_increment_ref_count(node_785);
                ((node_785) ? node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(type_778,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_779 = come_decrement_ref_count2(name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_776 = come_decrement_ref_count2(word_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__433) ? __result_obj__433 = come_decrement_ref_count2(__result_obj__433, ((struct sNode*)__result_obj__433)->finalize, ((struct sNode*)__result_obj__433)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__433;
                ((node_785) ? node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            come_call_finalizer3(type_778,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_779 = come_decrement_ref_count2(name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_776 = come_decrement_ref_count2(word_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value831=err_msg(info,"unexpected word(%s)(1)",buf)));
    come_exception_var_c3_786=multiple_assign_var38->v1;
    Err_787=(char*)come_increment_ref_count(multiple_assign_var38->v2);
    ((Err_787)?(puts(Err_787),exit(0)):(0));
    come_call_finalizer3(__right_value831,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    exit(2);
    (Err_787 = come_decrement_ref_count2(Err_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
struct sNewChannel* __result_obj__413;
void* __right_value742 = (void*)0;
struct sNewChannel* result_727;
void* __right_value743 = (void*)0;
char* __dec_obj180;
struct sNewChannel* __result_obj__414;
    if(    self==(void*)0) {
        __result_obj__413 = (void*)0;
        return __result_obj__413;
    }
    result_727=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_727->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_727->sname;
        result_727->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_727->sline_real=self->sline_real;
    }
    __result_obj__414 = result_727;
    come_call_finalizer3(result_727,sNewChannel_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__414;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value750 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_736;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj181;
void* __right_value751 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_737;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj182;
void* __right_value752 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_738;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj183;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__416;
    if(    self->len==0) {
        litem_736=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value750=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1489, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_736->prev=((void*)0);
        litem_736->next=((void*)0);
        __dec_obj181=litem_736->item;
        litem_736->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_736;
        self->head=litem_736;
    }
    else if(    self->len==1) {
        litem_737=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value751=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1499, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_737->prev=self->head;
        litem_737->next=((void*)0);
        __dec_obj182=litem_737->item;
        litem_737->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_737;
        self->head->next=litem_737;
    }
    else {
        litem_738=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value752=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1509, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_738->prev=self->tail;
        litem_738->next=((void*)0);
        __dec_obj183=litem_738->item;
        litem_738->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj183,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_738;
        self->tail=litem_738;
    }
    self->len++;
    __result_obj__416 = self;
    come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__416;
}

static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self){
unsigned int result_739;
    result_739=0;
    result_739+=int_get_hash_key(((int)self->v1));
    result_739+=int_get_hash_key(((int)self->v2));
    result_739+=int_get_hash_key(((int)self->v3));
    return result_739;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_740;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_741;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_740=left->head;
    it2_741=right->head;
    while(it_740!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_740->item,it2_741->item)) {
            return (_Bool)0;
        }
        it_740=it_740->next;
        it2_741=it2_741->next;
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

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_742;
struct list_item$1sType$ph* it2_743;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_742=left->head;
    it2_743=right->head;
    while(it_742!=((void*)0)) {
        if(        !sType_equals(it_742->item,it2_743->item)) {
            return (_Bool)0;
        }
        it_742=it_742->next;
        it2_743=it2_743->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_744;
struct list_item$1sNode$ph* it2_745;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_744=left->head;
    it2_745=right->head;
    while(it_744!=((void*)0)) {
        if(        !sNode_equals(it_744->item,it2_745->item)) {
            return (_Bool)0;
        }
        it_744=it_744->next;
        it2_745=it2_745->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_746;
struct list_item$1char$ph* it2_747;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_746=left->head;
    it2_747=right->head;
    while(it_746!=((void*)0)) {
        if(        !string_equals(it_746->item,it2_747->item)) {
            return (_Bool)0;
        }
        it_746=it_746->next;
        it2_747=it2_747->next;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj184;
char* __dec_obj185;
struct sNode* __dec_obj186;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__417;
    __dec_obj184=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj185=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj186=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__417 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__417,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__417;
}

static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self){
struct tuple3$3sType$phchar$phvoid$p* __result_obj__418;
void* __right_value758 = (void*)0;
struct tuple3$3sType$phchar$phvoid$p* result_750;
void* __right_value759 = (void*)0;
struct sType* __dec_obj187;
void* __right_value760 = (void*)0;
char* __dec_obj188;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__419;
    if(    self==(void*)0) {
        __result_obj__418 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__418,tuple3$3sType$phchar$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__418;
    }
    result_750=(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "tuple3$3sType$phchar$phvoid$p_clone", 3, "struct tuple3$3sType$phchar$phvoid$p*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj187=result_750->v1;
        result_750->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj187,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj188=result_750->v2;
        result_750->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->v3=self->v3;
    }
    __result_obj__419 = come_increment_ref_count(result_750);
    come_call_finalizer3(result_750,tuple3$3sType$phchar$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__419,tuple3$3sType$phchar$phvoid$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__419;
}

static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self){
unsigned int result_751;
    result_751=0;
    result_751+=int_get_hash_key(((int)self->v1));
    result_751+=int_get_hash_key(((int)self->v2));
    result_751+=int_get_hash_key(((int)self->v3));
    return result_751;
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
struct sType* __dec_obj189;
char* __dec_obj190;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__420;
    __dec_obj189=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj189,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj190=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result_obj__420 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple3$3sType$phchar$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__420,tuple3$3sType$phchar$phvoid$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__420;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value780 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_764;
struct tuple2$2char$phsType$ph* __dec_obj192;
void* __right_value781 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_765;
struct tuple2$2char$phsType$ph* __dec_obj193;
void* __right_value782 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_766;
struct tuple2$2char$phsType$ph* __dec_obj194;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__422;
    if(    self->len==0) {
        litem_764=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value780=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1419, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_764->prev=((void*)0);
        litem_764->next=((void*)0);
        __dec_obj192=litem_764->item;
        litem_764->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_764;
        self->head=litem_764;
    }
    else if(    self->len==1) {
        litem_765=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value781=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1429, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_765->prev=self->head;
        litem_765->next=((void*)0);
        __dec_obj193=litem_765->item;
        litem_765->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj193,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_765;
        self->head->next=litem_765;
    }
    else {
        litem_766=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value782=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1439, "struct list_item$1tuple2$2char$phsType$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_766->prev=self->tail;
        litem_766->next=((void*)0);
        __dec_obj194=litem_766->item;
        litem_766->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj194,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_766;
        self->tail=litem_766;
    }
    self->len++;
    __result_obj__422 = self;
    come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__422;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2char$phsType$ph* __result_obj__423;
void* __right_value783 = (void*)0;
struct tuple2$2char$phsType$ph* result_767;
void* __right_value784 = (void*)0;
char* __dec_obj195;
void* __right_value785 = (void*)0;
struct sType* __dec_obj196;
struct tuple2$2char$phsType$ph* __result_obj__424;
    if(    self==(void*)0) {
        __result_obj__423 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__423,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__423;
    }
    result_767=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj195=result_767->v1;
        result_767->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj196=result_767->v2;
        result_767->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj196,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__424 = come_increment_ref_count(result_767);
    come_call_finalizer3(result_767,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__424,tuple2$2char$phsType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__424;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_768;
    result_768=0;
    result_768+=int_get_hash_key(((int)self->v1));
    result_768+=int_get_hash_key(((int)self->v2));
    return result_768;
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
char* __dec_obj197;
struct sType* __dec_obj198;
struct tuple2$2char$phsType$ph* __result_obj__425;
    __dec_obj197=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj198=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__425 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__425,tuple2$2char$phsType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__425;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_788;
void* __right_value832 = (void*)0;
struct sNode* exp_789;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value838 = (void*)0;
struct sNode* __result_obj__436;
void* __right_value839 = (void*)0;
struct sNode* __dec_obj209;
struct sNode* __result_obj__437;
node_788 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_789=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1736, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value834=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1736, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(exp_789),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result_obj__436 = come_increment_ref_count(((struct sNode*)(__right_value838=_inf_value15)));
        ((exp_789) ? exp_789 = come_decrement_ref_count2(exp_789, ((struct sNode*)exp_789)->finalize, ((struct sNode*)exp_789)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_788) ? node_788 = come_decrement_ref_count2(node_788, ((struct sNode*)node_788)->finalize, ((struct sNode*)node_788)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value834,sReadChannelNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value838) ? __right_value838 = come_decrement_ref_count2(__right_value838, ((struct sNode*)__right_value838)->finalize, ((struct sNode*)__right_value838)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__436) ? __result_obj__436 = come_decrement_ref_count2(__result_obj__436, ((struct sNode*)__result_obj__436)->finalize, ((struct sNode*)__result_obj__436)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__436;
        ((exp_789) ? exp_789 = come_decrement_ref_count2(exp_789, ((struct sNode*)exp_789)->finalize, ((struct sNode*)exp_789)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        __dec_obj209=node_788;
        node_788=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__437 = come_increment_ref_count(node_788);
    ((node_788) ? node_788 = come_decrement_ref_count2(node_788, ((struct sNode*)node_788)->finalize, ((struct sNode*)node_788)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__437) ? __result_obj__437 = come_decrement_ref_count2(__result_obj__437, ((struct sNode*)__result_obj__437)->finalize, ((struct sNode*)__result_obj__437)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__437;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__434;
void* __right_value835 = (void*)0;
struct sReadChannelNode* result_790;
void* __right_value836 = (void*)0;
char* __dec_obj207;
void* __right_value837 = (void*)0;
struct sNode* __dec_obj208;
struct sReadChannelNode* __result_obj__435;
    if(    self==(void*)0) {
        __result_obj__434 = (void*)0;
        return __result_obj__434;
    }
    result_790=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_790->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj207=result_790->sname;
        result_790->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj208=result_790->exp;
        result_790->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__435 = result_790;
    come_call_finalizer3(result_790,sReadChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__435;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value840 = (void*)0;
struct sNode* right_value_791;
void* __right_value841 = (void*)0;
struct sNode* __dec_obj210;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value848 = (void*)0;
struct sNode* __result_obj__440;
void* __right_value849 = (void*)0;
struct sNode* __result_obj__441;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_791=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj210=right_value_791;
        right_value_791=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_791),info));
        if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1759, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value843=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1759, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_791),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result_obj__440 = come_increment_ref_count(((struct sNode*)(__right_value848=_inf_value16)));
        ((right_value_791) ? right_value_791 = come_decrement_ref_count2(right_value_791, ((struct sNode*)right_value_791)->finalize, ((struct sNode*)right_value_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value843,sWriteChannelNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value848) ? __right_value848 = come_decrement_ref_count2(__right_value848, ((struct sNode*)__right_value848)->finalize, ((struct sNode*)__right_value848)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__440) ? __result_obj__440 = come_decrement_ref_count2(__result_obj__440, ((struct sNode*)__result_obj__440)->finalize, ((struct sNode*)__result_obj__440)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__440;
        ((right_value_791) ? right_value_791 = come_decrement_ref_count2(right_value_791, ((struct sNode*)right_value_791)->finalize, ((struct sNode*)right_value_791)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__441 = come_increment_ref_count(((struct sNode*)(__right_value849=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value849) ? __right_value849 = come_decrement_ref_count2(__right_value849, ((struct sNode*)__right_value849)->finalize, ((struct sNode*)__right_value849)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__441) ? __result_obj__441 = come_decrement_ref_count2(__result_obj__441, ((struct sNode*)__result_obj__441)->finalize, ((struct sNode*)__result_obj__441)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__441;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__438;
void* __right_value844 = (void*)0;
struct sWriteChannelNode* result_792;
void* __right_value845 = (void*)0;
char* __dec_obj211;
void* __right_value846 = (void*)0;
struct sNode* __dec_obj212;
void* __right_value847 = (void*)0;
struct sNode* __dec_obj213;
struct sWriteChannelNode* __result_obj__439;
    if(    self==(void*)0) {
        __result_obj__438 = (void*)0;
        return __result_obj__438;
    }
    result_792=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_792->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj211=result_792->sname;
        result_792->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_792->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj212=result_792->exp;
        result_792->exp=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->exp));
        if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj213=result_792->right_value;
        result_792->right_value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->right_value));
        if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count2(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__439 = result_792;
    come_call_finalizer3(result_792,sWriteChannelNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__439;
}

