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

struct buffer
{
    char* buf;
    int len;
    int size;
};

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

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
    _Bool mDefferRightValue;
    _Bool mChannel;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mException;
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
    _Bool mConstFun;
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
    _Bool mConstFun;
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
    struct sType* mObjType;
    char* mObjValue;
    _Bool mNoFree;
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
    _Bool in_method_block;
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

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sNullNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNilNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sAddNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sSubNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
};

struct sMultNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sDivNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sModNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sRShiftNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sLtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sGtNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEqNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sNotEq2Node
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sXOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sAndAndNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sOrOrNode
{
    int sline;
    char* sname;
    int sline_real;
    _Bool mQuote;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sCommaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
};

struct sConditionalNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
void come_push_stackframe_v2(char* sname, int sline, int id);
void come_pop_stackframe_v2();
void come_save_stackframe_v2(char* sname, int sline);
void stackframe_v2();
char* come_get_stackframe_v2();
void* come_calloc_v2(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_v2(void* mem);
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
void FILE_on_drop(struct _IO_FILE* self);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
int assert_v2(int exp);
_Bool wchar_t_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_equals(unsigned int* left, unsigned int* right);
_Bool wchar_t_operator_equals(unsigned int left, unsigned int right);
_Bool wchar_t_operator_not_equals(unsigned int left, unsigned int right);
_Bool wchar_tp_operator_equals(unsigned int* left, unsigned int* right);
_Bool wchar_tp_operator_not_equals(unsigned int* left, unsigned int* right);
unsigned int wchar_t_get_hash_key(unsigned int value);
unsigned int wchar_tp_get_hash_key(unsigned int* value);
char* wchar_t_to_string(unsigned int wc);
void int_times(int self, void* parent, void (*block)(void*,int));
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
void sVarTable_finalize(struct sVarTable* self);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
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
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info, _Bool skip_exception);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_of_match_lv_tables(struct sInfo* info);
void free_objects_on_break(struct sInfo* info);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
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
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self);
static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self);
static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);
char* sNullNode_kind(struct sNullNode* self);
_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sNullNode_finalize(struct sNullNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNode* create_null_node(struct sInfo* info);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);
char* sNilNode_kind(struct sNilNode* self);
_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);
static void sNilNode_finalize(struct sNilNode* self);
struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAddNode_kind(struct sAddNode* self);
_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);
static void sAddNode_finalize(struct sAddNode* self);
struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sSubNode_kind(struct sSubNode* self);
_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);
static void sSubNode_finalize(struct sSubNode* self);
struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sMultNode_kind(struct sMultNode* self);
_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);
static void sMultNode_finalize(struct sMultNode* self);
struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sDivNode_kind(struct sDivNode* self);
_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);
static void sDivNode_finalize(struct sDivNode* self);
struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sModNode_kind(struct sModNode* self);
_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);
static void sModNode_finalize(struct sModNode* self);
struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLShiftNode_kind(struct sLShiftNode* self);
_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);
static void sLShiftNode_finalize(struct sLShiftNode* self);
struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sRShiftNode_kind(struct sRShiftNode* self);
_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);
static void sRShiftNode_finalize(struct sRShiftNode* self);
struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtEqNode_kind(struct sGtEqNode* self);
_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);
static void sGtEqNode_finalize(struct sGtEqNode* self);
struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtEqNode_kind(struct sLtEqNode* self);
_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);
static void sLtEqNode_finalize(struct sLtEqNode* self);
struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sLtNode_kind(struct sLtNode* self);
_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);
static void sLtNode_finalize(struct sLtNode* self);
struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sGtNode_kind(struct sGtNode* self);
_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);
static void sGtNode_finalize(struct sGtNode* self);
struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEqNode_kind(struct sEqNode* self);
_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);
static void sEqNode_finalize(struct sEqNode* self);
struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEqNode_kind(struct sNotEqNode* self);
_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);
static void sNotEqNode_finalize(struct sNotEqNode* self);
struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sEq2Node_kind(struct sEq2Node* self);
_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info);
static void sEq2Node_finalize(struct sEq2Node* self);
struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sNotEq2Node_kind(struct sNotEq2Node* self);
_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndNode_kind(struct sAndNode* self);
_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);
static void sAndNode_finalize(struct sAndNode* self);
struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sXOrNode_kind(struct sXOrNode* self);
_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);
static void sXOrNode_finalize(struct sXOrNode* self);
struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrNode_kind(struct sOrNode* self);
_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);
static void sOrNode_finalize(struct sOrNode* self);
struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sAndAndNode_kind(struct sAndAndNode* self);
_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);
static void sAndAndNode_finalize(struct sAndAndNode* self);
struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);
char* sOrOrNode_kind(struct sOrOrNode* self);
_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);
static void sOrOrNode_finalize(struct sOrOrNode* self);
struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);
char* sCommaNode_kind(struct sCommaNode* self);
_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);
static void sCommaNode_finalize(struct sCommaNode* self);
struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
char* sConditionalNode_kind(struct sConditionalNode* self);
_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);
static void sConditionalNode_finalize(struct sConditionalNode* self);
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* mult_exp(struct sInfo* info);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__59,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_122;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_123;
void* __right_value52 = (void*)0;
struct list_item$1char$* litem_124;
struct list$1char$* __result_obj__58;
    if(    self->len==0) {
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1111, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1121, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1131, "struct list_item$1char$*"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        litem_124->item=item;
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result_obj__58 = self;
    return __result_obj__58;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_125;
struct list_item$1char$* prev_it_126;
    it_125=self->head;
    while(it_125!=((void*)0)) {
        prev_it_126=it_125;
        it_125=it_125->next;
        /*c*/ come_call_finalizer3(prev_it_126,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_127;
struct list$1char$p* __result_obj__62;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_127=0;    i_127<num_value;    i_127++    ){
        list$1char$p_push_back(self,values[i_127]);
    }
    __result_obj__62 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_128;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_129;
void* __right_value57 = (void*)0;
struct list_item$1char$p* litem_130;
struct list$1char$p* __result_obj__61;
    if(    self->len==0) {
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1111, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1121, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1131, "struct list_item$1char$p*"))));
        litem_130->prev=self->tail;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail->next=litem_130;
        self->tail=litem_130;
    }
    self->len++;
    __result_obj__61 = self;
    return __result_obj__61;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_131;
struct list_item$1char$p* prev_it_132;
    it_131=self->head;
    while(it_131!=((void*)0)) {
        prev_it_132=it_131;
        it_131=it_131->next;
        /*c*/ come_call_finalizer3(prev_it_132,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_133;
struct list$1short$* __result_obj__65;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_133=0;    i_133<num_value;    i_133++    ){
        list$1short$_push_back(self,values[i_133]);
    }
    __result_obj__65 = (struct list$1short$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__65,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__65;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_134;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_135;
void* __right_value62 = (void*)0;
struct list_item$1short$* litem_136;
struct list$1short$* __result_obj__64;
    if(    self->len==0) {
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1111, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1121, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1131, "struct list_item$1short$*"))));
        litem_136->prev=self->tail;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail->next=litem_136;
        self->tail=litem_136;
    }
    self->len++;
    __result_obj__64 = self;
    return __result_obj__64;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_137;
struct list_item$1short$* prev_it_138;
    it_137=self->head;
    while(it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*c*/ come_call_finalizer3(prev_it_138,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_139;
struct list$1int$* __result_obj__68;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_139=0;    i_139<num_value;    i_139++    ){
        list$1int$_push_back(self,values[i_139]);
    }
    __result_obj__68 = (struct list$1int$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__68,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__68;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_140;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_141;
void* __right_value67 = (void*)0;
struct list_item$1int$* litem_142;
struct list$1int$* __result_obj__67;
    if(    self->len==0) {
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1111, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1121, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1131, "struct list_item$1int$*"))));
        litem_142->prev=self->tail;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail->next=litem_142;
        self->tail=litem_142;
    }
    self->len++;
    __result_obj__67 = self;
    return __result_obj__67;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_143;
struct list_item$1int$* prev_it_144;
    it_143=self->head;
    while(it_143!=((void*)0)) {
        prev_it_144=it_143;
        it_143=it_143->next;
        /*c*/ come_call_finalizer3(prev_it_144,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_145;
struct list$1long$* __result_obj__71;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_145=0;    i_145<num_value;    i_145++    ){
        list$1long$_push_back(self,values[i_145]);
    }
    __result_obj__71 = (struct list$1long$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_146;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_147;
void* __right_value72 = (void*)0;
struct list_item$1long$* litem_148;
struct list$1long$* __result_obj__70;
    if(    self->len==0) {
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1111, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1121, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1131, "struct list_item$1long$*"))));
        litem_148->prev=self->tail;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail->next=litem_148;
        self->tail=litem_148;
    }
    self->len++;
    __result_obj__70 = self;
    return __result_obj__70;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_149;
struct list_item$1long$* prev_it_150;
    it_149=self->head;
    while(it_149!=((void*)0)) {
        prev_it_150=it_149;
        it_149=it_149->next;
        /*c*/ come_call_finalizer3(prev_it_150,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_151;
struct list$1float$* __result_obj__74;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_151=0;    i_151<num_value;    i_151++    ){
        list$1float$_push_back(self,values[i_151]);
    }
    __result_obj__74 = (struct list$1float$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__74,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_152;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_153;
void* __right_value77 = (void*)0;
struct list_item$1float$* litem_154;
struct list$1float$* __result_obj__73;
    if(    self->len==0) {
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1111, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1121, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1131, "struct list_item$1float$*"))));
        litem_154->prev=self->tail;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail->next=litem_154;
        self->tail=litem_154;
    }
    self->len++;
    __result_obj__73 = self;
    return __result_obj__73;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_155;
struct list_item$1float$* prev_it_156;
    it_155=self->head;
    while(it_155!=((void*)0)) {
        prev_it_156=it_155;
        it_155=it_155->next;
        /*c*/ come_call_finalizer3(prev_it_156,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_157;
struct list$1double$* __result_obj__77;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_157=0;    i_157<num_value;    i_157++    ){
        list$1double$_push_back(self,values[i_157]);
    }
    __result_obj__77 = (struct list$1double$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_158;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_159;
void* __right_value82 = (void*)0;
struct list_item$1double$* litem_160;
struct list$1double$* __result_obj__76;
    if(    self->len==0) {
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1111, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1121, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1131, "struct list_item$1double$*"))));
        litem_160->prev=self->tail;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail->next=litem_160;
        self->tail=litem_160;
    }
    self->len++;
    __result_obj__76 = self;
    return __result_obj__76;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_161;
