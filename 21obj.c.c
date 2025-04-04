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
    _Bool mUniq;
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
    _Bool mExceptionGenericsType;
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
    _Bool mComma;
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
    struct buffer* source;
    char* sname;
    char* sname_at_head;
    char* base_sname;
    int sline;
    int err_num;
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
    _Bool in_method_block;
    _Bool prohibits_output_last_code;
};

struct sNodeBase
{
    int sline;
    char* sname;
    int sline_real;
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

struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sNewNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
    struct list$1tuple2$2char$phsNode$ph$ph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFalseNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDynamicTypeOf
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
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
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool bool_operator_equals(_Bool self, _Bool right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool bool_operator_not_equals(_Bool self, _Bool right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
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
unsigned int _Bool_get_hash_key(_Bool value);
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
_Bool _Bool_clone(_Bool self);
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
char* _Bool_to_string(_Bool self);
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
int _Bool_compare(_Bool left, _Bool right);
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
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void sBlock_finalize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
static void sClassModule_finalize(struct sClassModule* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
int err_msg(struct sInfo* info, char* msg, ...);
int expected_next_character(char c, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main(int argc, char** argv);
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* parse_expect_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
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
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool guard_break, struct sInfo* info);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void tuple4$4char$phchar$phchar$phchar$ph_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_clone(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static unsigned int tuple4$4char$phchar$phchar$phchar$ph_get_hash_key(struct tuple4$4char$phchar$phchar$phchar$ph* self);
static _Bool tuple4$4char$phchar$phchar$phchar$ph_equals(struct tuple4$4char$phchar$phchar$phchar$ph* left, struct tuple4$4char$phchar$phchar$phchar$ph* right);
static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_initialize(struct tuple4$4char$phchar$phchar$phchar$ph* self, char* v1, char* v2, char* v3, char* v4);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static void sNewNode_finalize(struct sNewNode* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
static void sTrueNode_finalize(struct sTrueNode* self);
struct sNode* create_true_object(struct sInfo* info);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
static void sFalseNode_finalize(struct sFalseNode* self);
struct sNode* create_false_object(struct sInfo* info);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self);
_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info);
static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
static void sDeleteNode_finalize(struct sDeleteNode* self);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
static void sBorrowNode_finalize(struct sBorrowNode* self);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void sCloneNode_finalize(struct sCloneNode* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
static void sDupeNode_finalize(struct sDupeNode* self);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
static void sGCIncNode_finalize(struct sGCIncNode* self);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
static void sGCDecNode_finalize(struct sGCDecNode* self);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
static void sIsHeap_finalize(struct sIsHeap* self);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
static void sIsPointer_finalize(struct sIsPointer* self);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
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
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1113, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1123, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1133, "struct list_item$1char$*"))));
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
    while(    it_125!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1113, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1123, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1133, "struct list_item$1char$p*"))));
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
    while(    it_131!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1113, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1123, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1133, "struct list_item$1short$*"))));
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
    while(    it_137!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1113, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1123, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1133, "struct list_item$1int$*"))));
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
    while(    it_143!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1113, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1123, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1133, "struct list_item$1long$*"))));
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
    while(    it_149!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1113, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1123, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1133, "struct list_item$1float$*"))));
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
    while(    it_155!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1113, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1123, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1133, "struct list_item$1double$*"))));
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
    while(    it_161!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)) {
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
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
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
struct list_item$1sType$ph* it_239;
struct list_item$1sType$ph* prev_it_240;
    it_239=self->head;
    while(    it_239!=((void*)0)) {
        prev_it_240=it_239;
        it_239=it_239->next;
        /*c*/ come_call_finalizer3(prev_it_240,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_241;
struct list_item$1sNode$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
int i_243;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* __dec_obj20;
struct map$2char$phchar$ph* __result_obj__167;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value194=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value195=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1929, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value196=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_243=0;    i_243<128;    i_243++    ){
        self->item_existance[i_243]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj20=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj20,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__167 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__166 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__166,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_244;
struct list_item$1char$ph* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*c*/ come_call_finalizer3(prev_it_245,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_246;
int i_247;
    for(    i_246=0;    i_246<self->size;    i_246++    ){
        if(        self->item_existance[i_246]) {
            if(            1) {
                (self->items[i_246] = come_decrement_ref_count(self->items[i_246], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_247=0;    i_247<self->size;    i_247++    ){
        if(        self->item_existance[i_247]) {
            if(            1) {
                (self->keys[i_247] = come_decrement_ref_count(self->keys[i_247], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_248;
int i_249;
    for(    i_248=0;    i_248<self->size;    i_248++    ){
        if(        self->item_existance[i_248]) {
            if(            1) {
                (self->items[i_248] = come_decrement_ref_count(self->items[i_248], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_249=0;    i_249<self->size;    i_249++    ){
        if(        self->item_existance[i_249]) {
            if(            1) {
                (self->keys[i_249] = come_decrement_ref_count(self->keys[i_249], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
int i_250;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1char$ph* __dec_obj23;
struct map$2char$phsVar$ph* __result_obj__169;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value203=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value204=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value205=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_250=0;    i_250<128;    i_250++    ){
        self->item_existance[i_250]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj23=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__169 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_251;
int i_252;
    for(    i_251=0;    i_251<self->size;    i_251++    ){
        if(        self->item_existance[i_251]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_251],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_252=0;    i_252<self->size;    i_252++    ){
        if(        self->item_existance[i_252]) {
            if(            1) {
                (self->keys[i_252] = come_decrement_ref_count(self->keys[i_252], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_253;
int i_254;
    for(    i_253=0;    i_253<self->size;    i_253++    ){
        if(        self->item_existance[i_253]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_253],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_254=0;    i_254<self->size;    i_254++    ){
        if(        self->item_existance[i_254]) {
            if(            1) {
                (self->keys[i_254] = come_decrement_ref_count(self->keys[i_254], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_255;
struct list_item$1sNode$ph* prev_it_256;
    it_255=self->head;
    while(    it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        /*c*/ come_call_finalizer3(prev_it_256,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info){
void* __right_value218 = (void*)0;
char* finalizer_name_257;
void* __right_value219 = (void*)0;
char* cloner_name_258;
void* __right_value220 = (void*)0;
char* get_hash_key_name_259;
void* __right_value221 = (void*)0;
char* equaler_name_260;
void* __right_value222 = (void*)0;
_Bool _if_conditional1;
void* __right_value223 = (void*)0;
char* __dec_obj31;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
_Bool _if_conditional2;
void* __right_value226 = (void*)0;
char* __dec_obj32;
void* __right_value227 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var1 = (void*)0;
struct sFun* fun_267=0;
char* name_268=0;
char* __dec_obj33;
void* __right_value228 = (void*)0;
_Bool _if_conditional3;
void* __right_value229 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var2 = (void*)0;
struct sFun* fun_269=0;
char* name_270=0;
char* __dec_obj34;
void* __right_value230 = (void*)0;
_Bool _if_conditional4;
void* __right_value231 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var3 = (void*)0;
struct sFun* fun_271=0;
char* name_272=0;
char* __dec_obj35;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__187;
    finalizer_name_257=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"finalize",info,(_Bool)1));
    cloner_name_258=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"clone",info,(_Bool)1));
    get_hash_key_name_259=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"get_hash_key",info,(_Bool)1));
    equaler_name_260=(char*)come_increment_ref_count(create_method_name(any_type,(_Bool)0,"equals",info,(_Bool)1));
    if(    (_if_conditional1=(((struct sFun*)(__right_value222=map$2char$phsFun$ph_operator_load_element(info->funcs,finalizer_name_257)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value222,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        if(        any_type->mClass->mNumber) {
            __dec_obj31=finalizer_name_257,
            finalizer_name_257=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            (void*)((struct tuple2$2sFun$pchar$ph*)(__right_value224=create_finalizer_automatically(any_type,"finalize",info)));
            /*c*/ come_call_finalizer3(__right_value224,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    (_if_conditional2=(((struct sFun*)(__right_value225=map$2char$phsFun$ph_operator_load_element(info->funcs,cloner_name_258)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value225,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional2) {
        if(        any_type->mClass->mNumber) {
            __dec_obj32=cloner_name_258,
            cloner_name_258=(char*)come_increment_ref_count(xsprintf("(void*)0"));
            __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            multiple_assign_var1=((struct tuple2$2sFun$pchar$ph*)(__right_value227=create_cloner_automatically(any_type,"clone",info)));
            fun_267=multiple_assign_var1->v1;
            name_268=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            /*c*/ come_call_finalizer3(__right_value227,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj33=cloner_name_258,
            cloner_name_258=(char*)come_increment_ref_count(name_268);
            __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (name_268 = come_decrement_ref_count(name_268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    (_if_conditional3=(((struct sFun*)(__right_value228=map$2char$phsFun$ph_operator_load_element(info->funcs,get_hash_key_name_259)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value228,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        multiple_assign_var2=((struct tuple2$2sFun$pchar$ph*)(__right_value229=create_get_hash_key_automatically(any_type,"get_hash_key",info)));
        fun_269=multiple_assign_var2->v1;
        name_270=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        /*c*/ come_call_finalizer3(__right_value229,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj34=get_hash_key_name_259,
        get_hash_key_name_259=(char*)come_increment_ref_count(name_270);
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (name_270 = come_decrement_ref_count(name_270, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    (_if_conditional4=(((struct sFun*)(__right_value230=map$2char$phsFun$ph_operator_load_element(info->funcs,equaler_name_260)))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value230,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value231=create_equals_automatically(any_type,"equals",info)));
        fun_271=multiple_assign_var3->v1;
        name_272=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        /*c*/ come_call_finalizer3(__right_value231,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj35=equaler_name_260,
        equaler_name_260=(char*)come_increment_ref_count(name_272);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (name_272 = come_decrement_ref_count(name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__187 = (struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count(((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value238=tuple4$4char$phchar$phchar$phchar$ph_initialize((struct tuple4$4char$phchar$phchar$phchar$ph**)come_increment_ref_count((struct tuple4$4char$phchar$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple4$4char$phchar$phchar$phchar$ph)*(1), "21obj.c", 36, "struct tuple4$4char$phchar$phchar$phchar$ph")),(char*)come_increment_ref_count(finalizer_name_257),(char*)come_increment_ref_count(cloner_name_258),(char*)come_increment_ref_count(get_hash_key_name_259),(char*)come_increment_ref_count(equaler_name_260)))));
    /*c*/ come_call_finalizer3(any_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (finalizer_name_257 = come_decrement_ref_count(finalizer_name_257, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_258 = come_decrement_ref_count(cloner_name_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_259 = come_decrement_ref_count(get_hash_key_name_259, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_260 = come_decrement_ref_count(equaler_name_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value238,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__187,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_261;
unsigned int hash_262;
unsigned int it_263;
struct sFun* __result_obj__176;
struct sFun* __result_obj__177;
struct sFun* __result_obj__178;
struct sFun* __result_obj__179;
default_value_261 = (void*)0;
    memset(&default_value_261,0,sizeof(struct sFun*));
    hash_262=string_get_hash_key(((char*)key))%self->size;
    it_263=hash_262;
    while(    (_Bool)1) {
        if(        self->item_existance[it_263]) {
            if(            string_equals(self->keys[it_263],key)) {
                __result_obj__176 = (struct sFun*)come_increment_ref_count(self->items[it_263]);
                /*c*/ come_call_finalizer3(default_value_261,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__176,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__176;
            }
            it_263++;
            if(            it_263>=self->size) {
                it_263=0;
            }
            else if(            it_263==hash_262) {
                __result_obj__177 = (struct sFun*)come_increment_ref_count(default_value_261);
                /*c*/ come_call_finalizer3(default_value_261,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__177,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__177;
            }
        }
        else {
            __result_obj__178 = (struct sFun*)come_increment_ref_count(default_value_261);
            /*c*/ come_call_finalizer3(default_value_261,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__178,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__178;
        }
    }
    __result_obj__179 = (struct sFun*)come_increment_ref_count(default_value_261);
    /*c*/ come_call_finalizer3(default_value_261,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
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

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_264;
unsigned int hash_265;
unsigned int it_266;
struct sFun* __result_obj__180;
struct sFun* __result_obj__181;
struct sFun* __result_obj__182;
struct sFun* __result_obj__183;
default_value_264 = (void*)0;
    memset(&default_value_264,0,sizeof(struct sFun*));
    hash_265=string_get_hash_key(((char*)key))%self->size;
    it_266=hash_265;
    while(    (_Bool)1) {
        if(        self->item_existance[it_266]) {
            if(            string_equals(self->keys[it_266],key)) {
                __result_obj__180 = (struct sFun*)come_increment_ref_count(self->items[it_266]);
                /*c*/ come_call_finalizer3(default_value_264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__180,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__180;
            }
            it_266++;
            if(            it_266>=self->size) {
                it_266=0;
            }
            else if(            it_266==hash_265) {
                __result_obj__181 = (struct sFun*)come_increment_ref_count(default_value_264);
                /*c*/ come_call_finalizer3(default_value_264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__181,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__181;
            }
        }
        else {
            __result_obj__182 = (struct sFun*)come_increment_ref_count(default_value_264);
            /*c*/ come_call_finalizer3(default_value_264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__182,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__182;
        }
    }
    __result_obj__183 = (struct sFun*)come_increment_ref_count(default_value_264);
    /*c*/ come_call_finalizer3(default_value_264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple4$4char$phchar$phchar$phchar$ph_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_clone(struct tuple4$4char$phchar$phchar$phchar$ph* self){
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__184;
void* __right_value232 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* result_273;
void* __right_value233 = (void*)0;
char* __dec_obj36;
void* __right_value234 = (void*)0;
char* __dec_obj37;
void* __right_value235 = (void*)0;
char* __dec_obj38;
void* __right_value236 = (void*)0;
char* __dec_obj39;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__185;
    if(    self==(void*)0) {
        __result_obj__184 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__184,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__184;
    }
    result_273=(struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count((struct tuple4$4char$phchar$phchar$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple4$4char$phchar$phchar$phchar$ph)*(1), "tuple4$4char$phchar$phchar$phchar$ph_clone", 3, "struct tuple4$4char$phchar$phchar$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj36=result_273->v1,
        result_273->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple4$4char$phchar$phchar$phchar$ph_clone", 4, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj37=result_273->v2,
        result_273->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple4$4char$phchar$phchar$phchar$ph_clone", 5, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj38=result_273->v3,
        result_273->v3=(char*)come_increment_ref_count((char*)come_memdup(self->v3, "tuple4$4char$phchar$phchar$phchar$ph_clone", 6, "char*"));
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        __dec_obj39=result_273->v4,
        result_273->v4=(char*)come_increment_ref_count((char*)come_memdup(self->v4, "tuple4$4char$phchar$phchar$phchar$ph_clone", 7, "char*"));
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__185 = (struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count(result_273);
    /*c*/ come_call_finalizer3(result_273,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,tuple4$4char$phchar$phchar$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static unsigned int tuple4$4char$phchar$phchar$phchar$ph_get_hash_key(struct tuple4$4char$phchar$phchar$phchar$ph* self){
unsigned int result_274;
    result_274=0;
    result_274+=int_get_hash_key(((int)self->v1));
    result_274+=int_get_hash_key(((int)self->v2));
    result_274+=int_get_hash_key(((int)self->v3));
    result_274+=int_get_hash_key(((int)self->v4));
    return result_274;
}

static _Bool tuple4$4char$phchar$phchar$phchar$ph_equals(struct tuple4$4char$phchar$phchar$phchar$ph* left, struct tuple4$4char$phchar$phchar$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4char$phchar$phchar$phchar$ph* tuple4$4char$phchar$phchar$phchar$ph_initialize(struct tuple4$4char$phchar$phchar$phchar$ph* self, char* v1, char* v2, char* v3, char* v4){
char* __dec_obj40;
char* __dec_obj41;
char* __dec_obj42;
char* __dec_obj43;
struct tuple4$4char$phchar$phchar$phchar$ph* __result_obj__186;
    __dec_obj40=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj41=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj42=self->v3,
    self->v3=(char*)come_increment_ref_count(v3);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj43=self->v4,
    self->v4=(char*)come_increment_ref_count(v4);
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__186 = (struct tuple4$4char$phchar$phchar$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v3 = come_decrement_ref_count(v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v4 = come_decrement_ref_count(v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__186,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value239 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __dec_obj68;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj69;
struct sNewNode* __result_obj__202;
    ((struct sNodeBase*)(__right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value239,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj68=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj69=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer);
    /*b*/ come_call_finalizer3(__dec_obj69,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__202 = (struct sNewNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__202,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

char* sNewNode_kind(struct sNewNode* self){
void* __right_value279 = (void*)0;
char* __result_obj__203;
    __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value279=__builtin_string("sNewNode"))));
    (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__203;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_298;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_299;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct CVALUE* come_value_300;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct buffer* num_string_301;
struct list$1sNode$ph* o2_saved_302;
struct sNode* it_305;
_Bool Value_308;
_Bool __result_obj__210;
void* __right_value284 = (void*)0;
struct CVALUE* cvalue_309;
void* __right_value285 = (void*)0;
struct sType* type2_310;
void* __right_value286 = (void*)0;
char* type_name_313;
void* __right_value287 = (void*)0;
char* type_name2_314;
void* __right_value288 = (void*)0;
char* var_name_316;
void* __right_value289 = (void*)0;
struct sType* type3_317;
void* __right_value290 = (void*)0;
char* type_name3_318;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct buffer* buf_319;
char* obj_320;
void* __right_value294 = (void*)0;
_Bool _if_conditional5;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj70;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* __dec_obj71;
struct sClass* klass_321;
int i_322;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_323;
struct tuple2$2char$phsNode$ph* it_326;
struct tuple2$2char$phsNode$ph* multiple_assign_var4 = (void*)0;
char* name_329=0;
struct sNode* exp_330=0;
_Bool Value_331;
_Bool __result_obj__218;
void* __right_value299 = (void*)0;
struct CVALUE* come_value2_332;
struct sType* left_type_333;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_334;
struct tuple2$2char$phsType$ph* it2_337;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name_340=0;
struct sType* field_type_341=0;
void* __right_value300 = (void*)0;
struct sType* __dec_obj72;
struct sType* right_type_344;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __dec_obj73;
void* __right_value303 = (void*)0;
char* c_value_345;
void* __right_value304 = (void*)0;
char* __dec_obj74;
void* __right_value305 = (void*)0;
struct sType* __dec_obj75;
void* __right_value309 = (void*)0;
struct sType* type3_349;
void* __right_value310 = (void*)0;
char* type_name3_350;
void* __right_value311 = (void*)0;
_Bool _if_conditional6;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* __dec_obj79;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj80;
void* __right_value316 = (void*)0;
struct sType* __dec_obj81;
_Bool __result_obj__226;
obj_320 = (void*)0;
    type_298=self->type;
    initializer_299=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    come_value_300=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 59, "struct CVALUE*"))));
    num_string_301=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 61, "struct buffer*"))));
    buffer_append_str(num_string_301,"1");
    for(    o2_saved_302=(struct list$1sNode$ph*)come_increment_ref_count((type_298->mArrayNum)),it_305=list$1sNode$ph_begin((o2_saved_302));    !list$1sNode$ph_end((o2_saved_302));    it_305=list$1sNode$ph_next((o2_saved_302))    ){
        Value_308=node_compile(it_305,info);
        if(        !Value_308) {
            __result_obj__210 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_302,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_299,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(come_value_300,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(num_string_301,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__210;
        }
        else {
        }
        cvalue_309=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(num_string_301,"*(%s)",cvalue_309->c_value);
        /*c*/ come_call_finalizer3(cvalue_309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_302,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    type2_310=(struct sType*)come_increment_ref_count(solve_generics(type_298,info->generics_type,info));
    list$1sNode$ph_reset(type2_310->mArrayNum);
    type_name_313=(char*)come_increment_ref_count(make_type_name_string(type2_310,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_314=(char*)come_increment_ref_count(make_come_type_name_string(type2_310,info));
    if(    initializer_299) {
        static int var_num_315=1;
        var_num_315++;
        var_name_316=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_315));
        type3_317=(struct sType*)come_increment_ref_count(sType_clone(type2_310));
        type3_317->mPointerNum++;
        if(        type3_317->mNoSolvedGenericsType) {
            type3_317->mNoSolvedGenericsType->mPointerNum++;
        }
        type_name3_318=(char*)come_increment_ref_count(make_type_name_string(type3_317,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value291=make_define_var(type3_317,var_name_316,(_Bool)0,info))));
        (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buf_319=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "21obj.c", 104, "struct buffer*"))));
        buffer_append_str(buf_319,"(");
        if(        (_if_conditional5=(((struct sFun*)(__right_value294=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),        /*c*/ come_call_finalizer3(__right_value294,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional5) {
            __dec_obj70=obj_320,
            obj_320=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_316,type_name_313,type_name_313,((char*)(__right_value295=buffer_to_string(num_string_301))),info->sname,info->sline,type_name3_318));
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj71=obj_320,
            obj_320=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_316,type_name_313,type_name_313,((char*)(__right_value297=buffer_to_string(num_string_301))),info->sname,info->sline,type_name3_318));
            __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(buf_319,obj_320);
        buffer_append_str(buf_319,",");
        klass_321=type3_317->mClass;
        i_322=0;
        for(        o2_saved_323=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_299)),it_326=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_323));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_323));        it_326=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_323))        ){
            multiple_assign_var4=it_326;
            name_329=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            exp_330=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            Value_331=node_compile(exp_330,info);
            if(            !Value_331) {
                __result_obj__218 = (_Bool)0;
                (name_329 = come_decrement_ref_count(name_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((exp_330) ? exp_330 = come_decrement_ref_count(exp_330, ((struct sNode*)exp_330)->finalize, ((struct sNode*)exp_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(o2_saved_323,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (var_name_316 = come_decrement_ref_count(var_name_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type3_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name3_318 = come_decrement_ref_count(type_name3_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_319,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (obj_320 = come_decrement_ref_count(obj_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(initializer_299,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_300,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(num_string_301,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_name_313 = come_decrement_ref_count(type_name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name2_314 = come_decrement_ref_count(type_name2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__218;
            }
            else {
            }
            come_value2_332=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            left_type_333=((void*)0);
            for(            o2_saved_334=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_321->mFields)),it2_337=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_334));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_334));            it2_337=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_334))            ){
                multiple_assign_var5=it2_337;
                field_name_340=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                field_type_341=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                if(                string_operator_equals(name_329,field_name_340)) {
                    __dec_obj72=left_type_333,
                    left_type_333=(struct sType*)come_increment_ref_count(sType_clone(field_type_341));
                    /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    (field_name_340 = come_decrement_ref_count(field_name_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_341,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
                (field_name_340 = come_decrement_ref_count(field_name_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_341,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_334,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            left_type_333==((void*)0)) {
                err_msg(info,"field %s is not defined",name_329);
            }
            right_type_344=(struct sType*)come_increment_ref_count(come_value2_332->type);
            check_assign_type(((char*)(__right_value302=xsprintf("\%s is assining to",((char*)(__right_value301=string_to_string(name_329)))))),left_type_333,right_type_344,come_value2_332,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj73=right_type_344,
            right_type_344=(struct sType*)come_increment_ref_count(come_value2_332->type);
            /*b*/ come_call_finalizer3(__dec_obj73,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            if(            left_type_333->mHeap&&right_type_344->mHeap&&left_type_333->mPointerNum>0&&right_type_344->mPointerNum>0) {
                c_value_345=(char*)come_increment_ref_count(increment_ref_count_object(left_type_333,come_value2_332->c_value,info));
                buffer_append_format(buf_319,"%s->%s = %s",var_name_316,name_329,c_value_345);
                (c_value_345 = come_decrement_ref_count(c_value_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_319,"%s->%s = %s",var_name_316,name_329,come_value2_332->c_value);
            }
            buffer_append_str(buf_319,",");
            i_322++;
            (name_329 = come_decrement_ref_count(name_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_330) ? exp_330 = come_decrement_ref_count(exp_330, ((struct sNode*)exp_330)->finalize, ((struct sNode*)exp_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value2_332,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_333,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_type_344,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_323,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_319,var_name_316);
        buffer_append_str(buf_319,")");
        __dec_obj74=come_value_300->c_value,
        come_value_300->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_319));
        __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        type2_310->mHeap=(_Bool)1;
        type2_310->mPointerNum++;
        if(        type2_310->mNoSolvedGenericsType) {
            type2_310->mNoSolvedGenericsType->mPointerNum++;
            type2_310->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj75=come_value_300->type,
        come_value_300->type=(struct sType*)come_increment_ref_count(sType_clone(type2_310));
        /*b*/ come_call_finalizer3(__dec_obj75,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_300->var=((void*)0);
        append_object_to_right_values2(come_value_300,(struct sType*)come_increment_ref_count(type2_310),info,(_Bool)0,((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_300->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_300));
        (var_name_316 = come_decrement_ref_count(var_name_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type3_317,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name3_318 = come_decrement_ref_count(type_name3_318, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(buf_319,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (obj_320 = come_decrement_ref_count(obj_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type3_349=(struct sType*)come_increment_ref_count(sType_clone(type2_310));
        type3_349->mPointerNum++;
        type3_349->mHeap=(_Bool)1;
        if(        type3_349->mNoSolvedGenericsType) {
            type3_349->mNoSolvedGenericsType->mPointerNum++;
            type3_349->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        type_name3_350=(char*)come_increment_ref_count(make_type_name_string(type3_349,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        (_if_conditional6=(((struct sFun*)(__right_value311=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),        /*c*/ come_call_finalizer3(__right_value311,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional6) {
            __dec_obj79=come_value_300->c_value,
            come_value_300->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc_v2(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_313,type_name_313,((char*)(__right_value312=buffer_to_string(num_string_301))),info->sname,info->sline,type_name3_350));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            __dec_obj80=come_value_300->c_value,
            come_value_300->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_313,type_name_313,((char*)(__right_value314=buffer_to_string(num_string_301))),info->sname,info->sline,type_name3_350));
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type2_310->mHeap=(_Bool)1;
        type2_310->mPointerNum++;
        if(        type2_310->mNoSolvedGenericsType) {
            type2_310->mNoSolvedGenericsType->mPointerNum++;
            type2_310->mNoSolvedGenericsType->mHeap=(_Bool)1;
        }
        __dec_obj81=come_value_300->type,
        come_value_300->type=(struct sType*)come_increment_ref_count(sType_clone(type2_310));
        /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_300->var=((void*)0);
        append_object_to_right_values2(come_value_300,(struct sType*)come_increment_ref_count(type2_310),info,(_Bool)0,((void*)0),((void*)0));
        add_come_last_code(info,"%s",come_value_300->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_300));
        /*c*/ come_call_finalizer3(type3_349,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_name3_350 = come_decrement_ref_count(type_name3_350, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__226 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_299,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_300,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(num_string_301,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_313 = come_decrement_ref_count(type_name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_314 = come_decrement_ref_count(type_name2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__226;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__188;
void* __right_value240 = (void*)0;
struct sType* result_275;
void* __right_value241 = (void*)0;
struct sType* __dec_obj44;
void* __right_value242 = (void*)0;
struct sType* __dec_obj45;
void* __right_value250 = (void*)0;
struct list$1sType$ph* __dec_obj49;
void* __right_value251 = (void*)0;
struct sType* __dec_obj50;
void* __right_value252 = (void*)0;
struct sType* __dec_obj51;
void* __right_value254 = (void*)0;
struct sNode* __dec_obj52;
void* __right_value255 = (void*)0;
struct sNode* __dec_obj53;
void* __right_value256 = (void*)0;
char* __dec_obj54;
void* __right_value257 = (void*)0;
char* __dec_obj55;
void* __right_value258 = (void*)0;
char* __dec_obj56;
void* __right_value266 = (void*)0;
struct list$1sNode$ph* __dec_obj60;
void* __right_value267 = (void*)0;
char* __dec_obj61;
void* __right_value268 = (void*)0;
struct list$1sType$ph* __dec_obj62;
void* __right_value276 = (void*)0;
struct list$1char$ph* __dec_obj66;
void* __right_value277 = (void*)0;
struct sType* __dec_obj67;
struct sType* __result_obj__201;
    if(    self==(void*)0) {
        __result_obj__188 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__188,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__188;
    }
    result_275=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_275->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj44=result_275->mOriginalLoadVarType,
        result_275->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj45=result_275->mChannelType,
        result_275->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj49=result_275->mGenericsTypes,
        result_275->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj49,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj50=result_275->mNoSolvedGenericsType,
        result_275->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj51=result_275->mAnyOriginalType,
        result_275->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj52=result_275->mSizeNum,
        result_275->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj52 ? __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj53=result_275->mAlignas,
        result_275->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj53 ? __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj54=result_275->mTupleName,
        result_275->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj55=result_275->mAttribute,
        result_275->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_275->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_275->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_275->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_275->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_275->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_275->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_275->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_275->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_275->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_275->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_275->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_275->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_275->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_275->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_275->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_275->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_275->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_275->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_275->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_275->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_275->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj56=result_275->mAsmName,
        result_275->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_275->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj60=result_275->mArrayNum,
        result_275->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj60,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_275->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_275->mOriginalTypeName,
        result_275->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_275->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_275->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_275->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj62=result_275->mParamTypes,
        result_275->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj62,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj66=result_275->mParamNames,
        result_275->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj66,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj67=result_275->mResultType,
        result_275->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_275->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__201 = (struct sType*)come_increment_ref_count(result_275);
    /*c*/ come_call_finalizer3(result_275,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__189;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct list$1sType$ph* result_276;
struct list_item$1sType$ph* it_277;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1sType$ph* __result_obj__192;
    if(    self==((void*)0)) {
        __result_obj__189 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__189,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__189;
    }
    result_276=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_277=self->head;
    while(    it_277!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_276,(struct sType*)come_increment_ref_count(sType_clone(it_277->item)));
        }
        else {
            list$1sType$ph_add(result_276,(struct sType*)come_increment_ref_count(sType_clone(it_277->item)));
        }
        it_277=it_277->next;
    }
    __result_obj__192 = (struct list$1sType$ph*)come_increment_ref_count(result_276);
    /*c*/ come_call_finalizer3(result_276,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__190;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__190 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value245 = (void*)0;
struct list_item$1sType$ph* litem_278;
struct sType* __dec_obj46;
void* __right_value246 = (void*)0;
struct list_item$1sType$ph* litem_279;
struct sType* __dec_obj47;
void* __right_value247 = (void*)0;
struct list_item$1sType$ph* litem_280;
struct sType* __dec_obj48;
struct list$1sType$ph* __result_obj__191;
    if(    self->len==0) {
        litem_278=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value245=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_278->prev=((void*)0);
        litem_278->next=((void*)0);
        __dec_obj46=litem_278->item,
        litem_278->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_278;
        self->head=litem_278;
    }
    else if(    self->len==1) {
        litem_279=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value246=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_279->prev=self->head;
        litem_279->next=((void*)0);
        __dec_obj47=litem_279->item,
        litem_279->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_279;
        self->head->next=litem_279;
    }
    else {
        litem_280=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value247=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_280->prev=self->tail;
        litem_280->next=((void*)0);
        __dec_obj48=litem_280->item,
        litem_280->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_280;
        self->tail=litem_280;
    }
    self->len++;
    __result_obj__191 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_281;
struct list_item$1sType$ph* prev_it_282;
    it_281=self->head;
    while(    it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        /*c*/ come_call_finalizer3(prev_it_282,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__193;
void* __right_value253 = (void*)0;
struct sNode* result_283;
struct sNode* __result_obj__194;
    if(    self==(void*)0) {
        __result_obj__193 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__193) ? __result_obj__193 = come_decrement_ref_count(__result_obj__193, ((struct sNode*)__result_obj__193)->finalize, ((struct sNode*)__result_obj__193)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__193;
    }
    result_283=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_283->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_283->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_283->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_283->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_283->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_283->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_283->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_283->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_283->kind=self->kind;
    }
    __result_obj__194 = (struct sNode*)come_increment_ref_count(result_283);
    ((result_283) ? result_283 = come_decrement_ref_count(result_283, ((struct sNode*)result_283)->finalize, ((struct sNode*)result_283)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__194) ? __result_obj__194 = come_decrement_ref_count(__result_obj__194, ((struct sNode*)__result_obj__194)->finalize, ((struct sNode*)__result_obj__194)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__194;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__195;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1sNode$ph* result_284;
struct list_item$1sNode$ph* it_285;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNode$ph* __result_obj__197;
    if(    self==((void*)0)) {
        __result_obj__195 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__195,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__195;
    }
    result_284=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_285=self->head;
    while(    it_285!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_284,(struct sNode*)come_increment_ref_count(sNode_clone(it_285->item)));
        }
        else {
            list$1sNode$ph_add(result_284,(struct sNode*)come_increment_ref_count(sNode_clone(it_285->item)));
        }
        it_285=it_285->next;
    }
    __result_obj__197 = (struct list$1sNode$ph*)come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value261 = (void*)0;
struct list_item$1sNode$ph* litem_286;
struct sNode* __dec_obj57;
void* __right_value262 = (void*)0;
struct list_item$1sNode$ph* litem_287;
struct sNode* __dec_obj58;
void* __right_value263 = (void*)0;
struct list_item$1sNode$ph* litem_288;
struct sNode* __dec_obj59;
struct list$1sNode$ph* __result_obj__196;
    if(    self->len==0) {
        litem_286=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value261=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj57=litem_286->item,
        litem_286->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value262=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj58=litem_287->item,
        litem_287->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value263=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj59=litem_288->item,
        litem_288->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__196 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__196;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__198;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1char$ph* result_289;
struct list_item$1char$ph* it_290;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1char$ph* __result_obj__200;
    if(    self==((void*)0)) {
        __result_obj__198 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__198,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__198;
    }
    result_289=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_290=self->head;
    while(    it_290!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_289,(char*)come_increment_ref_count((char*)come_memdup(it_290->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_289,(char*)come_increment_ref_count((char*)come_memdup(it_290->item, "./comelang.h", 1032, "char*")));
        }
        it_290=it_290->next;
    }
    __result_obj__200 = (struct list$1char$ph*)come_increment_ref_count(result_289);
    /*c*/ come_call_finalizer3(result_289,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__200,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value271 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj63;
void* __right_value272 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj64;
void* __right_value273 = (void*)0;
struct list_item$1char$ph* litem_293;
char* __dec_obj65;
struct list$1char$ph* __result_obj__199;
    if(    self->len==0) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value271=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_291->prev=((void*)0);
        litem_291->next=((void*)0);
        __dec_obj63=litem_291->item,
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_291;
        self->head=litem_291;
    }
    else if(    self->len==1) {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value272=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_292->prev=self->head;
        litem_292->next=((void*)0);
        __dec_obj64=litem_292->item,
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_292;
        self->head->next=litem_292;
    }
    else {
        litem_293=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value273=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_293->prev=self->tail;
        litem_293->next=((void*)0);
        __dec_obj65=litem_293->item,
        litem_293->item=(char*)come_increment_ref_count(item);
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_293;
        self->tail=litem_293;
    }
    self->len++;
    __result_obj__199 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__199;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_294;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_295;
    it_294=self->head;
    while(    it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*c*/ come_call_finalizer3(prev_it_295,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sNewNode_finalize(struct sNewNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_296;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_297;
    it_296=self->head;
    while(    it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        /*c*/ come_call_finalizer3(prev_it_297,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_303;
struct sNode* __result_obj__204;
struct sNode* __result_obj__205;
struct sNode* result_304;
struct sNode* __result_obj__206;
result_303 = (void*)0;
result_304 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_303,0,sizeof(struct sNode*));
        __result_obj__204 = result_303;
        return __result_obj__204;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__205 = self->it->item;
        return __result_obj__205;
    }
    memset(&result_304,0,sizeof(struct sNode*));
    __result_obj__206 = result_304;
    return __result_obj__206;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_306;
struct sNode* __result_obj__207;
struct sNode* __result_obj__208;
struct sNode* result_307;
struct sNode* __result_obj__209;
result_306 = (void*)0;
result_307 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_306,0,sizeof(struct sNode*));
        __result_obj__207 = result_306;
        return __result_obj__207;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__208 = self->it->item;
        return __result_obj__208;
    }
    memset(&result_307,0,sizeof(struct sNode*));
    __result_obj__209 = result_307;
    return __result_obj__209;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_311;
struct list_item$1sNode$ph* prev_it_312;
struct list$1sNode$ph* __result_obj__211;
    it_311=self->head;
    while(    it_311!=((void*)0)) {
        prev_it_312=it_311;
        it_311=it_311->next;
        /*c*/ come_call_finalizer3(prev_it_312,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__211 = self;
    return __result_obj__211;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_324;
struct tuple2$2char$phsNode$ph* __result_obj__212;
struct tuple2$2char$phsNode$ph* __result_obj__213;
struct tuple2$2char$phsNode$ph* result_325;
struct tuple2$2char$phsNode$ph* __result_obj__214;
result_324 = (void*)0;
result_325 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_324,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__212 = result_324;
        return __result_obj__212;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__213 = self->it->item;
        return __result_obj__213;
    }
    memset(&result_325,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__214 = result_325;
    return __result_obj__214;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_327;
struct tuple2$2char$phsNode$ph* __result_obj__215;
struct tuple2$2char$phsNode$ph* __result_obj__216;
struct tuple2$2char$phsNode$ph* result_328;
struct tuple2$2char$phsNode$ph* __result_obj__217;
result_327 = (void*)0;
result_328 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_327,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__215 = result_327;
        return __result_obj__215;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__216 = self->it->item;
        return __result_obj__216;
    }
    memset(&result_328,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__217 = result_328;
    return __result_obj__217;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_335;
struct tuple2$2char$phsType$ph* __result_obj__219;
struct tuple2$2char$phsType$ph* __result_obj__220;
struct tuple2$2char$phsType$ph* result_336;
struct tuple2$2char$phsType$ph* __result_obj__221;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_335,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__219 = result_335;
        return __result_obj__219;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__220 = self->it->item;
        return __result_obj__220;
    }
    memset(&result_336,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__221 = result_336;
    return __result_obj__221;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_338;
struct tuple2$2char$phsType$ph* __result_obj__222;
struct tuple2$2char$phsType$ph* __result_obj__223;
struct tuple2$2char$phsType$ph* result_339;
struct tuple2$2char$phsType$ph* __result_obj__224;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_338,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__222 = result_338;
        return __result_obj__222;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__223 = self->it->item;
        return __result_obj__223;
    }
    memset(&result_339,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__224 = result_339;
    return __result_obj__224;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_342;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_343;
    it_342=self->head;
    while(    it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        /*c*/ come_call_finalizer3(prev_it_343,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_346;
struct CVALUE* __dec_obj76;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_347;
struct CVALUE* __dec_obj77;
void* __right_value308 = (void*)0;
struct list_item$1CVALUE$ph* litem_348;
struct CVALUE* __dec_obj78;
struct list$1CVALUE$ph* __result_obj__225;
    if(    self->len==0) {
        litem_346=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_346->prev=((void*)0);
        litem_346->next=((void*)0);
        __dec_obj76=litem_346->item,
        litem_346->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj76,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_346;
        self->head=litem_346;
    }
    else if(    self->len==1) {
        litem_347=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_347->prev=self->head;
        litem_347->next=((void*)0);
        __dec_obj77=litem_347->item,
        litem_347->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_347;
        self->head->next=litem_347;
    }
    else {
        litem_348=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value308=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_348->prev=self->tail;
        litem_348->next=((void*)0);
        __dec_obj78=litem_348->item,
        litem_348->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_348;
        self->tail=litem_348;
    }
    self->len++;
    __result_obj__225 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value319 = (void*)0;
struct sType* __dec_obj83;
struct sImplementsNode* __result_obj__227;
    ((struct sNodeBase*)(__right_value317=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value317,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj82=self->obj_exp,
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    (__dec_obj82 ? __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj83=self->inf_type,
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__227 = (struct sImplementsNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((obj_exp) ? obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __right_value320 = (void*)0;
char* __result_obj__228;
    __result_obj__228 = (char*)come_increment_ref_count(((char*)(__right_value320=__builtin_string("sImplementsNode"))));
    (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__228;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value321 = (void*)0;
struct sNode* obj_exp_351;
void* __right_value322 = (void*)0;
struct sType* inf_type_352;
_Bool Value_353;
_Bool __result_obj__229;
void* __right_value323 = (void*)0;
struct CVALUE* come_value_354;
void* __right_value324 = (void*)0;
struct sType* type_355;
struct sClass* klass_356;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value2_357;
void* __right_value327 = (void*)0;
struct sType* type2_358;
void* __right_value328 = (void*)0;
char* type_name_359;
void* __right_value329 = (void*)0;
char* type_name2_360;
int inf_num_stack_362;
void* __right_value330 = (void*)0;
char* buf_363;
void* __right_value331 = (void*)0;
char* buf2_364;
void* __right_value332 = (void*)0;
_Bool _if_conditional7;
void* __right_value333 = (void*)0;
char* c_value_365;
void* __right_value334 = (void*)0;
struct sType* typeX_366;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
int i_367;
void* __right_value337 = (void*)0;
struct tuple2$2char$phsType$ph* multiple_assign_var6 = (void*)0;
char* name_374=0;
struct sType* field_type_375=0;
void* __right_value338 = (void*)0;
char* method_name_376;
void* __right_value339 = (void*)0;
struct sFun* fun_377;
void* __right_value340 = (void*)0;
struct sType* type2_380;
void* __right_value341 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun2_381=0;
char* real_fun_name_382=0;
char* __dec_obj84;
void* __right_value342 = (void*)0;
struct sType* type2_383;
void* __right_value343 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var8 = (void*)0;
struct sFun* fun2_384=0;
char* real_fun_name_385=0;
char* __dec_obj85;
void* __right_value344 = (void*)0;
struct sClass* klass2_386;
void* __right_value345 = (void*)0;
_Bool _while_condtional1;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* __dec_obj86;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj87;
void* __right_value351 = (void*)0;
struct sType* type3_393;
void* __right_value352 = (void*)0;
struct sType* __dec_obj88;
_Bool __result_obj__246;
    obj_exp_351=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_352=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    Value_353=node_compile(obj_exp_351,info);
    if(    !Value_353) {
        __result_obj__229 = (_Bool)0;
        ((obj_exp_351) ? obj_exp_351 = come_decrement_ref_count(obj_exp_351, ((struct sNode*)obj_exp_351)->finalize, ((struct sNode*)obj_exp_351)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(inf_type_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__229;
    }
    else {
    }
    come_value_354=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_355=(struct sType*)come_increment_ref_count(sType_clone(come_value_354->type));
    type_355->mPointerNum--;
    type_355->mHeap=(_Bool)0;
    klass_356=inf_type_352->mClass;
    come_value2_357=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 259, "struct CVALUE*"))));
    type2_358=(struct sType*)come_increment_ref_count(sType_clone(inf_type_352));
    type_name_359=(char*)come_increment_ref_count(make_type_name_string(inf_type_352,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_360=(char*)come_increment_ref_count(make_type_name_string(type_355,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_361=0;
    ++inf_num_361;
    inf_num_stack_362=inf_num_361;
    buf_363=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_359,inf_num_stack_362));
    add_come_code_at_function_head(info,buf_363);
    buf2_364=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_360,inf_num_stack_362));
    add_come_code_at_function_head(info,buf2_364);
    if(    (_if_conditional7=(((struct sFun*)(__right_value332=map$2char$phsFun$ph_operator_load_element(info->funcs,"come_calloc_v2"))))),    /*c*/ come_call_finalizer3(__right_value332,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional7) {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc_v2(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_362,type_name_359,type_name_359,info->sname,info->sline,type_name_359);
    }
    else {
        add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_stack_362,type_name_359,type_name_359,info->sname,info->sline,type_name_359);
    }
    c_value_365=(char*)come_increment_ref_count(increment_ref_count_object(come_value_354->type,come_value_354->c_value,info));
    add_come_code(info,"_inf_obj_value%d=%s;\n",inf_num_stack_362,c_value_365);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_stack_362,inf_num_stack_362);
    typeX_366=(struct sType*)come_increment_ref_count(sType_clone(type_355));
    typeX_366->mPointerNum++;
    ((struct tuple2$2sFun$pchar$ph*)(__right_value335=create_finalizer_automatically(typeX_366,"finalize",info)));
    /*c*/ come_call_finalizer3(__right_value335,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((struct tuple2$2sFun$pchar$ph*)(__right_value336=create_cloner_automatically(typeX_366,"clone",info)));
    /*c*/ come_call_finalizer3(__right_value336,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    i_367=1;    i_367<list$1tuple2$2char$phsType$ph$ph_length(klass_356->mFields);    i_367++    ){
        multiple_assign_var6=((struct tuple2$2char$phsType$ph*)(__right_value337=list$1tuple2$2char$phsType$ph$ph_operator_load_element(klass_356->mFields,i_367)));
        name_374=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        field_type_375=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
        /*c*/ come_call_finalizer3(__right_value337,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        method_name_376=(char*)come_increment_ref_count(create_method_name(type_355,(_Bool)0,name_374,info,(_Bool)1));
        fun_377=((struct sFun*)(__right_value339=map$2char$phsFun$ph_at(info->funcs,method_name_376,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value339,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_377==((void*)0)&&string_operator_equals(name_374,"to_string")) {
            type2_380=(struct sType*)come_increment_ref_count(sType_clone(type_355));
            type2_380->mPointerNum++;
            multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value341=create_to_string_automatically(type2_380,name_374,info)));
            fun2_381=multiple_assign_var7->v1;
            real_fun_name_382=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*c*/ come_call_finalizer3(__right_value341,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_377=fun2_381;
            __dec_obj84=method_name_376,
            method_name_376=(char*)come_increment_ref_count(real_fun_name_382);
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(type2_380,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (real_fun_name_382 = come_decrement_ref_count(real_fun_name_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_377==((void*)0)&&string_operator_equals(name_374,"equals")) {
            type2_383=(struct sType*)come_increment_ref_count(sType_clone(type_355));
            type2_383->mPointerNum++;
            multiple_assign_var8=((struct tuple2$2sFun$pchar$ph*)(__right_value343=create_equals_automatically(type2_383,name_374,info)));
            fun2_384=multiple_assign_var8->v1;
            real_fun_name_385=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            /*c*/ come_call_finalizer3(__right_value343,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_377=fun2_384;
            __dec_obj85=method_name_376,
            method_name_376=(char*)come_increment_ref_count(real_fun_name_385);
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(type2_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (real_fun_name_385 = come_decrement_ref_count(real_fun_name_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        fun_377==((void*)0)) {
            klass2_386=((struct sClass*)(__right_value344=map$2char$phsClass$ph_operator_load_element(info->classes,type_355->mClass->mName)));
            /*c*/ come_call_finalizer3(__right_value344,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            while(            (_while_condtional1=(((struct sClass*)(__right_value345=map$2char$phsClass$ph_operator_load_element(info->classes,klass2_386->mParentClassName))))),            /*c*/ come_call_finalizer3(__right_value345,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _while_condtional1) {
                klass2_386=((struct sClass*)(__right_value346=map$2char$phsClass$ph_operator_load_element(info->classes,klass2_386->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value346,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj86=method_name_376,
                method_name_376=(char*)come_increment_ref_count(create_method_name_using_class(klass2_386,(_Bool)0,name_374,info,(_Bool)1));
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                fun_377=((struct sFun*)(__right_value349=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value348=__builtin_string(method_name_376))),((void*)0))));
                (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value349,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_377) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_362,name_374,method_name_376);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_stack_362,name_374,method_name_376);
        }
        (name_374 = come_decrement_ref_count(name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_375,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (method_name_376 = come_decrement_ref_count(method_name_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj87=come_value2_357->c_value,
    come_value2_357->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_stack_362));
    __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    type3_393=(struct sType*)come_increment_ref_count(sType_clone(inf_type_352));
    type3_393->mPointerNum++;
    type3_393->mHeap=(_Bool)1;
    type2_358->mHeap=(_Bool)1;
    __dec_obj88=come_value2_357->type,
    come_value2_357->type=(struct sType*)come_increment_ref_count(sType_clone(type2_358));
    /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_357->type->mPointerNum++;
    come_value2_357->var=((void*)0);
    append_object_to_right_values2(come_value2_357,(struct sType*)come_increment_ref_count(type3_393),info,(_Bool)0,((void*)0),((void*)0));
    add_come_last_code(info,"%s",come_value2_357->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_357));
    __result_obj__246 = (_Bool)1;
    ((obj_exp_351) ? obj_exp_351 = come_decrement_ref_count(obj_exp_351, ((struct sNode*)obj_exp_351)->finalize, ((struct sNode*)obj_exp_351)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_354,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_355,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_357,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_359 = come_decrement_ref_count(type_name_359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (type_name2_360 = come_decrement_ref_count(type_name2_360, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf_363 = come_decrement_ref_count(buf_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (buf2_364 = come_decrement_ref_count(buf2_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (c_value_365 = come_decrement_ref_count(c_value_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(typeX_366,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type3_393,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        ((self->obj_exp) ? self->obj_exp = come_decrement_ref_count(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_368;
int i_369;
struct tuple2$2char$phsType$ph* __result_obj__230;
struct tuple2$2char$phsType$ph* default_value_370;
struct tuple2$2char$phsType$ph* __result_obj__231;
default_value_370 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_368=self->head;
    i_369=0;
    while(    it_368!=((void*)0)) {
        if(        position==i_369) {
            __result_obj__230 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it_368->item);
            /*c*/ come_call_finalizer3(__result_obj__230,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__230;
        }
        it_368=it_368->next;
        i_369++;
    }
    memset(&default_value_370,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__231 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_370);
    /*c*/ come_call_finalizer3(default_value_370,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__231,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_operator_load_element(struct list$1tuple2$2char$phsType$ph$ph* self, int position){
struct list_item$1tuple2$2char$phsType$ph$ph* it_371;
int i_372;
struct tuple2$2char$phsType$ph* __result_obj__232;
struct tuple2$2char$phsType$ph* default_value_373;
struct tuple2$2char$phsType$ph* __result_obj__233;
default_value_373 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_371=self->head;
    i_372=0;
    while(    it_371!=((void*)0)) {
        if(        position==i_372) {
            __result_obj__232 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(it_371->item);
            /*c*/ come_call_finalizer3(__result_obj__232,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__232;
        }
        it_371=it_371->next;
        i_372++;
    }
    memset(&default_value_373,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__233 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(default_value_373);
    /*c*/ come_call_finalizer3(default_value_373,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__233,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_378;
unsigned int it_379;
struct sFun* __result_obj__234;
struct sFun* __result_obj__235;
struct sFun* __result_obj__236;
struct sFun* __result_obj__237;
    hash_378=string_get_hash_key(((char*)key))%self->size;
    it_379=hash_378;
    while(    (_Bool)1) {
        if(        self->item_existance[it_379]) {
            if(            string_equals(self->keys[it_379],key)) {
                __result_obj__234 = (struct sFun*)come_increment_ref_count(self->items[it_379]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__234,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__234;
            }
            it_379++;
            if(            it_379>=self->size) {
                it_379=0;
            }
            else if(            it_379==hash_378) {
                __result_obj__235 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__235,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__235;
            }
        }
        else {
            __result_obj__236 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__236,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__236;
        }
    }
    __result_obj__237 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_387;
unsigned int hash_388;
unsigned int it_389;
struct sClass* __result_obj__238;
struct sClass* __result_obj__239;
struct sClass* __result_obj__240;
struct sClass* __result_obj__241;
default_value_387 = (void*)0;
    memset(&default_value_387,0,sizeof(struct sClass*));
    hash_388=string_get_hash_key(((char*)key))%self->size;
    it_389=hash_388;
    while(    (_Bool)1) {
        if(        self->item_existance[it_389]) {
            if(            string_equals(self->keys[it_389],key)) {
                __result_obj__238 = (struct sClass*)come_increment_ref_count(self->items[it_389]);
                /*c*/ come_call_finalizer3(default_value_387,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__238,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__238;
            }
            it_389++;
            if(            it_389>=self->size) {
                it_389=0;
            }
            else if(            it_389==hash_388) {
                __result_obj__239 = (struct sClass*)come_increment_ref_count(default_value_387);
                /*c*/ come_call_finalizer3(default_value_387,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__239,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__239;
            }
        }
        else {
            __result_obj__240 = (struct sClass*)come_increment_ref_count(default_value_387);
            /*c*/ come_call_finalizer3(default_value_387,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__240,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
    }
    __result_obj__241 = (struct sClass*)come_increment_ref_count(default_value_387);
    /*c*/ come_call_finalizer3(default_value_387,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_390;
unsigned int hash_391;
unsigned int it_392;
struct sClass* __result_obj__242;
struct sClass* __result_obj__243;
struct sClass* __result_obj__244;
struct sClass* __result_obj__245;
default_value_390 = (void*)0;
    memset(&default_value_390,0,sizeof(struct sClass*));
    hash_391=string_get_hash_key(((char*)key))%self->size;
    it_392=hash_391;
    while(    (_Bool)1) {
        if(        self->item_existance[it_392]) {
            if(            string_equals(self->keys[it_392],key)) {
                __result_obj__242 = (struct sClass*)come_increment_ref_count(self->items[it_392]);
                /*c*/ come_call_finalizer3(default_value_390,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__242,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
            it_392++;
            if(            it_392>=self->size) {
                it_392=0;
            }
            else if(            it_392==hash_391) {
                __result_obj__243 = (struct sClass*)come_increment_ref_count(default_value_390);
                /*c*/ come_call_finalizer3(default_value_390,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__243,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__243;
            }
        }
        else {
            __result_obj__244 = (struct sClass*)come_increment_ref_count(default_value_390);
            /*c*/ come_call_finalizer3(default_value_390,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__244,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__244;
        }
    }
    __result_obj__245 = (struct sClass*)come_increment_ref_count(default_value_390);
    /*c*/ come_call_finalizer3(default_value_390,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__245,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __right_value353 = (void*)0;
struct sTrueNode* __result_obj__247;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value353,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__247 = (struct sTrueNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__247,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__247;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __right_value354 = (void*)0;
char* __result_obj__248;
    __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value354=__builtin_string("sTrueNode"))));
    (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__248;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value357 = (void*)0;
char* __dec_obj89;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj90;
_Bool __result_obj__249;
    come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 374, "struct CVALUE*"))));
    __dec_obj89=come_value_394->c_value,
    come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj90=come_value_394->type,
    come_value_394->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 377, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_394->var=((void*)0);
    add_come_last_code(info,"%s",come_value_394->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
    __result_obj__249 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_394,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void sTrueNode_finalize(struct sTrueNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_true_object(struct sInfo* info){
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value365 = (void*)0;
struct sNode* __result_obj__252;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 390, "struct sNode");
    _inf_obj_value1=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value362=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 390, "struct sTrueNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result_obj__252 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value365=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value362,sTrueNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value365) ? __right_value365 = come_decrement_ref_count(__right_value365, ((struct sNode*)__right_value365)->finalize, ((struct sNode*)__right_value365)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__252) ? __result_obj__252 = come_decrement_ref_count(__result_obj__252, ((struct sNode*)__result_obj__252)->finalize, ((struct sNode*)__result_obj__252)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__252;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
struct sTrueNode* __result_obj__250;
void* __right_value363 = (void*)0;
struct sTrueNode* result_395;
void* __right_value364 = (void*)0;
char* __dec_obj91;
struct sTrueNode* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__250 = (void*)0;
        return __result_obj__250;
    }
    result_395=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode*"));
    if(    self!=((void*)0)) {
        result_395->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj91=result_395->sname,
        result_395->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTrueNode_clone", 5, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->sline_real=self->sline_real;
    }
    __result_obj__251 = result_395;
    /*c*/ come_call_finalizer3(result_395,sTrueNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__251;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
struct sFalseNode* __result_obj__253;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value366,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__253 = (struct sFalseNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __right_value367 = (void*)0;
char* __result_obj__254;
    __result_obj__254 = (char*)come_increment_ref_count(((char*)(__right_value367=__builtin_string("sFalseNode"))));
    (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_396;
void* __right_value370 = (void*)0;
char* __dec_obj92;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sType* __dec_obj93;
_Bool __result_obj__255;
    come_value_396=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 407, "struct CVALUE*"))));
    __dec_obj92=come_value_396->c_value,
    come_value_396->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj93=come_value_396->type,
    come_value_396->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 410, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_396->var=((void*)0);
    add_come_last_code(info,"%s",come_value_396->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_396));
    __result_obj__255 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_396,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

static void sFalseNode_finalize(struct sFalseNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_false_object(struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value378 = (void*)0;
struct sNode* __result_obj__258;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 423, "struct sNode");
    _inf_obj_value2=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value375=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 423, "struct sFalseNode*")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result_obj__258 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value378=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value375,sFalseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value378) ? __right_value378 = come_decrement_ref_count(__right_value378, ((struct sNode*)__right_value378)->finalize, ((struct sNode*)__right_value378)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__258) ? __result_obj__258 = come_decrement_ref_count(__result_obj__258, ((struct sNode*)__result_obj__258)->finalize, ((struct sNode*)__result_obj__258)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__258;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
struct sFalseNode* __result_obj__256;
void* __right_value376 = (void*)0;
struct sFalseNode* result_397;
void* __right_value377 = (void*)0;
char* __dec_obj94;
struct sFalseNode* __result_obj__257;
    if(    self==(void*)0) {
        __result_obj__256 = (void*)0;
        return __result_obj__256;
    }
    result_397=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode*"));
    if(    self!=((void*)0)) {
        result_397->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj94=result_397->sname,
        result_397->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFalseNode_clone", 5, "char*"));
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_397->sline_real=self->sline_real;
    }
    __result_obj__257 = result_397;
    /*c*/ come_call_finalizer3(result_397,sFalseNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__257;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* __dec_obj95;
struct sSizeOfNode* __result_obj__259;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value379,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj95=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__259 = (struct sSizeOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__259,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __right_value381 = (void*)0;
char* __result_obj__260;
    __result_obj__260 = (char*)come_increment_ref_count(((char*)(__right_value381=__builtin_string("sSizeOfNode"))));
    (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__260 = come_decrement_ref_count(__result_obj__260, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__260;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_398;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct CVALUE* come_value_399;
void* __right_value384 = (void*)0;
struct sType* type2_400;
void* __right_value385 = (void*)0;
char* type_name_401;
void* __right_value386 = (void*)0;
char* __dec_obj96;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__261;
    type_398=self->type;
    come_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 444, "struct CVALUE*"))));
    type2_400=(struct sType*)come_increment_ref_count(solve_generics(type_398,info->generics_type,info));
    type_name_401=(char*)come_increment_ref_count(make_type_name_string(type2_400,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj96=come_value_399->c_value,
    come_value_399->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_401));
    __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj97=come_value_399->type,
    come_value_399->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 451, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_399->type->mUnsigned=(_Bool)1;
    come_value_399->var=((void*)0);
    add_come_last_code(info,"%s",come_value_399->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_399));
    __result_obj__261 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_399,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_400,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_401 = come_decrement_ref_count(type_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__261;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sNode* __dec_obj98;
struct sSizeOfExpNode* __result_obj__262;
struct sSizeOfExpNode* __result_obj__263;
    ((struct sNodeBase*)(__right_value390=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value390,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj98=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__262 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
    __result_obj__263 = (struct sSizeOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __right_value392 = (void*)0;
char* __result_obj__264;
    __result_obj__264 = (char*)come_increment_ref_count(((char*)(__right_value392=__builtin_string("sSizeOfExpNode"))));
    (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__264 = come_decrement_ref_count(__result_obj__264, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__264;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_402;
_Bool Value_403;
_Bool __result_obj__265;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_404;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct CVALUE* come_value2_405;
void* __right_value396 = (void*)0;
char* __dec_obj99;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sType* __dec_obj100;
_Bool __result_obj__266;
    exp_402=(struct sNode*)come_increment_ref_count(self->exp);
    Value_403=node_compile(exp_402,info);
    if(    !Value_403) {
        __result_obj__265 = (_Bool)0;
        ((exp_402) ? exp_402 = come_decrement_ref_count(exp_402, ((struct sNode*)exp_402)->finalize, ((struct sNode*)exp_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__265;
    }
    else {
    }
    come_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 489, "struct CVALUE*"))));
    __dec_obj99=come_value2_405->c_value,
    come_value2_405->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_404->c_value));
    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj100=come_value2_405->type,
    come_value2_405->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 492, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_405->type->mUnsigned=(_Bool)1;
    come_value2_405->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_405->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_405));
    __result_obj__266 = (_Bool)1;
    ((exp_402) ? exp_402 = come_decrement_ref_count(exp_402, ((struct sNode*)exp_402)->finalize, ((struct sNode*)exp_402)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_404,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_405,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* __dec_obj101;
struct sTypeOfNode* __result_obj__267;
    ((struct sNodeBase*)(__right_value400=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value400,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj101=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__267 = (struct sTypeOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __right_value402 = (void*)0;
char* __result_obj__268;
    __result_obj__268 = (char*)come_increment_ref_count(((char*)(__right_value402=__builtin_string("sTypeOfNode"))));
    (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__268 = come_decrement_ref_count(__result_obj__268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__268;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_406;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct CVALUE* come_value_407;
void* __right_value405 = (void*)0;
struct sType* type2_408;
void* __right_value406 = (void*)0;
char* type_name_409;
void* __right_value407 = (void*)0;
char* __dec_obj102;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* __dec_obj103;
_Bool __result_obj__269;
    type_406=self->type;
    come_value_407=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 522, "struct CVALUE*"))));
    type2_408=(struct sType*)come_increment_ref_count(solve_generics(type_406,info->generics_type,info));
    type_name_409=(char*)come_increment_ref_count(make_type_name_string(type2_408,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj102=come_value_407->c_value,
    come_value_407->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_409));
    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj103=come_value_407->type,
    come_value_407->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 529, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_407->var=((void*)0);
    add_come_last_code(info,"%s",come_value_407->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_407));
    __result_obj__269 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_408,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_409 = come_decrement_ref_count(type_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__269;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sNode* __dec_obj104;
struct sTypeOfExpNode* __result_obj__270;
    ((struct sNodeBase*)(__right_value411=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value411,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj104=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__270 = (struct sTypeOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __right_value413 = (void*)0;
char* __result_obj__271;
    __result_obj__271 = (char*)come_increment_ref_count(((char*)(__right_value413=__builtin_string("sTypeOfExpNode"))));
    (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__271 = come_decrement_ref_count(__result_obj__271, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__271;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_410;
_Bool Value_411;
_Bool __result_obj__272;
void* __right_value414 = (void*)0;
struct CVALUE* come_value_412;
void* __right_value415 = (void*)0;
struct sType* type_413;
void* __right_value416 = (void*)0;
struct sType* type2_414;
void* __right_value417 = (void*)0;
char* type_name_415;
void* __right_value418 = (void*)0;
char* __dec_obj105;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* __dec_obj106;
_Bool __result_obj__273;
    exp_410=(struct sNode*)come_increment_ref_count(self->exp);
    Value_411=node_compile(exp_410,info);
    if(    !Value_411) {
        __result_obj__272 = (_Bool)0;
        ((exp_410) ? exp_410 = come_decrement_ref_count(exp_410, ((struct sNode*)exp_410)->finalize, ((struct sNode*)exp_410)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__272;
    }
    else {
    }
    come_value_412=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_413=(struct sType*)come_increment_ref_count(sType_clone(come_value_412->type));
    type2_414=(struct sType*)come_increment_ref_count(solve_generics(type_413,info->generics_type,info));
    type_name_415=(char*)come_increment_ref_count(make_type_name_string(type2_414,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj105=come_value_412->c_value,
    come_value_412->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_415));
    __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj106=come_value_412->type,
    come_value_412->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 571, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_412->var=((void*)0);
    add_come_last_code(info,"%s",come_value_412->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_412));
    __result_obj__273 = (_Bool)1;
    ((exp_410) ? exp_410 = come_decrement_ref_count(exp_410, ((struct sNode*)exp_410)->finalize, ((struct sNode*)exp_410)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_412,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_414,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_415 = come_decrement_ref_count(type_name_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDynamicTypeOf* sDynamicTypeOf_initialize(struct sDynamicTypeOf* self, struct sNode* exp, struct sInfo* info){
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* __dec_obj107;
struct sDynamicTypeOf* __result_obj__274;
    ((struct sNodeBase*)(__right_value422=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value422,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj107=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj107 ? __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__274 = (struct sDynamicTypeOf*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

char* sDynamicTypeOf_kind(struct sDynamicTypeOf* self){
void* __right_value424 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = (char*)come_increment_ref_count(((char*)(__right_value424=__builtin_string("sDynamicTypeOf"))));
    (__right_value424 = come_decrement_ref_count(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sDynamicTypeOf_compile(struct sDynamicTypeOf* self, struct sInfo* info){
struct sNode* exp_416;
_Bool Value_417;
_Bool __result_obj__276;
void* __right_value425 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct CVALUE* come_value2_419;
void* __right_value428 = (void*)0;
char* __dec_obj108;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __dec_obj109;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct CVALUE* come_value2_420;
void* __right_value434 = (void*)0;
char* __dec_obj110;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sType* __dec_obj111;
_Bool __result_obj__277;
    exp_416=(struct sNode*)come_increment_ref_count(self->exp);
    Value_417=node_compile(exp_416,info);
    if(    !Value_417) {
        __result_obj__276 = (_Bool)0;
        ((exp_416) ? exp_416 = come_decrement_ref_count(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__276;
    }
    else {
    }
    come_value_418=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_418->type->mPointerNum>0&&come_value_418->type->mHeap) {
        come_value2_419=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 607, "struct CVALUE*"))));
        __dec_obj108=come_value2_419->c_value,
        come_value2_419->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_418->c_value));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj109=come_value2_419->type,
        come_value2_419->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 610, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_419->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_419->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_419));
        /*c*/ come_call_finalizer3(come_value2_419,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value2_420=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 618, "struct CVALUE*"))));
        __dec_obj110=come_value2_420->c_value,
        come_value2_420->c_value=(char*)come_increment_ref_count(xsprintf("__builtin_string(\"NOT HEAP OBJECT\")"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj111=come_value2_420->type,
        come_value2_420->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 621, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_420->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_420->c_value);
        append_object_to_right_values2(come_value2_420,(struct sType*)come_increment_ref_count(come_value2_420->type),info,(_Bool)0,((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_420));
        /*c*/ come_call_finalizer3(come_value2_420,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__277 = (_Bool)1;
    ((exp_416) ? exp_416 = come_decrement_ref_count(exp_416, ((struct sNode*)exp_416)->finalize, ((struct sNode*)exp_416)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_418,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

static void sDynamicTypeOf_finalize(struct sDynamicTypeOf* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sType* __dec_obj112;
struct sAlignOfNode* __result_obj__278;
struct sAlignOfNode* __result_obj__279;
    ((struct sNodeBase*)(__right_value438=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value438,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj112=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__278 = (struct sAlignOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__278,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
    __result_obj__279 = (struct sAlignOfNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__279,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __right_value440 = (void*)0;
char* __result_obj__280;
    __result_obj__280 = (char*)come_increment_ref_count(((char*)(__right_value440=__builtin_string("sAlignOfNode"))));
    (__right_value440 = come_decrement_ref_count(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__280 = come_decrement_ref_count(__result_obj__280, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__280;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_421;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value443 = (void*)0;
struct sType* type2_423;
void* __right_value444 = (void*)0;
char* type_name_424;
void* __right_value445 = (void*)0;
char* __dec_obj113;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sType* __dec_obj114;
_Bool __result_obj__281;
    type_421=self->type;
    come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 655, "struct CVALUE*"))));
    type2_423=(struct sType*)come_increment_ref_count(solve_generics(type_421,info->generics_type,info));
    type_name_424=(char*)come_increment_ref_count(make_type_name_string(type2_423,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj113=come_value_422->c_value,
    come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_424));
    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj114=come_value_422->type,
    come_value_422->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 662, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_422->type->mUnsigned=(_Bool)1;
    come_value_422->var=((void*)0);
    add_come_last_code(info,"%s",come_value_422->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
    __result_obj__281 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_422,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_423,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_424 = come_decrement_ref_count(type_name_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* __dec_obj115;
struct sAlignOfExpNode* __result_obj__282;
    ((struct sNodeBase*)(__right_value449=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value449,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj115=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__282 = (struct sAlignOfExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__282,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__282;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __right_value451 = (void*)0;
char* __result_obj__283;
    __result_obj__283 = (char*)come_increment_ref_count(((char*)(__right_value451=__builtin_string("sAlignOfExpNode"))));
    (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__283 = come_decrement_ref_count(__result_obj__283, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__283;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_425;
_Bool Value_426;
_Bool __result_obj__284;
void* __right_value452 = (void*)0;
struct CVALUE* come_value_427;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct CVALUE* come_value2_428;
void* __right_value455 = (void*)0;
char* __dec_obj116;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* __dec_obj117;
_Bool __result_obj__285;
    exp_425=(struct sNode*)come_increment_ref_count(self->exp);
    Value_426=node_compile(exp_425,info);
    if(    !Value_426) {
        __result_obj__284 = (_Bool)0;
        ((exp_425) ? exp_425 = come_decrement_ref_count(exp_425, ((struct sNode*)exp_425)->finalize, ((struct sNode*)exp_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__284;
    }
    else {
    }
    come_value_427=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 698, "struct CVALUE*"))));
    __dec_obj116=come_value2_428->c_value,
    come_value2_428->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_427->c_value));
    __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj117=come_value2_428->type,
    come_value2_428->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 701, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_428->type->mUnsigned=(_Bool)1;
    come_value2_428->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_428->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_428));
    __result_obj__285 = (_Bool)1;
    ((exp_425) ? exp_425 = come_decrement_ref_count(exp_425, ((struct sNode*)exp_425)->finalize, ((struct sNode*)exp_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sType* __dec_obj118;
struct sAlignOfNode2* __result_obj__286;
    ((struct sNodeBase*)(__right_value459=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value459,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj118=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__286 = (struct sAlignOfNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__286,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __right_value461 = (void*)0;
char* __result_obj__287;
    __result_obj__287 = (char*)come_increment_ref_count(((char*)(__right_value461=__builtin_string("sAlignOfNode2"))));
    (__right_value461 = come_decrement_ref_count(__right_value461, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__287 = come_decrement_ref_count(__result_obj__287, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__287;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_429;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* come_value_430;
void* __right_value464 = (void*)0;
struct sType* type2_431;
void* __right_value465 = (void*)0;
char* type_name_432;
void* __right_value466 = (void*)0;
char* __dec_obj119;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* __dec_obj120;
_Bool __result_obj__288;
    type_429=self->type;
    come_value_430=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 731, "struct CVALUE*"))));
    type2_431=(struct sType*)come_increment_ref_count(solve_generics(type_429,info->generics_type,info));
    type_name_432=(char*)come_increment_ref_count(make_type_name_string(type2_431,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj119=come_value_430->c_value,
    come_value_430->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_432));
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj120=come_value_430->type,
    come_value_430->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 738, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_430->type->mUnsigned=(_Bool)1;
    come_value_430->var=((void*)0);
    add_come_last_code(info,"%s",come_value_430->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_430));
    __result_obj__288 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_430,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_431,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_432 = come_decrement_ref_count(type_name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__288;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sNode* __dec_obj121;
struct sAlignOfExpNode2* __result_obj__289;
    ((struct sNodeBase*)(__right_value470=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value470,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj121=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__289 = (struct sAlignOfExpNode2*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __right_value472 = (void*)0;
char* __result_obj__290;
    __result_obj__290 = (char*)come_increment_ref_count(((char*)(__right_value472=__builtin_string("sAlignOfExpNode2"))));
    (__right_value472 = come_decrement_ref_count(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__290 = come_decrement_ref_count(__result_obj__290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_433;
_Bool Value_434;
_Bool __result_obj__291;
void* __right_value473 = (void*)0;
struct CVALUE* come_value_435;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct CVALUE* come_value2_436;
void* __right_value476 = (void*)0;
char* __dec_obj122;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct sType* __dec_obj123;
_Bool __result_obj__292;
    exp_433=(struct sNode*)come_increment_ref_count(self->exp);
    Value_434=node_compile(exp_433,info);
    if(    !Value_434) {
        __result_obj__291 = (_Bool)0;
        ((exp_433) ? exp_433 = come_decrement_ref_count(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__291;
    }
    else {
    }
    come_value_435=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_436=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 774, "struct CVALUE*"))));
    __dec_obj122=come_value2_436->c_value,
    come_value2_436->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_435->c_value));
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj123=come_value2_436->type,
    come_value2_436->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 777, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_436->type->mUnsigned=(_Bool)1;
    come_value2_436->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_436->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_436));
    __result_obj__292 = (_Bool)1;
    ((exp_433) ? exp_433 = come_decrement_ref_count(exp_433, ((struct sNode*)exp_433)->finalize, ((struct sNode*)exp_433)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_435,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_436,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* __dec_obj124;
struct sAlignAsNode* __result_obj__293;
    ((struct sNodeBase*)(__right_value480=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value480,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj124=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__293 = (struct sAlignAsNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__293,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __right_value482 = (void*)0;
char* __result_obj__294;
    __result_obj__294 = (char*)come_increment_ref_count(((char*)(__right_value482=__builtin_string("sAlignAsNode"))));
    (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__294 = come_decrement_ref_count(__result_obj__294, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__294;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_437;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct CVALUE* come_value_438;
void* __right_value485 = (void*)0;
struct sType* type2_439;
void* __right_value486 = (void*)0;
char* type_name_440;
void* __right_value487 = (void*)0;
char* __dec_obj125;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj126;
_Bool __result_obj__295;
    type_437=self->type;
    come_value_438=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 807, "struct CVALUE*"))));
    type2_439=(struct sType*)come_increment_ref_count(solve_generics(type_437,info->generics_type,info));
    type_name_440=(char*)come_increment_ref_count(make_type_name_string(type2_439,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj125=come_value_438->c_value,
    come_value_438->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_440));
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj126=come_value_438->type,
    come_value_438->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 814, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_438->type->mUnsigned=(_Bool)1;
    come_value_438->var=((void*)0);
    add_come_last_code(info,"%s",come_value_438->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_438));
    __result_obj__295 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_438,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_439,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (type_name_440 = come_decrement_ref_count(type_name_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj127;
struct sAlignAsExpNode* __result_obj__296;
    ((struct sNodeBase*)(__right_value491=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value491,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj127=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__296 = (struct sAlignAsExpNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__296,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __right_value493 = (void*)0;
char* __result_obj__297;
    __result_obj__297 = (char*)come_increment_ref_count(((char*)(__right_value493=__builtin_string("sAlignAsExpNode"))));
    (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__297 = come_decrement_ref_count(__result_obj__297, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__297;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_441;
_Bool Value_442;
_Bool __result_obj__298;
void* __right_value494 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct CVALUE* come_value2_444;
void* __right_value497 = (void*)0;
char* __dec_obj128;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj129;
_Bool __result_obj__299;
    exp_441=(struct sNode*)come_increment_ref_count(self->exp);
    Value_442=node_compile(exp_441,info);
    if(    !Value_442) {
        __result_obj__298 = (_Bool)0;
        ((exp_441) ? exp_441 = come_decrement_ref_count(exp_441, ((struct sNode*)exp_441)->finalize, ((struct sNode*)exp_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__298;
    }
    else {
    }
    come_value_443=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_value2_444=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 850, "struct CVALUE*"))));
    __dec_obj128=come_value2_444->c_value,
    come_value2_444->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_443->c_value));
    __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj129=come_value2_444->type,
    come_value2_444->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 853, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_444->type->mUnsigned=(_Bool)1;
    come_value2_444->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_444->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_444));
    __result_obj__299 = (_Bool)1;
    ((exp_441) ? exp_441 = come_decrement_ref_count(exp_441, ((struct sNode*)exp_441)->finalize, ((struct sNode*)exp_441)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_443,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_444,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* __dec_obj130;
struct sDeleteNode* __result_obj__300;
    ((struct sNodeBase*)(__right_value501=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value501,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj130=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__300 = (struct sDeleteNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __right_value503 = (void*)0;
char* __result_obj__301;
    __result_obj__301 = (char*)come_increment_ref_count(((char*)(__right_value503=__builtin_string("sDeleteNode"))));
    (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__301 = come_decrement_ref_count(__result_obj__301, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__301;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_445;
_Bool Value_446;
void* __right_value504 = (void*)0;
struct CVALUE* come_value_447;
void* __right_value505 = (void*)0;
_Bool __result_obj__302;
    node_445=self->node;
    Value_446=node_compile(node_445,info);
    if(    !Value_446) {
        return (_Bool)0;
    }
    else {
    }
    come_value_447=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_447->type->mPointerNum>0) {
        free_object(((struct sType*)(__right_value505=sType_clone(come_value_447->type))),come_value_447->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        /*c*/ come_call_finalizer3(__right_value505,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__302 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_447,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj131;
struct sBorrowNode* __result_obj__303;
struct sBorrowNode* __result_obj__304;
    ((struct sNodeBase*)(__right_value506=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value506,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj131=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__303 = (struct sBorrowNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
    __result_obj__304 = (struct sBorrowNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__304,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __right_value508 = (void*)0;
char* __result_obj__305;
    __result_obj__305 = (char*)come_increment_ref_count(((char*)(__right_value508=__builtin_string("sBorrowNode"))));
    (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__305 = come_decrement_ref_count(__result_obj__305, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__305;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_448;
_Bool Value_449;
void* __right_value509 = (void*)0;
struct CVALUE* come_value_450;
struct sRightValueObject* right_value_objects_451;
int right_value_id_452;
_Bool __result_obj__306;
    node_448=self->node;
    Value_449=node_compile(node_448,info);
    if(    !Value_449) {
        return (_Bool)0;
    }
    else {
    }
    come_value_450=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_450->type->mPointerNum>0) {
        come_value_450->type->mHeap=(_Bool)0;
        right_value_objects_451=come_value_450->right_value_objects;
        if(        right_value_objects_451) {
            right_value_id_452=right_value_objects_451->mID;
            if(            right_value_id_452!=-1) {
                remove_object_from_right_values(right_value_id_452,info);
            }
        }
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_450));
    __result_obj__306 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_450,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj132;
struct sCloneNode* __result_obj__307;
    ((struct sNodeBase*)(__right_value510=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value510,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj132=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__307 = (struct sCloneNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__307,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__307;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __right_value512 = (void*)0;
char* __result_obj__308;
    __result_obj__308 = (char*)come_increment_ref_count(((char*)(__right_value512=__builtin_string("sCloneNode"))));
    (__right_value512 = come_decrement_ref_count(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__308 = come_decrement_ref_count(__result_obj__308, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__308;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_453;
_Bool Value_454;
void* __right_value513 = (void*)0;
struct CVALUE* left_value_455;
void* __right_value514 = (void*)0;
struct sType* left_type_456;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_457;
void* __right_value517 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* result_type_458=0;
char* c_value_459=0;
char* __dec_obj133;
void* __right_value518 = (void*)0;
struct sType* __dec_obj134;
_Bool __result_obj__309;
    node_453=self->node;
    Value_454=node_compile(node_453,info);
    if(    !Value_454) {
        return (_Bool)0;
    }
    else {
    }
    left_value_455=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_456=(struct sType*)come_increment_ref_count(sType_clone(left_value_455->type));
    if(    left_type_456->mPointerNum==1&&string_operator_equals(left_type_456->mClass->mName,"void")&&left_type_456->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_455));
    }
    else if(    left_type_456->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_455));
    }
    else if(    left_type_456->mPointerNum>0) {
        come_value_457=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 975, "struct CVALUE*"))));
        multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value517=clone_object(left_type_456,left_value_455->c_value,info)));
        result_type_458=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
        c_value_459=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        /*c*/ come_call_finalizer3(__right_value517,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj133=come_value_457->c_value,
        come_value_457->c_value=(char*)come_increment_ref_count(c_value_459);
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj134=come_value_457->type,
        come_value_457->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_456));
        /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_457->type->mHeap=(_Bool)1;
        come_value_457->var=((void*)0);
        append_object_to_right_values2(come_value_457,(struct sType*)come_increment_ref_count(left_type_456),info,(_Bool)0,((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_457));
        /*c*/ come_call_finalizer3(come_value_457,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_458,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (c_value_459 = come_decrement_ref_count(c_value_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__309 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_455,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_456,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static void sCloneNode_finalize(struct sCloneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sNode* __dec_obj135;
struct sDupeNode* __result_obj__310;
    ((struct sNodeBase*)(__right_value519=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value519,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj135=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj135 ? __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__310 = (struct sDupeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__310,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __right_value521 = (void*)0;
char* __result_obj__311;
    __result_obj__311 = (char*)come_increment_ref_count(((char*)(__right_value521=__builtin_string("sDupeNode"))));
    (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__311 = come_decrement_ref_count(__result_obj__311, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__311;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_460;
_Bool Value_461;
void* __right_value522 = (void*)0;
struct CVALUE* left_value_462;
void* __right_value523 = (void*)0;
struct sType* left_type_463;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_464;
void* __right_value526 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var10 = (void*)0;
struct sType* result_type_465=0;
char* c_value_466=0;
char* __dec_obj136;
void* __right_value527 = (void*)0;
struct sType* __dec_obj137;
_Bool __result_obj__312;
    node_460=self->node;
    Value_461=node_compile(node_460,info);
    if(    !Value_461) {
        return (_Bool)0;
    }
    else {
    }
    left_value_462=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_463=(struct sType*)come_increment_ref_count(sType_clone(left_value_462->type));
    if(    left_type_463->mPointerNum==0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_462));
    }
    else if(    left_type_463->mPointerNum>0&&left_type_463->mHeap==(_Bool)0) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_462));
    }
    else if(    left_type_463->mPointerNum>0) {
        come_value_464=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1025, "struct CVALUE*"))));
        multiple_assign_var10=((struct tuple2$2sType$phchar$ph*)(__right_value526=clone_object(left_type_463,left_value_462->c_value,info)));
        result_type_465=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        c_value_466=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        /*c*/ come_call_finalizer3(__right_value526,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj136=come_value_464->c_value,
        come_value_464->c_value=(char*)come_increment_ref_count(c_value_466);
        __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj137=come_value_464->type,
        come_value_464->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_463));
        /*b*/ come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_464->type->mHeap=(_Bool)1;
        come_value_464->var=((void*)0);
        append_object_to_right_values2(come_value_464,(struct sType*)come_increment_ref_count(left_type_463),info,(_Bool)0,((void*)0),((void*)0));
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_464));
        /*c*/ come_call_finalizer3(come_value_464,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_465,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (c_value_466 = come_decrement_ref_count(c_value_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__312 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_462,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_463,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

static void sDupeNode_finalize(struct sDupeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sNode* __dec_obj138;
struct sDummyHeapNode* __result_obj__313;
    ((struct sNodeBase*)(__right_value528=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value528,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj138=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__313 = (struct sDummyHeapNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__313,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __right_value530 = (void*)0;
char* __result_obj__314;
    __result_obj__314 = (char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("sDummyHeapNode"))));
    (__right_value530 = come_decrement_ref_count(__right_value530, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__314 = come_decrement_ref_count(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__314;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_467;
_Bool Value_468;
void* __right_value531 = (void*)0;
struct CVALUE* come_value_469;
_Bool __result_obj__315;
    node_467=self->node;
    Value_468=node_compile(node_467,info);
    if(    !Value_468) {
        return (_Bool)0;
    }
    else {
    }
    come_value_469=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    come_value_469->type->mPointerNum>0) {
        come_value_469->type->mHeap=(_Bool)1;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_469));
    __result_obj__315 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_469,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* __dec_obj139;
struct sGCIncNode* __result_obj__316;
    ((struct sNodeBase*)(__right_value532=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value532,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj139=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__316 = (struct sGCIncNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__316,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __right_value534 = (void*)0;
char* __result_obj__317;
    __result_obj__317 = (char*)come_increment_ref_count(((char*)(__right_value534=__builtin_string("sGCIncNode"))));
    (__right_value534 = come_decrement_ref_count(__right_value534, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__317 = come_decrement_ref_count(__result_obj__317, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__317;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_470;
_Bool Value_471;
void* __right_value535 = (void*)0;
struct CVALUE* come_value_472;
struct sType* type_473;
void* __right_value536 = (void*)0;
char* type_name_474;
void* __right_value537 = (void*)0;
char* __dec_obj140;
_Bool __result_obj__318;
    node_470=self->node;
    Value_471=node_compile(node_470,info);
    if(    !Value_471) {
        return (_Bool)0;
    }
    else {
    }
    come_value_472=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_473=come_value_472->type;
    if(    come_value_472->type->mHeap&&come_value_472->type->mPointerNum>0) {
        type_name_474=(char*)come_increment_ref_count(make_type_name_string(type_473,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj140=come_value_472->c_value,
        come_value_472->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_472->type,come_value_472->c_value,info));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (type_name_474 = come_decrement_ref_count(type_name_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    __result_obj__318 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_472,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj141;
struct sGCDecNode* __result_obj__319;
    ((struct sNodeBase*)(__right_value538=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value538,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj141=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__319 = (struct sGCDecNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__319,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__319;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __right_value540 = (void*)0;
char* __result_obj__320;
    __result_obj__320 = (char*)come_increment_ref_count(((char*)(__right_value540=__builtin_string("sGCDecNode"))));
    (__right_value540 = come_decrement_ref_count(__right_value540, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__320 = come_decrement_ref_count(__result_obj__320, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__320;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_475;
_Bool Value_476;
void* __right_value541 = (void*)0;
struct CVALUE* come_value_477;
struct sType* type_478;
_Bool __result_obj__321;
    node_475=self->node;
    Value_476=node_compile(node_475,info);
    if(    !Value_476) {
        return (_Bool)0;
    }
    else {
    }
    come_value_477=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_478=come_value_477->type;
    if(    come_value_477->type->mHeap&&come_value_477->type->mPointerNum>0) {
        decrement_ref_count_object(type_478,come_value_477->c_value,info,(_Bool)0,(_Bool)0);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_477));
    __result_obj__321 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_477,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj142;
struct sIsHeap* __result_obj__322;
    ((struct sNodeBase*)(__right_value542=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value542,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj142=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__322 = (struct sIsHeap*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__322,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__322;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __right_value544 = (void*)0;
char* __result_obj__323;
    __result_obj__323 = (char*)come_increment_ref_count(((char*)(__right_value544=__builtin_string("sIsHeap"))));
    (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__323 = come_decrement_ref_count(__result_obj__323, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__323;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_479;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_480;
void* __right_value547 = (void*)0;
char* __dec_obj143;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* __dec_obj144;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct CVALUE* come_value_481;
void* __right_value553 = (void*)0;
char* __dec_obj145;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj146;
    node_479=self->type;
    if(    self->type->mHeap) {
        come_value_480=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1168, "struct CVALUE*"))));
        __dec_obj143=come_value_480->c_value,
        come_value_480->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj144=come_value_480->type,
        come_value_480->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1171, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_480->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_480));
        add_come_last_code(info,"%s",come_value_480->c_value);
        /*c*/ come_call_finalizer3(come_value_480,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value_481=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1179, "struct CVALUE*"))));
        __dec_obj145=come_value_481->c_value,
        come_value_481->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj146=come_value_481->type,
        come_value_481->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1182, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj146,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_481->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_481));
        add_come_last_code(info,"%s",come_value_481->c_value);
        /*c*/ come_call_finalizer3(come_value_481,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sIsHeap_finalize(struct sIsHeap* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* __dec_obj147;
struct sIsPointer* __result_obj__324;
    ((struct sNodeBase*)(__right_value557=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value557,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj147=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__324 = (struct sIsPointer*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__324,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __right_value559 = (void*)0;
char* __result_obj__325;
    __result_obj__325 = (char*)come_increment_ref_count(((char*)(__right_value559=__builtin_string("sIsPointer"))));
    (__right_value559 = come_decrement_ref_count(__right_value559, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__325 = come_decrement_ref_count(__result_obj__325, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__325;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_482;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_483;
void* __right_value562 = (void*)0;
char* __dec_obj148;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sType* __dec_obj149;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_484;
void* __right_value568 = (void*)0;
char* __dec_obj150;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __dec_obj151;
    node_482=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_483=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1214, "struct CVALUE*"))));
        __dec_obj148=come_value_483->c_value,
        come_value_483->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj149=come_value_483->type,
        come_value_483->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1217, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_483->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_483));
        add_come_last_code(info,"%s",come_value_483->c_value);
        /*c*/ come_call_finalizer3(come_value_483,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        come_value_484=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "21obj.c", 1225, "struct CVALUE*"))));
        __dec_obj150=come_value_484->c_value,
        come_value_484->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj151=come_value_484->type,
        come_value_484->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "21obj.c", 1228, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_484->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_484));
        add_come_last_code(info,"%s",come_value_484->c_value);
        /*c*/ come_call_finalizer3(come_value_484,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sIsPointer_finalize(struct sIsPointer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj152;
struct sGCDecNoFreeNode* __result_obj__326;
    ((struct sNodeBase*)(__right_value572=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value572,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj152=self->node,
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__326 = (struct sGCDecNoFreeNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__326,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__326;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __right_value574 = (void*)0;
char* __result_obj__327;
    __result_obj__327 = (char*)come_increment_ref_count(((char*)(__right_value574=__builtin_string("sGCDecNoFreeNode"))));
    (__right_value574 = come_decrement_ref_count(__right_value574, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__327 = come_decrement_ref_count(__result_obj__327, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__327;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_485;
_Bool Value_486;
void* __right_value575 = (void*)0;
struct CVALUE* come_value_487;
struct sType* type_488;
_Bool __result_obj__328;
    node_485=self->node;
    Value_486=node_compile(node_485,info);
    if(    !Value_486) {
        return (_Bool)0;
    }
    else {
    }
    come_value_487=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    type_488=come_value_487->type;
    if(    type_488->mHeap&&type_488->mPointerNum>0) {
        decrement_ref_count_object(type_488,come_value_487->c_value,info,(_Bool)0,(_Bool)1);
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_487));
    __result_obj__328 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_487,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__328;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        ((self->node) ? self->node = come_decrement_ref_count(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value576 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_489=0;
char* name_490=0;
_Bool err_491=0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sNode* _inf_value3;
struct sNewNode* _inf_obj_value3;
void* __right_value593 = (void*)0;
struct sNode* obj_492;
void* __right_value594 = (void*)0;
char* fun_name_500;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* __result_obj__337;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_501;
void* __right_value599 = (void*)0;
char* word_502;
_Bool no_comma_503;
void* __right_value600 = (void*)0;
struct sNode* exp_504;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
_Bool _if_conditional8;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sNode* value_node_505;
void* __right_value605 = (void*)0;
struct sNode* __dec_obj161;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* exp_507;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* __result_obj__339;
struct sNode* __result_obj__340;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value613 = (void*)0;
struct sNode* __result_obj__341;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value616 = (void*)0;
struct sNode* __result_obj__342;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sNode* _inf_value6;
struct sTrueNode* _inf_obj_value6;
void* __right_value619 = (void*)0;
struct sNode* __result_obj__343;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sNode* _inf_value7;
struct sFalseNode* _inf_obj_value7;
void* __right_value622 = (void*)0;
struct sNode* __result_obj__344;
void* __right_value623 = (void*)0;
struct sNode* node_508;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct sNode* _inf_value8;
struct sDeleteNode* _inf_obj_value8;
void* __right_value629 = (void*)0;
struct sNode* __result_obj__347;
void* __right_value630 = (void*)0;
struct sNode* node_510;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value9;
struct sBorrowNode* _inf_obj_value9;
void* __right_value636 = (void*)0;
struct sNode* __result_obj__350;
void* __right_value637 = (void*)0;
struct sNode* node_512;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value10;
struct sCloneNode* _inf_obj_value10;
void* __right_value643 = (void*)0;
struct sNode* __result_obj__353;
void* __right_value644 = (void*)0;
struct sNode* node_514;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value11;
struct sDupeNode* _inf_obj_value11;
void* __right_value650 = (void*)0;
struct sNode* __result_obj__356;
void* __right_value651 = (void*)0;
struct sNode* node_516;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sNode* _inf_value12;
struct sDummyHeapNode* _inf_obj_value12;
void* __right_value657 = (void*)0;
struct sNode* __result_obj__359;
void* __right_value658 = (void*)0;
struct sNode* node_518;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sNode* _inf_value13;
struct sGCIncNode* _inf_obj_value13;
void* __right_value664 = (void*)0;
struct sNode* __result_obj__362;
void* __right_value665 = (void*)0;
struct sNode* node_520;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value14;
struct sGCDecNode* _inf_obj_value14;
void* __right_value671 = (void*)0;
struct sNode* __result_obj__365;
void* __right_value672 = (void*)0;
struct sNode* node_522;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct sNode* _inf_value15;
struct sGCDecNoFreeNode* _inf_obj_value15;
void* __right_value678 = (void*)0;
struct sNode* __result_obj__368;
void* __right_value679 = (void*)0;
struct sNode* node_524;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value16;
struct sGCDecNoFreeNode* _inf_obj_value16;
void* __right_value682 = (void*)0;
struct sNode* __result_obj__369;
void* __right_value683 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var12 = (void*)0;
struct sType* param_type_525=0;
char* param_name_526=0;
_Bool err_527=0;
void* __right_value684 = (void*)0;
struct sType* type2_528;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct sNode* _inf_value17;
struct sIsHeap* _inf_obj_value17;
void* __right_value690 = (void*)0;
struct sNode* __result_obj__372;
void* __right_value691 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* param_type_530=0;
char* param_name_531=0;
_Bool err_532=0;
void* __right_value692 = (void*)0;
struct sType* type2_533;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct sNode* _inf_value18;
struct sIsPointer* _inf_obj_value18;
void* __right_value698 = (void*)0;
struct sNode* __result_obj__375;
void* __right_value699 = (void*)0;
struct sNode* __result_obj__376;
void* __right_value700 = (void*)0;
struct sNode* __result_obj__377;
void* __right_value701 = (void*)0;
struct sNode* __result_obj__378;
void* __right_value702 = (void*)0;
struct sNode* __result_obj__379;
_Bool come_c_535;
void* __right_value703 = (void*)0;
struct sNode* node_536;
struct sNode* __result_obj__380;
void* __right_value704 = (void*)0;
struct sNode* __result_obj__381;
void* __right_value705 = (void*)0;
struct sNode* __result_obj__382;
void* __right_value706 = (void*)0;
struct sNode* __result_obj__383;
void* __right_value707 = (void*)0;
struct sNode* __result_obj__384;
void* __right_value708 = (void*)0;
struct sNode* __result_obj__385;
_Bool paren_537;
_Bool is_type_name_flag_538;
char* p_539;
int sline_540;
void* __right_value709 = (void*)0;
char* word_541;
void* __right_value710 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var14 = (void*)0;
struct sType* type_542=0;
char* name_543=0;
_Bool err_544=0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sNode* _inf_value19;
struct sSizeOfNode* _inf_obj_value19;
void* __right_value716 = (void*)0;
struct sNode* __result_obj__388;
struct sNode* exp_546;
_Bool no_comma_547;
void* __right_value717 = (void*)0;
struct sNode* __dec_obj186;
void* __right_value718 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value20;
struct sSizeOfExpNode* _inf_obj_value20;
void* __right_value724 = (void*)0;
struct sNode* __result_obj__391;
_Bool paren_549;
_Bool is_type_name_flag_550;
char* p_551;
int sline_552;
void* __right_value725 = (void*)0;
char* word_553;
void* __right_value726 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_554=0;
char* name_555=0;
_Bool err_556=0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sNode* _inf_value21;
struct sTypeOfNode* _inf_obj_value21;
void* __right_value732 = (void*)0;
struct sNode* __result_obj__394;
struct sNode* exp_558;
_Bool no_comma_559;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj192;
void* __right_value734 = (void*)0;
struct sNode* __dec_obj193;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
struct sNode* _inf_value22;
struct sTypeOfExpNode* _inf_obj_value22;
void* __right_value740 = (void*)0;
struct sNode* __result_obj__397;
_Bool paren_561;
struct sNode* exp_562;
_Bool no_comma_563;
void* __right_value741 = (void*)0;
struct sNode* __dec_obj196;
void* __right_value742 = (void*)0;
struct sNode* __dec_obj197;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct sNode* _inf_value23;
struct sDynamicTypeOf* _inf_obj_value23;
void* __right_value748 = (void*)0;
struct sNode* __result_obj__400;
_Bool paren_565;
_Bool is_type_name_flag_566;
char* p_567;
int sline_568;
void* __right_value749 = (void*)0;
char* word_569;
void* __right_value750 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* type_570=0;
char* name_571=0;
_Bool err_572=0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct sNode* _inf_value24;
struct sAlignOfNode* _inf_obj_value24;
void* __right_value756 = (void*)0;
struct sNode* __result_obj__403;
struct sNode* exp_574;
_Bool no_comma_575;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj202;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj203;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfExpNode* _inf_obj_value25;
void* __right_value764 = (void*)0;
struct sNode* __result_obj__406;
_Bool paren_577;
_Bool is_type_name_flag_578;
char* p_579;
int sline_580;
void* __right_value765 = (void*)0;
char* word_581;
void* __right_value766 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* type_582=0;
char* name_583=0;
_Bool err_584=0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfNode2* _inf_obj_value26;
void* __right_value772 = (void*)0;
struct sNode* __result_obj__409;
struct sNode* exp_586;
_Bool no_comma_587;
void* __right_value773 = (void*)0;
struct sNode* __dec_obj208;
void* __right_value774 = (void*)0;
struct sNode* __dec_obj209;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sNode* _inf_value27;
struct sAlignOfExpNode2* _inf_obj_value27;
void* __right_value780 = (void*)0;
struct sNode* __result_obj__412;
_Bool is_type_name_flag_589;
char* p_590;
int sline_591;
void* __right_value781 = (void*)0;
char* word_592;
void* __right_value782 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* type_593=0;
char* name_594=0;
_Bool err_595=0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sNode* _inf_value28;
struct sAlignAsNode* _inf_obj_value28;
void* __right_value788 = (void*)0;
struct sNode* __result_obj__415;
void* __right_value789 = (void*)0;
struct sNode* exp_597;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value29;
struct sAlignAsExpNode* _inf_obj_value29;
void* __right_value795 = (void*)0;
struct sNode* __result_obj__418;
void* __right_value796 = (void*)0;
struct sNode* __result_obj__419;
exp_546 = (void*)0;
exp_558 = (void*)0;
exp_562 = (void*)0;
exp_574 = (void*)0;
exp_586 = (void*)0;
    if(    !gComeC&&charp_operator_equals(buf,"new")) {
        multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value576=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_489=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name_490=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_491=multiple_assign_var11->v3;
        /*c*/ come_call_finalizer3(__right_value576,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_491) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1286, "struct sNode");
            _inf_obj_value3=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value578=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1286, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_489),((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sNewNode_finalize;
            _inf_value3->clone=(void*)sNewNode_clone;
            _inf_value3->compile=(void*)sNewNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sNewNode_kind;
            obj_492=(struct sNode*)come_increment_ref_count(_inf_value3);
            /*c*/ come_call_finalizer3(__right_value578,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            fun_name_500=(char*)come_increment_ref_count(__builtin_string("initialize"));
            __result_obj__337 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value596=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj_492)),(char*)come_increment_ref_count(fun_name_500),info))));
            ((obj_492) ? obj_492 = come_decrement_ref_count(obj_492, ((struct sNode*)obj_492)->finalize, ((struct sNode*)obj_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_500 = come_decrement_ref_count(fun_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_490 = come_decrement_ref_count(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value596) ? __right_value596 = come_decrement_ref_count(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__337;
            ((obj_492) ? obj_492 = come_decrement_ref_count(obj_492, ((struct sNode*)obj_492)->finalize, ((struct sNode*)obj_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (fun_name_500 = come_decrement_ref_count(fun_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_501=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "21obj.c", 1295, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
            while(            (_Bool)1) {
                word_502=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_503=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_504=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_503;
                    if(                    (_if_conditional8=(string_operator_equals(((char*)(__right_value602=exp_504->kind(exp_504->_protocol_obj))),"sWildCard"))),                    (__right_value601 = come_decrement_ref_count(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    _if_conditional8) {
                        value_node_505=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value603=xsprintf("Value"))),info));
                        (__right_value603 = come_decrement_ref_count(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        __dec_obj161=exp_504,
                        exp_504=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_505),(char*)come_increment_ref_count(word_502),info));
                        (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                        ((value_node_505) ? value_node_505 = come_decrement_ref_count(value_node_505, ((struct sNode*)value_node_505)->finalize, ((struct sNode*)value_node_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_501,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1314, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_502),(struct sNode*)come_increment_ref_count(exp_504))));
                    ((exp_504) ? exp_504 = come_decrement_ref_count(exp_504, ((struct sNode*)exp_504)->finalize, ((struct sNode*)exp_504)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else if(                *info->p==44) {
                    exp_507=(struct sNode*)come_increment_ref_count(create_load_var(word_502,info));
                    list$1tuple2$2char$phsNode$ph$ph_add(initializer_501,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "21obj.c", 1319, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(word_502),(struct sNode*)come_increment_ref_count(exp_507))));
                    ((exp_507) ? exp_507 = come_decrement_ref_count(exp_507, ((struct sNode*)exp_507)->finalize, ((struct sNode*)exp_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    err_msg(info,"invalid character(21) %c",*info->p);
                    __result_obj__339 = (void*)come_increment_ref_count(((void*)0));
                    (word_502 = come_decrement_ref_count(word_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_501,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_490 = come_decrement_ref_count(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__339;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (word_502 = come_decrement_ref_count(word_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result_obj__340 = (void*)come_increment_ref_count(((void*)0));
                    (word_502 = come_decrement_ref_count(word_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(initializer_501,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_490 = come_decrement_ref_count(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__340;
                }
                (word_502 = come_decrement_ref_count(word_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1340, "struct sNode");
            _inf_obj_value4=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value612=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1340, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_489),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_501),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sNewNode_finalize;
            _inf_value4->clone=(void*)sNewNode_clone;
            _inf_value4->compile=(void*)sNewNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sNewNode_kind;
            __result_obj__341 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value613=_inf_value4)));
            /*c*/ come_call_finalizer3(initializer_501,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_490 = come_decrement_ref_count(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value612,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value613) ? __right_value613 = come_decrement_ref_count(__right_value613, ((struct sNode*)__right_value613)->finalize, ((struct sNode*)__right_value613)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__341;
            /*c*/ come_call_finalizer3(initializer_501,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1343, "struct sNode");
            _inf_obj_value5=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(__right_value615=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "21obj.c", 1343, "struct sNewNode*")),(struct sType*)come_increment_ref_count(type_489),((void*)0),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result_obj__342 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value616=_inf_value5)));
            /*c*/ come_call_finalizer3(type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_490 = come_decrement_ref_count(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value615,sNewNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value616) ? __right_value616 = come_decrement_ref_count(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__342;
        }
        /*c*/ come_call_finalizer3(type_489,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_490 = come_decrement_ref_count(name_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"true")) {
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1347, "struct sNode");
        _inf_obj_value6=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(__right_value618=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc_v2(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1347, "struct sTrueNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sTrueNode_finalize;
        _inf_value6->clone=(void*)sTrueNode_clone;
        _inf_value6->compile=(void*)sTrueNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sTrueNode_kind;
        __result_obj__343 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value619=_inf_value6)));
        /*c*/ come_call_finalizer3(__right_value618,sTrueNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value619) ? __right_value619 = come_decrement_ref_count(__right_value619, ((struct sNode*)__right_value619)->finalize, ((struct sNode*)__right_value619)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__343) ? __result_obj__343 = come_decrement_ref_count(__result_obj__343, ((struct sNode*)__result_obj__343)->finalize, ((struct sNode*)__result_obj__343)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__343;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"false")) {
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1350, "struct sNode");
        _inf_obj_value7=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(__right_value621=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc_v2(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1350, "struct sFalseNode*")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sFalseNode_finalize;
        _inf_value7->clone=(void*)sFalseNode_clone;
        _inf_value7->compile=(void*)sFalseNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sFalseNode_kind;
        __result_obj__344 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value622=_inf_value7)));
        /*c*/ come_call_finalizer3(__right_value621,sFalseNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value622) ? __right_value622 = come_decrement_ref_count(__right_value622, ((struct sNode*)__right_value622)->finalize, ((struct sNode*)__right_value622)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__344) ? __result_obj__344 = come_decrement_ref_count(__result_obj__344, ((struct sNode*)__result_obj__344)->finalize, ((struct sNode*)__result_obj__344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__344;
    }
    else if(    !gComeC&&charp_operator_equals(buf,"delete")) {
        node_508=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1355, "struct sNode");
        _inf_obj_value8=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(__right_value625=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1355, "struct sDeleteNode*")),(struct sNode*)come_increment_ref_count(node_508),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sDeleteNode_finalize;
        _inf_value8->clone=(void*)sDeleteNode_clone;
        _inf_value8->compile=(void*)sDeleteNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sDeleteNode_kind;
        __result_obj__347 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value629=_inf_value8)));
        ((node_508) ? node_508 = come_decrement_ref_count(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value625,sDeleteNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value629) ? __right_value629 = come_decrement_ref_count(__right_value629, ((struct sNode*)__right_value629)->finalize, ((struct sNode*)__right_value629)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__347;
        ((node_508) ? node_508 = come_decrement_ref_count(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"borrow")) {
        node_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1360, "struct sNode");
        _inf_obj_value9=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(__right_value632=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1360, "struct sBorrowNode*")),(struct sNode*)come_increment_ref_count(node_510),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sBorrowNode_finalize;
        _inf_value9->clone=(void*)sBorrowNode_clone;
        _inf_value9->compile=(void*)sBorrowNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sBorrowNode_kind;
        __result_obj__350 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value636=_inf_value9)));
        ((node_510) ? node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value632,sBorrowNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value636) ? __right_value636 = come_decrement_ref_count(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__350;
        ((node_510) ? node_510 = come_decrement_ref_count(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"clone")) {
        node_512=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1365, "struct sNode");
        _inf_obj_value10=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(__right_value639=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1365, "struct sCloneNode*")),(struct sNode*)come_increment_ref_count(node_512),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sCloneNode_finalize;
        _inf_value10->clone=(void*)sCloneNode_clone;
        _inf_value10->compile=(void*)sCloneNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sCloneNode_kind;
        __result_obj__353 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value643=_inf_value10)));
        ((node_512) ? node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value639,sCloneNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value643) ? __right_value643 = come_decrement_ref_count(__right_value643, ((struct sNode*)__right_value643)->finalize, ((struct sNode*)__right_value643)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__353;
        ((node_512) ? node_512 = come_decrement_ref_count(node_512, ((struct sNode*)node_512)->finalize, ((struct sNode*)node_512)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dupe")) {
        node_514=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1370, "struct sNode");
        _inf_obj_value11=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(__right_value646=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1370, "struct sDupeNode*")),(struct sNode*)come_increment_ref_count(node_514),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDupeNode_finalize;
        _inf_value11->clone=(void*)sDupeNode_clone;
        _inf_value11->compile=(void*)sDupeNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDupeNode_kind;
        __result_obj__356 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value650=_inf_value11)));
        ((node_514) ? node_514 = come_decrement_ref_count(node_514, ((struct sNode*)node_514)->finalize, ((struct sNode*)node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value646,sDupeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value650) ? __right_value650 = come_decrement_ref_count(__right_value650, ((struct sNode*)__right_value650)->finalize, ((struct sNode*)__right_value650)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__356;
        ((node_514) ? node_514 = come_decrement_ref_count(node_514, ((struct sNode*)node_514)->finalize, ((struct sNode*)node_514)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"dummy_heap")) {
        node_516=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1375, "struct sNode");
        _inf_obj_value12=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(__right_value653=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1375, "struct sDummyHeapNode*")),(struct sNode*)come_increment_ref_count(node_516),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value12->clone=(void*)sDummyHeapNode_clone;
        _inf_value12->compile=(void*)sDummyHeapNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sDummyHeapNode_kind;
        __result_obj__359 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value657=_inf_value12)));
        ((node_516) ? node_516 = come_decrement_ref_count(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value653,sDummyHeapNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value657) ? __right_value657 = come_decrement_ref_count(__right_value657, ((struct sNode*)__right_value657)->finalize, ((struct sNode*)__right_value657)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__359) ? __result_obj__359 = come_decrement_ref_count(__result_obj__359, ((struct sNode*)__result_obj__359)->finalize, ((struct sNode*)__result_obj__359)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__359;
        ((node_516) ? node_516 = come_decrement_ref_count(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_518=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1385, "struct sNode");
        _inf_obj_value13=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(__right_value660=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1385, "struct sGCIncNode*")),(struct sNode*)come_increment_ref_count(node_518),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sGCIncNode_finalize;
        _inf_value13->clone=(void*)sGCIncNode_clone;
        _inf_value13->compile=(void*)sGCIncNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sGCIncNode_kind;
        __result_obj__362 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value664=_inf_value13)));
        ((node_518) ? node_518 = come_decrement_ref_count(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value660,sGCIncNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value664) ? __right_value664 = come_decrement_ref_count(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__362) ? __result_obj__362 = come_decrement_ref_count(__result_obj__362, ((struct sNode*)__result_obj__362)->finalize, ((struct sNode*)__result_obj__362)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__362;
        ((node_518) ? node_518 = come_decrement_ref_count(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_520=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1395, "struct sNode");
        _inf_obj_value14=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(__right_value667=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1395, "struct sGCDecNode*")),(struct sNode*)come_increment_ref_count(node_520),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sGCDecNode_finalize;
        _inf_value14->clone=(void*)sGCDecNode_clone;
        _inf_value14->compile=(void*)sGCDecNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sline_real=(void*)sNodeBase_sline_real;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sGCDecNode_kind;
        __result_obj__365 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value671=_inf_value14)));
        ((node_520) ? node_520 = come_decrement_ref_count(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value667,sGCDecNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value671) ? __right_value671 = come_decrement_ref_count(__right_value671, ((struct sNode*)__right_value671)->finalize, ((struct sNode*)__right_value671)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__365) ? __result_obj__365 = come_decrement_ref_count(__result_obj__365, ((struct sNode*)__result_obj__365)->finalize, ((struct sNode*)__result_obj__365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__365;
        ((node_520) ? node_520 = come_decrement_ref_count(node_520, ((struct sNode*)node_520)->finalize, ((struct sNode*)node_520)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_522=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1405, "struct sNode");
        _inf_obj_value15=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value674=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1405, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_522),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value15->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value15->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__368 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value678=_inf_value15)));
        ((node_522) ? node_522 = come_decrement_ref_count(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value674,sGCDecNoFreeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value678) ? __right_value678 = come_decrement_ref_count(__right_value678, ((struct sNode*)__right_value678)->finalize, ((struct sNode*)__right_value678)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__368) ? __result_obj__368 = come_decrement_ref_count(__result_obj__368, ((struct sNode*)__result_obj__368)->finalize, ((struct sNode*)__result_obj__368)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__368;
        ((node_522) ? node_522 = come_decrement_ref_count(node_522, ((struct sNode*)node_522)->finalize, ((struct sNode*)node_522)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"lock")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_524=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1415, "struct sNode");
        _inf_obj_value16=(struct sGCDecNoFreeNode*)come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value681=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1415, "struct sGCDecNoFreeNode*")),(struct sNode*)come_increment_ref_count(node_524),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value16->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value16->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCDecNoFreeNode_kind;
        __result_obj__369 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value682=_inf_value16)));
        ((node_524) ? node_524 = come_decrement_ref_count(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value681,sGCDecNoFreeNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value682) ? __right_value682 = come_decrement_ref_count(__right_value682, ((struct sNode*)__right_value682)->finalize, ((struct sNode*)__right_value682)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__369) ? __result_obj__369 = come_decrement_ref_count(__result_obj__369, ((struct sNode*)__result_obj__369)->finalize, ((struct sNode*)__result_obj__369)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__369;
        ((node_524) ? node_524 = come_decrement_ref_count(node_524, ((struct sNode*)node_524)->finalize, ((struct sNode*)node_524)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !gComeC&&charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var12=((struct tuple3$3sType$phchar$phbool$*)(__right_value683=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_525=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
        param_name_526=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        err_527=multiple_assign_var12->v3;
        /*c*/ come_call_finalizer3(__right_value683,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_527) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_528=(struct sType*)come_increment_ref_count(solve_generics(param_type_525,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1431, "struct sNode");
        _inf_obj_value17=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(__right_value686=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1431, "struct sIsHeap*")),(struct sType*)come_increment_ref_count(type2_528),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sIsHeap_finalize;
        _inf_value17->clone=(void*)sIsHeap_clone;
        _inf_value17->compile=(void*)sIsHeap_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sline_real=(void*)sNodeBase_sline_real;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sIsHeap_kind;
        __result_obj__372 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value690=_inf_value17)));
        /*c*/ come_call_finalizer3(param_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_526 = come_decrement_ref_count(param_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_528,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value686,sIsHeap_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value690) ? __right_value690 = come_decrement_ref_count(__right_value690, ((struct sNode*)__right_value690)->finalize, ((struct sNode*)__right_value690)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__372;
        /*c*/ come_call_finalizer3(param_type_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_526 = come_decrement_ref_count(param_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_528,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value691=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_530=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
        param_name_531=(char*)come_increment_ref_count(multiple_assign_var13->v2);
        err_532=multiple_assign_var13->v3;
        /*c*/ come_call_finalizer3(__right_value691,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_532) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_533=(struct sType*)come_increment_ref_count(solve_generics(param_type_530,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1447, "struct sNode");
        _inf_obj_value18=(struct sIsPointer*)come_increment_ref_count(((struct sIsPointer*)(__right_value694=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1447, "struct sIsPointer*")),(struct sType*)come_increment_ref_count(type2_533),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sIsPointer_finalize;
        _inf_value18->clone=(void*)sIsPointer_clone;
        _inf_value18->compile=(void*)sIsPointer_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sline_real=(void*)sNodeBase_sline_real;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sIsPointer_kind;
        __result_obj__375 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value698=_inf_value18)));
        /*c*/ come_call_finalizer3(param_type_530,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_531 = come_decrement_ref_count(param_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_533,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value694,sIsPointer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value698) ? __right_value698 = come_decrement_ref_count(__right_value698, ((struct sNode*)__right_value698)->finalize, ((struct sNode*)__right_value698)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__375) ? __result_obj__375 = come_decrement_ref_count(__result_obj__375, ((struct sNode*)__result_obj__375)->finalize, ((struct sNode*)__result_obj__375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__375;
        /*c*/ come_call_finalizer3(param_type_530,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_531 = come_decrement_ref_count(param_name_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_533,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result_obj__376 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value699=create_nothing_node(info))));
            ((__right_value699) ? __right_value699 = come_decrement_ref_count(__right_value699, ((struct sNode*)__right_value699)->finalize, ((struct sNode*)__right_value699)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__376) ? __result_obj__376 = come_decrement_ref_count(__result_obj__376, ((struct sNode*)__result_obj__376)->finalize, ((struct sNode*)__result_obj__376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__376;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__377 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value700=create_nothing_node(info))));
            ((__right_value700) ? __right_value700 = come_decrement_ref_count(__right_value700, ((struct sNode*)__right_value700)->finalize, ((struct sNode*)__right_value700)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__377) ? __result_obj__377 = come_decrement_ref_count(__result_obj__377, ((struct sNode*)__result_obj__377)->finalize, ((struct sNode*)__result_obj__377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__377;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__378 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value701=create_nothing_node(info))));
            ((__right_value701) ? __right_value701 = come_decrement_ref_count(__right_value701, ((struct sNode*)__right_value701)->finalize, ((struct sNode*)__right_value701)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__378) ? __result_obj__378 = come_decrement_ref_count(__result_obj__378, ((struct sNode*)__result_obj__378)->finalize, ((struct sNode*)__result_obj__378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__378;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__379 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value702=create_nothing_node(info))));
            ((__right_value702) ? __right_value702 = come_decrement_ref_count(__right_value702, ((struct sNode*)__right_value702)->finalize, ((struct sNode*)__right_value702)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__379) ? __result_obj__379 = come_decrement_ref_count(__result_obj__379, ((struct sNode*)__result_obj__379)->finalize, ((struct sNode*)__result_obj__379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__379;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_535=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_536=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info,(_Bool)0));
                gComeC=come_c_535;
                __result_obj__380 = (struct sNode*)come_increment_ref_count(node_536);
                ((node_536) ? node_536 = come_decrement_ref_count(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__380;
                ((node_536) ? node_536 = come_decrement_ref_count(node_536, ((struct sNode*)node_536)->finalize, ((struct sNode*)node_536)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                __result_obj__381 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value704=create_nothing_node(info))));
                ((__right_value704) ? __right_value704 = come_decrement_ref_count(__right_value704, ((struct sNode*)__right_value704)->finalize, ((struct sNode*)__right_value704)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__381;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result_obj__382 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value705=create_nothing_node(info))));
            ((__right_value705) ? __right_value705 = come_decrement_ref_count(__right_value705, ((struct sNode*)__right_value705)->finalize, ((struct sNode*)__right_value705)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__382;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result_obj__383 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value706=create_nothing_node(info))));
            ((__right_value706) ? __right_value706 = come_decrement_ref_count(__right_value706, ((struct sNode*)__right_value706)->finalize, ((struct sNode*)__right_value706)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__383;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result_obj__384 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value707=create_nothing_node(info))));
            ((__right_value707) ? __right_value707 = come_decrement_ref_count(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__384;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result_obj__385 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value708=create_nothing_node(info))));
            ((__right_value708) ? __right_value708 = come_decrement_ref_count(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__385) ? __result_obj__385 = come_decrement_ref_count(__result_obj__385, ((struct sNode*)__result_obj__385)->finalize, ((struct sNode*)__result_obj__385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__385;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_537=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_537=(_Bool)1;
        }
        is_type_name_flag_538=(_Bool)0;
        {
            p_539=info->p;
            sline_540=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_541=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_541,info)) {
                    is_type_name_flag_538=(_Bool)1;
                }
                (word_541 = come_decrement_ref_count(word_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_539;
            info->sline=sline_540;
        }
        if(        is_type_name_flag_538) {
            multiple_assign_var14=((struct tuple3$3sType$phchar$phbool$*)(__right_value710=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_542=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
            name_543=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            err_544=multiple_assign_var14->v3;
            /*c*/ come_call_finalizer3(__right_value710,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_544) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_537&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1571, "struct sNode");
            _inf_obj_value19=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(__right_value712=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1571, "struct sSizeOfNode*")),(struct sType*)come_increment_ref_count(type_542),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sSizeOfNode_finalize;
            _inf_value19->clone=(void*)sSizeOfNode_clone;
            _inf_value19->compile=(void*)sSizeOfNode_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sSizeOfNode_kind;
            __result_obj__388 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value716=_inf_value19)));
            /*c*/ come_call_finalizer3(type_542,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_543 = come_decrement_ref_count(name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value712,sSizeOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value716) ? __right_value716 = come_decrement_ref_count(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__388) ? __result_obj__388 = come_decrement_ref_count(__result_obj__388, ((struct sNode*)__result_obj__388)->finalize, ((struct sNode*)__result_obj__388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__388;
            /*c*/ come_call_finalizer3(type_542,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_543 = come_decrement_ref_count(name_543, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_537) {
                no_comma_547=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj186=exp_546,
                exp_546=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_547;
            }
            else {
                __dec_obj187=exp_546,
                exp_546=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            if(            paren_537&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1592, "struct sNode");
            _inf_obj_value20=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value720=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1592, "struct sSizeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_546),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value20->clone=(void*)sSizeOfExpNode_clone;
            _inf_value20->compile=(void*)sSizeOfExpNode_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sSizeOfExpNode_kind;
            __result_obj__391 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value724=_inf_value20)));
            ((exp_546) ? exp_546 = come_decrement_ref_count(exp_546, ((struct sNode*)exp_546)->finalize, ((struct sNode*)exp_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value720,sSizeOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value724) ? __right_value724 = come_decrement_ref_count(__right_value724, ((struct sNode*)__right_value724)->finalize, ((struct sNode*)__right_value724)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__391) ? __result_obj__391 = come_decrement_ref_count(__result_obj__391, ((struct sNode*)__result_obj__391)->finalize, ((struct sNode*)__result_obj__391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__391;
            ((exp_546) ? exp_546 = come_decrement_ref_count(exp_546, ((struct sNode*)exp_546)->finalize, ((struct sNode*)exp_546)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_549=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_549=(_Bool)1;
        }
        is_type_name_flag_550=(_Bool)0;
        {
            p_551=info->p;
            sline_552=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_553=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_553,info)) {
                    is_type_name_flag_550=(_Bool)1;
                }
                (word_553 = come_decrement_ref_count(word_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_551;
            info->sline=sline_552;
        }
        if(        is_type_name_flag_550) {
            multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value726=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_554=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
            name_555=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            err_556=multiple_assign_var15->v3;
            /*c*/ come_call_finalizer3(__right_value726,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_556) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_549&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1637, "struct sNode");
            _inf_obj_value21=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(__right_value728=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1637, "struct sTypeOfNode*")),(struct sType*)come_increment_ref_count(type_554),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sTypeOfNode_finalize;
            _inf_value21->clone=(void*)sTypeOfNode_clone;
            _inf_value21->compile=(void*)sTypeOfNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sline_real=(void*)sNodeBase_sline_real;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sTypeOfNode_kind;
            __result_obj__394 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value732=_inf_value21)));
            /*c*/ come_call_finalizer3(type_554,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_555 = come_decrement_ref_count(name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value728,sTypeOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value732) ? __right_value732 = come_decrement_ref_count(__right_value732, ((struct sNode*)__right_value732)->finalize, ((struct sNode*)__right_value732)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__394) ? __result_obj__394 = come_decrement_ref_count(__result_obj__394, ((struct sNode*)__result_obj__394)->finalize, ((struct sNode*)__result_obj__394)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__394;
            /*c*/ come_call_finalizer3(type_554,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_555 = come_decrement_ref_count(name_555, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_549) {
                no_comma_559=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj192=exp_558,
                exp_558=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj192 ? __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_559;
            }
            else {
                __dec_obj193=exp_558,
                exp_558=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj193 ? __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            if(            paren_549&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1658, "struct sNode");
            _inf_obj_value22=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value736=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1658, "struct sTypeOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_558),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value22->clone=(void*)sTypeOfExpNode_clone;
            _inf_value22->compile=(void*)sTypeOfExpNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sline_real=(void*)sNodeBase_sline_real;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sTypeOfExpNode_kind;
            __result_obj__397 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value740=_inf_value22)));
            ((exp_558) ? exp_558 = come_decrement_ref_count(exp_558, ((struct sNode*)exp_558)->finalize, ((struct sNode*)exp_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value736,sTypeOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value740) ? __right_value740 = come_decrement_ref_count(__right_value740, ((struct sNode*)__right_value740)->finalize, ((struct sNode*)__right_value740)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__397) ? __result_obj__397 = come_decrement_ref_count(__result_obj__397, ((struct sNode*)__result_obj__397)->finalize, ((struct sNode*)__result_obj__397)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__397;
            ((exp_558) ? exp_558 = come_decrement_ref_count(exp_558, ((struct sNode*)exp_558)->finalize, ((struct sNode*)exp_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"dynamic_typeof")) {
        paren_561=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_561=(_Bool)1;
        }
        if(        !paren_561) {
            no_comma_563=info->no_comma;
            info->no_comma=(_Bool)1;
            __dec_obj196=exp_562,
            exp_562=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            (__dec_obj196 ? __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->no_comma=no_comma_563;
        }
        else {
            __dec_obj197=exp_562,
            exp_562=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        if(        paren_561&&*info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1689, "struct sNode");
        _inf_obj_value23=(struct sDynamicTypeOf*)come_increment_ref_count(((struct sDynamicTypeOf*)(__right_value744=sDynamicTypeOf_initialize((struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "21obj.c", 1689, "struct sDynamicTypeOf*")),(struct sNode*)come_increment_ref_count(exp_562),info))));
        _inf_value23->_protocol_obj=_inf_obj_value23;
        _inf_value23->finalize=(void*)sDynamicTypeOf_finalize;
        _inf_value23->clone=(void*)sDynamicTypeOf_clone;
        _inf_value23->compile=(void*)sDynamicTypeOf_compile;
        _inf_value23->sline=(void*)sNodeBase_sline;
        _inf_value23->sline_real=(void*)sNodeBase_sline_real;
        _inf_value23->sname=(void*)sNodeBase_sname;
        _inf_value23->terminated=(void*)sNodeBase_terminated;
        _inf_value23->kind=(void*)sDynamicTypeOf_kind;
        __result_obj__400 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value748=_inf_value23)));
        ((exp_562) ? exp_562 = come_decrement_ref_count(exp_562, ((struct sNode*)exp_562)->finalize, ((struct sNode*)exp_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value744,sDynamicTypeOf_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value748) ? __right_value748 = come_decrement_ref_count(__right_value748, ((struct sNode*)__right_value748)->finalize, ((struct sNode*)__right_value748)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__400;
        ((exp_562) ? exp_562 = come_decrement_ref_count(exp_562, ((struct sNode*)exp_562)->finalize, ((struct sNode*)exp_562)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_565=(_Bool)0;
        if(        *info->p==40) {
            paren_565=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_566=(_Bool)0;
        {
            p_567=info->p;
            sline_568=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_569=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_569,info)) {
                    is_type_name_flag_566=(_Bool)1;
                }
                (word_569 = come_decrement_ref_count(word_569, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_567;
            info->sline=sline_568;
        }
        if(        is_type_name_flag_566) {
            multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value750=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_570=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
            name_571=(char*)come_increment_ref_count(multiple_assign_var16->v2);
            err_572=multiple_assign_var16->v3;
            /*c*/ come_call_finalizer3(__right_value750,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_572) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_565&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1730, "struct sNode");
            _inf_obj_value24=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(__right_value752=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1730, "struct sAlignOfNode*")),(struct sType*)come_increment_ref_count(type_570),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sAlignOfNode_finalize;
            _inf_value24->clone=(void*)sAlignOfNode_clone;
            _inf_value24->compile=(void*)sAlignOfNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sAlignOfNode_kind;
            __result_obj__403 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value756=_inf_value24)));
            /*c*/ come_call_finalizer3(type_570,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_571 = come_decrement_ref_count(name_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value752,sAlignOfNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value756) ? __right_value756 = come_decrement_ref_count(__right_value756, ((struct sNode*)__right_value756)->finalize, ((struct sNode*)__right_value756)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__403;
            /*c*/ come_call_finalizer3(type_570,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_571 = come_decrement_ref_count(name_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_565) {
                no_comma_575=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj202=exp_574,
                exp_574=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj202 ? __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_575;
            }
            else {
                __dec_obj203=exp_574,
                exp_574=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj203 ? __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1744, "struct sNode");
            _inf_obj_value25=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value760=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1744, "struct sAlignOfExpNode*")),(struct sNode*)come_increment_ref_count(exp_574),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value25->clone=(void*)sAlignOfExpNode_clone;
            _inf_value25->compile=(void*)sAlignOfExpNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfExpNode_kind;
            __result_obj__406 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value764=_inf_value25)));
            ((exp_574) ? exp_574 = come_decrement_ref_count(exp_574, ((struct sNode*)exp_574)->finalize, ((struct sNode*)exp_574)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value760,sAlignOfExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value764) ? __right_value764 = come_decrement_ref_count(__right_value764, ((struct sNode*)__right_value764)->finalize, ((struct sNode*)__right_value764)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__406) ? __result_obj__406 = come_decrement_ref_count(__result_obj__406, ((struct sNode*)__result_obj__406)->finalize, ((struct sNode*)__result_obj__406)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__406;
            ((exp_574) ? exp_574 = come_decrement_ref_count(exp_574, ((struct sNode*)exp_574)->finalize, ((struct sNode*)exp_574)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_577=(_Bool)0;
        if(        *info->p==40) {
            paren_577=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_578=(_Bool)0;
        {
            p_579=info->p;
            sline_580=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_581=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_581,info)) {
                    is_type_name_flag_578=(_Bool)1;
                }
                (word_581 = come_decrement_ref_count(word_581, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_579;
            info->sline=sline_580;
        }
        if(        is_type_name_flag_578) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value766=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_582=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            name_583=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_584=multiple_assign_var17->v3;
            /*c*/ come_call_finalizer3(__right_value766,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_584) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_577&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1785, "struct sNode");
            _inf_obj_value26=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(__right_value768=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1785, "struct sAlignOfNode2*")),(struct sType*)come_increment_ref_count(type_582),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value26->clone=(void*)sAlignOfNode2_clone;
            _inf_value26->compile=(void*)sAlignOfNode2_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sline_real=(void*)sNodeBase_sline_real;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfNode2_kind;
            __result_obj__409 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value772=_inf_value26)));
            /*c*/ come_call_finalizer3(type_582,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_583 = come_decrement_ref_count(name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value768,sAlignOfNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value772) ? __right_value772 = come_decrement_ref_count(__right_value772, ((struct sNode*)__right_value772)->finalize, ((struct sNode*)__right_value772)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__409) ? __result_obj__409 = come_decrement_ref_count(__result_obj__409, ((struct sNode*)__result_obj__409)->finalize, ((struct sNode*)__result_obj__409)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__409;
            /*c*/ come_call_finalizer3(type_582,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_583 = come_decrement_ref_count(name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            !paren_577) {
                no_comma_587=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj208=exp_586,
                exp_586=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                (__dec_obj208 ? __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                info->no_comma=no_comma_587;
            }
            else {
                __dec_obj209=exp_586,
                exp_586=(struct sNode*)come_increment_ref_count(expression_v13(info));
                (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1799, "struct sNode");
            _inf_obj_value27=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value776=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1799, "struct sAlignOfExpNode2*")),(struct sNode*)come_increment_ref_count(exp_586),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value27->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value27->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sline_real=(void*)sNodeBase_sline_real;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfExpNode2_kind;
            __result_obj__412 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value780=_inf_value27)));
            ((exp_586) ? exp_586 = come_decrement_ref_count(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value776,sAlignOfExpNode2_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value780) ? __right_value780 = come_decrement_ref_count(__right_value780, ((struct sNode*)__right_value780)->finalize, ((struct sNode*)__right_value780)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__412) ? __result_obj__412 = come_decrement_ref_count(__result_obj__412, ((struct sNode*)__result_obj__412)->finalize, ((struct sNode*)__result_obj__412)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__412;
            ((exp_586) ? exp_586 = come_decrement_ref_count(exp_586, ((struct sNode*)exp_586)->finalize, ((struct sNode*)exp_586)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_589=(_Bool)0;
        {
            p_590=info->p;
            sline_591=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_592=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_592,info)) {
                    is_type_name_flag_589=(_Bool)1;
                }
                (word_592 = come_decrement_ref_count(word_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            info->p=p_590;
            info->sline=sline_591;
        }
        if(        is_type_name_flag_589) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value782=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_593=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            name_594=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_595=multiple_assign_var18->v3;
            /*c*/ come_call_finalizer3(__right_value782,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_595) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1832, "struct sNode");
            _inf_obj_value28=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(__right_value784=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1832, "struct sAlignAsNode*")),(struct sType*)come_increment_ref_count(type_593),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignAsNode_finalize;
            _inf_value28->clone=(void*)sAlignAsNode_clone;
            _inf_value28->compile=(void*)sAlignAsNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignAsNode_kind;
            __result_obj__415 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value788=_inf_value28)));
            /*c*/ come_call_finalizer3(type_593,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_594 = come_decrement_ref_count(name_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value784,sAlignAsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value788) ? __right_value788 = come_decrement_ref_count(__right_value788, ((struct sNode*)__right_value788)->finalize, ((struct sNode*)__right_value788)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__415) ? __result_obj__415 = come_decrement_ref_count(__result_obj__415, ((struct sNode*)__result_obj__415)->finalize, ((struct sNode*)__result_obj__415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__415;
            /*c*/ come_call_finalizer3(type_593,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_594 = come_decrement_ref_count(name_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            exp_597=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1839, "struct sNode");
            _inf_obj_value29=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value791=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1839, "struct sAlignAsExpNode*")),(struct sNode*)come_increment_ref_count(exp_597),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value29->clone=(void*)sAlignAsExpNode_clone;
            _inf_value29->compile=(void*)sAlignAsExpNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sAlignAsExpNode_kind;
            __result_obj__418 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value795=_inf_value29)));
            ((exp_597) ? exp_597 = come_decrement_ref_count(exp_597, ((struct sNode*)exp_597)->finalize, ((struct sNode*)exp_597)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(__right_value791,sAlignAsExpNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value795) ? __right_value795 = come_decrement_ref_count(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__418;
            ((exp_597) ? exp_597 = come_decrement_ref_count(exp_597, ((struct sNode*)exp_597)->finalize, ((struct sNode*)exp_597)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    __result_obj__419 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value796=string_node_v20(buf,head,head_sline,info))));
    ((__right_value796) ? __right_value796 = come_decrement_ref_count(__right_value796, ((struct sNode*)__right_value796)->finalize, ((struct sNode*)__right_value796)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__419) ? __result_obj__419 = come_decrement_ref_count(__result_obj__419, ((struct sNode*)__result_obj__419)->finalize, ((struct sNode*)__result_obj__419)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__419;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
struct sNewNode* __result_obj__329;
void* __right_value579 = (void*)0;
struct sNewNode* result_493;
void* __right_value580 = (void*)0;
char* __dec_obj153;
void* __right_value581 = (void*)0;
struct sType* __dec_obj154;
void* __right_value592 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj160;
struct sNewNode* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__329 = (void*)0;
        return __result_obj__329;
    }
    result_493=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc_v2(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode*"));
    if(    self!=((void*)0)) {
        result_493->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_493->sname,
        result_493->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_493->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj154=result_493->type,
        result_493->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj154,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj160=result_493->initializer,
        result_493->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj160,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__336 = result_493;
    /*c*/ come_call_finalizer3(result_493,sNewNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__336;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__330;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_494;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_495;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__335;
    if(    self==((void*)0)) {
        __result_obj__330 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__330,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__330;
    }
    result_494=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_495=self->head;
    while(    it_495!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_494,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_495->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_494,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_495->item)));
        }
        it_495=it_495->next;
    }
    __result_obj__335 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_494);
    /*c*/ come_call_finalizer3(result_494,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__335,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__331;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__331 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__331,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value584 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_496;
struct tuple2$2char$phsNode$ph* __dec_obj155;
void* __right_value585 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_497;
struct tuple2$2char$phsNode$ph* __dec_obj156;
void* __right_value586 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_498;
struct tuple2$2char$phsNode$ph* __dec_obj157;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__332;
    if(    self->len==0) {
        litem_496=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value584=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_496->prev=((void*)0);
        litem_496->next=((void*)0);
        __dec_obj155=litem_496->item,
        litem_496->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj155,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_496;
        self->head=litem_496;
    }
    else if(    self->len==1) {
        litem_497=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value585=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_497->prev=self->head;
        litem_497->next=((void*)0);
        __dec_obj156=litem_497->item,
        litem_497->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj156,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_497;
        self->head->next=litem_497;
    }
    else {
        litem_498=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value586=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_498->prev=self->tail;
        litem_498->next=((void*)0);
        __dec_obj157=litem_498->item,
        litem_498->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj157,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_498;
        self->tail=litem_498;
    }
    self->len++;
    __result_obj__332 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__333;
void* __right_value587 = (void*)0;
struct tuple2$2char$phsNode$ph* result_499;
void* __right_value588 = (void*)0;
char* __dec_obj158;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj159;
struct tuple2$2char$phsNode$ph* __result_obj__334;
    if(    self==(void*)0) {
        __result_obj__333 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__333,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__333;
    }
    result_499=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj158=result_499->v1,
        result_499->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj159=result_499->v2,
        result_499->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__334 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_499);
    /*c*/ come_call_finalizer3(result_499,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__334,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_506;
    result_506=0;
    result_506+=int_get_hash_key(((int)self->v1));
    result_506+=int_get_hash_key(((int)self->v2));
    return result_506;
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

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2){
char* __dec_obj162;
struct sNode* __dec_obj163;
struct tuple2$2char$phsNode$ph* __result_obj__338;
    __dec_obj162=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj163=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__338 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__338,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
struct sDeleteNode* __result_obj__345;
void* __right_value626 = (void*)0;
struct sDeleteNode* result_509;
void* __right_value627 = (void*)0;
char* __dec_obj164;
void* __right_value628 = (void*)0;
struct sNode* __dec_obj165;
struct sDeleteNode* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = (void*)0;
        return __result_obj__345;
    }
    result_509=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc_v2(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode*"));
    if(    self!=((void*)0)) {
        result_509->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_509->sname,
        result_509->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDeleteNode_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_509->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj165=result_509->node,
        result_509->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__346 = result_509;
    /*c*/ come_call_finalizer3(result_509,sDeleteNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__346;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
struct sBorrowNode* __result_obj__348;
void* __right_value633 = (void*)0;
struct sBorrowNode* result_511;
void* __right_value634 = (void*)0;
char* __dec_obj166;
void* __right_value635 = (void*)0;
struct sNode* __dec_obj167;
struct sBorrowNode* __result_obj__349;
    if(    self==(void*)0) {
        __result_obj__348 = (void*)0;
        return __result_obj__348;
    }
    result_511=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc_v2(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode*"));
    if(    self!=((void*)0)) {
        result_511->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj166=result_511->sname,
        result_511->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sBorrowNode_clone", 5, "char*"));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_511->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj167=result_511->node,
        result_511->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj167 ? __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__349 = result_511;
    /*c*/ come_call_finalizer3(result_511,sBorrowNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__349;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
struct sCloneNode* __result_obj__351;
void* __right_value640 = (void*)0;
struct sCloneNode* result_513;
void* __right_value641 = (void*)0;
char* __dec_obj168;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj169;
struct sCloneNode* __result_obj__352;
    if(    self==(void*)0) {
        __result_obj__351 = (void*)0;
        return __result_obj__351;
    }
    result_513=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc_v2(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode*"));
    if(    self!=((void*)0)) {
        result_513->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_513->sname,
        result_513->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCloneNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_513->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj169=result_513->node,
        result_513->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj169 ? __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__352 = result_513;
    /*c*/ come_call_finalizer3(result_513,sCloneNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__352;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
struct sDupeNode* __result_obj__354;
void* __right_value647 = (void*)0;
struct sDupeNode* result_515;
void* __right_value648 = (void*)0;
char* __dec_obj170;
void* __right_value649 = (void*)0;
struct sNode* __dec_obj171;
struct sDupeNode* __result_obj__355;
    if(    self==(void*)0) {
        __result_obj__354 = (void*)0;
        return __result_obj__354;
    }
    result_515=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc_v2(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode*"));
    if(    self!=((void*)0)) {
        result_515->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj170=result_515->sname,
        result_515->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDupeNode_clone", 5, "char*"));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_515->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj171=result_515->node,
        result_515->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__355 = result_515;
    /*c*/ come_call_finalizer3(result_515,sDupeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__355;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
struct sDummyHeapNode* __result_obj__357;
void* __right_value654 = (void*)0;
struct sDummyHeapNode* result_517;
void* __right_value655 = (void*)0;
char* __dec_obj172;
void* __right_value656 = (void*)0;
struct sNode* __dec_obj173;
struct sDummyHeapNode* __result_obj__358;
    if(    self==(void*)0) {
        __result_obj__357 = (void*)0;
        return __result_obj__357;
    }
    result_517=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc_v2(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode*"));
    if(    self!=((void*)0)) {
        result_517->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj172=result_517->sname,
        result_517->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDummyHeapNode_clone", 5, "char*"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_517->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj173=result_517->node,
        result_517->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj173 ? __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__358 = result_517;
    /*c*/ come_call_finalizer3(result_517,sDummyHeapNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__358;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
struct sGCIncNode* __result_obj__360;
void* __right_value661 = (void*)0;
struct sGCIncNode* result_519;
void* __right_value662 = (void*)0;
char* __dec_obj174;
void* __right_value663 = (void*)0;
struct sNode* __dec_obj175;
struct sGCIncNode* __result_obj__361;
    if(    self==(void*)0) {
        __result_obj__360 = (void*)0;
        return __result_obj__360;
    }
    result_519=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc_v2(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode*"));
    if(    self!=((void*)0)) {
        result_519->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj174=result_519->sname,
        result_519->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCIncNode_clone", 5, "char*"));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_519->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj175=result_519->node,
        result_519->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__361 = result_519;
    /*c*/ come_call_finalizer3(result_519,sGCIncNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__361;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
struct sGCDecNode* __result_obj__363;
void* __right_value668 = (void*)0;
struct sGCDecNode* result_521;
void* __right_value669 = (void*)0;
char* __dec_obj176;
void* __right_value670 = (void*)0;
struct sNode* __dec_obj177;
struct sGCDecNode* __result_obj__364;
    if(    self==(void*)0) {
        __result_obj__363 = (void*)0;
        return __result_obj__363;
    }
    result_521=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc_v2(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode*"));
    if(    self!=((void*)0)) {
        result_521->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result_521->sname,
        result_521->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNode_clone", 5, "char*"));
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_521->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj177=result_521->node,
        result_521->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__364 = result_521;
    /*c*/ come_call_finalizer3(result_521,sGCDecNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__364;
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
struct sGCDecNoFreeNode* __result_obj__366;
void* __right_value675 = (void*)0;
struct sGCDecNoFreeNode* result_523;
void* __right_value676 = (void*)0;
char* __dec_obj178;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj179;
struct sGCDecNoFreeNode* __result_obj__367;
    if(    self==(void*)0) {
        __result_obj__366 = (void*)0;
        return __result_obj__366;
    }
    result_523=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc_v2(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "struct sGCDecNoFreeNode*"));
    if(    self!=((void*)0)) {
        result_523->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj178=result_523->sname,
        result_523->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sGCDecNoFreeNode_clone", 5, "char*"));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_523->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj179=result_523->node,
        result_523->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__367 = result_523;
    /*c*/ come_call_finalizer3(result_523,sGCDecNoFreeNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__367;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
struct sIsHeap* __result_obj__370;
void* __right_value687 = (void*)0;
struct sIsHeap* result_529;
void* __right_value688 = (void*)0;
char* __dec_obj180;
void* __right_value689 = (void*)0;
struct sType* __dec_obj181;
struct sIsHeap* __result_obj__371;
    if(    self==(void*)0) {
        __result_obj__370 = (void*)0;
        return __result_obj__370;
    }
    result_529=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc_v2(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap*"));
    if(    self!=((void*)0)) {
        result_529->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_529->sname,
        result_529->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsHeap_clone", 5, "char*"));
        __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_529->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj181=result_529->type,
        result_529->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj181,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__371 = result_529;
    /*c*/ come_call_finalizer3(result_529,sIsHeap_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__371;
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
struct sIsPointer* __result_obj__373;
void* __right_value695 = (void*)0;
struct sIsPointer* result_534;
void* __right_value696 = (void*)0;
char* __dec_obj182;
void* __right_value697 = (void*)0;
struct sType* __dec_obj183;
struct sIsPointer* __result_obj__374;
    if(    self==(void*)0) {
        __result_obj__373 = (void*)0;
        return __result_obj__373;
    }
    result_534=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc_v2(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "struct sIsPointer*"));
    if(    self!=((void*)0)) {
        result_534->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj182=result_534->sname,
        result_534->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIsPointer_clone", 5, "char*"));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_534->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj183=result_534->type,
        result_534->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__374 = result_534;
    /*c*/ come_call_finalizer3(result_534,sIsPointer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__374;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
struct sSizeOfNode* __result_obj__386;
void* __right_value713 = (void*)0;
struct sSizeOfNode* result_545;
void* __right_value714 = (void*)0;
char* __dec_obj184;
void* __right_value715 = (void*)0;
struct sType* __dec_obj185;
struct sSizeOfNode* __result_obj__387;
    if(    self==(void*)0) {
        __result_obj__386 = (void*)0;
        return __result_obj__386;
    }
    result_545=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc_v2(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode*"));
    if(    self!=((void*)0)) {
        result_545->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj184=result_545->sname,
        result_545->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfNode_clone", 5, "char*"));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_545->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj185=result_545->type,
        result_545->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj185,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__387 = result_545;
    /*c*/ come_call_finalizer3(result_545,sSizeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__387;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
struct sSizeOfExpNode* __result_obj__389;
void* __right_value721 = (void*)0;
struct sSizeOfExpNode* result_548;
void* __right_value722 = (void*)0;
char* __dec_obj188;
void* __right_value723 = (void*)0;
struct sNode* __dec_obj189;
struct sSizeOfExpNode* __result_obj__390;
    if(    self==(void*)0) {
        __result_obj__389 = (void*)0;
        return __result_obj__389;
    }
    result_548=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc_v2(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode*"));
    if(    self!=((void*)0)) {
        result_548->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj188=result_548->sname,
        result_548->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSizeOfExpNode_clone", 5, "char*"));
        __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_548->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj189=result_548->exp,
        result_548->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__390 = result_548;
    /*c*/ come_call_finalizer3(result_548,sSizeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__390;
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
struct sTypeOfNode* __result_obj__392;
void* __right_value729 = (void*)0;
struct sTypeOfNode* result_557;
void* __right_value730 = (void*)0;
char* __dec_obj190;
void* __right_value731 = (void*)0;
struct sType* __dec_obj191;
struct sTypeOfNode* __result_obj__393;
    if(    self==(void*)0) {
        __result_obj__392 = (void*)0;
        return __result_obj__392;
    }
    result_557=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc_v2(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode*"));
    if(    self!=((void*)0)) {
        result_557->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj190=result_557->sname,
        result_557->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfNode_clone", 5, "char*"));
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_557->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj191=result_557->type,
        result_557->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj191,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__393 = result_557;
    /*c*/ come_call_finalizer3(result_557,sTypeOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__393;
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
struct sTypeOfExpNode* __result_obj__395;
void* __right_value737 = (void*)0;
struct sTypeOfExpNode* result_560;
void* __right_value738 = (void*)0;
char* __dec_obj194;
void* __right_value739 = (void*)0;
struct sNode* __dec_obj195;
struct sTypeOfExpNode* __result_obj__396;
    if(    self==(void*)0) {
        __result_obj__395 = (void*)0;
        return __result_obj__395;
    }
    result_560=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc_v2(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode*"));
    if(    self!=((void*)0)) {
        result_560->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj194=result_560->sname,
        result_560->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sTypeOfExpNode_clone", 5, "char*"));
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_560->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj195=result_560->exp,
        result_560->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj195 ? __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__396 = result_560;
    /*c*/ come_call_finalizer3(result_560,sTypeOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__396;
}

static struct sDynamicTypeOf* sDynamicTypeOf_clone(struct sDynamicTypeOf* self){
struct sDynamicTypeOf* __result_obj__398;
void* __right_value745 = (void*)0;
struct sDynamicTypeOf* result_564;
void* __right_value746 = (void*)0;
char* __dec_obj198;
void* __right_value747 = (void*)0;
struct sNode* __dec_obj199;
struct sDynamicTypeOf* __result_obj__399;
    if(    self==(void*)0) {
        __result_obj__398 = (void*)0;
        return __result_obj__398;
    }
    result_564=(struct sDynamicTypeOf*)come_increment_ref_count((struct sDynamicTypeOf*)come_calloc_v2(1, sizeof(struct sDynamicTypeOf)*(1), "sDynamicTypeOf_clone", 3, "struct sDynamicTypeOf*"));
    if(    self!=((void*)0)) {
        result_564->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=result_564->sname,
        result_564->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDynamicTypeOf_clone", 5, "char*"));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_564->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj199=result_564->exp,
        result_564->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj199 ? __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__399 = result_564;
    /*c*/ come_call_finalizer3(result_564,sDynamicTypeOf_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__399;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
struct sAlignOfNode* __result_obj__401;
void* __right_value753 = (void*)0;
struct sAlignOfNode* result_573;
void* __right_value754 = (void*)0;
char* __dec_obj200;
void* __right_value755 = (void*)0;
struct sType* __dec_obj201;
struct sAlignOfNode* __result_obj__402;
    if(    self==(void*)0) {
        __result_obj__401 = (void*)0;
        return __result_obj__401;
    }
    result_573=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc_v2(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode*"));
    if(    self!=((void*)0)) {
        result_573->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_573->sname,
        result_573->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode_clone", 5, "char*"));
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_573->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj201=result_573->type,
        result_573->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj201,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__402 = result_573;
    /*c*/ come_call_finalizer3(result_573,sAlignOfNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__402;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
struct sAlignOfExpNode* __result_obj__404;
void* __right_value761 = (void*)0;
struct sAlignOfExpNode* result_576;
void* __right_value762 = (void*)0;
char* __dec_obj204;
void* __right_value763 = (void*)0;
struct sNode* __dec_obj205;
struct sAlignOfExpNode* __result_obj__405;
    if(    self==(void*)0) {
        __result_obj__404 = (void*)0;
        return __result_obj__404;
    }
    result_576=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode*"));
    if(    self!=((void*)0)) {
        result_576->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj204=result_576->sname,
        result_576->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode_clone", 5, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_576->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj205=result_576->exp,
        result_576->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj205 ? __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__405 = result_576;
    /*c*/ come_call_finalizer3(result_576,sAlignOfExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__405;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
struct sAlignOfNode2* __result_obj__407;
void* __right_value769 = (void*)0;
struct sAlignOfNode2* result_585;
void* __right_value770 = (void*)0;
char* __dec_obj206;
void* __right_value771 = (void*)0;
struct sType* __dec_obj207;
struct sAlignOfNode2* __result_obj__408;
    if(    self==(void*)0) {
        __result_obj__407 = (void*)0;
        return __result_obj__407;
    }
    result_585=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc_v2(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2*"));
    if(    self!=((void*)0)) {
        result_585->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj206=result_585->sname,
        result_585->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfNode2_clone", 5, "char*"));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_585->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj207=result_585->type,
        result_585->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj207,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__408 = result_585;
    /*c*/ come_call_finalizer3(result_585,sAlignOfNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__408;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
struct sAlignOfExpNode2* __result_obj__410;
void* __right_value777 = (void*)0;
struct sAlignOfExpNode2* result_588;
void* __right_value778 = (void*)0;
char* __dec_obj210;
void* __right_value779 = (void*)0;
struct sNode* __dec_obj211;
struct sAlignOfExpNode2* __result_obj__411;
    if(    self==(void*)0) {
        __result_obj__410 = (void*)0;
        return __result_obj__410;
    }
    result_588=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc_v2(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2*"));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj210=result_588->sname,
        result_588->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignOfExpNode2_clone", 5, "char*"));
        __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj211=result_588->exp,
        result_588->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__411 = result_588;
    /*c*/ come_call_finalizer3(result_588,sAlignOfExpNode2_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__411;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
struct sAlignAsNode* __result_obj__413;
void* __right_value785 = (void*)0;
struct sAlignAsNode* result_596;
void* __right_value786 = (void*)0;
char* __dec_obj212;
void* __right_value787 = (void*)0;
struct sType* __dec_obj213;
struct sAlignAsNode* __result_obj__414;
    if(    self==(void*)0) {
        __result_obj__413 = (void*)0;
        return __result_obj__413;
    }
    result_596=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc_v2(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode*"));
    if(    self!=((void*)0)) {
        result_596->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_596->sname,
        result_596->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsNode_clone", 5, "char*"));
        __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_596->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj213=result_596->type,
        result_596->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj213,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__414 = result_596;
    /*c*/ come_call_finalizer3(result_596,sAlignAsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__414;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
struct sAlignAsExpNode* __result_obj__416;
void* __right_value792 = (void*)0;
struct sAlignAsExpNode* result_598;
void* __right_value793 = (void*)0;
char* __dec_obj214;
void* __right_value794 = (void*)0;
struct sNode* __dec_obj215;
struct sAlignAsExpNode* __result_obj__417;
    if(    self==(void*)0) {
        __result_obj__416 = (void*)0;
        return __result_obj__416;
    }
    result_598=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc_v2(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode*"));
    if(    self!=((void*)0)) {
        result_598->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj214=result_598->sname,
        result_598->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sAlignAsExpNode_clone", 5, "char*"));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_598->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj215=result_598->exp,
        result_598->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj215 ? __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__417 = result_598;
    /*c*/ come_call_finalizer3(result_598,sAlignAsExpNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__417;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value797 = (void*)0;
struct sNode* __result_obj__420;
void* __right_value798 = (void*)0;
struct sNode* __result_obj__421;
void* __right_value799 = (void*)0;
struct sNode* __result_obj__422;
_Bool come_c_599;
void* __right_value800 = (void*)0;
struct sNode* __result_obj__423;
void* __right_value801 = (void*)0;
struct sNode* __result_obj__424;
    if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result_obj__420 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value797=create_nothing_node(info))));
            ((__right_value797) ? __right_value797 = come_decrement_ref_count(__right_value797, ((struct sNode*)__right_value797)->finalize, ((struct sNode*)__right_value797)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__420) ? __result_obj__420 = come_decrement_ref_count(__result_obj__420, ((struct sNode*)__result_obj__420)->finalize, ((struct sNode*)__result_obj__420)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__420;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result_obj__421 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value798=create_nothing_node(info))));
            ((__right_value798) ? __right_value798 = come_decrement_ref_count(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__421) ? __result_obj__421 = come_decrement_ref_count(__result_obj__421, ((struct sNode*)__result_obj__421)->finalize, ((struct sNode*)__result_obj__421)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__421;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result_obj__422 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value799=create_nothing_node(info))));
            ((__right_value799) ? __right_value799 = come_decrement_ref_count(__right_value799, ((struct sNode*)__right_value799)->finalize, ((struct sNode*)__right_value799)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__422) ? __result_obj__422 = come_decrement_ref_count(__result_obj__422, ((struct sNode*)__result_obj__422)->finalize, ((struct sNode*)__result_obj__422)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__422;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_599=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_599;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __result_obj__423 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value800=create_nothing_node(info))));
        ((__right_value800) ? __right_value800 = come_decrement_ref_count(__right_value800, ((struct sNode*)__right_value800)->finalize, ((struct sNode*)__right_value800)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__423) ? __result_obj__423 = come_decrement_ref_count(__result_obj__423, ((struct sNode*)__result_obj__423)->finalize, ((struct sNode*)__result_obj__423)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__423;
    }
    __result_obj__424 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value801=top_level_v93(buf,head,head_sline,info))));
    ((__right_value801) ? __right_value801 = come_decrement_ref_count(__right_value801, ((struct sNode*)__right_value801)->finalize, ((struct sNode*)__right_value801)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__424) ? __result_obj__424 = come_decrement_ref_count(__result_obj__424, ((struct sNode*)__result_obj__424)->finalize, ((struct sNode*)__result_obj__424)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__424;
}

struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info){
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct sNode* _inf_value30;
struct sImplementsNode* _inf_obj_value30;
void* __right_value808 = (void*)0;
struct sNode* __result_obj__427;
    _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1923, "struct sNode");
    _inf_obj_value30=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value803=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1923, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type),info))));
    _inf_value30->_protocol_obj=_inf_obj_value30;
    _inf_value30->finalize=(void*)sImplementsNode_finalize;
    _inf_value30->clone=(void*)sImplementsNode_clone;
    _inf_value30->compile=(void*)sImplementsNode_compile;
    _inf_value30->sline=(void*)sNodeBase_sline;
    _inf_value30->sline_real=(void*)sNodeBase_sline_real;
    _inf_value30->sname=(void*)sNodeBase_sname;
    _inf_value30->terminated=(void*)sNodeBase_terminated;
    _inf_value30->kind=(void*)sImplementsNode_kind;
    __result_obj__427 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value808=_inf_value30)));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(inf_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value803,sImplementsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value808) ? __right_value808 = come_decrement_ref_count(__right_value808, ((struct sNode*)__right_value808)->finalize, ((struct sNode*)__right_value808)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__427) ? __result_obj__427 = come_decrement_ref_count(__result_obj__427, ((struct sNode*)__result_obj__427)->finalize, ((struct sNode*)__result_obj__427)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__427;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
struct sImplementsNode* __result_obj__425;
void* __right_value804 = (void*)0;
struct sImplementsNode* result_600;
void* __right_value805 = (void*)0;
char* __dec_obj216;
void* __right_value806 = (void*)0;
struct sNode* __dec_obj217;
void* __right_value807 = (void*)0;
struct sType* __dec_obj218;
struct sImplementsNode* __result_obj__426;
    if(    self==(void*)0) {
        __result_obj__425 = (void*)0;
        return __result_obj__425;
    }
    result_600=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode*"));
    if(    self!=((void*)0)) {
        result_600->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj216=result_600->sname,
        result_600->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sImplementsNode_clone", 5, "char*"));
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_600->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj217=result_600->obj_exp,
        result_600->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        (__dec_obj217 ? __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj218=result_600->inf_type,
        result_600->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        /*b*/ come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__426 = result_600;
    /*c*/ come_call_finalizer3(result_600,sImplementsNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__426;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __right_value809 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* type3_601=0;
char* name2_602=0;
_Bool err_603=0;
void* __right_value810 = (void*)0;
struct sType* inf_type_604;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct sNode* _inf_value31;
struct sImplementsNode* _inf_obj_value31;
void* __right_value813 = (void*)0;
struct sNode* __result_obj__428;
void* __right_value814 = (void*)0;
struct sNode* __result_obj__429;
    if(    !gComeC&&parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value809=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_601=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
        name2_602=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        err_603=multiple_assign_var19->v3;
        /*c*/ come_call_finalizer3(__right_value809,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_603) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_604=(struct sType*)come_increment_ref_count(sType_clone(type3_601));
        _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "21obj.c", 1940, "struct sNode");
        _inf_obj_value31=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(__right_value812=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc_v2(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1940, "struct sImplementsNode*")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_604),info))));
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sImplementsNode_finalize;
        _inf_value31->clone=(void*)sImplementsNode_clone;
        _inf_value31->compile=(void*)sImplementsNode_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sline_real=(void*)sNodeBase_sline_real;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sImplementsNode_kind;
        __result_obj__428 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value813=_inf_value31)));
        /*c*/ come_call_finalizer3(type3_601,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name2_602 = come_decrement_ref_count(name2_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(inf_type_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value812,sImplementsNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value813) ? __right_value813 = come_decrement_ref_count(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__428) ? __result_obj__428 = come_decrement_ref_count(__result_obj__428, ((struct sNode*)__result_obj__428)->finalize, ((struct sNode*)__result_obj__428)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__428;
        /*c*/ come_call_finalizer3(type3_601,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name2_602 = come_decrement_ref_count(name2_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(inf_type_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(        xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result_obj__429 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value814=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value814) ? __right_value814 = come_decrement_ref_count(__right_value814, ((struct sNode*)__right_value814)->finalize, ((struct sNode*)__right_value814)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__429) ? __result_obj__429 = come_decrement_ref_count(__result_obj__429, ((struct sNode*)__result_obj__429)->finalize, ((struct sNode*)__result_obj__429)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__429;
}