struct list_item$1double$* prev_it_162;
    it_161=self->head;
    while(it_161!=((void*)0)) {
        prev_it_162=it_161;
        it_161=it_161->next;
        /*c*/ come_call_finalizer3(prev_it_162,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__111;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__111 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        /*c*/ come_call_finalizer3(prev_it_197,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_201;
char* __dec_obj13;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_202;
char* __dec_obj14;
void* __right_value131 = (void*)0;
struct list_item$1char$ph* litem_203;
char* __dec_obj15;
struct list$1char$ph* __result_obj__113;
    if(    self->len==0) {
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1111, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1121, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1131, "struct list_item$1char$ph*"))));
        litem_203->prev=self->tail;
        litem_203->next=((void*)0);
        __dec_obj15=litem_203->item,
        litem_203->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_203;
        self->tail=litem_203;
    }
    self->len++;
    __result_obj__113 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__113;
}

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __right_value225 = (void*)0;
struct sType* generics_type_239;
struct sType* __dec_obj40;
struct sClass* klass_267;
char* class_name_268;
struct sFun* operator_fun_269;
char* fun_name2_270;
struct sGenericsFun* generics_fun_271;
void* __right_value226 = (void*)0;
char* none_generics_name_272;
void* __right_value227 = (void*)0;
struct sType* obj_type_273;
void* __right_value228 = (void*)0;
char* __dec_obj41;
void* __right_value229 = (void*)0;
char* fun_name3_274;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sType* no_solved_type_277;
struct sType* __dec_obj42;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_278=0;
_Bool err_279=0;
_Bool __result_obj__182;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_286=0;
char* fun_name_287=0;
void* __right_value236 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun2_288=0;
char* fun_name2_289=0;
void* __right_value237 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var4 = (void*)0;
struct sFun* fun_290=0;
char* fun_name_291=0;
void* __right_value238 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_292=0;
char* fun_name2_293=0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* __dec_obj43;
int i_294;
void* __right_value241 = (void*)0;
char* new_fun_name_295;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
char* __dec_obj44;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* obj_type_296;
void* __right_value246 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var6 = (void*)0;
struct sFun* fun_297=0;
char* fun_name_298=0;
void* __right_value247 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun2_299=0;
char* fun_name2_300=0;
void* __right_value248 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun_301=0;
char* fun_name_302=0;
void* __right_value249 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var9 = (void*)0;
struct sFun* fun2_303=0;
char* fun_name2_304=0;
_Bool result_305;
struct sNode* obj_306;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_307;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sNode* node_315;
_Bool Value_316;
_Bool __result_obj__196;
fun_name2_270 = (void*)0;
memset(&i_294, 0, sizeof(int));
    generics_type_239=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_239->mNoSolvedGenericsType) {
        __dec_obj40=generics_type_239,
        generics_type_239=(struct sType*)come_increment_ref_count(generics_type_239->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    klass_267=type->mClass;
    class_name_268=klass_267->mName;
    operator_fun_269=((void*)0);
    generics_fun_271=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_272=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_273=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info,(_Bool)0));
        __dec_obj41=fun_name2_270,
        fun_name2_270=(char*)come_increment_ref_count(create_method_name(obj_type_273,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_274=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_272,fun_name));
        generics_fun_271=((struct sGenericsFun*)(__right_value230=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_274,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value230,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_271) {
            no_solved_type_277=(struct sType*)come_increment_ref_count(sType_clone(type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj42=no_solved_type_277,
                no_solved_type_277=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value233=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_270)),generics_fun_271,obj_type_273,info)));
            name_278=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_279=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value233,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_279) {
                __result_obj__182 = (_Bool)0;
                /*c*/ come_call_finalizer3(no_solved_type_277,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_278 = come_decrement_ref_count(name_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_272 = come_decrement_ref_count(none_generics_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_274 = come_decrement_ref_count(fun_name3_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(left_value,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(generics_type_239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_270 = come_decrement_ref_count(fun_name2_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__182;
            }
            operator_fun_269=((struct sFun*)(__right_value234=map$2char$phsFun$ph_operator_load_element(info->funcs,name_278)));
            /*c*/ come_call_finalizer3(__right_value234,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(no_solved_type_277,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_278 = come_decrement_ref_count(name_278, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value235=create_equals_automatically(obj_type_273,"equals",info)));
                fun_286=multiple_assign_var2->v1;
                fun_name_287=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*c*/ come_call_finalizer3(__right_value235,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value236=create_operator_equals_automatically(obj_type_273,"operator_equals",info)));
                fun2_288=multiple_assign_var3->v1;
                fun_name2_289=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                /*c*/ come_call_finalizer3(__right_value236,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_269=fun2_288;
                (fun_name_287 = come_decrement_ref_count(fun_name_287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_289 = come_decrement_ref_count(fun_name2_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var4=((struct tuple2$2sFun$pchar$ph*)(__right_value237=create_not_equals_automatically(obj_type_273,"not_equals",info)));
                fun_290=multiple_assign_var4->v1;
                fun_name_291=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*c*/ come_call_finalizer3(__right_value237,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value238=create_operator_not_equals_automatically(obj_type_273,"operator_not_equals",info)));
                fun2_292=multiple_assign_var5->v1;
                fun_name2_293=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*c*/ come_call_finalizer3(__right_value238,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                operator_fun_269=fun2_292;
                (fun_name_291 = come_decrement_ref_count(fun_name_291, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_293 = come_decrement_ref_count(fun_name2_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                operator_fun_269=((struct sFun*)(__right_value239=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_270)));
                /*c*/ come_call_finalizer3(__right_value239,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        (none_generics_name_272 = come_decrement_ref_count(none_generics_name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_274 = come_decrement_ref_count(fun_name3_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj43=fun_name2_270,
        fun_name2_270=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_294=128-1;        i_294>=1;        i_294--        ){
            new_fun_name_295=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_270,i_294));
            operator_fun_269=((struct sFun*)(__right_value242=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_295)));
            /*c*/ come_call_finalizer3(__right_value242,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_269) {
                __dec_obj44=fun_name2_270,
                fun_name2_270=(char*)come_increment_ref_count(__builtin_string(new_fun_name_295));
                __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_295 = come_decrement_ref_count(new_fun_name_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_295 = come_decrement_ref_count(new_fun_name_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_269==((void*)0)) {
            operator_fun_269=((struct sFun*)(__right_value244=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_270)));
            /*c*/ come_call_finalizer3(__right_value244,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            obj_type_296=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info,(_Bool)0));
            if(            operator_fun_269==((void*)0)) {
                if(                charp_operator_equals(fun_name,"operator_equals")) {
                    multiple_assign_var6=((struct tuple2$2sFun$pchar$ph*)(__right_value246=create_equals_automatically(obj_type_296,"equals",info)));
                    fun_297=multiple_assign_var6->v1;
                    fun_name_298=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                    /*c*/ come_call_finalizer3(__right_value246,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value247=create_operator_equals_automatically(obj_type_296,"operator_equals",info)));
                    fun2_299=multiple_assign_var7->v1;
                    fun_name2_300=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                    /*c*/ come_call_finalizer3(__right_value247,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    operator_fun_269=fun2_299;
                    (fun_name_298 = come_decrement_ref_count(fun_name_298, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name2_300 = come_decrement_ref_count(fun_name2_300, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                charp_operator_equals(fun_name,"operator_not_equals")) {
                    multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value248=create_not_equals_automatically(obj_type_296,"not_equals",info)));
                    fun_301=multiple_assign_var8->v1;
                    fun_name_302=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                    /*c*/ come_call_finalizer3(__right_value248,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var9=((struct tuple2$2sFun$pchar$ph*)(__right_value249=create_operator_not_equals_automatically(obj_type_296,"operator_not_equals",info)));
                    fun2_303=multiple_assign_var9->v1;
                    fun_name2_304=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                    /*c*/ come_call_finalizer3(__right_value249,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    operator_fun_269=fun2_303;
                    (fun_name_302 = come_decrement_ref_count(fun_name_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (fun_name2_304 = come_decrement_ref_count(fun_name2_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(obj_type_296,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    result_305=(_Bool)0;
    if(    operator_fun_269&&(list$1sType$ph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult"))) {
        obj_306=(struct sNode*)come_increment_ref_count(left_node);
        params_307=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "13op.c", 99, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_307,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "13op.c", 101, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_307,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "13op.c", 102, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
        node_315=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj_306),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_307),((void*)0),0,((void*)0),break_guard,info));
        Value_316=node_compile(node_315,info);
        if(        Value_316) {
            result_305=(_Bool)1;
        }
        else {
        }
        ((obj_306) ? obj_306 = come_decrement_ref_count(obj_306, ((struct sNode*)obj_306)->finalize, ((struct sNode*)obj_306)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_307,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_315) ? node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__196 = result_305;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_270 = come_decrement_ref_count(fun_name2_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__196;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__163;
void* __right_value187 = (void*)0;
struct sType* result_240;
void* __right_value188 = (void*)0;
struct sType* __dec_obj16;
void* __right_value189 = (void*)0;
struct sType* __dec_obj17;
void* __right_value197 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value198 = (void*)0;
struct sType* __dec_obj22;
void* __right_value199 = (void*)0;
struct sType* __dec_obj23;
void* __right_value201 = (void*)0;
struct sNode* __dec_obj24;
void* __right_value202 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value203 = (void*)0;
char* __dec_obj26;
void* __right_value204 = (void*)0;
char* __dec_obj27;
void* __right_value205 = (void*)0;
char* __dec_obj28;
void* __right_value213 = (void*)0;
struct list$1sNode$ph* __dec_obj32;
void* __right_value214 = (void*)0;
char* __dec_obj33;
void* __right_value215 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value223 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value224 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__177;
    if(    self==(void*)0) {
        __result_obj__163 = (void*)0;
        return __result_obj__163;
    }
    result_240=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_240->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj16=result_240->mOriginalLoadVarType,
        result_240->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj17=result_240->mChannelType,
        result_240->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_240->mGenericsTypes,
        result_240->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj22=result_240->mNoSolvedGenericsType,
        result_240->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj23=result_240->mAnyOriginalType,
        result_240->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj24=result_240->mSizeNum,
        result_240->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj25=result_240->mAlignas,
        result_240->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj26=result_240->mTupleName,
        result_240->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj27=result_240->mAttribute,
        result_240->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_240->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_240->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_240->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_240->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_240->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_240->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_240->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_240->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_240->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_240->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_240->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_240->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_240->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_240->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_240->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_240->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_240->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_240->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_240->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_240->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_240->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_240->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_240->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj28=result_240->mAsmName,
        result_240->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_240->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_240->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj32=result_240->mArrayNum,
        result_240->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_240->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_240->mOriginalTypeName,
        result_240->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_240->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_240->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_240->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_240->mParamTypes,
        result_240->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_240->mParamNames,
        result_240->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_240->mResultType,
        result_240->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->mVarArgs=self->mVarArgs;
    }
    __result_obj__177 = result_240;
    /*c*/ come_call_finalizer3(result_240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
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
struct list_item$1sType$ph* it_241;
struct list_item$1sType$ph* prev_it_242;
    it_241=self->head;
    while(it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_243;
struct list_item$1sNode$ph* prev_it_244;
    it_243=self->head;
    while(it_243!=((void*)0)) {
        prev_it_244=it_243;
        it_243=it_243->next;
        /*c*/ come_call_finalizer3(prev_it_244,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__164;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct list$1sType$ph* result_245;
struct list_item$1sType$ph* it_246;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1sType$ph* __result_obj__167;
    if(    self==((void*)0)) {
        __result_obj__164 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__164,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__164;
    }
    result_245=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_246=self->head;
    while(it_246!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_245,(struct sType*)come_increment_ref_count(sType_clone(it_246->item)));
        }
        else {
            list$1sType$ph_add(result_245,(struct sType*)come_increment_ref_count(sType_clone(it_246->item)));
        }
        it_246=it_246->next;
    }
    __result_obj__167 = (struct list$1sType$ph*)come_increment_ref_count(result_245);
    /*c*/ come_call_finalizer3(result_245,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__165;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__165 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__165,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value192 = (void*)0;
struct list_item$1sType$ph* litem_247;
struct sType* __dec_obj18;
void* __right_value193 = (void*)0;
struct list_item$1sType$ph* litem_248;
struct sType* __dec_obj19;
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_249;
struct sType* __dec_obj20;
struct list$1sType$ph* __result_obj__166;
    if(    self->len==0) {
        litem_247=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value192=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_247->prev=((void*)0);
        litem_247->next=((void*)0);
        __dec_obj18=litem_247->item,
        litem_247->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_247;
        self->head=litem_247;
    }
    else if(    self->len==1) {
        litem_248=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value193=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_248->prev=self->head;
        litem_248->next=((void*)0);
        __dec_obj19=litem_248->item,
        litem_248->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_248;
        self->head->next=litem_248;
    }
    else {
        litem_249=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_249->prev=self->tail;
        litem_249->next=((void*)0);
        __dec_obj20=litem_249->item,
        litem_249->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_249;
        self->tail=litem_249;
    }
    self->len++;
    __result_obj__166 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_250;
struct list_item$1sType$ph* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*c*/ come_call_finalizer3(prev_it_251,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__168;
void* __right_value200 = (void*)0;
struct sNode* result_252;
struct sNode* __result_obj__169;
    if(    self==(void*)0) {
        __result_obj__168 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__168;
    }
    result_252=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_252->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_252->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_252->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_252->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_252->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_252->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_252->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_252->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_252->kind=self->kind;
    }
    __result_obj__169 = (struct sNode*)come_increment_ref_count(result_252);
    ((result_252) ? result_252 = come_decrement_ref_count(result_252, ((struct sNode*)result_252)->finalize, ((struct sNode*)result_252)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__169;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__170;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1sNode$ph* result_253;
struct list_item$1sNode$ph* it_254;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1sNode$ph* __result_obj__173;
    if(    self==((void*)0)) {
        __result_obj__170 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__170,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__170;
    }
    result_253=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_254=self->head;
    while(it_254!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_253,(struct sNode*)come_increment_ref_count(sNode_clone(it_254->item)));
        }
        else {
            list$1sNode$ph_add(result_253,(struct sNode*)come_increment_ref_count(sNode_clone(it_254->item)));
        }
        it_254=it_254->next;
    }
    __result_obj__173 = (struct list$1sNode$ph*)come_increment_ref_count(result_253);
    /*c*/ come_call_finalizer3(result_253,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value208 = (void*)0;
struct list_item$1sNode$ph* litem_255;
struct sNode* __dec_obj29;
void* __right_value209 = (void*)0;
struct list_item$1sNode$ph* litem_256;
struct sNode* __dec_obj30;
void* __right_value210 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj31;
struct list$1sNode$ph* __result_obj__172;
    if(    self->len==0) {
        litem_255=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value208=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_255->prev=((void*)0);
        litem_255->next=((void*)0);
        __dec_obj29=litem_255->item,
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_255;
        self->head=litem_255;
    }
    else if(    self->len==1) {
        litem_256=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value209=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_256->prev=self->head;
        litem_256->next=((void*)0);
        __dec_obj30=litem_256->item,
        litem_256->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_256;
        self->head->next=litem_256;
    }
    else {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value210=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_257->prev=self->tail;
        litem_257->next=((void*)0);
        __dec_obj31=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_257;
        self->tail=litem_257;
    }
    self->len++;
    __result_obj__172 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__172;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_258;
struct list_item$1sNode$ph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        /*c*/ come_call_finalizer3(prev_it_259,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__174;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1char$ph* result_260;
struct list_item$1char$ph* it_261;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1char$ph* __result_obj__176;
    if(    self==((void*)0)) {
        __result_obj__174 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_260=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_261=self->head;
    while(it_261!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_260,(char*)come_increment_ref_count((char*)come_memdup(it_261->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_260,(char*)come_increment_ref_count((char*)come_memdup(it_261->item, "./comelang.h", 1030, "char*")));
        }
        it_261=it_261->next;
    }
    __result_obj__176 = (struct list$1char$ph*)come_increment_ref_count(result_260);
    /*c*/ come_call_finalizer3(result_260,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value218 = (void*)0;
struct list_item$1char$ph* litem_262;
char* __dec_obj35;
void* __right_value219 = (void*)0;
struct list_item$1char$ph* litem_263;
char* __dec_obj36;
void* __right_value220 = (void*)0;
struct list_item$1char$ph* litem_264;
char* __dec_obj37;
struct list$1char$ph* __result_obj__175;
    if(    self->len==0) {
        litem_262=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value218=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj35=litem_262->item,
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value219=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj36=litem_263->item,
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value220=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj37=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result_obj__175 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__175;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_265;
struct list_item$1char$ph* prev_it_266;
    it_265=self->head;
    while(it_265!=((void*)0)) {
        prev_it_266=it_265;
        it_265=it_265->next;
        /*c*/ come_call_finalizer3(prev_it_266,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_275;
unsigned int it_276;
struct sGenericsFun* __result_obj__178;
struct sGenericsFun* __result_obj__179;
struct sGenericsFun* __result_obj__180;
struct sGenericsFun* __result_obj__181;
    hash_275=string_get_hash_key(((char*)key))%self->size;
    it_276=hash_275;
    while((_Bool)1) {
        if(        self->item_existance[it_276]) {
            if(            string_equals(self->keys[it_276],key)) {
                __result_obj__178 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_276]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__178,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__178;
            }
            it_276++;
            if(            it_276>=self->size) {
                it_276=0;
            }
            else if(            it_276==hash_275) {
                __result_obj__179 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__179,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__179;
            }
        }
        else {
            __result_obj__180 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__180,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__180;
        }
    }
    __result_obj__181 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mImplType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_280;
unsigned int hash_281;
unsigned int it_282;
struct sFun* __result_obj__183;
struct sFun* __result_obj__184;
struct sFun* __result_obj__185;
struct sFun* __result_obj__186;
default_value_280 = (void*)0;
    memset(&default_value_280,0,sizeof(struct sFun*));
    hash_281=string_get_hash_key(((char*)key))%self->size;
    it_282=hash_281;
    while((_Bool)1) {
        if(        self->item_existance[it_282]) {
            if(            string_equals(self->keys[it_282],key)) {
                __result_obj__183 = (struct sFun*)come_increment_ref_count(self->items[it_282]);
                /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__183,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
            it_282++;
            if(            it_282>=self->size) {
                it_282=0;
            }
            else if(            it_282==hash_281) {
                __result_obj__184 = (struct sFun*)come_increment_ref_count(default_value_280);
                /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__184,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__184;
            }
        }
        else {
            __result_obj__185 = (struct sFun*)come_increment_ref_count(default_value_280);
            /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__185;
        }
    }
    __result_obj__186 = (struct sFun*)come_increment_ref_count(default_value_280);
    /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__186,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mResultType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mLambdaType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mBlock,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_283;
unsigned int hash_284;
unsigned int it_285;
struct sFun* __result_obj__187;
struct sFun* __result_obj__188;
struct sFun* __result_obj__189;
struct sFun* __result_obj__190;
default_value_283 = (void*)0;
    memset(&default_value_283,0,sizeof(struct sFun*));
    hash_284=string_get_hash_key(((char*)key))%self->size;
    it_285=hash_284;
    while((_Bool)1) {
        if(        self->item_existance[it_285]) {
            if(            string_equals(self->keys[it_285],key)) {
                __result_obj__187 = (struct sFun*)come_increment_ref_count(self->items[it_285]);
                /*c*/ come_call_finalizer3(default_value_283,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
            it_285++;
            if(            it_285>=self->size) {
                it_285=0;
            }
            else if(            it_285==hash_284) {
                __result_obj__188 = (struct sFun*)come_increment_ref_count(default_value_283);
                /*c*/ come_call_finalizer3(default_value_283,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__188;
            }
        }
        else {
            __result_obj__189 = (struct sFun*)come_increment_ref_count(default_value_283);
            /*c*/ come_call_finalizer3(default_value_283,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__189,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__189;
        }
    }
    __result_obj__190 = (struct sFun*)come_increment_ref_count(default_value_283);
    /*c*/ come_call_finalizer3(default_value_283,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__191;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__191 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_308;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        /*c*/ come_call_finalizer3(prev_it_309,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value252 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_310;
struct tuple2$2char$phsNode$ph* __dec_obj45;
void* __right_value253 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_311;
struct tuple2$2char$phsNode$ph* __dec_obj46;
void* __right_value254 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_312;
struct tuple2$2char$phsNode$ph* __dec_obj47;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__192;
    if(    self->len==0) {
        litem_310=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value252=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1041, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_310->prev=((void*)0);
        litem_310->next=((void*)0);
        __dec_obj45=litem_310->item,
        litem_310->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_310;
        self->head=litem_310;
    }
    else if(    self->len==1) {
        litem_311=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value253=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1051, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_311->prev=self->head;
        litem_311->next=((void*)0);
        __dec_obj46=litem_311->item,
        litem_311->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_311;
        self->head->next=litem_311;
    }
    else {
        litem_312=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value254=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1061, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_312->prev=self->tail;
        litem_312->next=((void*)0);
        __dec_obj47=litem_312->item,
        litem_312->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj47,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_312;
        self->tail=litem_312;
    }
    self->len++;
    __result_obj__192 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__193;
void* __right_value255 = (void*)0;
struct tuple2$2void$psNode$ph* result_313;
void* __right_value256 = (void*)0;
struct sNode* __dec_obj48;
struct tuple2$2void$psNode$ph* __result_obj__194;
    if(    self==(void*)0) {
        __result_obj__193 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__193,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__193;
    }
    result_313=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_313->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_313->v2,
        result_313->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj48 ? __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__194 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(result_313);
    /*c*/ come_call_finalizer3(result_313,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__194,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_314;
    result_314=0;
    result_314+=int_get_hash_key(((int)self->v1));
    result_314+=int_get_hash_key(((int)self->v2));
    return result_314;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2){
struct sNode* __dec_obj49;
struct tuple2$2void$psNode$ph* __result_obj__195;
    self->v1=v1;
    __dec_obj49=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj49 ? __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__195 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
struct sNullNode* __result_obj__197;
    ((struct sNodeBase*)(__right_value262=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value262,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__197 = (struct sNullNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,sNullNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

char* sNullNode_kind(struct sNullNode* self){
void* __right_value263 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = (char*)come_increment_ref_count(((char*)(__right_value263=__builtin_string("sNullNode"))));
    (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value266 = (void*)0;
char* __dec_obj50;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sType* __dec_obj51;
_Bool __result_obj__200;
    come_value_317=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 128, "struct CVALUE*"))));
    __dec_obj50=come_value_317->c_value,
    come_value_317->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj51=come_value_317->type,
    come_value_317->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 131, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_317->var=((void*)0);
    add_come_last_code(info,"%s",come_value_317->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_317));
    __result_obj__200 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_317,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sNullNode_finalize(struct sNullNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value270 = (void*)0;
struct list_item$1CVALUE$ph* litem_318;
struct CVALUE* __dec_obj52;
void* __right_value271 = (void*)0;
struct list_item$1CVALUE$ph* litem_319;
struct CVALUE* __dec_obj53;
void* __right_value272 = (void*)0;
struct list_item$1CVALUE$ph* litem_320;
struct CVALUE* __dec_obj54;
struct list$1CVALUE$ph* __result_obj__199;
    if(    self->len==0) {
        litem_318=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value270=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1111, "struct list_item$1CVALUE$ph*"))));
        litem_318->prev=((void*)0);
        litem_318->next=((void*)0);
        __dec_obj52=litem_318->item,
        litem_318->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_318;
        self->head=litem_318;
    }
    else if(    self->len==1) {
        litem_319=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value271=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1121, "struct list_item$1CVALUE$ph*"))));
        litem_319->prev=self->head;
        litem_319->next=((void*)0);
        __dec_obj53=litem_319->item,
        litem_319->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_319;
        self->head->next=litem_319;
    }
    else {
        litem_320=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value272=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1131, "struct list_item$1CVALUE$ph*"))));
        litem_320->prev=self->tail;
        litem_320->next=((void*)0);
        __dec_obj54=litem_320->item,
        litem_320->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj54,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_320;
        self->tail=litem_320;
    }
    self->len++;
    __result_obj__199 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

struct sNode* create_null_node(struct sInfo* info){
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* __right_value277 = (void*)0;
struct sNode* __result_obj__203;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 144, "struct sNode");
    _inf_obj_value1=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value274=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 144, "struct sNullNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result_obj__203 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value277=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value274,sNullNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value277) ? __right_value277 = come_decrement_ref_count(__right_value277, ((struct sNode*)__right_value277)->finalize, ((struct sNode*)__right_value277)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__203) ? __result_obj__203 = come_decrement_ref_count(__result_obj__203, ((struct sNode*)__result_obj__203)->finalize, ((struct sNode*)__result_obj__203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__203;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
struct sNullNode* __result_obj__201;
void* __right_value275 = (void*)0;
struct sNullNode* result_321;
void* __right_value276 = (void*)0;
char* __dec_obj55;
struct sNullNode* __result_obj__202;
    if(    self==(void*)0) {
        __result_obj__201 = (void*)0;
        return __result_obj__201;
    }
    result_321=(struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode*"));
    if(    self!=((void*)0)) {
        result_321->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj55=result_321->sname,
        result_321->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullNode_clone", 5, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_321->sline_real=self->sline_real;
    }
    __result_obj__202 = result_321;
    /*c*/ come_call_finalizer3(result_321,sNullNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __right_value278 = (void*)0;
struct sNilNode* __result_obj__204;
    ((struct sNodeBase*)(__right_value278=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value278,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__204 = (struct sNilNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNilNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__204,sNilNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

char* sNilNode_kind(struct sNilNode* self){
void* __right_value279 = (void*)0;
char* __result_obj__205;
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value279=__builtin_string("sNilNode"))));
    (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__205;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value282 = (void*)0;
char* __dec_obj56;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* __dec_obj57;
_Bool __result_obj__206;
    come_value_322=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 161, "struct CVALUE*"))));
    __dec_obj56=come_value_322->c_value,
    come_value_322->c_value=(char*)come_increment_ref_count(xsprintf("((void*)0)"));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=come_value_322->type,
    come_value_322->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 164, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_322->type->mNullValue=(_Bool)1;
    come_value_322->var=((void*)0);
    add_come_last_code(info,"%s",come_value_322->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_322));
    __result_obj__206 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_322,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static void sNilNode_finalize(struct sNilNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj59;
struct sAddNode* __result_obj__207;
    ((struct sNodeBase*)(__right_value286=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value286,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj58=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj59=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__207 = (struct sAddNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAddNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,sAddNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

char* sAddNode_kind(struct sAddNode* self){
void* __right_value289 = (void*)0;
char* __result_obj__208;
    __result_obj__208 = (char*)come_increment_ref_count(((char*)(__right_value289=__builtin_string("sAddNode"))));
    (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__208;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
struct sNode* left_node_323;
_Bool Value_324;
_Bool __result_obj__209;
void* __right_value290 = (void*)0;
struct CVALUE* left_value_325;
struct sNode* right_node_326;
_Bool Value_327;
_Bool __result_obj__210;
void* __right_value291 = (void*)0;
struct CVALUE* right_value_328;
struct sType* type_329;
char* fun_name_330;
_Bool calling_fun_331;
void* __right_value292 = (void*)0;
struct sType* result_type_332;
void* __right_value293 = (void*)0;
struct sType* __dec_obj60;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_333;
void* __right_value296 = (void*)0;
char* __dec_obj61;
void* __right_value297 = (void*)0;
struct sType* __dec_obj62;
_Bool __result_obj__211;
memset(&calling_fun_331, 0, sizeof(_Bool));
    left_node_323=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_324=node_compile(left_node_323,info);
    if(    !Value_324) {
        __result_obj__209 = (_Bool)0;
        ((left_node_323) ? left_node_323 = come_decrement_ref_count(left_node_323, ((struct sNode*)left_node_323)->finalize, ((struct sNode*)left_node_323)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__209;
    }
    else {
    }
    left_value_325=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_326=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_327=node_compile(right_node_326,info);
    if(    !Value_327) {
        __result_obj__210 = (_Bool)0;
        ((left_node_323) ? left_node_323 = come_decrement_ref_count(left_node_323, ((struct sNode*)left_node_323)->finalize, ((struct sNode*)left_node_323)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_325,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_326) ? right_node_326 = come_decrement_ref_count(right_node_326, ((struct sNode*)right_node_326)->finalize, ((struct sNode*)right_node_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__210;
    }
    else {
    }
    right_value_328=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_329=(struct sType*)come_increment_ref_count(left_value_325->type);
    fun_name_330="operator_add";
    if(    self->mQuote) {
        calling_fun_331=(_Bool)0;
    }
    else {
        calling_fun_331=operator_overload_fun(type_329,fun_name_330,(struct sNode*)come_increment_ref_count(left_node_323),(struct sNode*)come_increment_ref_count(right_node_326),(struct CVALUE*)come_increment_ref_count(left_value_325),(struct CVALUE*)come_increment_ref_count(right_value_328),(_Bool)0,info);
    }
    if(    !calling_fun_331) {
        result_type_332=(struct sType*)come_increment_ref_count(sType_clone(left_value_325->type));
        if(        right_value_328->type->mPointerNum>0) {
            __dec_obj60=result_type_332,
            result_type_332=(struct sType*)come_increment_ref_count(sType_clone(right_value_328->type));
            /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 228, "struct CVALUE*"))));
        __dec_obj61=come_value_333->c_value,
        come_value_333->c_value=(char*)come_increment_ref_count(xsprintf("%s+%s",left_value_325->c_value,right_value_328->c_value));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj62=come_value_333->type,
        come_value_333->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_332));
        /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_333->type->mHeap=(_Bool)0;
        come_value_333->var=((void*)0);
        add_come_last_code(info,"%s",come_value_333->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_333));
        /*c*/ come_call_finalizer3(result_type_332,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_333,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__211 = (_Bool)1;
    ((left_node_323) ? left_node_323 = come_decrement_ref_count(left_node_323, ((struct sNode*)left_node_323)->finalize, ((struct sNode*)left_node_323)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_325,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_326) ? right_node_326 = come_decrement_ref_count(right_node_326, ((struct sNode*)right_node_326)->finalize, ((struct sNode*)right_node_326)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_328,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_329,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

static void sAddNode_finalize(struct sAddNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value300 = (void*)0;
struct sNode* __dec_obj64;
struct sSubNode* __result_obj__212;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value298,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj63=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj64=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__212 = (struct sSubNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSubNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,sSubNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

char* sSubNode_kind(struct sSubNode* self){
void* __right_value301 = (void*)0;
char* __result_obj__213;
    __result_obj__213 = (char*)come_increment_ref_count(((char*)(__right_value301=__builtin_string("sSubNode"))));
    (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__213;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
struct sNode* left_node_334;
_Bool Value_335;
_Bool __result_obj__214;
void* __right_value302 = (void*)0;
struct CVALUE* left_value_336;
struct sNode* right_node_337;
_Bool Value_338;
_Bool __result_obj__215;
void* __right_value303 = (void*)0;
struct CVALUE* right_value_339;
struct sType* type_340;
char* fun_name_341;
_Bool calling_fun_342;
void* __right_value304 = (void*)0;
struct sType* result_type_343;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __dec_obj65;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct CVALUE* come_value_344;
void* __right_value310 = (void*)0;
char* __dec_obj66;
void* __right_value311 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__216;
memset(&calling_fun_342, 0, sizeof(_Bool));
    left_node_334=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_335=node_compile(left_node_334,info);
    if(    !Value_335) {
        __result_obj__214 = (_Bool)0;
        ((left_node_334) ? left_node_334 = come_decrement_ref_count(left_node_334, ((struct sNode*)left_node_334)->finalize, ((struct sNode*)left_node_334)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__214;
    }
    else {
    }
    left_value_336=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_337=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_338=node_compile(right_node_337,info);
    if(    !Value_338) {
        __result_obj__215 = (_Bool)0;
        ((left_node_334) ? left_node_334 = come_decrement_ref_count(left_node_334, ((struct sNode*)left_node_334)->finalize, ((struct sNode*)left_node_334)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_336,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_337) ? right_node_337 = come_decrement_ref_count(right_node_337, ((struct sNode*)right_node_337)->finalize, ((struct sNode*)right_node_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__215;
    }
    else {
    }
    right_value_339=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_340=(struct sType*)come_increment_ref_count(left_value_336->type);
    fun_name_341="operator_sub";
    if(    self->mQuote) {
        calling_fun_342=(_Bool)0;
    }
    else {
        calling_fun_342=operator_overload_fun(type_340,fun_name_341,(struct sNode*)come_increment_ref_count(left_node_334),(struct sNode*)come_increment_ref_count(right_node_337),(struct CVALUE*)come_increment_ref_count(left_value_336),(struct CVALUE*)come_increment_ref_count(right_value_339),(_Bool)0,info);
    }
    if(    !calling_fun_342) {
        result_type_343=(struct sType*)come_increment_ref_count(sType_clone(left_value_336->type));
        if(        left_value_336->type->mPointerNum>0&&right_value_339->type->mPointerNum>0) {
            __dec_obj65=result_type_343,
            result_type_343=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 293, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_value_344=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 296, "struct CVALUE*"))));
        __dec_obj66=come_value_344->c_value,
        come_value_344->c_value=(char*)come_increment_ref_count(xsprintf("%s-%s",left_value_336->c_value,right_value_339->c_value));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj67=come_value_344->type,
        come_value_344->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_343));
        /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_344->type->mHeap=(_Bool)0;
        come_value_344->var=((void*)0);
        add_come_last_code(info,"%s",come_value_344->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_344));
        /*c*/ come_call_finalizer3(result_type_343,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__216 = (_Bool)1;
    ((left_node_334) ? left_node_334 = come_decrement_ref_count(left_node_334, ((struct sNode*)left_node_334)->finalize, ((struct sNode*)left_node_334)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_336,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_337) ? right_node_337 = come_decrement_ref_count(right_node_337, ((struct sNode*)right_node_337)->finalize, ((struct sNode*)right_node_337)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_339,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_340,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static void sSubNode_finalize(struct sSubNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj68;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj69;
struct sMultNode* __result_obj__217;
    ((struct sNodeBase*)(__right_value312=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value312,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj68=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj68 ? __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj69=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__217 = (struct sMultNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMultNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,sMultNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

char* sMultNode_kind(struct sMultNode* self){
void* __right_value315 = (void*)0;
char* __result_obj__218;
    __result_obj__218 = (char*)come_increment_ref_count(((char*)(__right_value315=__builtin_string("sMultNode"))));
    (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__218;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
struct sNode* left_node_345;
_Bool Value_346;
_Bool __result_obj__219;
void* __right_value316 = (void*)0;
struct CVALUE* left_value_347;
struct sNode* right_node_348;
_Bool Value_349;
_Bool __result_obj__220;
void* __right_value317 = (void*)0;
struct CVALUE* right_value_350;
struct sType* type_351;
char* fun_name_352;
_Bool calling_fun_353;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_354;
void* __right_value320 = (void*)0;
char* __dec_obj70;
void* __right_value321 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__221;
memset(&calling_fun_353, 0, sizeof(_Bool));
    left_node_345=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_346=node_compile(left_node_345,info);
    if(    !Value_346) {
        __result_obj__219 = (_Bool)0;
        ((left_node_345) ? left_node_345 = come_decrement_ref_count(left_node_345, ((struct sNode*)left_node_345)->finalize, ((struct sNode*)left_node_345)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__219;
    }
    else {
    }
    left_value_347=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_348=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_349=node_compile(right_node_348,info);
    if(    !Value_349) {
        __result_obj__220 = (_Bool)0;
        ((left_node_345) ? left_node_345 = come_decrement_ref_count(left_node_345, ((struct sNode*)left_node_345)->finalize, ((struct sNode*)left_node_345)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_347,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_348) ? right_node_348 = come_decrement_ref_count(right_node_348, ((struct sNode*)right_node_348)->finalize, ((struct sNode*)right_node_348)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__220;
    }
    else {
    }
    right_value_350=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_351=(struct sType*)come_increment_ref_count(left_value_347->type);
    fun_name_352="operator_mult";
    if(    self->mQuote) {
        calling_fun_353=(_Bool)0;
    }
    else {
        calling_fun_353=operator_overload_fun(type_351,fun_name_352,(struct sNode*)come_increment_ref_count(left_node_345),(struct sNode*)come_increment_ref_count(right_node_348),(struct CVALUE*)come_increment_ref_count(left_value_347),(struct CVALUE*)come_increment_ref_count(right_value_350),(_Bool)0,info);
    }
    if(    !calling_fun_353) {
        come_value_354=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 359, "struct CVALUE*"))));
        __dec_obj70=come_value_354->c_value,
        come_value_354->c_value=(char*)come_increment_ref_count(xsprintf("%s*%s",left_value_347->c_value,right_value_350->c_value));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj71=come_value_354->type,
        come_value_354->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_347->type));
        /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_354->type->mHeap=(_Bool)0;
        come_value_354->var=((void*)0);
        add_come_last_code(info,"%s",come_value_354->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_354));
        /*c*/ come_call_finalizer3(come_value_354,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__221 = (_Bool)1;
    ((left_node_345) ? left_node_345 = come_decrement_ref_count(left_node_345, ((struct sNode*)left_node_345)->finalize, ((struct sNode*)left_node_345)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_347,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_348) ? right_node_348 = come_decrement_ref_count(right_node_348, ((struct sNode*)right_node_348)->finalize, ((struct sNode*)right_node_348)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_350,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static void sMultNode_finalize(struct sMultNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value324 = (void*)0;
struct sNode* __dec_obj73;
struct sDivNode* __result_obj__222;
    ((struct sNodeBase*)(__right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value322,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj72=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj73=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__222 = (struct sDivNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDivNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__222,sDivNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
}

char* sDivNode_kind(struct sDivNode* self){
void* __right_value325 = (void*)0;
char* __result_obj__223;
    __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value325=__builtin_string("sDivNode"))));
    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__223;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
struct sNode* left_node_355;
_Bool Value_356;
_Bool __result_obj__224;
void* __right_value326 = (void*)0;
struct CVALUE* left_value_357;
struct sNode* right_node_358;
_Bool Value_359;
_Bool __result_obj__225;
void* __right_value327 = (void*)0;
struct CVALUE* right_value_360;
struct sType* type_361;
char* fun_name_362;
_Bool calling_fun_363;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_364;
void* __right_value330 = (void*)0;
char* __dec_obj74;
void* __right_value331 = (void*)0;
struct sType* __dec_obj75;
_Bool __result_obj__226;
memset(&calling_fun_363, 0, sizeof(_Bool));
    left_node_355=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_356=node_compile(left_node_355,info);
    if(    !Value_356) {
        __result_obj__224 = (_Bool)0;
        ((left_node_355) ? left_node_355 = come_decrement_ref_count(left_node_355, ((struct sNode*)left_node_355)->finalize, ((struct sNode*)left_node_355)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__224;
    }
    else {
    }
    left_value_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_358=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_359=node_compile(right_node_358,info);
    if(    !Value_359) {
        __result_obj__225 = (_Bool)0;
        ((left_node_355) ? left_node_355 = come_decrement_ref_count(left_node_355, ((struct sNode*)left_node_355)->finalize, ((struct sNode*)left_node_355)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_358) ? right_node_358 = come_decrement_ref_count(right_node_358, ((struct sNode*)right_node_358)->finalize, ((struct sNode*)right_node_358)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__225;
    }
    else {
    }
    right_value_360=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_361=(struct sType*)come_increment_ref_count(left_value_357->type);
    fun_name_362="operator_div";
    if(    self->mQuote) {
        calling_fun_363=(_Bool)0;
    }
    else {
        calling_fun_363=operator_overload_fun(type_361,fun_name_362,(struct sNode*)come_increment_ref_count(left_node_355),(struct sNode*)come_increment_ref_count(right_node_358),(struct CVALUE*)come_increment_ref_count(left_value_357),(struct CVALUE*)come_increment_ref_count(right_value_360),(_Bool)0,info);
    }
    if(    !calling_fun_363) {
        come_value_364=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 422, "struct CVALUE*"))));
        __dec_obj74=come_value_364->c_value,
        come_value_364->c_value=(char*)come_increment_ref_count(xsprintf("%s/%s",left_value_357->c_value,right_value_360->c_value));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj75=come_value_364->type,
        come_value_364->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_357->type));
        /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_364->type->mHeap=(_Bool)0;
        come_value_364->var=((void*)0);
        add_come_last_code(info,"%s",come_value_364->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_364));
        /*c*/ come_call_finalizer3(come_value_364,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__226 = (_Bool)1;
    ((left_node_355) ? left_node_355 = come_decrement_ref_count(left_node_355, ((struct sNode*)left_node_355)->finalize, ((struct sNode*)left_node_355)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_358) ? right_node_358 = come_decrement_ref_count(right_node_358, ((struct sNode*)right_node_358)->finalize, ((struct sNode*)right_node_358)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_360,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_361,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static void sDivNode_finalize(struct sDivNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj77;
struct sModNode* __result_obj__227;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value332,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj76=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj77=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__227 = (struct sModNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sModNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,sModNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

char* sModNode_kind(struct sModNode* self){
void* __right_value335 = (void*)0;
char* __result_obj__228;
    __result_obj__228 = (char*)come_increment_ref_count(((char*)(__right_value335=__builtin_string("sModNode"))));
    (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__228;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
struct sNode* left_node_365;
_Bool Value_366;
_Bool __result_obj__229;
void* __right_value336 = (void*)0;
struct CVALUE* left_value_367;
struct sNode* right_node_368;
_Bool Value_369;
_Bool __result_obj__230;
void* __right_value337 = (void*)0;
struct CVALUE* right_value_370;
struct sType* type_371;
char* fun_name_372;
_Bool calling_fun_373;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value340 = (void*)0;
char* __dec_obj78;
void* __right_value341 = (void*)0;
struct sType* __dec_obj79;
_Bool __result_obj__231;
memset(&calling_fun_373, 0, sizeof(_Bool));
    left_node_365=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_366=node_compile(left_node_365,info);
    if(    !Value_366) {
        __result_obj__229 = (_Bool)0;
        ((left_node_365) ? left_node_365 = come_decrement_ref_count(left_node_365, ((struct sNode*)left_node_365)->finalize, ((struct sNode*)left_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__229;
    }
    else {
    }
    left_value_367=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_368=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_369=node_compile(right_node_368,info);
    if(    !Value_369) {
        __result_obj__230 = (_Bool)0;
        ((left_node_365) ? left_node_365 = come_decrement_ref_count(left_node_365, ((struct sNode*)left_node_365)->finalize, ((struct sNode*)left_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_367,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_368) ? right_node_368 = come_decrement_ref_count(right_node_368, ((struct sNode*)right_node_368)->finalize, ((struct sNode*)right_node_368)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__230;
    }
    else {
    }
    right_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_371=(struct sType*)come_increment_ref_count(left_value_367->type);
    fun_name_372="operator_mod";
    if(    self->mQuote) {
        calling_fun_373=(_Bool)0;
    }
    else {
        calling_fun_373=operator_overload_fun(type_371,fun_name_372,(struct sNode*)come_increment_ref_count(left_node_365),(struct sNode*)come_increment_ref_count(right_node_368),(struct CVALUE*)come_increment_ref_count(left_value_367),(struct CVALUE*)come_increment_ref_count(right_value_370),(_Bool)0,info);
    }
    if(    !calling_fun_373) {
        come_value_374=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 485, "struct CVALUE*"))));
        __dec_obj78=come_value_374->c_value,
        come_value_374->c_value=(char*)come_increment_ref_count(xsprintf("%s%%%s",left_value_367->c_value,right_value_370->c_value));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj79=come_value_374->type,
        come_value_374->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_367->type));
        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_374->type->mHeap=(_Bool)0;
        come_value_374->var=((void*)0);
        add_come_last_code(info,"%s",come_value_374->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_374));
        /*c*/ come_call_finalizer3(come_value_374,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__231 = (_Bool)1;
    ((left_node_365) ? left_node_365 = come_decrement_ref_count(left_node_365, ((struct sNode*)left_node_365)->finalize, ((struct sNode*)left_node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_367,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_368) ? right_node_368 = come_decrement_ref_count(right_node_368, ((struct sNode*)right_node_368)->finalize, ((struct sNode*)right_node_368)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_370,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

static void sModNode_finalize(struct sModNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj81;
struct sLShiftNode* __result_obj__232;
    ((struct sNodeBase*)(__right_value342=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value342,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj80=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj80 ? __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj81=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj81 ? __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__232 = (struct sLShiftNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__232,sLShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__232;
}

char* sLShiftNode_kind(struct sLShiftNode* self){
void* __right_value345 = (void*)0;
char* __result_obj__233;
    __result_obj__233 = (char*)come_increment_ref_count(((char*)(__right_value345=__builtin_string("sLShiftNode"))));
    (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__233;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
struct sNode* left_node_375;
_Bool Value_376;
_Bool __result_obj__234;
void* __right_value346 = (void*)0;
struct CVALUE* left_value_377;
struct sNode* right_node_378;
_Bool Value_379;
_Bool __result_obj__235;
void* __right_value347 = (void*)0;
struct CVALUE* right_value_380;
struct sType* type_381;
char* fun_name_382;
_Bool calling_fun_383;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value350 = (void*)0;
char* __dec_obj82;
void* __right_value351 = (void*)0;
struct sType* __dec_obj83;
_Bool __result_obj__236;
memset(&calling_fun_383, 0, sizeof(_Bool));
    left_node_375=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_376=node_compile(left_node_375,info);
    if(    !Value_376) {
        __result_obj__234 = (_Bool)0;
        ((left_node_375) ? left_node_375 = come_decrement_ref_count(left_node_375, ((struct sNode*)left_node_375)->finalize, ((struct sNode*)left_node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__234;
    }
    else {
    }
    left_value_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_378=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_379=node_compile(right_node_378,info);
    if(    !Value_379) {
        __result_obj__235 = (_Bool)0;
        ((left_node_375) ? left_node_375 = come_decrement_ref_count(left_node_375, ((struct sNode*)left_node_375)->finalize, ((struct sNode*)left_node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_377,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_378) ? right_node_378 = come_decrement_ref_count(right_node_378, ((struct sNode*)right_node_378)->finalize, ((struct sNode*)right_node_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__235;
    }
    else {
    }
    right_value_380=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_381=(struct sType*)come_increment_ref_count(left_value_377->type);
    fun_name_382="operator_lshift";
    if(    self->mQuote) {
        calling_fun_383=(_Bool)0;
    }
    else {
        calling_fun_383=operator_overload_fun(type_381,fun_name_382,(struct sNode*)come_increment_ref_count(left_node_375),(struct sNode*)come_increment_ref_count(right_node_378),(struct CVALUE*)come_increment_ref_count(left_value_377),(struct CVALUE*)come_increment_ref_count(right_value_380),(_Bool)0,info);
    }
    if(    !calling_fun_383) {
        come_value_384=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 549, "struct CVALUE*"))));
        __dec_obj82=come_value_384->c_value,
        come_value_384->c_value=(char*)come_increment_ref_count(xsprintf("%s<<%s",left_value_377->c_value,right_value_380->c_value));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj83=come_value_384->type,
        come_value_384->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_377->type));
        /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_384->type->mHeap=(_Bool)0;
        come_value_384->var=((void*)0);
        add_come_last_code(info,"%s",come_value_384->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_384));
        /*c*/ come_call_finalizer3(come_value_384,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__236 = (_Bool)1;
    ((left_node_375) ? left_node_375 = come_decrement_ref_count(left_node_375, ((struct sNode*)left_node_375)->finalize, ((struct sNode*)left_node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_377,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_378) ? right_node_378 = come_decrement_ref_count(right_node_378, ((struct sNode*)right_node_378)->finalize, ((struct sNode*)right_node_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_380,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_381,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__236;
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj84;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj85;
struct sRShiftNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value352=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value352,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj84=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj85=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj85 ? __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__237 = (struct sRShiftNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sRShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,sRShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

char* sRShiftNode_kind(struct sRShiftNode* self){
void* __right_value355 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = (char*)come_increment_ref_count(((char*)(__right_value355=__builtin_string("sRShiftNode"))));
    (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
struct sNode* left_node_385;
_Bool Value_386;
_Bool __result_obj__239;
void* __right_value356 = (void*)0;
struct CVALUE* left_value_387;
struct sNode* right_node_388;
_Bool Value_389;
_Bool __result_obj__240;
void* __right_value357 = (void*)0;
struct CVALUE* right_value_390;
struct sType* type_391;
char* fun_name_392;
_Bool calling_fun_393;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value360 = (void*)0;
char* __dec_obj86;
void* __right_value361 = (void*)0;
struct sType* __dec_obj87;
_Bool __result_obj__241;
memset(&calling_fun_393, 0, sizeof(_Bool));
    left_node_385=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_386=node_compile(left_node_385,info);
    if(    !Value_386) {
        __result_obj__239 = (_Bool)0;
        ((left_node_385) ? left_node_385 = come_decrement_ref_count(left_node_385, ((struct sNode*)left_node_385)->finalize, ((struct sNode*)left_node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__239;
    }
    else {
    }
    left_value_387=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_388=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_389=node_compile(right_node_388,info);
    if(    !Value_389) {
        __result_obj__240 = (_Bool)0;
        ((left_node_385) ? left_node_385 = come_decrement_ref_count(left_node_385, ((struct sNode*)left_node_385)->finalize, ((struct sNode*)left_node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_388) ? right_node_388 = come_decrement_ref_count(right_node_388, ((struct sNode*)right_node_388)->finalize, ((struct sNode*)right_node_388)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__240;
    }
    else {
    }
    right_value_390=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_391=(struct sType*)come_increment_ref_count(left_value_387->type);
    fun_name_392="operator_rshift";
    if(    self->mQuote) {
        calling_fun_393=(_Bool)0;
    }
    else {
        calling_fun_393=operator_overload_fun(type_391,fun_name_392,(struct sNode*)come_increment_ref_count(left_node_385),(struct sNode*)come_increment_ref_count(right_node_388),(struct CVALUE*)come_increment_ref_count(left_value_387),(struct CVALUE*)come_increment_ref_count(right_value_390),(_Bool)0,info);
    }
    if(    !calling_fun_393) {
        come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 612, "struct CVALUE*"))));
        __dec_obj86=come_value_394->c_value,
        come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("%s>>%s",left_value_387->c_value,right_value_390->c_value));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj87=come_value_394->type,
        come_value_394->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_387->type));
        /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_394->type->mHeap=(_Bool)0;
        come_value_394->var=((void*)0);
        add_come_last_code(info,"%s",come_value_394->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
        /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__241 = (_Bool)1;
    ((left_node_385) ? left_node_385 = come_decrement_ref_count(left_node_385, ((struct sNode*)left_node_385)->finalize, ((struct sNode*)left_node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_388) ? right_node_388 = come_decrement_ref_count(right_node_388, ((struct sNode*)right_node_388)->finalize, ((struct sNode*)right_node_388)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_390,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_391,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* __dec_obj88;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj89;
struct sGtEqNode* __result_obj__242;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value362,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj88=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj88 ? __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj89=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj89 ? __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__242 = (struct sGtEqNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__242,sGtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

char* sGtEqNode_kind(struct sGtEqNode* self){
void* __right_value365 = (void*)0;
char* __result_obj__243;
    __result_obj__243 = (char*)come_increment_ref_count(((char*)(__right_value365=__builtin_string("sGtEqNode"))));
    (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__243;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
struct sNode* left_node_395;
_Bool Value_396;
_Bool __result_obj__244;
void* __right_value366 = (void*)0;
struct CVALUE* left_value_397;
struct sNode* right_node_398;
_Bool Value_399;
_Bool __result_obj__245;
void* __right_value367 = (void*)0;
struct CVALUE* right_value_400;
struct sType* type_401;
char* fun_name_402;
_Bool calling_fun_403;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value370 = (void*)0;
char* __dec_obj90;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sType* __dec_obj91;
_Bool __result_obj__246;
memset(&calling_fun_403, 0, sizeof(_Bool));
    left_node_395=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_396=node_compile(left_node_395,info);
    if(    !Value_396) {
        __result_obj__244 = (_Bool)0;
        ((left_node_395) ? left_node_395 = come_decrement_ref_count(left_node_395, ((struct sNode*)left_node_395)->finalize, ((struct sNode*)left_node_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
    }
    else {
    }
    left_value_397=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_398=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_399=node_compile(right_node_398,info);
    if(    !Value_399) {
        __result_obj__245 = (_Bool)0;
        ((left_node_395) ? left_node_395 = come_decrement_ref_count(left_node_395, ((struct sNode*)left_node_395)->finalize, ((struct sNode*)left_node_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_398) ? right_node_398 = come_decrement_ref_count(right_node_398, ((struct sNode*)right_node_398)->finalize, ((struct sNode*)right_node_398)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__245;
    }
    else {
    }
    right_value_400=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_401=(struct sType*)come_increment_ref_count(left_value_397->type);
    fun_name_402="operator_gteq";
    if(    self->mQuote) {
        calling_fun_403=(_Bool)0;
    }
    else {
        calling_fun_403=operator_overload_fun(type_401,fun_name_402,(struct sNode*)come_increment_ref_count(left_node_395),(struct sNode*)come_increment_ref_count(right_node_398),(struct CVALUE*)come_increment_ref_count(left_value_397),(struct CVALUE*)come_increment_ref_count(right_value_400),(_Bool)0,info);
    }
    if(    !calling_fun_403) {
        come_value_404=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 675, "struct CVALUE*"))));
        __dec_obj90=come_value_404->c_value,
        come_value_404->c_value=(char*)come_increment_ref_count(xsprintf("%s>=%s",left_value_397->c_value,right_value_400->c_value));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj91=come_value_404->type,
        come_value_404->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 678, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_404->var=((void*)0);
        add_come_last_code(info,"%s",come_value_404->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_404));
        /*c*/ come_call_finalizer3(come_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__246 = (_Bool)1;
    ((left_node_395) ? left_node_395 = come_decrement_ref_count(left_node_395, ((struct sNode*)left_node_395)->finalize, ((struct sNode*)left_node_395)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_397,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_398) ? right_node_398 = come_decrement_ref_count(right_node_398, ((struct sNode*)right_node_398)->finalize, ((struct sNode*)right_node_398)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_400,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_401,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* __dec_obj92;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj93;
struct sLtEqNode* __result_obj__247;
    ((struct sNodeBase*)(__right_value374=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value374,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj92=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj93=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__247 = (struct sLtEqNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sLtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

char* sLtEqNode_kind(struct sLtEqNode* self){
void* __right_value377 = (void*)0;
char* __result_obj__248;
    __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value377=__builtin_string("sLtEqNode"))));
    (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__248;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
struct sNode* left_node_405;
_Bool Value_406;
_Bool __result_obj__249;
void* __right_value378 = (void*)0;
struct CVALUE* left_value_407;
struct sNode* right_node_408;
_Bool Value_409;
_Bool __result_obj__250;
void* __right_value379 = (void*)0;
struct CVALUE* right_value_410;
struct sType* type_411;
char* fun_name_412;
_Bool calling_fun_413;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value382 = (void*)0;
char* __dec_obj94;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sType* __dec_obj95;
_Bool __result_obj__251;
memset(&calling_fun_413, 0, sizeof(_Bool));
    left_node_405=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_406=node_compile(left_node_405,info);
    if(    !Value_406) {
        __result_obj__249 = (_Bool)0;
        ((left_node_405) ? left_node_405 = come_decrement_ref_count(left_node_405, ((struct sNode*)left_node_405)->finalize, ((struct sNode*)left_node_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__249;
    }
    else {
    }
    left_value_407=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_408=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_409=node_compile(right_node_408,info);
    if(    !Value_409) {
        __result_obj__250 = (_Bool)0;
        ((left_node_405) ? left_node_405 = come_decrement_ref_count(left_node_405, ((struct sNode*)left_node_405)->finalize, ((struct sNode*)left_node_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_408) ? right_node_408 = come_decrement_ref_count(right_node_408, ((struct sNode*)right_node_408)->finalize, ((struct sNode*)right_node_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__250;
    }
    else {
    }
    right_value_410=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_411=(struct sType*)come_increment_ref_count(left_value_407->type);
    fun_name_412="operator_lteq";
    if(    self->mQuote) {
        calling_fun_413=(_Bool)0;
    }
    else {
        calling_fun_413=operator_overload_fun(type_411,fun_name_412,(struct sNode*)come_increment_ref_count(left_node_405),(struct sNode*)come_increment_ref_count(right_node_408),(struct CVALUE*)come_increment_ref_count(left_value_407),(struct CVALUE*)come_increment_ref_count(right_value_410),(_Bool)0,info);
    }
    if(    !calling_fun_413) {
        come_value_414=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 737, "struct CVALUE*"))));
        __dec_obj94=come_value_414->c_value,
        come_value_414->c_value=(char*)come_increment_ref_count(xsprintf("%s<=%s",left_value_407->c_value,right_value_410->c_value));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj95=come_value_414->type,
        come_value_414->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 740, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_414->var=((void*)0);
        add_come_last_code(info,"%s",come_value_414->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
        /*c*/ come_call_finalizer3(come_value_414,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__251 = (_Bool)1;
    ((left_node_405) ? left_node_405 = come_decrement_ref_count(left_node_405, ((struct sNode*)left_node_405)->finalize, ((struct sNode*)left_node_405)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_408) ? right_node_408 = come_decrement_ref_count(right_node_408, ((struct sNode*)right_node_408)->finalize, ((struct sNode*)right_node_408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_410,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_411,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct sNode* __dec_obj96;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj97;
struct sLtNode* __result_obj__252;
    ((struct sNodeBase*)(__right_value386=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value386,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj96=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj96 ? __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj97=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj97 ? __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__252 = (struct sLtNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__252,sLtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

char* sLtNode_kind(struct sLtNode* self){
void* __right_value389 = (void*)0;
char* __result_obj__253;
    __result_obj__253 = (char*)come_increment_ref_count(((char*)(__right_value389=__builtin_string("sLtNode"))));
    (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__253 = come_decrement_ref_count(__result_obj__253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
struct sNode* left_node_415;
_Bool Value_416;
_Bool __result_obj__254;
void* __right_value390 = (void*)0;
struct CVALUE* left_value_417;
struct sNode* right_node_418;
_Bool Value_419;
_Bool __result_obj__255;
void* __right_value391 = (void*)0;
struct CVALUE* right_value_420;
struct sType* type_421;
char* fun_name_422;
_Bool calling_fun_423;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value394 = (void*)0;
char* __dec_obj98;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* __dec_obj99;
_Bool __result_obj__256;
memset(&calling_fun_423, 0, sizeof(_Bool));
    left_node_415=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_416=node_compile(left_node_415,info);
    if(    !Value_416) {
        __result_obj__254 = (_Bool)0;
        ((left_node_415) ? left_node_415 = come_decrement_ref_count(left_node_415, ((struct sNode*)left_node_415)->finalize, ((struct sNode*)left_node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__254;
    }
    else {
    }
    left_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_418=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_419=node_compile(right_node_418,info);
    if(    !Value_419) {
        __result_obj__255 = (_Bool)0;
        ((left_node_415) ? left_node_415 = come_decrement_ref_count(left_node_415, ((struct sNode*)left_node_415)->finalize, ((struct sNode*)left_node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_418) ? right_node_418 = come_decrement_ref_count(right_node_418, ((struct sNode*)right_node_418)->finalize, ((struct sNode*)right_node_418)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__255;
    }
    else {
    }
    right_value_420=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_421=(struct sType*)come_increment_ref_count(left_value_417->type);
    fun_name_422="operator_lt";
    if(    self->mQuote) {
        calling_fun_423=(_Bool)0;
    }
    else {
        calling_fun_423=operator_overload_fun(type_421,fun_name_422,(struct sNode*)come_increment_ref_count(left_node_415),(struct sNode*)come_increment_ref_count(right_node_418),(struct CVALUE*)come_increment_ref_count(left_value_417),(struct CVALUE*)come_increment_ref_count(right_value_420),(_Bool)0,info);
    }
    if(    !calling_fun_423) {
        come_value_424=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 799, "struct CVALUE*"))));
        __dec_obj98=come_value_424->c_value,
        come_value_424->c_value=(char*)come_increment_ref_count(xsprintf("%s<%s",left_value_417->c_value,right_value_420->c_value));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj99=come_value_424->type,
        come_value_424->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 802, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_424->var=((void*)0);
        add_come_last_code(info,"%s",come_value_424->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_424));
        /*c*/ come_call_finalizer3(come_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__256 = (_Bool)1;
    ((left_node_415) ? left_node_415 = come_decrement_ref_count(left_node_415, ((struct sNode*)left_node_415)->finalize, ((struct sNode*)left_node_415)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_418) ? right_node_418 = come_decrement_ref_count(right_node_418, ((struct sNode*)right_node_418)->finalize, ((struct sNode*)right_node_418)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_420,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

static void sLtNode_finalize(struct sLtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sNode* __dec_obj100;
void* __right_value400 = (void*)0;
struct sNode* __dec_obj101;
struct sGtNode* __result_obj__257;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value398,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj100=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj100 ? __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj101=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj101 ? __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__257 = (struct sGtNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sGtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
}

char* sGtNode_kind(struct sGtNode* self){
void* __right_value401 = (void*)0;
char* __result_obj__258;
    __result_obj__258 = (char*)come_increment_ref_count(((char*)(__right_value401=__builtin_string("sGtNode"))));
    (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__258 = come_decrement_ref_count(__result_obj__258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__258;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
struct sNode* left_node_425;
_Bool Value_426;
_Bool __result_obj__259;
void* __right_value402 = (void*)0;
struct CVALUE* left_value_427;
struct sNode* right_node_428;
_Bool Value_429;
_Bool __result_obj__260;
void* __right_value403 = (void*)0;
struct CVALUE* right_value_430;
struct sType* type_431;
char* fun_name_432;
_Bool calling_fun_433;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_434;
void* __right_value406 = (void*)0;
char* __dec_obj102;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __dec_obj103;
_Bool __result_obj__261;
memset(&calling_fun_433, 0, sizeof(_Bool));
    left_node_425=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_426=node_compile(left_node_425,info);
    if(    !Value_426) {
        __result_obj__259 = (_Bool)0;
        ((left_node_425) ? left_node_425 = come_decrement_ref_count(left_node_425, ((struct sNode*)left_node_425)->finalize, ((struct sNode*)left_node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__259;
    }
    else {
    }
    left_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_428=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_429=node_compile(right_node_428,info);
    if(    !Value_429) {
        __result_obj__260 = (_Bool)0;
        ((left_node_425) ? left_node_425 = come_decrement_ref_count(left_node_425, ((struct sNode*)left_node_425)->finalize, ((struct sNode*)left_node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_428) ? right_node_428 = come_decrement_ref_count(right_node_428, ((struct sNode*)right_node_428)->finalize, ((struct sNode*)right_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__260;
    }
    else {
    }
    right_value_430=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_431=(struct sType*)come_increment_ref_count(left_value_427->type);
    fun_name_432="operator_gt";
    if(    self->mQuote) {
        calling_fun_433=(_Bool)0;
    }
    else {
        calling_fun_433=operator_overload_fun(type_431,fun_name_432,(struct sNode*)come_increment_ref_count(left_node_425),(struct sNode*)come_increment_ref_count(right_node_428),(struct CVALUE*)come_increment_ref_count(left_value_427),(struct CVALUE*)come_increment_ref_count(right_value_430),(_Bool)0,info);
    }
    if(    !calling_fun_433) {
        come_value_434=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 861, "struct CVALUE*"))));
        __dec_obj102=come_value_434->c_value,
        come_value_434->c_value=(char*)come_increment_ref_count(xsprintf("%s>%s",left_value_427->c_value,right_value_430->c_value));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj103=come_value_434->type,
        come_value_434->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 864, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_434->var=((void*)0);
        add_come_last_code(info,"%s",come_value_434->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_434));
        /*c*/ come_call_finalizer3(come_value_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__261 = (_Bool)1;
    ((left_node_425) ? left_node_425 = come_decrement_ref_count(left_node_425, ((struct sNode*)left_node_425)->finalize, ((struct sNode*)left_node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_428) ? right_node_428 = come_decrement_ref_count(right_node_428, ((struct sNode*)right_node_428)->finalize, ((struct sNode*)right_node_428)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_431,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static void sGtNode_finalize(struct sGtNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sNode* __dec_obj104;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj105;
struct sEqNode* __result_obj__262;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value410,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj104=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj105=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj105 ? __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__262 = (struct sEqNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,sEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

char* sEqNode_kind(struct sEqNode* self){
void* __right_value413 = (void*)0;
char* __result_obj__263;
    __result_obj__263 = (char*)come_increment_ref_count(((char*)(__right_value413=__builtin_string("sEqNode"))));
    (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__263 = come_decrement_ref_count(__result_obj__263, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__263;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
struct sNode* left_node_435;
_Bool Value_436;
void* __right_value414 = (void*)0;
struct CVALUE* left_value_437;
struct sNode* right_node_438;
_Bool Value_439;
_Bool __result_obj__264;
void* __right_value415 = (void*)0;
struct CVALUE* right_value_440;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct CVALUE* come_value_441;
void* __right_value418 = (void*)0;
char* __dec_obj106;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj107;
_Bool __result_obj__265;
    left_node_435=self->mLeft;
    Value_436=node_compile(left_node_435,info);
    if(    !Value_436) {
        return (_Bool)0;
    }
    else {
    }
    left_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_438=self->mRight;
    Value_439=node_compile(right_node_438,info);
    if(    !Value_439) {
        __result_obj__264 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__264;
    }
    else {
    }
    right_value_440=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_441=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 911, "struct CVALUE*"))));
    __dec_obj106=come_value_441->c_value,
    come_value_441->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_437->c_value,right_value_440->c_value));
    __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj107=come_value_441->type,
    come_value_441->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 914, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_441->var=((void*)0);
    add_come_last_code(info,"%s",come_value_441->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_441));
    __result_obj__265 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_437,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_440,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_441,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static void sEqNode_finalize(struct sEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj108;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj109;
struct sNotEqNode* __result_obj__266;
    ((struct sNodeBase*)(__right_value422=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value422,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj108=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj108 ? __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj109=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__266 = (struct sNotEqNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNotEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,sNotEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

char* sNotEqNode_kind(struct sNotEqNode* self){
void* __right_value425 = (void*)0;
char* __result_obj__267;
    __result_obj__267 = (char*)come_increment_ref_count(((char*)(__right_value425=__builtin_string("sNotEqNode"))));
    (__right_value425 = come_decrement_ref_count(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__267 = come_decrement_ref_count(__result_obj__267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__267;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
struct sNode* left_node_442;
_Bool Value_443;
void* __right_value426 = (void*)0;
struct CVALUE* left_value_444;
struct sNode* right_node_445;
_Bool Value_446;
_Bool __result_obj__268;
void* __right_value427 = (void*)0;
struct CVALUE* right_value_447;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_448;
void* __right_value430 = (void*)0;
char* __dec_obj110;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__269;
    left_node_442=self->mLeft;
    Value_443=node_compile(left_node_442,info);
    if(    !Value_443) {
        return (_Bool)0;
    }
    else {
    }
    left_value_444=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_445=self->mRight;
    Value_446=node_compile(right_node_445,info);
    if(    !Value_446) {
        __result_obj__268 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__268;
    }
    else {
    }
    right_value_447=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 960, "struct CVALUE*"))));
    __dec_obj110=come_value_448->c_value,
    come_value_448->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_444->c_value,right_value_447->c_value));
    __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj111=come_value_448->type,
    come_value_448->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 963, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_448->var=((void*)0);
    add_come_last_code(info,"%s",come_value_448->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_448));
    __result_obj__269 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_447,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_448,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sNode* __dec_obj112;
void* __right_value436 = (void*)0;
struct sNode* __dec_obj113;
struct sEq2Node* __result_obj__270;
    ((struct sNodeBase*)(__right_value434=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value434,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj112=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj113=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj113 ? __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__270 = (struct sEq2Node*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

char* sEq2Node_kind(struct sEq2Node* self){
void* __right_value437 = (void*)0;
char* __result_obj__271;
    __result_obj__271 = (char*)come_increment_ref_count(((char*)(__right_value437=__builtin_string("sEq2Node"))));
    (__right_value437 = come_decrement_ref_count(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__271 = come_decrement_ref_count(__result_obj__271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__271;
}

_Bool sEq2Node_compile(struct sEq2Node* self, struct sInfo* info){
struct sNode* left_node_449;
_Bool Value_450;
_Bool __result_obj__272;
void* __right_value438 = (void*)0;
struct CVALUE* left_value_451;
struct sNode* right_node_452;
_Bool Value_453;
_Bool __result_obj__273;
void* __right_value439 = (void*)0;
struct CVALUE* right_value_454;
struct sType* type_455;
char* fun_name_456;
_Bool calling_fun_457;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value442 = (void*)0;
char* __dec_obj114;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sType* __dec_obj115;
_Bool __result_obj__274;
memset(&calling_fun_457, 0, sizeof(_Bool));
    left_node_449=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_450=node_compile(left_node_449,info);
    if(    !Value_450) {
        __result_obj__272 = (_Bool)0;
        ((left_node_449) ? left_node_449 = come_decrement_ref_count(left_node_449, ((struct sNode*)left_node_449)->finalize, ((struct sNode*)left_node_449)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__272;
    }
    else {
    }
    left_value_451=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_452=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_453=node_compile(right_node_452,info);
    if(    !Value_453) {
        __result_obj__273 = (_Bool)0;
        ((left_node_449) ? left_node_449 = come_decrement_ref_count(left_node_449, ((struct sNode*)left_node_449)->finalize, ((struct sNode*)left_node_449)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_451,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_452) ? right_node_452 = come_decrement_ref_count(right_node_452, ((struct sNode*)right_node_452)->finalize, ((struct sNode*)right_node_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__273;
    }
    else {
    }
    right_value_454=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_455=(struct sType*)come_increment_ref_count(left_value_451->type);
    fun_name_456="operator_equals";
    if(    self->mQuote) {
        calling_fun_457=(_Bool)0;
    }
    else {
        calling_fun_457=operator_overload_fun(type_455,fun_name_456,(struct sNode*)come_increment_ref_count(left_node_449),(struct sNode*)come_increment_ref_count(right_node_452),(struct CVALUE*)come_increment_ref_count(left_value_451),(struct CVALUE*)come_increment_ref_count(right_value_454),(_Bool)0,info);
    }
    if(    !calling_fun_457) {
        come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1022, "struct CVALUE*"))));
        __dec_obj114=come_value_458->c_value,
        come_value_458->c_value=(char*)come_increment_ref_count(xsprintf("%s==%s",left_value_451->c_value,right_value_454->c_value));
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj115=come_value_458->type,
        come_value_458->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1025, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_458->var=((void*)0);
        add_come_last_code(info,"%s",come_value_458->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_458));
        /*c*/ come_call_finalizer3(come_value_458,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__274 = (_Bool)1;
    ((left_node_449) ? left_node_449 = come_decrement_ref_count(left_node_449, ((struct sNode*)left_node_449)->finalize, ((struct sNode*)left_node_449)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_451,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_452) ? right_node_452 = come_decrement_ref_count(right_node_452, ((struct sNode*)right_node_452)->finalize, ((struct sNode*)right_node_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_454,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_455,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static void sEq2Node_finalize(struct sEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value448 = (void*)0;
struct sNode* __dec_obj117;
struct sNotEq2Node* __result_obj__275;
    ((struct sNodeBase*)(__right_value446=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value446,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj116=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj116 ? __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj117=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__275 = (struct sNotEq2Node*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNotEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,sNotEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

char* sNotEq2Node_kind(struct sNotEq2Node* self){
void* __right_value449 = (void*)0;
char* __result_obj__276;
    __result_obj__276 = (char*)come_increment_ref_count(((char*)(__right_value449=__builtin_string("sNotEq2Node"))));
    (__right_value449 = come_decrement_ref_count(__right_value449, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__276 = come_decrement_ref_count(__result_obj__276, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__276;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
struct sNode* left_node_459;
_Bool Value_460;
_Bool __result_obj__277;
void* __right_value450 = (void*)0;
struct CVALUE* left_value_461;
struct sNode* right_node_462;
_Bool Value_463;
_Bool __result_obj__278;
void* __right_value451 = (void*)0;
struct CVALUE* right_value_464;
struct sType* type_465;
char* fun_name_466;
_Bool calling_fun_467;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value454 = (void*)0;
char* __dec_obj118;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sType* __dec_obj119;
_Bool __result_obj__279;
memset(&calling_fun_467, 0, sizeof(_Bool));
    left_node_459=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_460=node_compile(left_node_459,info);
    if(    !Value_460) {
        __result_obj__277 = (_Bool)0;
        ((left_node_459) ? left_node_459 = come_decrement_ref_count(left_node_459, ((struct sNode*)left_node_459)->finalize, ((struct sNode*)left_node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__277;
    }
    else {
    }
    left_value_461=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_462=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_463=node_compile(right_node_462,info);
    if(    !Value_463) {
        __result_obj__278 = (_Bool)0;
        ((left_node_459) ? left_node_459 = come_decrement_ref_count(left_node_459, ((struct sNode*)left_node_459)->finalize, ((struct sNode*)left_node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_462) ? right_node_462 = come_decrement_ref_count(right_node_462, ((struct sNode*)right_node_462)->finalize, ((struct sNode*)right_node_462)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__278;
    }
    else {
    }
    right_value_464=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_465=(struct sType*)come_increment_ref_count(left_value_461->type);
    fun_name_466="operator_not_equals";
    if(    self->mQuote) {
        calling_fun_467=(_Bool)0;
    }
    else {
        calling_fun_467=operator_overload_fun(type_465,fun_name_466,(struct sNode*)come_increment_ref_count(left_node_459),(struct sNode*)come_increment_ref_count(right_node_462),(struct CVALUE*)come_increment_ref_count(left_value_461),(struct CVALUE*)come_increment_ref_count(right_value_464),(_Bool)0,info);
    }
    if(    !calling_fun_467) {
        come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1084, "struct CVALUE*"))));
        __dec_obj118=come_value_468->c_value,
        come_value_468->c_value=(char*)come_increment_ref_count(xsprintf("%s!=%s",left_value_461->c_value,right_value_464->c_value));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj119=come_value_468->type,
        come_value_468->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1087, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_468->var=((void*)0);
        add_come_last_code(info,"%s",come_value_468->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
        /*c*/ come_call_finalizer3(come_value_468,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__279 = (_Bool)1;
    ((left_node_459) ? left_node_459 = come_decrement_ref_count(left_node_459, ((struct sNode*)left_node_459)->finalize, ((struct sNode*)left_node_459)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_461,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_462) ? right_node_462 = come_decrement_ref_count(right_node_462, ((struct sNode*)right_node_462)->finalize, ((struct sNode*)right_node_462)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_464,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_465,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj121;
struct sAndNode* __result_obj__280;
    ((struct sNodeBase*)(__right_value458=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value458,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj120=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj120 ? __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj121=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__280 = (struct sAndNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__280,sAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__280;
}

char* sAndNode_kind(struct sAndNode* self){
void* __right_value461 = (void*)0;
char* __result_obj__281;
    __result_obj__281 = (char*)come_increment_ref_count(((char*)(__right_value461=__builtin_string("sAndNode"))));
    (__right_value461 = come_decrement_ref_count(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
struct sNode* left_node_469;
_Bool Value_470;
_Bool __result_obj__282;
void* __right_value462 = (void*)0;
struct CVALUE* left_value_471;
struct sNode* right_node_472;
_Bool Value_473;
_Bool __result_obj__283;
void* __right_value463 = (void*)0;
struct CVALUE* right_value_474;
struct sType* type_475;
char* fun_name_476;
_Bool calling_fun_477;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct CVALUE* come_value_478;
void* __right_value466 = (void*)0;
char* __dec_obj122;
void* __right_value467 = (void*)0;
struct sType* __dec_obj123;
_Bool __result_obj__284;
memset(&calling_fun_477, 0, sizeof(_Bool));
    left_node_469=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_470=node_compile(left_node_469,info);
    if(    !Value_470) {
        __result_obj__282 = (_Bool)0;
        ((left_node_469) ? left_node_469 = come_decrement_ref_count(left_node_469, ((struct sNode*)left_node_469)->finalize, ((struct sNode*)left_node_469)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__282;
    }
    else {
    }
    left_value_471=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_472=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_473=node_compile(right_node_472,info);
    if(    !Value_473) {
        __result_obj__283 = (_Bool)0;
        ((left_node_469) ? left_node_469 = come_decrement_ref_count(left_node_469, ((struct sNode*)left_node_469)->finalize, ((struct sNode*)left_node_469)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_472) ? right_node_472 = come_decrement_ref_count(right_node_472, ((struct sNode*)right_node_472)->finalize, ((struct sNode*)right_node_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__283;
    }
    else {
    }
    right_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_475=(struct sType*)come_increment_ref_count(left_value_471->type);
    fun_name_476="operator_and";
    if(    self->mQuote) {
        calling_fun_477=(_Bool)0;
    }
    else {
        calling_fun_477=operator_overload_fun(type_475,fun_name_476,(struct sNode*)come_increment_ref_count(left_node_469),(struct sNode*)come_increment_ref_count(right_node_472),(struct CVALUE*)come_increment_ref_count(left_value_471),(struct CVALUE*)come_increment_ref_count(right_value_474),(_Bool)0,info);
    }
    if(    !calling_fun_477) {
        come_value_478=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1147, "struct CVALUE*"))));
        __dec_obj122=come_value_478->c_value,
        come_value_478->c_value=(char*)come_increment_ref_count(xsprintf("%s&%s",left_value_471->c_value,right_value_474->c_value));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj123=come_value_478->type,
        come_value_478->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_471->type));
        /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_478->type->mHeap=(_Bool)0;
        come_value_478->var=((void*)0);
        add_come_last_code(info,"%s",come_value_478->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_478));
        /*c*/ come_call_finalizer3(come_value_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__284 = (_Bool)1;
    ((left_node_469) ? left_node_469 = come_decrement_ref_count(left_node_469, ((struct sNode*)left_node_469)->finalize, ((struct sNode*)left_node_469)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_471,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_472) ? right_node_472 = come_decrement_ref_count(right_node_472, ((struct sNode*)right_node_472)->finalize, ((struct sNode*)right_node_472)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_474,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_475,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

static void sAndNode_finalize(struct sAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* __dec_obj124;
void* __right_value470 = (void*)0;
struct sNode* __dec_obj125;
struct sXOrNode* __result_obj__285;
    ((struct sNodeBase*)(__right_value468=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value468,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj124=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj125=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__285 = (struct sXOrNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sXOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sXOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

char* sXOrNode_kind(struct sXOrNode* self){
void* __right_value471 = (void*)0;
char* __result_obj__286;
    __result_obj__286 = (char*)come_increment_ref_count(((char*)(__right_value471=__builtin_string("sXOrNode"))));
    (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__286 = come_decrement_ref_count(__result_obj__286, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__286;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
struct sNode* left_node_479;
_Bool Value_480;
_Bool __result_obj__287;
void* __right_value472 = (void*)0;
struct CVALUE* left_value_481;
struct sNode* right_node_482;
_Bool Value_483;
_Bool __result_obj__288;
void* __right_value473 = (void*)0;
struct CVALUE* right_value_484;
struct sType* type_485;
char* fun_name_486;
_Bool calling_fun_487;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_488;
void* __right_value476 = (void*)0;
char* __dec_obj126;
void* __right_value477 = (void*)0;
struct sType* __dec_obj127;
_Bool __result_obj__289;
memset(&calling_fun_487, 0, sizeof(_Bool));
    left_node_479=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_480=node_compile(left_node_479,info);
    if(    !Value_480) {
        __result_obj__287 = (_Bool)0;
        ((left_node_479) ? left_node_479 = come_decrement_ref_count(left_node_479, ((struct sNode*)left_node_479)->finalize, ((struct sNode*)left_node_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__287;
    }
    else {
    }
    left_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_482=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_483=node_compile(right_node_482,info);
    if(    !Value_483) {
        __result_obj__288 = (_Bool)0;
        ((left_node_479) ? left_node_479 = come_decrement_ref_count(left_node_479, ((struct sNode*)left_node_479)->finalize, ((struct sNode*)left_node_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_481,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_482) ? right_node_482 = come_decrement_ref_count(right_node_482, ((struct sNode*)right_node_482)->finalize, ((struct sNode*)right_node_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__288;
    }
    else {
    }
    right_value_484=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_485=(struct sType*)come_increment_ref_count(left_value_481->type);
    fun_name_486="operator_xor";
    if(    self->mQuote) {
        calling_fun_487=(_Bool)0;
    }
    else {
        calling_fun_487=operator_overload_fun(type_485,fun_name_486,(struct sNode*)come_increment_ref_count(left_node_479),(struct sNode*)come_increment_ref_count(right_node_482),(struct CVALUE*)come_increment_ref_count(left_value_481),(struct CVALUE*)come_increment_ref_count(right_value_484),(_Bool)0,info);
    }
    if(    !calling_fun_487) {
        come_value_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1210, "struct CVALUE*"))));
        __dec_obj126=come_value_488->c_value,
        come_value_488->c_value=(char*)come_increment_ref_count(xsprintf("%s^%s",left_value_481->c_value,right_value_484->c_value));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj127=come_value_488->type,
        come_value_488->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_481->type));
        /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_488->type->mHeap=(_Bool)0;
        come_value_488->var=((void*)0);
        add_come_last_code(info,"%s",come_value_488->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_488));
        /*c*/ come_call_finalizer3(come_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__289 = (_Bool)1;
    ((left_node_479) ? left_node_479 = come_decrement_ref_count(left_node_479, ((struct sNode*)left_node_479)->finalize, ((struct sNode*)left_node_479)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_481,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_482) ? right_node_482 = come_decrement_ref_count(right_node_482, ((struct sNode*)right_node_482)->finalize, ((struct sNode*)right_node_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_484,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_485,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void sXOrNode_finalize(struct sXOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value480 = (void*)0;
struct sNode* __dec_obj129;
struct sOrNode* __result_obj__290;
    ((struct sNodeBase*)(__right_value478=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value478,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj128=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj129=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj129 ? __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__290 = (struct sOrNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

char* sOrNode_kind(struct sOrNode* self){
void* __right_value481 = (void*)0;
char* __result_obj__291;
    __result_obj__291 = (char*)come_increment_ref_count(((char*)(__right_value481=__builtin_string("sOrNode"))));
    (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__291 = come_decrement_ref_count(__result_obj__291, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__291;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
struct sNode* left_node_489;
_Bool Value_490;
_Bool __result_obj__292;
void* __right_value482 = (void*)0;
struct CVALUE* left_value_491;
struct sNode* right_node_492;
_Bool Value_493;
_Bool __result_obj__293;
void* __right_value483 = (void*)0;
struct CVALUE* right_value_494;
struct sType* type_495;
char* fun_name_496;
_Bool calling_fun_497;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct CVALUE* come_value_498;
void* __right_value486 = (void*)0;
char* __dec_obj130;
void* __right_value487 = (void*)0;
struct sType* __dec_obj131;
_Bool __result_obj__294;
memset(&calling_fun_497, 0, sizeof(_Bool));
    left_node_489=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_490=node_compile(left_node_489,info);
    if(    !Value_490) {
        __result_obj__292 = (_Bool)0;
        ((left_node_489) ? left_node_489 = come_decrement_ref_count(left_node_489, ((struct sNode*)left_node_489)->finalize, ((struct sNode*)left_node_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__292;
    }
    else {
    }
    left_value_491=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_492=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_493=node_compile(right_node_492,info);
    if(    !Value_493) {
        __result_obj__293 = (_Bool)0;
        ((left_node_489) ? left_node_489 = come_decrement_ref_count(left_node_489, ((struct sNode*)left_node_489)->finalize, ((struct sNode*)left_node_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_491,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_492) ? right_node_492 = come_decrement_ref_count(right_node_492, ((struct sNode*)right_node_492)->finalize, ((struct sNode*)right_node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__293;
    }
    else {
    }
    right_value_494=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_495=(struct sType*)come_increment_ref_count(left_value_491->type);
    fun_name_496="operator_or";
    if(    self->mQuote) {
        calling_fun_497=(_Bool)0;
    }
    else {
        calling_fun_497=operator_overload_fun(type_495,fun_name_496,(struct sNode*)come_increment_ref_count(left_node_489),(struct sNode*)come_increment_ref_count(right_node_492),(struct CVALUE*)come_increment_ref_count(left_value_491),(struct CVALUE*)come_increment_ref_count(right_value_494),(_Bool)0,info);
    }
    if(    !calling_fun_497) {
        come_value_498=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1274, "struct CVALUE*"))));
        __dec_obj130=come_value_498->c_value,
        come_value_498->c_value=(char*)come_increment_ref_count(xsprintf("%s|%s",left_value_491->c_value,right_value_494->c_value));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj131=come_value_498->type,
        come_value_498->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_491->type));
        /*b*/ come_call_finalizer3(__dec_obj131,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_498->type->mHeap=(_Bool)0;
        come_value_498->var=((void*)0);
        add_come_last_code(info,"%s",come_value_498->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_498));
        /*c*/ come_call_finalizer3(come_value_498,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__294 = (_Bool)1;
    ((left_node_489) ? left_node_489 = come_decrement_ref_count(left_node_489, ((struct sNode*)left_node_489)->finalize, ((struct sNode*)left_node_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_491,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_492) ? right_node_492 = come_decrement_ref_count(right_node_492, ((struct sNode*)right_node_492)->finalize, ((struct sNode*)right_node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_494,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_495,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static void sOrNode_finalize(struct sOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj133;
struct sAndAndNode* __result_obj__295;
    ((struct sNodeBase*)(__right_value488=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value488,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj132=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj133=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj133 ? __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__295 = (struct sAndAndNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAndAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__295,sAndAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

char* sAndAndNode_kind(struct sAndAndNode* self){
void* __right_value491 = (void*)0;
char* __result_obj__296;
    __result_obj__296 = (char*)come_increment_ref_count(((char*)(__right_value491=__builtin_string("sAndAndNode"))));
    (__right_value491 = come_decrement_ref_count(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__296 = come_decrement_ref_count(__result_obj__296, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__296;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
struct sNode* left_node_499;
_Bool Value_500;
_Bool __result_obj__297;
void* __right_value492 = (void*)0;
struct CVALUE* left_value_501;
struct sNode* right_node_502;
_Bool Value_503;
_Bool __result_obj__298;
void* __right_value493 = (void*)0;
struct CVALUE* right_value_504;
struct sType* type_505;
char* fun_name_506;
_Bool calling_fun_507;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct CVALUE* come_value_508;
void* __right_value496 = (void*)0;
char* __dec_obj134;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj135;
_Bool __result_obj__299;
memset(&calling_fun_507, 0, sizeof(_Bool));
    left_node_499=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_500=node_compile(left_node_499,info);
    if(    !Value_500) {
        __result_obj__297 = (_Bool)0;
        ((left_node_499) ? left_node_499 = come_decrement_ref_count(left_node_499, ((struct sNode*)left_node_499)->finalize, ((struct sNode*)left_node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__297;
    }
    else {
    }
    left_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_502=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_503=node_compile(right_node_502,info);
    if(    !Value_503) {
        __result_obj__298 = (_Bool)0;
        ((left_node_499) ? left_node_499 = come_decrement_ref_count(left_node_499, ((struct sNode*)left_node_499)->finalize, ((struct sNode*)left_node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_501,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_502) ? right_node_502 = come_decrement_ref_count(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__298;
    }
    else {
    }
    right_value_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_505=(struct sType*)come_increment_ref_count(left_value_501->type);
    fun_name_506="operator_andand";
    if(    self->mQuote) {
        calling_fun_507=(_Bool)0;
    }
    else {
        calling_fun_507=operator_overload_fun(type_505,fun_name_506,(struct sNode*)come_increment_ref_count(left_node_499),(struct sNode*)come_increment_ref_count(right_node_502),(struct CVALUE*)come_increment_ref_count(left_value_501),(struct CVALUE*)come_increment_ref_count(right_value_504),(_Bool)0,info);
    }
    if(    !calling_fun_507) {
        come_value_508=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1338, "struct CVALUE*"))));
        __dec_obj134=come_value_508->c_value,
        come_value_508->c_value=(char*)come_increment_ref_count(xsprintf("%s&&%s",left_value_501->c_value,right_value_504->c_value));
        __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj135=come_value_508->type,
        come_value_508->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1341, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_508->var=left_value_501->var;
        add_come_last_code(info,"%s",come_value_508->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_508));
        /*c*/ come_call_finalizer3(come_value_508,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__299 = (_Bool)1;
    ((left_node_499) ? left_node_499 = come_decrement_ref_count(left_node_499, ((struct sNode*)left_node_499)->finalize, ((struct sNode*)left_node_499)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_501,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_502) ? right_node_502 = come_decrement_ref_count(right_node_502, ((struct sNode*)right_node_502)->finalize, ((struct sNode*)right_node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_504,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_505,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj136;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj137;
struct sOrOrNode* __result_obj__300;
    ((struct sNodeBase*)(__right_value500=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value500,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mQuote=quote;
    __dec_obj136=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj137=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__300 = (struct sOrOrNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sOrOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sOrOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

char* sOrOrNode_kind(struct sOrOrNode* self){
void* __right_value503 = (void*)0;
char* __result_obj__301;
    __result_obj__301 = (char*)come_increment_ref_count(((char*)(__right_value503=__builtin_string("sOrOrNode"))));
    (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__301 = come_decrement_ref_count(__result_obj__301, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__301;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
struct sNode* left_node_509;
_Bool Value_510;
_Bool __result_obj__302;
void* __right_value504 = (void*)0;
struct CVALUE* left_value_511;
struct sNode* right_node_512;
_Bool Value_513;
_Bool __result_obj__303;
void* __right_value505 = (void*)0;
struct CVALUE* right_value_514;
struct sType* type_515;
char* fun_name_516;
_Bool calling_fun_517;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value508 = (void*)0;
char* __dec_obj138;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj139;
_Bool __result_obj__304;
memset(&calling_fun_517, 0, sizeof(_Bool));
    left_node_509=(struct sNode*)come_increment_ref_count(self->mLeft);
    Value_510=node_compile(left_node_509,info);
    if(    !Value_510) {
        __result_obj__302 = (_Bool)0;
        ((left_node_509) ? left_node_509 = come_decrement_ref_count(left_node_509, ((struct sNode*)left_node_509)->finalize, ((struct sNode*)left_node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__302;
    }
    else {
    }
    left_value_511=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_512=(struct sNode*)come_increment_ref_count(self->mRight);
    Value_513=node_compile(right_node_512,info);
    if(    !Value_513) {
        __result_obj__303 = (_Bool)0;
        ((left_node_509) ? left_node_509 = come_decrement_ref_count(left_node_509, ((struct sNode*)left_node_509)->finalize, ((struct sNode*)left_node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((right_node_512) ? right_node_512 = come_decrement_ref_count(right_node_512, ((struct sNode*)right_node_512)->finalize, ((struct sNode*)right_node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__303;
    }
    else {
    }
    right_value_514=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_515=(struct sType*)come_increment_ref_count(left_value_511->type);
    fun_name_516="operator_oror";
    if(    self->mQuote) {
        calling_fun_517=(_Bool)0;
    }
    else {
        calling_fun_517=operator_overload_fun(type_515,fun_name_516,(struct sNode*)come_increment_ref_count(left_node_509),(struct sNode*)come_increment_ref_count(right_node_512),(struct CVALUE*)come_increment_ref_count(left_value_511),(struct CVALUE*)come_increment_ref_count(right_value_514),(_Bool)0,info);
    }
    if(    !calling_fun_517) {
        come_value_518=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1400, "struct CVALUE*"))));
        __dec_obj138=come_value_518->c_value,
        come_value_518->c_value=(char*)come_increment_ref_count(xsprintf("%s||%s",left_value_511->c_value,right_value_514->c_value));
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj139=come_value_518->type,
        come_value_518->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "13op.c", 1403, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj139,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_518->var=left_value_511->var;
        add_come_last_code(info,"%s",come_value_518->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_518));
        /*c*/ come_call_finalizer3(come_value_518,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__304 = (_Bool)1;
    ((left_node_509) ? left_node_509 = come_decrement_ref_count(left_node_509, ((struct sNode*)left_node_509)->finalize, ((struct sNode*)left_node_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_511,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_node_512) ? right_node_512 = come_decrement_ref_count(right_node_512, ((struct sNode*)right_node_512)->finalize, ((struct sNode*)right_node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(right_value_514,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_515,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value514 = (void*)0;
struct sNode* __dec_obj141;
struct sCommaNode* __result_obj__305;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value512,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj140=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj141=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__305 = (struct sCommaNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCommaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__305,sCommaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

char* sCommaNode_kind(struct sCommaNode* self){
void* __right_value515 = (void*)0;
char* __result_obj__306;
    __result_obj__306 = (char*)come_increment_ref_count(((char*)(__right_value515=__builtin_string("sCommaNode"))));
    (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__306 = come_decrement_ref_count(__result_obj__306, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__306;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
struct sNode* left_node_519;
_Bool Value_520;
void* __right_value516 = (void*)0;
struct CVALUE* left_value_521;
struct sNode* right_node_522;
_Bool Value_523;
_Bool __result_obj__307;
void* __right_value517 = (void*)0;
struct CVALUE* right_value_524;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* come_value_525;
void* __right_value520 = (void*)0;
char* __dec_obj142;
void* __right_value521 = (void*)0;
struct sType* __dec_obj143;
_Bool __result_obj__308;
    left_node_519=self->mLeft;
    Value_520=node_compile(left_node_519,info);
    if(    !Value_520) {
        return (_Bool)0;
    }
    else {
    }
    left_value_521=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_node_522=self->mRight;
    Value_523=node_compile(right_node_522,info);
    if(    !Value_523) {
        __result_obj__307 = (_Bool)0;
        /*c*/ come_call_finalizer3(left_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__307;
    }
    else {
    }
    right_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_525=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1449, "struct CVALUE*"))));
    __dec_obj142=come_value_525->c_value,
    come_value_525->c_value=(char*)come_increment_ref_count(xsprintf("%s,%s",left_value_521->c_value,right_value_524->c_value));
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj143=come_value_525->type,
    come_value_525->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_521->type));
    /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_525->var=((void*)0);
    add_come_last_code(info,"%s",come_value_525->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_525));
    __result_obj__308 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_521,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_524,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_525,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static void sCommaNode_finalize(struct sCommaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sNode* __dec_obj144;
void* __right_value524 = (void*)0;
struct sNode* __dec_obj145;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj146;
struct sConditionalNode* __result_obj__309;
    ((struct sNodeBase*)(__right_value522=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value522,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj144=self->mValue1,
    self->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(value1));
    (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj145=self->mValue2,
    self->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(value2));
    (__dec_obj145 ? __dec_obj145 = come_decrement_ref_count(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj146=self->mValue3,
    self->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(value3));
    (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__309 = (struct sConditionalNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sConditionalNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,sConditionalNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

char* sConditionalNode_kind(struct sConditionalNode* self){
void* __right_value526 = (void*)0;
char* __result_obj__310;
    __result_obj__310 = (char*)come_increment_ref_count(((char*)(__right_value526=__builtin_string("sConditionalNode"))));
    (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__310 = come_decrement_ref_count(__result_obj__310, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__310;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
_Bool in_conditional_operator_526;
struct sNode* value1_527;
_Bool Value_528;
void* __right_value527 = (void*)0;
struct CVALUE* value1_value_529;
struct sNode* value2_530;
_Bool Value_531;
_Bool __result_obj__311;
void* __right_value528 = (void*)0;
struct CVALUE* value2_value_532;
struct sNode* value3_533;
_Bool Value_534;
_Bool __result_obj__312;
void* __right_value529 = (void*)0;
struct CVALUE* value3_value_535;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value532 = (void*)0;
char* __dec_obj147;
void* __right_value533 = (void*)0;
struct sType* __dec_obj148;
_Bool __result_obj__313;
    in_conditional_operator_526=info->in_conditional_operator;
    info->in_conditional_operator=(_Bool)1;
    value1_527=self->mValue1;
    Value_528=node_compile(value1_527,info);
    if(    !Value_528) {
        return (_Bool)0;
    }
    else {
    }
    value1_value_529=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value2_530=self->mValue2;
    Value_531=node_compile(value2_530,info);
    if(    !Value_531) {
        __result_obj__311 = (_Bool)0;
        /*c*/ come_call_finalizer3(value1_value_529,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__311;
    }
    else {
    }
    value2_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    value3_533=self->mValue3;
    Value_534=node_compile(value3_533,info);
    if(    !Value_534) {
        __result_obj__312 = (_Bool)0;
        /*c*/ come_call_finalizer3(value1_value_529,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(value2_value_532,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__312;
    }
    else {
    }
    value3_value_535=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value_536=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "13op.c", 1509, "struct CVALUE*"))));
    __dec_obj147=come_value_536->c_value,
    come_value_536->c_value=(char*)come_increment_ref_count(xsprintf("((%s)?(%s):(%s))",value1_value_529->c_value,value2_value_532->c_value,value3_value_535->c_value));
    __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj148=come_value_536->type,
    come_value_536->type=(struct sType*)come_increment_ref_count(sType_clone(value2_value_532->type));
    /*b*/ come_call_finalizer3(__dec_obj148,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_536->var=((void*)0);
    add_come_last_code(info,"%s",come_value_536->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_536));
    info->in_conditional_operator=in_conditional_operator_526;
    __result_obj__313 = (_Bool)1;
    /*c*/ come_call_finalizer3(value1_value_529,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value2_value_532,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(value3_value_535,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_536,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        ((self->mValue1) ? self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        ((self->mValue2) ? self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        ((self->mValue3) ? self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sNode* _inf_value2;
struct sConditionalNode* _inf_obj_value2;
void* __right_value541 = (void*)0;
struct sNode* __result_obj__316;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1527, "struct sNode");
    _inf_obj_value2=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value535=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "13op.c", 1527, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(value1),(struct sNode*)come_increment_ref_count(value2),(struct sNode*)come_increment_ref_count(value3),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sConditionalNode_finalize;
    _inf_value2->clone=(void*)sConditionalNode_clone;
    _inf_value2->compile=(void*)sConditionalNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sConditionalNode_kind;
    __result_obj__316 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value541=_inf_value2)));
    ((value1) ? value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value2) ? value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((value3) ? value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value535,sConditionalNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value541) ? __right_value541 = come_decrement_ref_count(__right_value541, ((struct sNode*)__right_value541)->finalize, ((struct sNode*)__right_value541)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__316;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
struct sConditionalNode* __result_obj__314;
void* __right_value536 = (void*)0;
struct sConditionalNode* result_537;
void* __right_value537 = (void*)0;
char* __dec_obj149;
void* __right_value538 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj152;
struct sConditionalNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_537=(struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode*"));
    if(    self!=((void*)0)) {
        result_537->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj149=result_537->sname,
        result_537->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sConditionalNode_clone", 5, "char*"));
        __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_537->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mValue1!=((void*)0)) {
        __dec_obj150=result_537->mValue1,
        result_537->mValue1=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue1));
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue2!=((void*)0)) {
        __dec_obj151=result_537->mValue2,
        result_537->mValue2=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue2));
        (__dec_obj151 ? __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mValue3!=((void*)0)) {
        __dec_obj152=result_537->mValue3,
        result_537->mValue3=(struct sNode*)come_increment_ref_count(sNode_clone(self->mValue3));
        (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__315 = result_537;
    /*c*/ come_call_finalizer3(result_537,sConditionalNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

struct sNode* mult_exp(struct sInfo* info){
void* __right_value542 = (void*)0;
struct sNode* node_538;
int sline_real_539;
void* __right_value543 = (void*)0;
struct sNode* right_540;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj156;
int sline_real_542;
void* __right_value551 = (void*)0;
struct sNode* right_543;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* __right_value558 = (void*)0;
struct sNode* __dec_obj160;
int sline_real_545;
void* __right_value559 = (void*)0;
struct sNode* right_546;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* __right_value566 = (void*)0;
struct sNode* __dec_obj164;
int sline_real_548;
void* __right_value567 = (void*)0;
struct sNode* right_549;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj165;
int sline_real_550;
void* __right_value571 = (void*)0;
struct sNode* right_551;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* __right_value574 = (void*)0;
struct sNode* __dec_obj166;
int sline_real_552;
void* __right_value575 = (void*)0;
struct sNode* right_553;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* __right_value578 = (void*)0;
struct sNode* __dec_obj167;
struct sNode* __result_obj__323;
    node_538=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_538->terminated(node_538->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61) {
            info->p++;
            sline_real_539=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_540=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_539;
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1547, "struct sNode");
            _inf_obj_value3=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value545=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "13op.c", 1547, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_540),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __dec_obj156=node_538,
            node_538=(struct sNode*)come_increment_ref_count(_inf_value3);
            (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value545,sMultNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_540) ? right_540 = come_decrement_ref_count(right_540, ((struct sNode*)right_540)->finalize, ((struct sNode*)right_540)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==47&&*(info->p+1)!=61&&*(info->p+1)!=42&&*(info->p-1)!=42) {
            info->p++;
            sline_real_542=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_543=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_542;
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1558, "struct sNode");
            _inf_obj_value4=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value553=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "13op.c", 1558, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_543),(_Bool)0,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sDivNode_finalize;
            _inf_value4->clone=(void*)sDivNode_clone;
            _inf_value4->compile=(void*)sDivNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sDivNode_kind;
            __dec_obj160=node_538,
            node_538=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value553,sDivNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_543) ? right_543 = come_decrement_ref_count(right_543, ((struct sNode*)right_543)->finalize, ((struct sNode*)right_543)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==37&&*(info->p+1)!=61) {
            info->p++;
            sline_real_545=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_546=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_545;
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1569, "struct sNode");
            _inf_obj_value5=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value561=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "13op.c", 1569, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_546),(_Bool)0,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sModNode_finalize;
            _inf_value5->clone=(void*)sModNode_clone;
            _inf_value5->compile=(void*)sModNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sModNode_kind;
            __dec_obj164=node_538,
            node_538=(struct sNode*)come_increment_ref_count(_inf_value5);
            (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value561,sModNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_546) ? right_546 = come_decrement_ref_count(right_546, ((struct sNode*)right_546)->finalize, ((struct sNode*)right_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !node_538->terminated(node_538->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_548=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_549=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_548;
            _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1580, "struct sNode");
            _inf_obj_value6=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(__right_value569=sMultNode_initialize((struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "13op.c", 1580, "struct sMultNode*")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_549),(_Bool)1,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sMultNode_finalize;
            _inf_value6->clone=(void*)sMultNode_clone;
            _inf_value6->compile=(void*)sMultNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sMultNode_kind;
            __dec_obj165=node_538,
            node_538=(struct sNode*)come_increment_ref_count(_inf_value6);
            (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value569,sMultNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_549) ? right_549 = come_decrement_ref_count(right_549, ((struct sNode*)right_549)->finalize, ((struct sNode*)right_549)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_550=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_551=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_550;
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1591, "struct sNode");
            _inf_obj_value7=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(__right_value573=sDivNode_initialize((struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "13op.c", 1591, "struct sDivNode*")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_551),(_Bool)1,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sDivNode_finalize;
            _inf_value7->clone=(void*)sDivNode_clone;
            _inf_value7->compile=(void*)sDivNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sDivNode_kind;
            __dec_obj166=node_538,
            node_538=(struct sNode*)come_increment_ref_count(_inf_value7);
            (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value573,sDivNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_551) ? right_551 = come_decrement_ref_count(right_551, ((struct sNode*)right_551)->finalize, ((struct sNode*)right_551)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_552=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_553=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            info->sline_real=sline_real_552;
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1602, "struct sNode");
            _inf_obj_value8=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(__right_value577=sModNode_initialize((struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "13op.c", 1602, "struct sModNode*")),(struct sNode*)come_increment_ref_count(node_538),(struct sNode*)come_increment_ref_count(right_553),(_Bool)1,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sModNode_finalize;
            _inf_value8->clone=(void*)sModNode_clone;
            _inf_value8->compile=(void*)sModNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sModNode_kind;
            __dec_obj167=node_538,
            node_538=(struct sNode*)come_increment_ref_count(_inf_value8);
            (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value577,sModNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_553) ? right_553 = come_decrement_ref_count(right_553, ((struct sNode*)right_553)->finalize, ((struct sNode*)right_553)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__323 = (struct sNode*)come_increment_ref_count(node_538);
    ((node_538) ? node_538 = come_decrement_ref_count(node_538, ((struct sNode*)node_538)->finalize, ((struct sNode*)node_538)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__323;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
struct sMultNode* __result_obj__317;
void* __right_value546 = (void*)0;
struct sMultNode* result_541;
void* __right_value547 = (void*)0;
char* __dec_obj153;
void* __right_value548 = (void*)0;
struct sNode* __dec_obj154;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj155;
struct sMultNode* __result_obj__318;
    if(    self==(void*)0) {
        __result_obj__317 = (void*)0;
        return __result_obj__317;
    }
    result_541=(struct sMultNode*)come_increment_ref_count((struct sMultNode*)come_calloc_v2(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode*"));
    if(    self!=((void*)0)) {
        result_541->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_541->sname,
        result_541->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMultNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_541->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_541->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj154=result_541->mLeft,
        result_541->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj155=result_541->mRight,
        result_541->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__318 = result_541;
    /*c*/ come_call_finalizer3(result_541,sMultNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
struct sDivNode* __result_obj__319;
void* __right_value554 = (void*)0;
struct sDivNode* result_544;
void* __right_value555 = (void*)0;
char* __dec_obj157;
void* __right_value556 = (void*)0;
struct sNode* __dec_obj158;
void* __right_value557 = (void*)0;
struct sNode* __dec_obj159;
struct sDivNode* __result_obj__320;
    if(    self==(void*)0) {
        __result_obj__319 = (void*)0;
        return __result_obj__319;
    }
    result_544=(struct sDivNode*)come_increment_ref_count((struct sDivNode*)come_calloc_v2(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode*"));
    if(    self!=((void*)0)) {
        result_544->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_544->sname,
        result_544->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDivNode_clone", 5, "char*"));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_544->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_544->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj158=result_544->mLeft,
        result_544->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj159=result_544->mRight,
        result_544->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__320 = result_544;
    /*c*/ come_call_finalizer3(result_544,sDivNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__320;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
struct sModNode* __result_obj__321;
void* __right_value562 = (void*)0;
struct sModNode* result_547;
void* __right_value563 = (void*)0;
char* __dec_obj161;
void* __right_value564 = (void*)0;
struct sNode* __dec_obj162;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj163;
struct sModNode* __result_obj__322;
    if(    self==(void*)0) {
        __result_obj__321 = (void*)0;
        return __result_obj__321;
    }
    result_547=(struct sModNode*)come_increment_ref_count((struct sModNode*)come_calloc_v2(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode*"));
    if(    self!=((void*)0)) {
        result_547->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_547->sname,
        result_547->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sModNode_clone", 5, "char*"));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_547->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_547->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj162=result_547->mLeft,
        result_547->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj163=result_547->mRight,
        result_547->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__322 = result_547;
    /*c*/ come_call_finalizer3(result_547,sModNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

struct sNode* add_exp(struct sInfo* info){
void* __right_value579 = (void*)0;
struct sNode* node_554;
int sline_real_555;
void* __right_value580 = (void*)0;
struct sNode* right_556;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* __right_value587 = (void*)0;
struct sNode* __dec_obj171;
int sline_real_558;
void* __right_value588 = (void*)0;
struct sNode* right_559;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj175;
int sline_real_561;
void* __right_value596 = (void*)0;
struct sNode* right_562;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* __right_value599 = (void*)0;
struct sNode* __dec_obj176;
int sline_real_563;
void* __right_value600 = (void*)0;
struct sNode* right_564;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* __right_value603 = (void*)0;
struct sNode* __dec_obj177;
struct sNode* __result_obj__328;
    node_554=(struct sNode*)come_increment_ref_count(mult_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43) {
            info->p++;
            sline_real_555=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_556=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_555;
            _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1631, "struct sNode");
            _inf_obj_value9=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value582=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "13op.c", 1631, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_554),(struct sNode*)come_increment_ref_count(right_556),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __dec_obj171=node_554,
            node_554=(struct sNode*)come_increment_ref_count(_inf_value9);
            (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value582,sAddNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_556) ? right_556 = come_decrement_ref_count(right_556, ((struct sNode*)right_556)->finalize, ((struct sNode*)right_556)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62) {
            info->p++;
            sline_real_558=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_559=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_558;
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1643, "struct sNode");
            _inf_obj_value10=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value590=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "13op.c", 1643, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_554),(struct sNode*)come_increment_ref_count(right_559),(_Bool)0,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sSubNode_finalize;
            _inf_value10->clone=(void*)sSubNode_clone;
            _inf_value10->compile=(void*)sSubNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sSubNode_kind;
            __dec_obj175=node_554,
            node_554=(struct sNode*)come_increment_ref_count(_inf_value10);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value590,sSubNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_559) ? right_559 = come_decrement_ref_count(right_559, ((struct sNode*)right_559)->finalize, ((struct sNode*)right_559)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43) {
            info->p+=2;
            sline_real_561=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_562=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_561;
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1655, "struct sNode");
            _inf_obj_value11=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(__right_value598=sAddNode_initialize((struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "13op.c", 1655, "struct sAddNode*")),(struct sNode*)come_increment_ref_count(node_554),(struct sNode*)come_increment_ref_count(right_562),(_Bool)1,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sAddNode_finalize;
            _inf_value11->clone=(void*)sAddNode_clone;
            _inf_value11->compile=(void*)sAddNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sAddNode_kind;
            __dec_obj176=node_554,
            node_554=(struct sNode*)come_increment_ref_count(_inf_value11);
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value598,sAddNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_562) ? right_562 = come_decrement_ref_count(right_562, ((struct sNode*)right_562)->finalize, ((struct sNode*)right_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_563=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_564=(struct sNode*)come_increment_ref_count(mult_exp(info));
            info->sline_real=sline_real_563;
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1667, "struct sNode");
            _inf_obj_value12=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(__right_value602=sSubNode_initialize((struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "13op.c", 1667, "struct sSubNode*")),(struct sNode*)come_increment_ref_count(node_554),(struct sNode*)come_increment_ref_count(right_564),(_Bool)1,info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sSubNode_finalize;
            _inf_value12->clone=(void*)sSubNode_clone;
            _inf_value12->compile=(void*)sSubNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sSubNode_kind;
            __dec_obj177=node_554,
            node_554=(struct sNode*)come_increment_ref_count(_inf_value12);
            (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value602,sSubNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_564) ? right_564 = come_decrement_ref_count(right_564, ((struct sNode*)right_564)->finalize, ((struct sNode*)right_564)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__328 = (struct sNode*)come_increment_ref_count(node_554);
    ((node_554) ? node_554 = come_decrement_ref_count(node_554, ((struct sNode*)node_554)->finalize, ((struct sNode*)node_554)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__328;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
struct sAddNode* __result_obj__324;
void* __right_value583 = (void*)0;
struct sAddNode* result_557;
void* __right_value584 = (void*)0;
char* __dec_obj168;
void* __right_value585 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value586 = (void*)0;
struct sNode* __dec_obj170;
struct sAddNode* __result_obj__325;
    if(    self==(void*)0) {
        __result_obj__324 = (void*)0;
        return __result_obj__324;
    }
    result_557=(struct sAddNode*)come_increment_ref_count((struct sAddNode*)come_calloc_v2(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode*"));
    if(    self!=((void*)0)) {
        result_557->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_557->sname,
        result_557->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAddNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj169=result_557->mLeft,
        result_557->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj170=result_557->mRight,
        result_557->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj170 ? __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_557->mQuote=self->mQuote;
    }
    __result_obj__325 = result_557;
    /*c*/ come_call_finalizer3(result_557,sAddNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__325;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
struct sSubNode* __result_obj__326;
void* __right_value591 = (void*)0;
struct sSubNode* result_560;
void* __right_value592 = (void*)0;
char* __dec_obj172;
void* __right_value593 = (void*)0;
struct sNode* __dec_obj173;
void* __right_value594 = (void*)0;
struct sNode* __dec_obj174;
struct sSubNode* __result_obj__327;
    if(    self==(void*)0) {
        __result_obj__326 = (void*)0;
        return __result_obj__326;
    }
    result_560=(struct sSubNode*)come_increment_ref_count((struct sSubNode*)come_calloc_v2(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode*"));
    if(    self!=((void*)0)) {
        result_560->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj172=result_560->sname,
        result_560->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSubNode_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_560->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj173=result_560->mLeft,
        result_560->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj174=result_560->mRight,
        result_560->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_560->mQuote=self->mQuote;
    }
    __result_obj__327 = result_560;
    /*c*/ come_call_finalizer3(result_560,sSubNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

struct sNode* shift_exp(struct sInfo* info){
void* __right_value604 = (void*)0;
struct sNode* node_565;
int sline_real_566;
void* __right_value605 = (void*)0;
struct sNode* right_567;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* __right_value612 = (void*)0;
struct sNode* __dec_obj181;
int sline_real_569;
void* __right_value613 = (void*)0;
struct sNode* right_570;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* __right_value620 = (void*)0;
struct sNode* __dec_obj185;
int sline_real_572;
void* __right_value621 = (void*)0;
struct sNode* right_573;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj186;
int sline_real_574;
void* __right_value625 = (void*)0;
struct sNode* right_575;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj187;
struct sNode* __result_obj__333;
    parse_sharp_v5(info);
    node_565=(struct sNode*)come_increment_ref_count(add_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_566=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_567=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_566;
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1697, "struct sNode");
            _inf_obj_value13=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value607=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1697, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_565),(struct sNode*)come_increment_ref_count(right_567),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __dec_obj181=node_565,
            node_565=(struct sNode*)come_increment_ref_count(_inf_value13);
            (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value607,sLShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_567) ? right_567 = come_decrement_ref_count(right_567, ((struct sNode*)right_567)->finalize, ((struct sNode*)right_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_569=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_570=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_569;
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1708, "struct sNode");
            _inf_obj_value14=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value615=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1708, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_565),(struct sNode*)come_increment_ref_count(right_570),(_Bool)0,info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sRShiftNode_finalize;
            _inf_value14->clone=(void*)sRShiftNode_clone;
            _inf_value14->compile=(void*)sRShiftNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sRShiftNode_kind;
            __dec_obj185=node_565,
            node_565=(struct sNode*)come_increment_ref_count(_inf_value14);
            (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value615,sRShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_570) ? right_570 = come_decrement_ref_count(right_570, ((struct sNode*)right_570)->finalize, ((struct sNode*)right_570)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61) {
            info->p+=3;
            sline_real_572=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_573=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_572;
            _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1719, "struct sNode");
            _inf_obj_value15=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(__right_value623=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "13op.c", 1719, "struct sLShiftNode*")),(struct sNode*)come_increment_ref_count(node_565),(struct sNode*)come_increment_ref_count(right_573),(_Bool)1,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sLShiftNode_finalize;
            _inf_value15->clone=(void*)sLShiftNode_clone;
            _inf_value15->compile=(void*)sLShiftNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sLShiftNode_kind;
            __dec_obj186=node_565,
            node_565=(struct sNode*)come_increment_ref_count(_inf_value15);
            (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value623,sLShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_573) ? right_573 = come_decrement_ref_count(right_573, ((struct sNode*)right_573)->finalize, ((struct sNode*)right_573)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62) {
            info->p+=3;
            sline_real_574=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_575=(struct sNode*)come_increment_ref_count(add_exp(info));
            info->sline_real=sline_real_574;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1730, "struct sNode");
            _inf_obj_value16=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(__right_value627=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "13op.c", 1730, "struct sRShiftNode*")),(struct sNode*)come_increment_ref_count(node_565),(struct sNode*)come_increment_ref_count(right_575),(_Bool)1,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sRShiftNode_finalize;
            _inf_value16->clone=(void*)sRShiftNode_clone;
            _inf_value16->compile=(void*)sRShiftNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sRShiftNode_kind;
            __dec_obj187=node_565,
            node_565=(struct sNode*)come_increment_ref_count(_inf_value16);
            (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value627,sRShiftNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_575) ? right_575 = come_decrement_ref_count(right_575, ((struct sNode*)right_575)->finalize, ((struct sNode*)right_575)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__333 = (struct sNode*)come_increment_ref_count(node_565);
    ((node_565) ? node_565 = come_decrement_ref_count(node_565, ((struct sNode*)node_565)->finalize, ((struct sNode*)node_565)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__333) ? __result_obj__333 = come_decrement_ref_count(__result_obj__333, ((struct sNode*)__result_obj__333)->finalize, ((struct sNode*)__result_obj__333)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__333;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
struct sLShiftNode* __result_obj__329;
void* __right_value608 = (void*)0;
struct sLShiftNode* result_568;
void* __right_value609 = (void*)0;
char* __dec_obj178;
void* __right_value610 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj180;
struct sLShiftNode* __result_obj__330;
    if(    self==(void*)0) {
        __result_obj__329 = (void*)0;
        return __result_obj__329;
    }
    result_568=(struct sLShiftNode*)come_increment_ref_count((struct sLShiftNode*)come_calloc_v2(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode*"));
    if(    self!=((void*)0)) {
        result_568->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj178=result_568->sname,
        result_568->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLShiftNode_clone", 5, "char*"));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_568->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_568->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj179=result_568->mLeft,
        result_568->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj180=result_568->mRight,
        result_568->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__330 = result_568;
    /*c*/ come_call_finalizer3(result_568,sLShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__330;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
struct sRShiftNode* __result_obj__331;
void* __right_value616 = (void*)0;
struct sRShiftNode* result_571;
void* __right_value617 = (void*)0;
char* __dec_obj182;
void* __right_value618 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value619 = (void*)0;
struct sNode* __dec_obj184;
struct sRShiftNode* __result_obj__332;
    if(    self==(void*)0) {
        __result_obj__331 = (void*)0;
        return __result_obj__331;
    }
    result_571=(struct sRShiftNode*)come_increment_ref_count((struct sRShiftNode*)come_calloc_v2(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode*"));
    if(    self!=((void*)0)) {
        result_571->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_571->sname,
        result_571->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sRShiftNode_clone", 5, "char*"));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_571->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_571->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj183=result_571->mLeft,
        result_571->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj184=result_571->mRight,
        result_571->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__332 = result_571;
    /*c*/ come_call_finalizer3(result_571,sRShiftNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

struct sNode* comparison_exp(struct sInfo* info){
void* __right_value629 = (void*)0;
struct sNode* node_576;
int sline_real_577;
void* __right_value630 = (void*)0;
struct sNode* right_578;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* __right_value637 = (void*)0;
struct sNode* __dec_obj191;
int sline_real_580;
void* __right_value638 = (void*)0;
struct sNode* right_581;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* __right_value645 = (void*)0;
struct sNode* __dec_obj195;
int sline_real_583;
void* __right_value646 = (void*)0;
struct sNode* right_584;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* __right_value653 = (void*)0;
struct sNode* __dec_obj199;
int sline_real_586;
void* __right_value654 = (void*)0;
struct sNode* right_587;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* __right_value661 = (void*)0;
struct sNode* __dec_obj203;
int sline_real_589;
void* __right_value662 = (void*)0;
struct sNode* right_590;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj204;
int sline_real_591;
void* __right_value666 = (void*)0;
struct sNode* right_592;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* __right_value669 = (void*)0;
struct sNode* __dec_obj205;
int sline_real_593;
void* __right_value670 = (void*)0;
struct sNode* right_594;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* __right_value673 = (void*)0;
struct sNode* __dec_obj206;
int sline_real_595;
void* __right_value674 = (void*)0;
struct sNode* right_596;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj207;
struct sNode* __result_obj__342;
    parse_sharp_v5(info);
    node_576=(struct sNode*)come_increment_ref_count(shift_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==62&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_577=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_578=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_577;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1760, "struct sNode");
            _inf_obj_value17=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value632=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1760, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_578),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __dec_obj191=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value17);
            (__dec_obj191 ? __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value632,sGtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_578) ? right_578 = come_decrement_ref_count(right_578, ((struct sNode*)right_578)->finalize, ((struct sNode*)right_578)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_580=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_581=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_580;
            _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1771, "struct sNode");
            _inf_obj_value18=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value640=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1771, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_581),(_Bool)0,info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sLtEqNode_finalize;
            _inf_value18->clone=(void*)sLtEqNode_clone;
            _inf_value18->compile=(void*)sLtEqNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sLtEqNode_kind;
            __dec_obj195=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value18);
            (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value640,sLtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_581) ? right_581 = come_decrement_ref_count(right_581, ((struct sNode*)right_581)->finalize, ((struct sNode*)right_581)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==62&&*(info->p+1)!=62) {
            info->p++;
            sline_real_583=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_584=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_583;
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1782, "struct sNode");
            _inf_obj_value19=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value648=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "13op.c", 1782, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_584),(_Bool)0,info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sGtNode_finalize;
            _inf_value19->clone=(void*)sGtNode_clone;
            _inf_value19->compile=(void*)sGtNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sGtNode_kind;
            __dec_obj199=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value19);
            (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value648,sGtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_584) ? right_584 = come_decrement_ref_count(right_584, ((struct sNode*)right_584)->finalize, ((struct sNode*)right_584)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==60&&*(info->p+1)!=60&&*(info->p+1)!=45) {
            info->p++;
            sline_real_586=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_587=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_586;
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1793, "struct sNode");
            _inf_obj_value20=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value656=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 1793, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_587),(_Bool)0,info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sLtNode_finalize;
            _inf_value20->clone=(void*)sLtNode_clone;
            _inf_value20->compile=(void*)sLtNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sLtNode_kind;
            __dec_obj203=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value20);
            (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value656,sLtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_587) ? right_587 = come_decrement_ref_count(right_587, ((struct sNode*)right_587)->finalize, ((struct sNode*)right_587)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_589=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_590=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_589;
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1804, "struct sNode");
            _inf_obj_value21=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(__right_value664=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "13op.c", 1804, "struct sGtEqNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_590),(_Bool)1,info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sGtEqNode_finalize;
            _inf_value21->clone=(void*)sGtEqNode_clone;
            _inf_value21->compile=(void*)sGtEqNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sGtEqNode_kind;
            __dec_obj204=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value21);
            (__dec_obj204 ? __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value664,sGtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_590) ? right_590 = come_decrement_ref_count(right_590, ((struct sNode*)right_590)->finalize, ((struct sNode*)right_590)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_591=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_592=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_591;
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1815, "struct sNode");
            _inf_obj_value22=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(__right_value668=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "13op.c", 1815, "struct sLtEqNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_592),(_Bool)1,info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sLtEqNode_finalize;
            _inf_value22->clone=(void*)sLtEqNode_clone;
            _inf_value22->compile=(void*)sLtEqNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sLtEqNode_kind;
            __dec_obj205=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value22);
            (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value668,sLtEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_592) ? right_592 = come_decrement_ref_count(right_592, ((struct sNode*)right_592)->finalize, ((struct sNode*)right_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62) {
            info->p+=2;
            sline_real_593=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_594=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_593;
            _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1826, "struct sNode");
            _inf_obj_value23=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(__right_value672=sGtNode_initialize((struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "13op.c", 1826, "struct sGtNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_594),(_Bool)1,info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sGtNode_finalize;
            _inf_value23->clone=(void*)sGtNode_clone;
            _inf_value23->compile=(void*)sGtNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sline_real=(void*)sNodeBase_sline_real;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sGtNode_kind;
            __dec_obj206=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value23);
            (__dec_obj206 ? __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value672,sGtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_594) ? right_594 = come_decrement_ref_count(right_594, ((struct sNode*)right_594)->finalize, ((struct sNode*)right_594)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60&&*(info->p+2)!=45) {
            info->p+=2;
            sline_real_595=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_596=(struct sNode*)come_increment_ref_count(shift_exp(info));
            info->sline_real=sline_real_595;
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1837, "struct sNode");
            _inf_obj_value24=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value676=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 1837, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node_576),(struct sNode*)come_increment_ref_count(right_596),(_Bool)1,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sLtNode_finalize;
            _inf_value24->clone=(void*)sLtNode_clone;
            _inf_value24->compile=(void*)sLtNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sLtNode_kind;
            __dec_obj207=node_576,
            node_576=(struct sNode*)come_increment_ref_count(_inf_value24);
            (__dec_obj207 ? __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value676,sLtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_596) ? right_596 = come_decrement_ref_count(right_596, ((struct sNode*)right_596)->finalize, ((struct sNode*)right_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__342 = (struct sNode*)come_increment_ref_count(node_576);
    ((node_576) ? node_576 = come_decrement_ref_count(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__342;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
struct sGtEqNode* __result_obj__334;
void* __right_value633 = (void*)0;
struct sGtEqNode* result_579;
void* __right_value634 = (void*)0;
char* __dec_obj188;
void* __right_value635 = (void*)0;
struct sNode* __dec_obj189;
void* __right_value636 = (void*)0;
struct sNode* __dec_obj190;
struct sGtEqNode* __result_obj__335;
    if(    self==(void*)0) {
        __result_obj__334 = (void*)0;
        return __result_obj__334;
    }
    result_579=(struct sGtEqNode*)come_increment_ref_count((struct sGtEqNode*)come_calloc_v2(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode*"));
    if(    self!=((void*)0)) {
        result_579->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj188=result_579->sname,
        result_579->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtEqNode_clone", 5, "char*"));
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_579->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_579->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj189=result_579->mLeft,
        result_579->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj190=result_579->mRight,
        result_579->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj190 ? __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__335 = result_579;
    /*c*/ come_call_finalizer3(result_579,sGtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
struct sLtEqNode* __result_obj__336;
void* __right_value641 = (void*)0;
struct sLtEqNode* result_582;
void* __right_value642 = (void*)0;
char* __dec_obj192;
void* __right_value643 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value644 = (void*)0;
struct sNode* __dec_obj194;
struct sLtEqNode* __result_obj__337;
    if(    self==(void*)0) {
        __result_obj__336 = (void*)0;
        return __result_obj__336;
    }
    result_582=(struct sLtEqNode*)come_increment_ref_count((struct sLtEqNode*)come_calloc_v2(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode*"));
    if(    self!=((void*)0)) {
        result_582->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj192=result_582->sname,
        result_582->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtEqNode_clone", 5, "char*"));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_582->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_582->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj193=result_582->mLeft,
        result_582->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj194=result_582->mRight,
        result_582->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj194 ? __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__337 = result_582;
    /*c*/ come_call_finalizer3(result_582,sLtEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__337;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
struct sGtNode* __result_obj__338;
void* __right_value649 = (void*)0;
struct sGtNode* result_585;
void* __right_value650 = (void*)0;
char* __dec_obj196;
void* __right_value651 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value652 = (void*)0;
struct sNode* __dec_obj198;
struct sGtNode* __result_obj__339;
    if(    self==(void*)0) {
        __result_obj__338 = (void*)0;
        return __result_obj__338;
    }
    result_585=(struct sGtNode*)come_increment_ref_count((struct sGtNode*)come_calloc_v2(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode*"));
    if(    self!=((void*)0)) {
        result_585->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj196=result_585->sname,
        result_585->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGtNode_clone", 5, "char*"));
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_585->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_585->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj197=result_585->mLeft,
        result_585->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj198=result_585->mRight,
        result_585->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj198 ? __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__339 = result_585;
    /*c*/ come_call_finalizer3(result_585,sGtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__339;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
struct sLtNode* __result_obj__340;
void* __right_value657 = (void*)0;
struct sLtNode* result_588;
void* __right_value658 = (void*)0;
char* __dec_obj200;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj201;
void* __right_value660 = (void*)0;
struct sNode* __dec_obj202;
struct sLtNode* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = (void*)0;
        return __result_obj__340;
    }
    result_588=(struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode*"));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_588->sname,
        result_588->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLtNode_clone", 5, "char*"));
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_588->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj201=result_588->mLeft,
        result_588->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj201 ? __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj202=result_588->mRight,
        result_588->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__341 = result_588;
    /*c*/ come_call_finalizer3(result_588,sLtNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__341;
}

struct sNode* eq_exp(struct sInfo* info){
void* __right_value678 = (void*)0;
struct sNode* node_597;
int sline_real_598;
void* __right_value679 = (void*)0;
struct sNode* right_599;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* __right_value686 = (void*)0;
struct sNode* __dec_obj211;
int sline_real_601;
void* __right_value687 = (void*)0;
struct sNode* right_602;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* __right_value694 = (void*)0;
struct sNode* __dec_obj215;
int sline_real_604;
void* __right_value695 = (void*)0;
struct sNode* right_605;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* __right_value702 = (void*)0;
struct sNode* __dec_obj219;
int sline_real_607;
void* __right_value703 = (void*)0;
struct sNode* right_608;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* __right_value710 = (void*)0;
struct sNode* __dec_obj223;
int sline_real_610;
void* __right_value711 = (void*)0;
struct sNode* right_611;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* __right_value714 = (void*)0;
struct sNode* __dec_obj224;
int sline_real_612;
void* __right_value715 = (void*)0;
struct sNode* right_613;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* __right_value718 = (void*)0;
struct sNode* __dec_obj225;
int sline_real_614;
void* __right_value719 = (void*)0;
struct sNode* right_615;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* __right_value722 = (void*)0;
struct sNode* __dec_obj226;
int sline_real_616;
void* __right_value723 = (void*)0;
struct sNode* right_617;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* __right_value726 = (void*)0;
struct sNode* __dec_obj227;
struct sNode* __result_obj__351;
    parse_sharp_v5(info);
    node_597=(struct sNode*)come_increment_ref_count(comparison_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==61&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_598=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_599=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_598;
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1867, "struct sNode");
            _inf_obj_value25=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value681=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "13op.c", 1867, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_599),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __dec_obj211=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value25);
            (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value681,sEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_599) ? right_599 = come_decrement_ref_count(right_599, ((struct sNode*)right_599)->finalize, ((struct sNode*)right_599)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==61&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_601=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_602=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_601;
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1878, "struct sNode");
            _inf_obj_value26=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value689=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "13op.c", 1878, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_602),(_Bool)0,info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sEqNode_finalize;
            _inf_value26->clone=(void*)sEqNode_clone;
            _inf_value26->compile=(void*)sEqNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sEqNode_kind;
            __dec_obj215=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value26);
            (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value689,sEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_602) ? right_602 = come_decrement_ref_count(right_602, ((struct sNode*)right_602)->finalize, ((struct sNode*)right_602)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_604=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_605=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_604;
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1889, "struct sNode");
            _inf_obj_value27=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value697=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1889, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_605),(_Bool)0,info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sNotEq2Node_finalize;
            _inf_value27->clone=(void*)sNotEq2Node_clone;
            _inf_value27->compile=(void*)sNotEq2Node_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sNotEq2Node_kind;
            __dec_obj219=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value27);
            (__dec_obj219 ? __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value697,sNotEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_605) ? right_605 = come_decrement_ref_count(right_605, ((struct sNode*)right_605)->finalize, ((struct sNode*)right_605)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==61) {
            info->p+=2;
            sline_real_607=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_608=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_607;
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1900, "struct sNode");
            _inf_obj_value28=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value705=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1900, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_608),(_Bool)0,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sNotEqNode_finalize;
            _inf_value28->clone=(void*)sNotEqNode_clone;
            _inf_value28->compile=(void*)sNotEqNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sNotEqNode_kind;
            __dec_obj223=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value28);
            (__dec_obj223 ? __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value705,sNotEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_608) ? right_608 = come_decrement_ref_count(right_608, ((struct sNode*)right_608)->finalize, ((struct sNode*)right_608)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_610=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_611=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_610;
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1911, "struct sNode");
            _inf_obj_value29=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(__right_value713=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "13op.c", 1911, "struct sEq2Node*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_611),(_Bool)1,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sEq2Node_finalize;
            _inf_value29->clone=(void*)sEq2Node_clone;
            _inf_value29->compile=(void*)sEq2Node_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sEq2Node_kind;
            __dec_obj224=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value29);
            (__dec_obj224 ? __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value713,sEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_611) ? right_611 = come_decrement_ref_count(right_611, ((struct sNode*)right_611)->finalize, ((struct sNode*)right_611)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==61&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_612=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_613=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_612;
            _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1922, "struct sNode");
            _inf_obj_value30=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(__right_value717=sEqNode_initialize((struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "13op.c", 1922, "struct sEqNode*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_613),(_Bool)1,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sEqNode_finalize;
            _inf_value30->clone=(void*)sEqNode_clone;
            _inf_value30->compile=(void*)sEqNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sEqNode_kind;
            __dec_obj225=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value30);
            (__dec_obj225 ? __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value717,sEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_613) ? right_613 = come_decrement_ref_count(right_613, ((struct sNode*)right_613)->finalize, ((struct sNode*)right_613)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61) {
            info->p+=4;
            sline_real_614=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_615=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_614;
            _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1933, "struct sNode");
            _inf_obj_value31=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(__right_value721=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 1933, "struct sNotEq2Node*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_615),(_Bool)1,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sNotEq2Node_finalize;
            _inf_value31->clone=(void*)sNotEq2Node_clone;
            _inf_value31->compile=(void*)sNotEq2Node_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sNotEq2Node_kind;
            __dec_obj226=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value31);
            (__dec_obj226 ? __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value721,sNotEq2Node_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_615) ? right_615 = come_decrement_ref_count(right_615, ((struct sNode*)right_615)->finalize, ((struct sNode*)right_615)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==33&&*(info->p+2)==61) {
            info->p+=3;
            sline_real_616=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_617=(struct sNode*)come_increment_ref_count(comparison_exp(info));
            info->sline_real=sline_real_616;
            _inf_value32=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1944, "struct sNode");
            _inf_obj_value32=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(__right_value725=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "13op.c", 1944, "struct sNotEqNode*")),(struct sNode*)come_increment_ref_count(node_597),(struct sNode*)come_increment_ref_count(right_617),(_Bool)1,info))));
            _inf_value32->_protocol_obj=_inf_obj_value32;
            _inf_value32->finalize=(void*)sNotEqNode_finalize;
            _inf_value32->clone=(void*)sNotEqNode_clone;
            _inf_value32->compile=(void*)sNotEqNode_compile;
            _inf_value32->sline=(void*)sNodeBase_sline;
            _inf_value32->sline_real=(void*)sNodeBase_sline_real;
            _inf_value32->sname=(void*)sNodeBase_sname;
            _inf_value32->terminated=(void*)sNodeBase_terminated;
            _inf_value32->kind=(void*)sNotEqNode_kind;
            __dec_obj227=node_597,
            node_597=(struct sNode*)come_increment_ref_count(_inf_value32);
            (__dec_obj227 ? __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value725,sNotEqNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_617) ? right_617 = come_decrement_ref_count(right_617, ((struct sNode*)right_617)->finalize, ((struct sNode*)right_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__351 = (struct sNode*)come_increment_ref_count(node_597);
    ((node_597) ? node_597 = come_decrement_ref_count(node_597, ((struct sNode*)node_597)->finalize, ((struct sNode*)node_597)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__351;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
struct sEq2Node* __result_obj__343;
void* __right_value682 = (void*)0;
struct sEq2Node* result_600;
void* __right_value683 = (void*)0;
char* __dec_obj208;
void* __right_value684 = (void*)0;
struct sNode* __dec_obj209;
void* __right_value685 = (void*)0;
struct sNode* __dec_obj210;
struct sEq2Node* __result_obj__344;
    if(    self==(void*)0) {
        __result_obj__343 = (void*)0;
        return __result_obj__343;
    }
    result_600=(struct sEq2Node*)come_increment_ref_count((struct sEq2Node*)come_calloc_v2(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node*"));
    if(    self!=((void*)0)) {
        result_600->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_600->sname,
        result_600->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEq2Node_clone", 5, "char*"));
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_600->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_600->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj209=result_600->mLeft,
        result_600->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj210=result_600->mRight,
        result_600->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__344 = result_600;
    /*c*/ come_call_finalizer3(result_600,sEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__344;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
struct sEqNode* __result_obj__345;
void* __right_value690 = (void*)0;
struct sEqNode* result_603;
void* __right_value691 = (void*)0;
char* __dec_obj212;
void* __right_value692 = (void*)0;
struct sNode* __dec_obj213;
void* __right_value693 = (void*)0;
struct sNode* __dec_obj214;
struct sEqNode* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = (void*)0;
        return __result_obj__345;
    }
    result_603=(struct sEqNode*)come_increment_ref_count((struct sEqNode*)come_calloc_v2(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode*"));
    if(    self!=((void*)0)) {
        result_603->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_603->sname,
        result_603->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sEqNode_clone", 5, "char*"));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_603->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_603->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj213=result_603->mLeft,
        result_603->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj213 ? __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj214=result_603->mRight,
        result_603->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj214 ? __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__346 = result_603;
    /*c*/ come_call_finalizer3(result_603,sEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__346;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
struct sNotEq2Node* __result_obj__347;
void* __right_value698 = (void*)0;
struct sNotEq2Node* result_606;
void* __right_value699 = (void*)0;
char* __dec_obj216;
void* __right_value700 = (void*)0;
struct sNode* __dec_obj217;
void* __right_value701 = (void*)0;
struct sNode* __dec_obj218;
struct sNotEq2Node* __result_obj__348;
    if(    self==(void*)0) {
        __result_obj__347 = (void*)0;
        return __result_obj__347;
    }
    result_606=(struct sNotEq2Node*)come_increment_ref_count((struct sNotEq2Node*)come_calloc_v2(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node*"));
    if(    self!=((void*)0)) {
        result_606->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj216=result_606->sname,
        result_606->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEq2Node_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_606->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_606->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj217=result_606->mLeft,
        result_606->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj218=result_606->mRight,
        result_606->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj218 ? __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__348 = result_606;
    /*c*/ come_call_finalizer3(result_606,sNotEq2Node_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__348;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
struct sNotEqNode* __result_obj__349;
void* __right_value706 = (void*)0;
struct sNotEqNode* result_609;
void* __right_value707 = (void*)0;
char* __dec_obj220;
void* __right_value708 = (void*)0;
struct sNode* __dec_obj221;
void* __right_value709 = (void*)0;
struct sNode* __dec_obj222;
struct sNotEqNode* __result_obj__350;
    if(    self==(void*)0) {
        __result_obj__349 = (void*)0;
        return __result_obj__349;
    }
    result_609=(struct sNotEqNode*)come_increment_ref_count((struct sNotEqNode*)come_calloc_v2(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode*"));
    if(    self!=((void*)0)) {
        result_609->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj220=result_609->sname,
        result_609->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNotEqNode_clone", 5, "char*"));
        __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_609->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_609->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj221=result_609->mLeft,
        result_609->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj221 ? __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj222=result_609->mRight,
        result_609->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj222 ? __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__350 = result_609;
    /*c*/ come_call_finalizer3(result_609,sNotEqNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__350;
}

struct sNode* and_exp(struct sInfo* info){
void* __right_value727 = (void*)0;
struct sNode* node_618;
int sline_real_619;
void* __right_value728 = (void*)0;
struct sNode* right_620;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* __right_value735 = (void*)0;
struct sNode* __dec_obj231;
int sline_real_622;
void* __right_value736 = (void*)0;
struct sNode* right_623;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj232;
struct sNode* __result_obj__354;
    parse_sharp_v5(info);
    node_618=(struct sNode*)come_increment_ref_count(eq_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !node_618->terminated(node_618->_protocol_obj)&&*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61) {
            info->p++;
            sline_real_619=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_620=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_619;
            _inf_value33=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1974, "struct sNode");
            _inf_obj_value33=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value730=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "13op.c", 1974, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_618),(struct sNode*)come_increment_ref_count(right_620),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sNodeBase_sline;
            _inf_value33->sline_real=(void*)sNodeBase_sline_real;
            _inf_value33->sname=(void*)sNodeBase_sname;
            _inf_value33->terminated=(void*)sNodeBase_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __dec_obj231=node_618,
            node_618=(struct sNode*)come_increment_ref_count(_inf_value33);
            (__dec_obj231 ? __dec_obj231 = come_decrement_ref_count(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value730,sAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_620) ? right_620 = come_decrement_ref_count(right_620, ((struct sNode*)right_620)->finalize, ((struct sNode*)right_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !node_618->terminated(node_618->_protocol_obj)&&*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_622=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_623=(struct sNode*)come_increment_ref_count(eq_exp(info));
            info->sline_real=sline_real_622;
            _inf_value34=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 1985, "struct sNode");
            _inf_obj_value34=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(__right_value738=sAndNode_initialize((struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "13op.c", 1985, "struct sAndNode*")),(struct sNode*)come_increment_ref_count(node_618),(struct sNode*)come_increment_ref_count(right_623),(_Bool)1,info))));
            _inf_value34->_protocol_obj=_inf_obj_value34;
            _inf_value34->finalize=(void*)sAndNode_finalize;
            _inf_value34->clone=(void*)sAndNode_clone;
            _inf_value34->compile=(void*)sAndNode_compile;
            _inf_value34->sline=(void*)sNodeBase_sline;
            _inf_value34->sline_real=(void*)sNodeBase_sline_real;
            _inf_value34->sname=(void*)sNodeBase_sname;
            _inf_value34->terminated=(void*)sNodeBase_terminated;
            _inf_value34->kind=(void*)sAndNode_kind;
            __dec_obj232=node_618,
            node_618=(struct sNode*)come_increment_ref_count(_inf_value34);
            (__dec_obj232 ? __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value738,sAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_623) ? right_623 = come_decrement_ref_count(right_623, ((struct sNode*)right_623)->finalize, ((struct sNode*)right_623)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__354 = (struct sNode*)come_increment_ref_count(node_618);
    ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__354;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
struct sAndNode* __result_obj__352;
void* __right_value731 = (void*)0;
struct sAndNode* result_621;
void* __right_value732 = (void*)0;
char* __dec_obj228;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value734 = (void*)0;
struct sNode* __dec_obj230;
struct sAndNode* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = (void*)0;
        return __result_obj__352;
    }
    result_621=(struct sAndNode*)come_increment_ref_count((struct sAndNode*)come_calloc_v2(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode*"));
    if(    self!=((void*)0)) {
        result_621->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj228=result_621->sname,
        result_621->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndNode_clone", 5, "char*"));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_621->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_621->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj229=result_621->mLeft,
        result_621->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj229 ? __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj230=result_621->mRight,
        result_621->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj230 ? __dec_obj230 = come_decrement_ref_count(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__353 = result_621;
    /*c*/ come_call_finalizer3(result_621,sAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__353;
}

struct sNode* xor_exp(struct sInfo* info){
void* __right_value740 = (void*)0;
struct sNode* node_624;
int sline_real_625;
void* __right_value741 = (void*)0;
struct sNode* right_626;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* __right_value748 = (void*)0;
struct sNode* __dec_obj236;
int sline_real_628;
void* __right_value749 = (void*)0;
struct sNode* right_629;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* __right_value752 = (void*)0;
struct sNode* __dec_obj237;
struct sNode* __result_obj__357;
    parse_sharp_v5(info);
    node_624=(struct sNode*)come_increment_ref_count(and_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==94&&*(info->p+1)!=61) {
            info->p++;
            sline_real_625=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_626=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_625;
            _inf_value35=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2015, "struct sNode");
            _inf_obj_value35=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value743=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "13op.c", 2015, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_624),(struct sNode*)come_increment_ref_count(right_626),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sNodeBase_sline;
            _inf_value35->sline_real=(void*)sNodeBase_sline_real;
            _inf_value35->sname=(void*)sNodeBase_sname;
            _inf_value35->terminated=(void*)sNodeBase_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __dec_obj236=node_624,
            node_624=(struct sNode*)come_increment_ref_count(_inf_value35);
            (__dec_obj236 ? __dec_obj236 = come_decrement_ref_count(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value743,sXOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_626) ? right_626 = come_decrement_ref_count(right_626, ((struct sNode*)right_626)->finalize, ((struct sNode*)right_626)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61) {
            info->p+=2;
            sline_real_628=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_629=(struct sNode*)come_increment_ref_count(and_exp(info));
            info->sline_real=sline_real_628;
            _inf_value36=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2026, "struct sNode");
            _inf_obj_value36=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(__right_value751=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "13op.c", 2026, "struct sXOrNode*")),(struct sNode*)come_increment_ref_count(node_624),(struct sNode*)come_increment_ref_count(right_629),(_Bool)1,info))));
            _inf_value36->_protocol_obj=_inf_obj_value36;
            _inf_value36->finalize=(void*)sXOrNode_finalize;
            _inf_value36->clone=(void*)sXOrNode_clone;
            _inf_value36->compile=(void*)sXOrNode_compile;
            _inf_value36->sline=(void*)sNodeBase_sline;
            _inf_value36->sline_real=(void*)sNodeBase_sline_real;
            _inf_value36->sname=(void*)sNodeBase_sname;
            _inf_value36->terminated=(void*)sNodeBase_terminated;
            _inf_value36->kind=(void*)sXOrNode_kind;
            __dec_obj237=node_624,
            node_624=(struct sNode*)come_increment_ref_count(_inf_value36);
            (__dec_obj237 ? __dec_obj237 = come_decrement_ref_count(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value751,sXOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_629) ? right_629 = come_decrement_ref_count(right_629, ((struct sNode*)right_629)->finalize, ((struct sNode*)right_629)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__357 = (struct sNode*)come_increment_ref_count(node_624);
    ((node_624) ? node_624 = come_decrement_ref_count(node_624, ((struct sNode*)node_624)->finalize, ((struct sNode*)node_624)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__357) ? __result_obj__357 = come_decrement_ref_count(__result_obj__357, ((struct sNode*)__result_obj__357)->finalize, ((struct sNode*)__result_obj__357)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__357;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
struct sXOrNode* __result_obj__355;
void* __right_value744 = (void*)0;
struct sXOrNode* result_627;
void* __right_value745 = (void*)0;
char* __dec_obj233;
void* __right_value746 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj235;
struct sXOrNode* __result_obj__356;
    if(    self==(void*)0) {
        __result_obj__355 = (void*)0;
        return __result_obj__355;
    }
    result_627=(struct sXOrNode*)come_increment_ref_count((struct sXOrNode*)come_calloc_v2(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode*"));
    if(    self!=((void*)0)) {
        result_627->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_627->sname,
        result_627->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sXOrNode_clone", 5, "char*"));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_627->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_627->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj234=result_627->mLeft,
        result_627->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj234 ? __dec_obj234 = come_decrement_ref_count(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj235=result_627->mRight,
        result_627->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj235 ? __dec_obj235 = come_decrement_ref_count(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__356 = result_627;
    /*c*/ come_call_finalizer3(result_627,sXOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__356;
}

struct sNode* or_exp(struct sInfo* info){
void* __right_value753 = (void*)0;
struct sNode* node_630;
int sline_real_631;
void* __right_value754 = (void*)0;
struct sNode* right_632;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* __right_value761 = (void*)0;
struct sNode* __dec_obj241;
int sline_real_634;
void* __right_value762 = (void*)0;
struct sNode* right_635;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj242;
struct sNode* __result_obj__360;
    parse_sharp_v5(info);
    node_630=(struct sNode*)come_increment_ref_count(xor_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124) {
            info->p++;
            sline_real_631=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_632=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_631;
            _inf_value37=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2056, "struct sNode");
            _inf_obj_value37=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value756=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "13op.c", 2056, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_630),(struct sNode*)come_increment_ref_count(right_632),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sNodeBase_sline;
            _inf_value37->sline_real=(void*)sNodeBase_sline_real;
            _inf_value37->sname=(void*)sNodeBase_sname;
            _inf_value37->terminated=(void*)sNodeBase_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __dec_obj241=node_630,
            node_630=(struct sNode*)come_increment_ref_count(_inf_value37);
            (__dec_obj241 ? __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value756,sOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_632) ? right_632 = come_decrement_ref_count(right_632, ((struct sNode*)right_632)->finalize, ((struct sNode*)right_632)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124) {
            info->p+=2;
            sline_real_634=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_635=(struct sNode*)come_increment_ref_count(xor_exp(info));
            info->sline_real=sline_real_634;
            _inf_value38=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2067, "struct sNode");
            _inf_obj_value38=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(__right_value764=sOrNode_initialize((struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "13op.c", 2067, "struct sOrNode*")),(struct sNode*)come_increment_ref_count(node_630),(struct sNode*)come_increment_ref_count(right_635),(_Bool)1,info))));
            _inf_value38->_protocol_obj=_inf_obj_value38;
            _inf_value38->finalize=(void*)sOrNode_finalize;
            _inf_value38->clone=(void*)sOrNode_clone;
            _inf_value38->compile=(void*)sOrNode_compile;
            _inf_value38->sline=(void*)sNodeBase_sline;
            _inf_value38->sline_real=(void*)sNodeBase_sline_real;
            _inf_value38->sname=(void*)sNodeBase_sname;
            _inf_value38->terminated=(void*)sNodeBase_terminated;
            _inf_value38->kind=(void*)sOrNode_kind;
            __dec_obj242=node_630,
            node_630=(struct sNode*)come_increment_ref_count(_inf_value38);
            (__dec_obj242 ? __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value764,sOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_635) ? right_635 = come_decrement_ref_count(right_635, ((struct sNode*)right_635)->finalize, ((struct sNode*)right_635)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__360 = (struct sNode*)come_increment_ref_count(node_630);
    ((node_630) ? node_630 = come_decrement_ref_count(node_630, ((struct sNode*)node_630)->finalize, ((struct sNode*)node_630)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__360) ? __result_obj__360 = come_decrement_ref_count(__result_obj__360, ((struct sNode*)__result_obj__360)->finalize, ((struct sNode*)__result_obj__360)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__360;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
struct sOrNode* __result_obj__358;
void* __right_value757 = (void*)0;
struct sOrNode* result_633;
void* __right_value758 = (void*)0;
char* __dec_obj238;
void* __right_value759 = (void*)0;
struct sNode* __dec_obj239;
void* __right_value760 = (void*)0;
struct sNode* __dec_obj240;
struct sOrNode* __result_obj__359;
    if(    self==(void*)0) {
        __result_obj__358 = (void*)0;
        return __result_obj__358;
    }
    result_633=(struct sOrNode*)come_increment_ref_count((struct sOrNode*)come_calloc_v2(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode*"));
    if(    self!=((void*)0)) {
        result_633->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj238=result_633->sname,
        result_633->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrNode_clone", 5, "char*"));
        __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_633->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_633->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj239=result_633->mLeft,
        result_633->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj239 ? __dec_obj239 = come_decrement_ref_count(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj240=result_633->mRight,
        result_633->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj240 ? __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__359 = result_633;
    /*c*/ come_call_finalizer3(result_633,sOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__359;
}

struct sNode* andand_exp(struct sInfo* info){
void* __right_value766 = (void*)0;
struct sNode* node_636;
int sline_real_637;
void* __right_value767 = (void*)0;
struct sNode* right_638;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj246;
int sline_real_640;
void* __right_value775 = (void*)0;
struct sNode* right_641;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* __right_value778 = (void*)0;
struct sNode* __dec_obj247;
struct sNode* __result_obj__363;
    parse_sharp_v5(info);
    node_636=(struct sNode*)come_increment_ref_count(or_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==38&&*(info->p+1)==38) {
            info->p+=2;
            sline_real_637=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_638=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_637;
            _inf_value39=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2097, "struct sNode");
            _inf_obj_value39=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value769=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2097, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_636),(struct sNode*)come_increment_ref_count(right_638),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sNodeBase_sline;
            _inf_value39->sline_real=(void*)sNodeBase_sline_real;
            _inf_value39->sname=(void*)sNodeBase_sname;
            _inf_value39->terminated=(void*)sNodeBase_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __dec_obj246=node_636,
            node_636=(struct sNode*)come_increment_ref_count(_inf_value39);
            (__dec_obj246 ? __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value769,sAndAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_638) ? right_638 = come_decrement_ref_count(right_638, ((struct sNode*)right_638)->finalize, ((struct sNode*)right_638)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==38&&*(info->p+2)==38) {
            info->p+=3;
            sline_real_640=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_641=(struct sNode*)come_increment_ref_count(or_exp(info));
            info->sline_real=sline_real_640;
            _inf_value40=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2108, "struct sNode");
            _inf_obj_value40=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(__right_value777=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2108, "struct sAndAndNode*")),(struct sNode*)come_increment_ref_count(node_636),(struct sNode*)come_increment_ref_count(right_641),(_Bool)1,info))));
            _inf_value40->_protocol_obj=_inf_obj_value40;
            _inf_value40->finalize=(void*)sAndAndNode_finalize;
            _inf_value40->clone=(void*)sAndAndNode_clone;
            _inf_value40->compile=(void*)sAndAndNode_compile;
            _inf_value40->sline=(void*)sNodeBase_sline;
            _inf_value40->sline_real=(void*)sNodeBase_sline_real;
            _inf_value40->sname=(void*)sNodeBase_sname;
            _inf_value40->terminated=(void*)sNodeBase_terminated;
            _inf_value40->kind=(void*)sAndAndNode_kind;
            __dec_obj247=node_636,
            node_636=(struct sNode*)come_increment_ref_count(_inf_value40);
            (__dec_obj247 ? __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value777,sAndAndNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_641) ? right_641 = come_decrement_ref_count(right_641, ((struct sNode*)right_641)->finalize, ((struct sNode*)right_641)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__363 = (struct sNode*)come_increment_ref_count(node_636);
    ((node_636) ? node_636 = come_decrement_ref_count(node_636, ((struct sNode*)node_636)->finalize, ((struct sNode*)node_636)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__363;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
struct sAndAndNode* __result_obj__361;
void* __right_value770 = (void*)0;
struct sAndAndNode* result_639;
void* __right_value771 = (void*)0;
char* __dec_obj243;
void* __right_value772 = (void*)0;
struct sNode* __dec_obj244;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj245;
struct sAndAndNode* __result_obj__362;
    if(    self==(void*)0) {
        __result_obj__361 = (void*)0;
        return __result_obj__361;
    }
    result_639=(struct sAndAndNode*)come_increment_ref_count((struct sAndAndNode*)come_calloc_v2(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode*"));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj243=result_639->sname,
        result_639->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAndAndNode_clone", 5, "char*"));
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_639->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_639->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj244=result_639->mLeft,
        result_639->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj244 ? __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj245=result_639->mRight,
        result_639->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj245 ? __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__362 = result_639;
    /*c*/ come_call_finalizer3(result_639,sAndAndNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

struct sNode* oror_exp(struct sInfo* info){
void* __right_value779 = (void*)0;
struct sNode* node_642;
int sline_real_643;
void* __right_value780 = (void*)0;
struct sNode* right_644;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* __right_value787 = (void*)0;
struct sNode* __dec_obj251;
int sline_real_646;
void* __right_value788 = (void*)0;
struct sNode* right_647;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* __right_value791 = (void*)0;
struct sNode* __dec_obj252;
struct sNode* __result_obj__366;
    parse_sharp_v5(info);
    node_642=(struct sNode*)come_increment_ref_count(andand_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==124&&*(info->p+1)==124) {
            info->p+=2;
            sline_real_643=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_644=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_643;
            _inf_value41=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2138, "struct sNode");
            _inf_obj_value41=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value782=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2138, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_642),(struct sNode*)come_increment_ref_count(right_644),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sNodeBase_sline;
            _inf_value41->sline_real=(void*)sNodeBase_sline_real;
            _inf_value41->sname=(void*)sNodeBase_sname;
            _inf_value41->terminated=(void*)sNodeBase_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __dec_obj251=node_642,
            node_642=(struct sNode*)come_increment_ref_count(_inf_value41);
            (__dec_obj251 ? __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value782,sOrOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_644) ? right_644 = come_decrement_ref_count(right_644, ((struct sNode*)right_644)->finalize, ((struct sNode*)right_644)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==92&&*(info->p+1)==124&&*(info->p+2)==124) {
            info->p+=3;
            sline_real_646=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            right_647=(struct sNode*)come_increment_ref_count(andand_exp(info));
            info->sline_real=sline_real_646;
            _inf_value42=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2149, "struct sNode");
            _inf_obj_value42=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(__right_value790=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2149, "struct sOrOrNode*")),(struct sNode*)come_increment_ref_count(node_642),(struct sNode*)come_increment_ref_count(right_647),(_Bool)1,info))));
            _inf_value42->_protocol_obj=_inf_obj_value42;
            _inf_value42->finalize=(void*)sOrOrNode_finalize;
            _inf_value42->clone=(void*)sOrOrNode_clone;
            _inf_value42->compile=(void*)sOrOrNode_compile;
            _inf_value42->sline=(void*)sNodeBase_sline;
            _inf_value42->sline_real=(void*)sNodeBase_sline_real;
            _inf_value42->sname=(void*)sNodeBase_sname;
            _inf_value42->terminated=(void*)sNodeBase_terminated;
            _inf_value42->kind=(void*)sOrOrNode_kind;
            __dec_obj252=node_642,
            node_642=(struct sNode*)come_increment_ref_count(_inf_value42);
            (__dec_obj252 ? __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value790,sOrOrNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((right_647) ? right_647 = come_decrement_ref_count(right_647, ((struct sNode*)right_647)->finalize, ((struct sNode*)right_647)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__366 = (struct sNode*)come_increment_ref_count(node_642);
    ((node_642) ? node_642 = come_decrement_ref_count(node_642, ((struct sNode*)node_642)->finalize, ((struct sNode*)node_642)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__366) ? __result_obj__366 = come_decrement_ref_count(__result_obj__366, ((struct sNode*)__result_obj__366)->finalize, ((struct sNode*)__result_obj__366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__366;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
struct sOrOrNode* __result_obj__364;
void* __right_value783 = (void*)0;
struct sOrOrNode* result_645;
void* __right_value784 = (void*)0;
char* __dec_obj248;
void* __right_value785 = (void*)0;
struct sNode* __dec_obj249;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj250;
struct sOrOrNode* __result_obj__365;
    if(    self==(void*)0) {
        __result_obj__364 = (void*)0;
        return __result_obj__364;
    }
    result_645=(struct sOrOrNode*)come_increment_ref_count((struct sOrOrNode*)come_calloc_v2(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode*"));
    if(    self!=((void*)0)) {
        result_645->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj248=result_645->sname,
        result_645->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sOrOrNode_clone", 5, "char*"));
        __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_645->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_645->mQuote=self->mQuote;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj249=result_645->mLeft,
        result_645->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj249 ? __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj250=result_645->mRight,
        result_645->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj250 ? __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__365 = result_645;
    /*c*/ come_call_finalizer3(result_645,sOrOrNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__365;
}

struct sNode* comma_exp(struct sInfo* info){
void* __right_value792 = (void*)0;
struct sNode* node_648;
int sline_real_649;
void* __right_value793 = (void*)0;
struct sNode* node2_650;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* __right_value800 = (void*)0;
struct sNode* __dec_obj256;
struct sNode* __result_obj__369;
    parse_sharp_v5(info);
    node_648=(struct sNode*)come_increment_ref_count(oror_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        !info->no_comma&&*info->p==44) {
            info->p++;
            sline_real_649=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            node2_650=(struct sNode*)come_increment_ref_count(comma_exp(info));
            info->sline_real=sline_real_649;
            _inf_value43=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2179, "struct sNode");
            _inf_obj_value43=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(__right_value795=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc_v2(1, sizeof(struct sCommaNode)*(1), "13op.c", 2179, "struct sCommaNode*")),(struct sNode*)come_increment_ref_count(node_648),(struct sNode*)come_increment_ref_count(node2_650),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sNodeBase_sline;
            _inf_value43->sline_real=(void*)sNodeBase_sline_real;
            _inf_value43->sname=(void*)sNodeBase_sname;
            _inf_value43->terminated=(void*)sNodeBase_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __dec_obj256=node_648,
            node_648=(struct sNode*)come_increment_ref_count(_inf_value43);
            (__dec_obj256 ? __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value795,sCommaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node2_650) ? node2_650 = come_decrement_ref_count(node2_650, ((struct sNode*)node2_650)->finalize, ((struct sNode*)node2_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__369 = (struct sNode*)come_increment_ref_count(node_648);
    ((node_648) ? node_648 = come_decrement_ref_count(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__369) ? __result_obj__369 = come_decrement_ref_count(__result_obj__369, ((struct sNode*)__result_obj__369)->finalize, ((struct sNode*)__result_obj__369)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__369;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
struct sCommaNode* __result_obj__367;
void* __right_value796 = (void*)0;
struct sCommaNode* result_651;
void* __right_value797 = (void*)0;
char* __dec_obj253;
void* __right_value798 = (void*)0;
struct sNode* __dec_obj254;
void* __right_value799 = (void*)0;
struct sNode* __dec_obj255;
struct sCommaNode* __result_obj__368;
    if(    self==(void*)0) {
        __result_obj__367 = (void*)0;
        return __result_obj__367;
    }
    result_651=(struct sCommaNode*)come_increment_ref_count((struct sCommaNode*)come_calloc_v2(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode*"));
    if(    self!=((void*)0)) {
        result_651->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj253=result_651->sname,
        result_651->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCommaNode_clone", 5, "char*"));
        __dec_obj253 = come_decrement_ref_count(__dec_obj253, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_651->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj254=result_651->mLeft,
        result_651->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj254 ? __dec_obj254 = come_decrement_ref_count(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj255=result_651->mRight,
        result_651->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj255 ? __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__368 = result_651;
    /*c*/ come_call_finalizer3(result_651,sCommaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__368;
}

struct sNode* conditional_exp(struct sInfo* info){
void* __right_value801 = (void*)0;
struct sNode* node_652;
int sline_real_653;
struct sNode* value1_654;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* __right_value804 = (void*)0;
struct sNode* __dec_obj257;
_Bool no_label_655;
void* __right_value805 = (void*)0;
struct sNode* __dec_obj258;
void* __right_value806 = (void*)0;
struct sNode* value2_656;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* __right_value809 = (void*)0;
struct sNode* __dec_obj259;
struct sNode* __result_obj__370;
value1_654 = (void*)0;
    parse_sharp_v5(info);
    node_652=(struct sNode*)come_increment_ref_count(comma_exp(info));
    parse_sharp_v5(info);
    while(*info->p) {
        if(        *info->p==63) {
            info->p++;
            sline_real_653=info->sline_real;
            info->sline_real=info->sline;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                _inf_value44=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2210, "struct sNode");
                _inf_obj_value44=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value803=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 2210, "struct sNullNode*")),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNodeBase_sline;
                _inf_value44->sline_real=(void*)sNodeBase_sline_real;
                _inf_value44->sname=(void*)sNodeBase_sname;
                _inf_value44->terminated=(void*)sNodeBase_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj257=value1_654,
                value1_654=(struct sNode*)come_increment_ref_count(_inf_value44);
                (__dec_obj257 ? __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value803,sNullNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                no_label_655=info->no_label;
                info->no_label=(_Bool)1;
                __dec_obj258=value1_654,
                value1_654=(struct sNode*)come_increment_ref_count(conditional_exp(info));
                (__dec_obj258 ? __dec_obj258 = come_decrement_ref_count(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_label=no_label_655;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_656=(struct sNode*)come_increment_ref_count(conditional_exp(info));
            parse_sharp_v5(info);
            info->sline_real=sline_real_653;
            _inf_value45=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2228, "struct sNode");
            _inf_obj_value45=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(__right_value808=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count((struct sConditionalNode*)come_calloc_v2(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2228, "struct sConditionalNode*")),(struct sNode*)come_increment_ref_count(node_652),(struct sNode*)come_increment_ref_count(value1_654),(struct sNode*)come_increment_ref_count(value2_656),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sNodeBase_sline;
            _inf_value45->sline_real=(void*)sNodeBase_sline_real;
            _inf_value45->sname=(void*)sNodeBase_sname;
            _inf_value45->terminated=(void*)sNodeBase_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __dec_obj259=node_652,
            node_652=(struct sNode*)come_increment_ref_count(_inf_value45);
            (__dec_obj259 ? __dec_obj259 = come_decrement_ref_count(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value808,sConditionalNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((value1_654) ? value1_654 = come_decrement_ref_count(value1_654, ((struct sNode*)value1_654)->finalize, ((struct sNode*)value1_654)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value2_656) ? value2_656 = come_decrement_ref_count(value2_656, ((struct sNode*)value2_656)->finalize, ((struct sNode*)value2_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__370 = (struct sNode*)come_increment_ref_count(node_652);
    ((node_652) ? node_652 = come_decrement_ref_count(node_652, ((struct sNode*)node_652)->finalize, ((struct sNode*)node_652)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__370) ? __result_obj__370 = come_decrement_ref_count(__result_obj__370, ((struct sNode*)__result_obj__370)->finalize, ((struct sNode*)__result_obj__370)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__370;
}

struct sNode* expression_v13(struct sInfo* info){
void* __right_value810 = (void*)0;
struct sNode* node_657;
struct sNode* __result_obj__371;
    parse_sharp_v5(info);
    node_657=(struct sNode*)come_increment_ref_count(conditional_exp(info));
    __result_obj__371 = (struct sNode*)come_increment_ref_count(node_657);
    ((node_657) ? node_657 = come_decrement_ref_count(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__371) ? __result_obj__371 = come_decrement_ref_count(__result_obj__371, ((struct sNode*)__result_obj__371)->finalize, ((struct sNode*)__result_obj__371)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__371;
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* __right_value813 = (void*)0;
struct sNode* __result_obj__372;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* __right_value818 = (void*)0;
struct sNode* __result_obj__375;
void* __right_value819 = (void*)0;
struct sNode* __result_obj__376;
    if(    !gComeC&&charp_operator_equals(buf,"null")) {
        _inf_value46=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2252, "struct sNode");
        _inf_obj_value46=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(__right_value812=sNullNode_initialize((struct sNullNode*)come_increment_ref_count((struct sNullNode*)come_calloc_v2(1, sizeof(struct sNullNode)*(1), "13op.c", 2252, "struct sNullNode*")),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNodeBase_sline;
        _inf_value46->sline_real=(void*)sNodeBase_sline_real;
        _inf_value46->sname=(void*)sNodeBase_sname;
        _inf_value46->terminated=(void*)sNodeBase_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result_obj__372 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value813=_inf_value46)));
        /*c*/ come_call_finalizer3(__right_value812,sNullNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value813) ? __right_value813 = come_decrement_ref_count(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"nil")) {
        _inf_value47=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2255, "struct sNode");
        _inf_obj_value47=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(__right_value815=sNilNode_initialize((struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc_v2(1, sizeof(struct sNilNode)*(1), "13op.c", 2255, "struct sNilNode*")),info))));
        _inf_value47->_protocol_obj=_inf_obj_value47;
        _inf_value47->finalize=(void*)sNilNode_finalize;
        _inf_value47->clone=(void*)sNilNode_clone;
        _inf_value47->compile=(void*)sNilNode_compile;
        _inf_value47->sline=(void*)sNodeBase_sline;
        _inf_value47->sline_real=(void*)sNodeBase_sline_real;
        _inf_value47->sname=(void*)sNodeBase_sname;
        _inf_value47->terminated=(void*)sNodeBase_terminated;
        _inf_value47->kind=(void*)sNilNode_kind;
        __result_obj__375 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value818=_inf_value47)));
        /*c*/ come_call_finalizer3(__right_value815,sNilNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value818) ? __right_value818 = come_decrement_ref_count(__right_value818, ((struct sNode*)__right_value818)->finalize, ((struct sNode*)__right_value818)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__375) ? __result_obj__375 = come_decrement_ref_count(__result_obj__375, ((struct sNode*)__result_obj__375)->finalize, ((struct sNode*)__result_obj__375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__375;
    }
    __result_obj__376 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value819=string_node_v12(buf,head,head_sline,info))));
    ((__right_value819) ? __right_value819 = come_decrement_ref_count(__right_value819, ((struct sNode*)__right_value819)->finalize, ((struct sNode*)__right_value819)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__376) ? __result_obj__376 = come_decrement_ref_count(__result_obj__376, ((struct sNode*)__result_obj__376)->finalize, ((struct sNode*)__result_obj__376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__376;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
struct sNilNode* __result_obj__373;
void* __right_value816 = (void*)0;
struct sNilNode* result_658;
void* __right_value817 = (void*)0;
char* __dec_obj260;
struct sNilNode* __result_obj__374;
    if(    self==(void*)0) {
        __result_obj__373 = (void*)0;
        return __result_obj__373;
    }
    result_658=(struct sNilNode*)come_increment_ref_count((struct sNilNode*)come_calloc_v2(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode*"));
    if(    self!=((void*)0)) {
        result_658->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_658->sname,
        result_658->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNilNode_clone", 5, "char*"));
        __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->sline_real=self->sline_real;
    }
    __result_obj__374 = result_658;
    /*c*/ come_call_finalizer3(result_658,sNilNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__374;
}

struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo* info){
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct sNode* _inf_value48;
struct sLtNode* _inf_obj_value48;
void* __right_value822 = (void*)0;
struct sNode* __result_obj__377;
    _inf_value48=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "13op.c", 2263, "struct sNode");
    _inf_obj_value48=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(__right_value821=sLtNode_initialize((struct sLtNode*)come_increment_ref_count((struct sLtNode*)come_calloc_v2(1, sizeof(struct sLtNode)*(1), "13op.c", 2263, "struct sLtNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right),(_Bool)0,info))));
    _inf_value48->_protocol_obj=_inf_obj_value48;
    _inf_value48->finalize=(void*)sLtNode_finalize;
    _inf_value48->clone=(void*)sLtNode_clone;
    _inf_value48->compile=(void*)sLtNode_compile;
    _inf_value48->sline=(void*)sNodeBase_sline;
    _inf_value48->sline_real=(void*)sNodeBase_sline_real;
    _inf_value48->sname=(void*)sNodeBase_sname;
    _inf_value48->terminated=(void*)sNodeBase_terminated;
    _inf_value48->kind=(void*)sLtNode_kind;
    __result_obj__377 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value822=_inf_value48)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value821,sLtNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value822) ? __right_value822 = come_decrement_ref_count(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__377) ? __result_obj__377 = come_decrement_ref_count(__result_obj__377, ((struct sNode*)__result_obj__377)->finalize, ((struct sNode*)__result_obj__377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__377;
}

