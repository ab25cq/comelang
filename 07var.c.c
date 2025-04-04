/// previous struct definition ///
struct __locale_struct;

struct tm;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

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
    char* mTextBlock;
    char* mTextBlockSName;
    int mTextBlockSline;
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
    _Bool mGenericsFun;
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

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
    char* c_value_without_cast_object_value;
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
    struct map$2char$phsFun$ph* uniq_funcs;
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
    _Bool comma;
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
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
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
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun, char* text_block, char* generics_sname, int generics_sline);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* compile_uniq_function(struct sFun* fun, struct sInfo* info);
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
char* skip_block(struct sInfo* info, _Bool return_self_at_last);
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
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self);
static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self);
static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
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
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item);
static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self);
static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self);
static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self);
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
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sStructInitializer_finalize(struct sStructInitializer* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* parse_struct_initializer(struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self);
static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item);
static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self);
static _Bool tuple3$3sType$phchar$phsNode$ph_equals(struct tuple3$3sType$phchar$phsNode$ph* left, struct tuple3$3sType$phchar$phsNode$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3);
static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self);
static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self);
static _Bool tuple3$3sType$phchar$phvoid$p_equals(struct tuple3$3sType$phchar$phvoid$p* left, struct tuple3$3sType$phchar$phvoid$p* right);
static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_initialize(struct tuple3$3sType$phchar$phvoid$p* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void tuple2$2char$phsType$ph_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_clone(struct tuple2$2char$phsType$ph* self);
static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, char* attribute, _Bool comma){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
char* __dec_obj1;
void* __right_value40 = (void*)0;
struct sType* __dec_obj26;
struct sNode* __dec_obj27;
void* __right_value41 = (void*)0;
struct list$1char$ph* __dec_obj28;
void* __right_value53 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj35;
char* __dec_obj36;
struct sStoreNode* __result_obj__23;
    ((struct sNodeBase*)(__right_value0=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value0,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj1=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj26=self->type,
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj27=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    ((void*)0);
    __dec_obj28=self->multiple_assign,
    self->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(multiple_assign));
    /*b*/ come_call_finalizer3(__dec_obj28,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    ((void*)0);
    __dec_obj35=self->multiple_declare,
    self->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(multiple_declare));
    /*b*/ come_call_finalizer3(__dec_obj35,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj36=self->attribute,
    self->attribute=(char*)come_increment_ref_count(attribute);
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->comma=comma;
    __result_obj__23 = (struct sStoreNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__23,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__23;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __right_value54 = (void*)0;
char* __result_obj__24;
    __result_obj__24 = (char*)come_increment_ref_count(((char*)(__right_value54=__builtin_string("sStoreNode"))));
    (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__24 = come_decrement_ref_count(__result_obj__24, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__24;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct sVar* var__39;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
struct sType* type_60;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* o2_saved_61;
struct tuple3$3sType$phchar$phsNode$ph* it_64;
struct tuple3$3sType$phchar$phsNode$ph* multiple_assign_var1 = (void*)0;
struct sType* type_67=0;
char* var_name_68=0;
struct sNode* right_value_69=0;
void* __right_value60 = (void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
void* __right_value65 = (void*)0;
struct sType* left_type_70;
_Bool Value_71;
_Bool __result_obj__40;
void* __right_value66 = (void*)0;
struct CVALUE* come_value_72;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
struct buffer* buf_73;
_Bool Value_74;
_Bool __result_obj__41;
void* __right_value72 = (void*)0;
struct CVALUE* right_value_75;
struct sType* right_type_76;
int i_77;
struct list$1char$ph* o2_saved_78;
char* it_81;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct sVar* var__84;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
void* __right_value77 = (void*)0;
struct sType* right_type2_85;
void* __right_value78 = (void*)0;
void* __right_value79 = (void*)0;
char* multiple_var_name_93;
void* __right_value80 = (void*)0;
void* __right_value81 = (void*)0;
char* __dec_obj37;
struct list$1char$ph* o2_saved_94;
char* it_95;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
struct sType* right_type2_96;
struct sVar* var__97;
void* __right_value84 = (void*)0;
struct sType* var_type_98;
void* __right_value85 = (void*)0;
struct sType* left_type_99;
void* __right_value86 = (void*)0;
void* __right_value87 = (void*)0;
struct CVALUE* right_value2_100;
void* __right_value88 = (void*)0;
char* __dec_obj38;
void* __right_value89 = (void*)0;
struct sType* __dec_obj39;
void* __right_value90 = (void*)0;
void* __right_value91 = (void*)0;
struct CVALUE* come_value_101;
void* __right_value92 = (void*)0;
void* __right_value93 = (void*)0;
void* __right_value94 = (void*)0;
char* __dec_obj40;
void* __right_value95 = (void*)0;
char* __dec_obj41;
void* __right_value96 = (void*)0;
struct sType* __dec_obj42;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
_Bool _if_conditional1;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value102 = (void*)0;
char* __dec_obj43;
void* __right_value106 = (void*)0;
void* __right_value107 = (void*)0;
struct sVar* var__106;
void* __right_value108 = (void*)0;
void* __right_value109 = (void*)0;
void* __right_value110 = (void*)0;
struct sType* type_107;
void* __right_value111 = (void*)0;
void* __right_value112 = (void*)0;
struct sType* left_type_108;
void* __right_value113 = (void*)0;
void* __right_value114 = (void*)0;
struct list$1sNode$ph* o2_saved_109;
struct sNode* it_112;
_Bool Value_115;
void* __right_value115 = (void*)0;
struct CVALUE* come_value_116;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct CVALUE* come_value_117;
void* __right_value120 = (void*)0;
char* __dec_obj47;
void* __right_value121 = (void*)0;
struct sType* __dec_obj48;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct sVar* var__121;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct sType* type_122;
void* __right_value130 = (void*)0;
_Bool Value_123;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
_Bool array_initializer_124;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
_Bool struct_initializer_125;
void* __right_value135 = (void*)0;
void* __right_value136 = (void*)0;
_Bool new_channel_126;
void* __right_value137 = (void*)0;
struct CVALUE* right_value_127;
struct sType* right_type_128;
void* __right_value138 = (void*)0;
void* __right_value139 = (void*)0;
struct sType* var_type_129;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct sType* left_type_130;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sVar* var__131;
void* __right_value144 = (void*)0;
void* __right_value145 = (void*)0;
void* __right_value146 = (void*)0;
struct CVALUE* come_value_132;
void* __right_value147 = (void*)0;
char* __dec_obj52;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct sVar* var__133;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
void* __right_value152 = (void*)0;
struct CVALUE* come_value_134;
void* __right_value153 = (void*)0;
char* __dec_obj53;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct CVALUE* come_value_135;
void* __right_value159 = (void*)0;
char* __dec_obj54;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
struct CVALUE* come_value_136;
void* __right_value165 = (void*)0;
char* __dec_obj55;
void* __right_value166 = (void*)0;
struct sType* __dec_obj56;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct CVALUE* come_value_137;
void* __right_value170 = (void*)0;
char* __dec_obj57;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct sType* __dec_obj58;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct CVALUE* come_value_138;
void* __right_value179 = (void*)0;
char* __dec_obj59;
void* __right_value180 = (void*)0;
struct sType* __dec_obj60;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct CVALUE* come_value_139;
void* __right_value186 = (void*)0;
char* __dec_obj61;
void* __right_value187 = (void*)0;
struct sType* __dec_obj62;
_Bool Value_140;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
_Bool new_channel_141;
void* __right_value190 = (void*)0;
struct CVALUE* right_value_142;
struct sType* right_type_143;
struct sClass* current_stack_frame_struct_144;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
_Bool _if_conditional2;
struct sVar* parent_var_145;
struct sType* left_type_146;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
char* c_value_147;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct CVALUE* come_value_148;
void* __right_value198 = (void*)0;
char* __dec_obj63;
void* __right_value199 = (void*)0;
char* __dec_obj64;
void* __right_value200 = (void*)0;
struct sType* __dec_obj65;
_Bool __result_obj__60;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* c_value_149;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value206 = (void*)0;
char* __dec_obj66;
void* __right_value207 = (void*)0;
char* __dec_obj67;
void* __right_value208 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__61;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct CVALUE* come_value_151;
void* __right_value213 = (void*)0;
char* __dec_obj69;
void* __right_value214 = (void*)0;
char* __dec_obj70;
void* __right_value215 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__62;
struct sVar* var__152;
void* __right_value216 = (void*)0;
struct sType* __dec_obj72;
void* __right_value217 = (void*)0;
struct sType* left_type_153;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct CVALUE* come_value_154;
void* __right_value222 = (void*)0;
char* __dec_obj73;
void* __right_value223 = (void*)0;
struct sType* __dec_obj74;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct CVALUE* come_value_155;
void* __right_value228 = (void*)0;
char* __dec_obj75;
void* __right_value229 = (void*)0;
struct sType* __dec_obj76;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct CVALUE* come_value_156;
void* __right_value234 = (void*)0;
char* __dec_obj77;
void* __right_value235 = (void*)0;
struct sType* __dec_obj78;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct CVALUE* come_value_157;
void* __right_value238 = (void*)0;
char* __dec_obj79;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sType* __dec_obj80;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct CVALUE* come_value_158;
void* __right_value246 = (void*)0;
char* __dec_obj81;
void* __right_value247 = (void*)0;
struct sType* __dec_obj82;
    if(    self->multiple_declare) {
        var__39=((struct sVar*)(__right_value56=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value55=__builtin_string(self->name))),((void*)0))));
        (__right_value55 = come_decrement_ref_count(__right_value55, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value56,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__39) {
            if(            var__39->mType->mHeap) {
                free_object(((struct sType*)(__right_value57=sType_clone(var__39->mType))),var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value57,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value58=__builtin_string(self->name))));
            (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
        }
        type_60=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        for(        o2_saved_61=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((self->multiple_declare)),it_64=list$1tuple3$3sType$phchar$phsNode$ph$ph_begin((o2_saved_61));        !list$1tuple3$3sType$phchar$phsNode$ph$ph_end((o2_saved_61));        it_64=list$1tuple3$3sType$phchar$phsNode$ph$ph_next((o2_saved_61))        ){
            multiple_assign_var1=it_64;
            type_67=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_68=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_69=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            var__39=((struct sVar*)(__right_value61=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value60=__builtin_string(var_name_68))),((void*)0))));
            (__right_value60 = come_decrement_ref_count(__right_value60, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value61,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            var__39) {
                if(                var__39->mType->mHeap) {
                    free_object(((struct sType*)(__right_value62=sType_clone(var__39->mType))),var__39->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    /*c*/ come_call_finalizer3(__right_value62,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value63=__builtin_string(var_name_68))));
                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            add_variable_to_table(var_name_68,(struct sType*)come_increment_ref_count(sType_clone(type_67)),info,(_Bool)0,self->comma);
            var__39=get_variable_from_table(info->lv_table,var_name_68);
            if(            var__39==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable",it_64);
            }
            left_type_70=(struct sType*)come_increment_ref_count(sType_clone(var__39->mType));
            if(            right_value_69) {
                Value_71=node_compile(right_value_69,info);
                if(                !Value_71) {
                    __result_obj__40 = (_Bool)0;
                    /*c*/ come_call_finalizer3(type_67,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(left_type_70,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_61,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_60,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__40;
                }
                else {
                }
                come_value_72=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"%s=%s;\n",((char*)(__right_value67=make_define_var(left_type_70,var__39->mCValueName,(_Bool)0,info))),come_value_72->c_value);
                (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_72,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__39->mCValueName,((char*)(__right_value68=make_type_name_string(left_type_70,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value69=make_define_var(left_type_70,var__39->mCValueName,(_Bool)0,info))));
                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_67,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_68 = come_decrement_ref_count(var_name_68, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_value_69) ? right_value_69 = come_decrement_ref_count(right_value_69, ((struct sNode*)right_value_69)->finalize, ((struct sNode*)right_value_69)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_type_70,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_61,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_60,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->multiple_assign) {
        buf_73=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 80, "struct buffer*"))));
        Value_74=node_compile(self->right_value,info);
        if(        !Value_74) {
            __result_obj__41 = (_Bool)0;
            /*c*/ come_call_finalizer3(buf_73,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__41;
        }
        else {
        }
        right_value_75=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_76=right_value_75->type;
        if(        right_type_76->mNoSolvedGenericsType) {
            right_type_76=right_type_76->mNoSolvedGenericsType;
        }
        i_77=0;
        for(        o2_saved_78=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_81=list$1char$ph_begin((o2_saved_78));        !list$1char$ph_end((o2_saved_78));        it_81=list$1char$ph_next((o2_saved_78))        ){
            if(            i_77<list$1sType$ph_length(right_type_76->mGenericsTypes)) {
                var__84=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value73=__builtin_string(it_81))),((void*)0)));
                (__right_value73 = come_decrement_ref_count(__right_value73, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                var__84) {
                    if(                    var__84->mType->mHeap) {
                        free_object(((struct sType*)(__right_value75=sType_clone(var__84->mType))),var__84->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value75,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value76=__builtin_string(it_81))));
                    (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                right_type2_85=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(right_type_76->mGenericsTypes,i_77));
                add_variable_to_table(it_81,(struct sType*)come_increment_ref_count(sType_clone(right_type2_85)),info,(_Bool)0,self->comma);
                /*c*/ come_call_finalizer3(var__84,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_type2_85,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            i_77++;
        }
        /*c*/ come_call_finalizer3(o2_saved_78,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        static int num_multiple_var_92=0;
        multiple_var_name_93=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_92));
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value80=make_define_var(right_value_75->type,multiple_var_name_93,(_Bool)0,info))));
        (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        info->prohibits_output_last_code) {
            buffer_append_format(buf_73,"%s=%s",multiple_var_name_93,right_value_75->c_value);
        }
        else if(        info->comma_instead_of_semicolon) {
            add_come_code(info,"%s=%s,\n",multiple_var_name_93,right_value_75->c_value);
        }
        else {
            add_come_code(info,"%s=%s;\n",multiple_var_name_93,right_value_75->c_value);
        }
        __dec_obj37=right_value_75->c_value,
        right_value_75->c_value=(char*)come_increment_ref_count((char*)come_memdup(multiple_var_name_93, "07var.c", 128, "char*"));
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        i_77=0;
        for(        o2_saved_94=(struct list$1char$ph*)come_increment_ref_count((self->multiple_assign)),it_95=list$1char$ph_begin((o2_saved_94));        !list$1char$ph_end((o2_saved_94));        it_95=list$1char$ph_next((o2_saved_94))        ){
            if(            i_77<list$1sType$ph_length(right_type_76->mGenericsTypes)) {
                right_type2_96=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value82=list$1sType$ph_operator_load_element(right_type_76->mGenericsTypes,i_77)))));
                /*c*/ come_call_finalizer3(__right_value82,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                var__97=get_variable_from_table(info->lv_table,it_95);
                var_type_98=(struct sType*)come_increment_ref_count(sType_clone(var__97->mType));
                var_type_98->mStatic=(_Bool)0;
                left_type_99=(struct sType*)come_increment_ref_count(sType_clone(var__97->mType));
                right_value2_100=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 142, "struct CVALUE*"))));
                __dec_obj38=right_value2_100->c_value,
                right_value2_100->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_75->c_value,i_77+1));
                __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj39=right_value2_100->type,
                right_value2_100->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_96));
                /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                right_value2_100->var=((void*)0);
                come_value_101=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 148, "struct CVALUE*"))));
                check_assign_type(((char*)(__right_value93=xsprintf("\%s is assining to}",((char*)(__right_value92=string_to_string(self->name)))))),left_type_99,right_type2_96,come_value_101,(_Bool)0,(_Bool)1,(_Bool)1,info);
                (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                right_type2_96->mHeap&&left_type_99->mHeap&&left_type_99->mPointerNum>0&&right_type2_96->mPointerNum>0) {
                    std_move(left_type_99,right_type2_96,right_value2_100,info,(_Bool)0);
                    __dec_obj40=come_value_101->c_value,
                    come_value_101->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__97->mCValueName,right_value2_100->c_value));
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj41=come_value_101->c_value,
                    come_value_101->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__97->mCValueName,right_value2_100->c_value));
                    __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj42=come_value_101->type,
                come_value_101->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_99));
                /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_101->var=var__97;
                add_come_code_at_function_head(info,"%s=0;\n",((char*)(__right_value97=make_define_var(left_type_99,var__97->mCValueName,(_Bool)0,info))));
                (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                info->prohibits_output_last_code) {
                    buffer_append_format(buf_73,"%s,\n",come_value_101->c_value);
                }
                else if(                info->comma_instead_of_semicolon) {
                    add_come_code(info,"%s,\n",come_value_101->c_value);
                }
                else {
                    add_come_code(info,"%s;\n",come_value_101->c_value);
                }
                /*c*/ come_call_finalizer3(right_type2_96,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(var_type_98,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_99,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value2_100,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_value_101,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            i_77++;
        }
        /*c*/ come_call_finalizer3(o2_saved_94,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        (_if_conditional1=(string_operator_not_equals(((char*)(__right_value99=buffer_to_string(buf_73))),""))),        (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            come_value_102=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 180, "struct CVALUE*"))));
            __dec_obj43=come_value_102->c_value,
            come_value_102->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_73));
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
            /*c*/ come_call_finalizer3(come_value_102,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(buf_73,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_75,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (multiple_var_name_93 = come_decrement_ref_count(multiple_var_name_93, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    self->right_value==((void*)0)) {
        var__106=((struct sVar*)(__right_value107=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value106=__builtin_string(self->name))),((void*)0))));
        (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value107,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__106) {
            if(            var__106->mType->mHeap) {
                free_object(((struct sType*)(__right_value108=sType_clone(var__106->mType))),var__106->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value108,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value109=__builtin_string(self->name))));
            (__right_value109 = come_decrement_ref_count(__right_value109, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
        }
        type_107=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_107)),info,(_Bool)0,self->comma);
        var__106=get_variable_from_table(info->lv_table,self->name);
        if(        var__106==((void*)0)) {
            var__106=get_variable_from_table(info->gv_table,self->name);
            if(            var__106==((void*)0)) {
                err_msg(info,"var not found(%s)(Y) at definition of variable",self->name);
            }
        }
        left_type_108=(struct sType*)come_increment_ref_count(sType_clone(var__106->mType));
        if(        left_type_108->mChannel) {
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__106->mCValueName);
        }
        else if(        list$1sNode$ph_length(left_type_108->mArrayNum)>0) {
            add_come_code(info,"%s;\n",((char*)(__right_value113=make_define_var(left_type_108,var__106->mCValueName,(_Bool)0,info))));
            (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__106->mCValueName,((char*)(__right_value114=make_type_name_string(left_type_108,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value114 = come_decrement_ref_count(__right_value114, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            for(            o2_saved_109=(struct list$1sNode$ph*)come_increment_ref_count((left_type_108->mArrayNum)),it_112=list$1sNode$ph_begin((o2_saved_109));            !list$1sNode$ph_end((o2_saved_109));            it_112=list$1sNode$ph_next((o2_saved_109))            ){
                Value_115=node_compile(it_112,info);
                if(                !Value_115) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                else {
                }
                come_value_116=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                add_come_code(info,"*(%s)",come_value_116->c_value);
                /*c*/ come_call_finalizer3(come_value_116,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_109,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,");\n");
        }
        else {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value116=make_define_var(left_type_108,var__106->mCValueName,(_Bool)0,info))));
            (__right_value116 = come_decrement_ref_count(__right_value116, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_108->mPointerNum>0) {
                add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__106->mCValueName);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__106->mCValueName,((char*)(__right_value117=make_type_name_string(left_type_108,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        !info->m5stack_cpp) {
            come_value_117=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 262, "struct CVALUE*"))));
            __dec_obj47=come_value_117->c_value,
            come_value_117->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__106->mCValueName));
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj48=come_value_117->type,
            come_value_117->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_108));
            /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_117->var=var__106;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
            /*c*/ come_call_finalizer3(come_value_117,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        if(        !left_type_108->mClass->mNumber&&left_type_108->mPointerNum==0) {
            var__106->mType->mAllocaValue=(_Bool)1;
            if(            var__106->mType->mNoSolvedGenericsType) {
                var__106->mType->mNoSolvedGenericsType->mAllocaValue=(_Bool)1;
            }
        }
        /*c*/ come_call_finalizer3(type_107,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_108,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    self->alloc) {
        var__121=((struct sVar*)(__right_value126=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value125=__builtin_string(self->name))),((void*)0))));
        (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value126,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__121) {
            if(            var__121->mType->mHeap) {
                free_object(((struct sType*)(__right_value127=sType_clone(var__121->mType))),var__121->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value127,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            map$2char$phsVar$ph_remove(info->lv_table->mVars,((char*)(__right_value128=__builtin_string(self->name))));
            (__right_value128 = come_decrement_ref_count(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        self->type==((void*)0)) {
        }
        else {
            type_122=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_122)),info,(_Bool)0,self->comma);
            /*c*/ come_call_finalizer3(type_122,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        Value_123=node_compile(self->right_value,info);
        if(        !Value_123) {
            return (_Bool)0;
        }
        else {
        }
        array_initializer_124=string_operator_equals(((char*)(__right_value132=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
        (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        struct_initializer_125=string_operator_equals(((char*)(__right_value134=self->right_value->kind(self->right_value->_protocol_obj))),"sStructInitializer");
        (__right_value133 = come_decrement_ref_count(__right_value133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value134 = come_decrement_ref_count(__right_value134, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        new_channel_126=string_operator_equals(((char*)(__right_value136=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value135 = come_decrement_ref_count(__right_value135, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_127=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_128=right_value_127->type;
        if(        self->type==((void*)0)) {
            add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_128)),info,(_Bool)0,self->comma);
        }
        else {
        }
        var__121=get_variable_from_table(info->lv_table,self->name);
        var_type_129=(struct sType*)come_increment_ref_count(sType_clone(var__121->mType));
        var_type_129->mStatic=(_Bool)0;
        if(        !array_initializer_124&&!struct_initializer_125&&!var__121->mType->mStatic&&!var_type_129->mConstant&&list$1sNode$ph_length(var_type_129->mArrayNum)==0) {
            if(            var_type_129->mClass->mNumber) {
            }
            else if(            (var_type_129->mClass->mStruct||var_type_129->mClass->mUnion||var_type_129->mClass->mEnum)||var_type_129->mPointerNum>0) {
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__121->mCValueName,((char*)(__right_value140=make_type_name_string(var_type_129,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                (__right_value140 = come_decrement_ref_count(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        left_type_130=(struct sType*)come_increment_ref_count(sType_clone(var__121->mType));
        if(        array_initializer_124) {
            var__131=((struct sVar*)(__right_value143=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value142=__builtin_string(self->name))),((void*)0))));
            (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value143,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value144=make_define_var(var__131->mType,var__131->mCValueName,(_Bool)0,info))),right_value_127->c_value);
            (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_132=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 341, "struct CVALUE*"))));
            __dec_obj52=come_value_132->c_value,
            come_value_132->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_132,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        struct_initializer_125) {
            var__133=((struct sVar*)(__right_value149=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value148=__builtin_string(self->name))),((void*)0))));
            (__right_value148 = come_decrement_ref_count(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value149,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            add_come_code(info,"%s=%s;\n",((char*)(__right_value150=make_define_var(var__133->mType,var__133->mCValueName,(_Bool)0,info))),right_value_127->c_value);
            (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_134=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 358, "struct CVALUE*"))));
            __dec_obj53=come_value_134->c_value,
            come_value_134->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_134,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        var__121->mType->mStatic||var__121->mType->mConstant) {
            check_assign_type(((char*)(__right_value155=xsprintf("\%s is assining to",((char*)(__right_value154=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value154 = come_decrement_ref_count(__right_value154, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code(info,"%s=%s;\n",((char*)(__right_value156=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,info))),right_value_127->c_value);
            (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_135=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 376, "struct CVALUE*"))));
            __dec_obj54=come_value_135->c_value,
            come_value_135->c_value=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
            transpiler_clear_last_code(info);
            /*c*/ come_call_finalizer3(come_value_135,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_128->mHeap&&left_type_130->mHeap&&left_type_130->mPointerNum>0&&right_type_128->mPointerNum>0) {
            check_assign_type(((char*)(__right_value161=xsprintf("\%s is assining to",((char*)(__right_value160=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value160 = come_decrement_ref_count(__right_value160, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            std_move(left_type_130,right_type_128,right_value_127,info,(_Bool)0);
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value162=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,info))));
            (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_136=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 397, "struct CVALUE*"))));
            __dec_obj55=come_value_136->c_value,
            come_value_136->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__121->mCValueName,right_value_127->c_value));
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj56=come_value_136->type,
            come_value_136->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_130));
            /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_136->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_136));
            add_come_last_code(info,"%s",come_value_136->c_value);
            /*c*/ come_call_finalizer3(come_value_136,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_130->mChannel&&new_channel_126) {
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value167=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,info))));
            (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head2(info,"memset(%s, 0, sizeof(int)*2);\n",var__121->mCValueName);
            come_value_137=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 411, "struct CVALUE*"))));
            __dec_obj57=come_value_137->c_value,
            come_value_137->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__121->mCValueName));
            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj58=come_value_137->type,
            come_value_137->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 413, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_137->type->mPointerNum=1;
            come_value_137->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_137));
            add_come_last_code(info,"%s",come_value_137->c_value);
            /*c*/ come_call_finalizer3(come_value_137,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_130->mPointerNum>0&&left_type_130->mHeap&&string_operator_equals(right_type_128->mClass->mName,"void")&&right_type_128->mPointerNum>0) {
            check_assign_type(((char*)(__right_value175=xsprintf("\%s is assining to",((char*)(__right_value174=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value176=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,info))));
            (__right_value176 = come_decrement_ref_count(__right_value176, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_138=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 427, "struct CVALUE*"))));
            __dec_obj59=come_value_138->c_value,
            come_value_138->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__121->mCValueName,right_value_127->c_value));
            __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj60=come_value_138->type,
            come_value_138->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_130));
            /*b*/ come_call_finalizer3(__dec_obj60,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_138->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
            add_come_last_code(info,"%s",come_value_138->c_value);
            /*c*/ come_call_finalizer3(come_value_138,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value182=xsprintf("\%s is assining to",((char*)(__right_value181=string_to_string(self->name)))))),left_type_130,right_type_128,right_value_127,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value182 = come_decrement_ref_count(__right_value182, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            right_type_128->mHeap&&left_type_130->mHeap&&left_type_130->mPointerNum>0&&right_type_128->mPointerNum>0) {
                std_move(left_type_130,right_type_128,right_value_127,info,(_Bool)0);
            }
            if(            left_type_130->mHeap&&!right_value_127->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
            }
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value183=make_define_var(left_type_130,var__121->mCValueName,(_Bool)0,info))));
            (__right_value183 = come_decrement_ref_count(__right_value183, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_139=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 458, "struct CVALUE*"))));
            __dec_obj61=come_value_139->c_value,
            come_value_139->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__121->mCValueName,right_value_127->c_value));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj62=come_value_139->type,
            come_value_139->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_130));
            /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_139->var=var__121;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
            add_come_last_code(info,"%s",come_value_139->c_value);
            /*c*/ come_call_finalizer3(come_value_139,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_127,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(var_type_129,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_130,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        Value_140=node_compile(self->right_value,info);
        if(        !Value_140) {
            return (_Bool)0;
        }
        else {
        }
        new_channel_141=string_operator_equals(((char*)(__right_value189=self->right_value->kind(self->right_value->_protocol_obj))),"sNewChannel");
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        right_value_142=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        right_type_143=right_value_142->type;
        current_stack_frame_struct_144=info->current_stack_frame_struct;
        if(        (_if_conditional2=(current_stack_frame_struct_144&&((struct sVar*)(__right_value192=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value191=__builtin_string(self->name))),((void*)0))))==((void*)0))),        (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value192,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            parent_var_145=get_variable_from_table(info->lv_table->mParent,self->name);
            if(            parent_var_145!=((void*)0)) {
                if(                string_operator_not_equals(parent_var_145->mFunName,info->come_fun->mName)) {
                    left_type_146=parent_var_145->mType;
                    if(                    left_type_146->mPointerNum>0&&right_type_143->mPointerNum>0&&right_type_143->mHeap&&left_type_146->mHeap) {
                        check_assign_type(((char*)(__right_value194=xsprintf("\%s is assigning to",((char*)(__right_value193=string_to_string(self->name)))))),left_type_146,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        c_value_147=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_145->mCValueName));
                        decrement_ref_count_object(parent_var_145->mType,c_value_147,info,(_Bool)0,(_Bool)0);
                        std_move(left_type_146,right_type_143,right_value_142,info,(_Bool)0);
                        come_value_148=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 496, "struct CVALUE*"))));
                        if(                        parent_var_145->mType->mOriginIsArray) {
                            __dec_obj63=come_value_148->c_value,
                            come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj64=come_value_148->c_value,
                            come_value_148->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj65=come_value_148->type,
                        come_value_148->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_146));
                        /*b*/ come_call_finalizer3(__dec_obj65,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_148->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_148->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
                        __result_obj__60 = (_Bool)1;
                        (c_value_147 = come_decrement_ref_count(c_value_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_148,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_142,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__60;
                        (c_value_147 = come_decrement_ref_count(c_value_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_148,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else if(                    left_type_146->mPointerNum>0&&right_type_143->mPointerNum>0&&string_operator_equals(right_type_143->mClass->mName,"void")&&left_type_146->mHeap) {
                        check_assign_type(((char*)(__right_value202=xsprintf("\%s is assigning to",((char*)(__right_value201=string_to_string(self->name)))))),left_type_146,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        c_value_149=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_145->mCValueName));
                        decrement_ref_count_object(parent_var_145->mType,c_value_149,info,(_Bool)0,(_Bool)0);
                        come_value_150=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 520, "struct CVALUE*"))));
                        if(                        parent_var_145->mType->mOriginIsArray) {
                            __dec_obj66=come_value_150->c_value,
                            come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj67=come_value_150->c_value,
                            come_value_150->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj68=come_value_150->type,
                        come_value_150->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_146));
                        /*b*/ come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_150->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_150->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_150));
                        __result_obj__61 = (_Bool)1;
                        (c_value_149 = come_decrement_ref_count(c_value_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_150,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_142,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__61;
                        (c_value_149 = come_decrement_ref_count(c_value_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_150,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        check_assign_type(((char*)(__right_value210=xsprintf("\%s is assigning to",((char*)(__right_value209=string_to_string(self->name)))))),left_type_146,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
                        (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        if(                        left_type_146->mHeap&&!right_value_142->type->mHeap) {
                            err_msg(info,"require right value as heap object(%s)",self->name);
                        }
                        come_value_151=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 544, "struct CVALUE*"))));
                        if(                        parent_var_145->mType->mOriginIsArray) {
                            __dec_obj69=come_value_151->c_value,
                            come_value_151->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        else {
                            __dec_obj70=come_value_151->c_value,
                            come_value_151->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_145->mCValueName,right_value_142->c_value));
                            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                        __dec_obj71=come_value_151->type,
                        come_value_151->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_146));
                        /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        come_value_151->var=((void*)0);
                        add_come_last_code(info,"%s",come_value_151->c_value);
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_151));
                        __result_obj__62 = (_Bool)1;
                        /*c*/ come_call_finalizer3(come_value_151,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(right_value_142,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__62;
                        /*c*/ come_call_finalizer3(come_value_151,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
            }
        }
        var__152=get_variable_from_table(info->lv_table,self->name);
        if(        var__152==((void*)0)) {
            var__152=get_variable_from_table(info->gv_table,self->name);
            if(            var__152==((void*)0)) {
                err_msg(info,"var not found(%s)(X) at storing variable",self->name);
            }
        }
        if(        var__152->mType==((void*)0)) {
            __dec_obj72=var__152->mType,
            var__152->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_143));
            /*b*/ come_call_finalizer3(__dec_obj72,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_153=(struct sType*)come_increment_ref_count(sType_clone(var__152->mType));
        if(        (var__152->mType->mStatic||var__152->mType->mConstant)&&!var__152->mGlobal) {
            check_assign_type(((char*)(__right_value219=xsprintf("\%s is assining to",((char*)(__right_value218=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_value_154=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 584, "struct CVALUE*"))));
            __dec_obj73=come_value_154->c_value,
            come_value_154->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj74=come_value_154->type,
            come_value_154->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_154->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
            add_come_last_code(info,"%s",come_value_154->c_value);
            /*c*/ come_call_finalizer3(come_value_154,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        right_type_143->mHeap&&left_type_153->mHeap&&left_type_153->mPointerNum>0&&right_type_143->mPointerNum>0) {
            check_assign_type(((char*)(__right_value225=xsprintf("\%s is assining to",((char*)(__right_value224=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value224 = come_decrement_ref_count(__right_value224, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value225 = come_decrement_ref_count(__right_value225, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            decrement_ref_count_object(left_type_153,var__152->mCValueName,info,(_Bool)0,(_Bool)0);
            std_move(left_type_153,right_type_143,right_value_142,info,(_Bool)0);
            come_value_155=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 601, "struct CVALUE*"))));
            __dec_obj75=come_value_155->c_value,
            come_value_155->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj76=come_value_155->type,
            come_value_155->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_155->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_155));
            add_come_last_code(info,"%s",come_value_155->c_value);
            /*c*/ come_call_finalizer3(come_value_155,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_153->mPointerNum>0&&left_type_153->mHeap&&string_operator_equals(right_type_143->mClass->mName,"void")&&right_type_143->mPointerNum>0) {
            check_assign_type(((char*)(__right_value231=xsprintf("\%s is assining to",((char*)(__right_value230=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            decrement_ref_count_object(left_type_153,var__152->mCValueName,info,(_Bool)0,(_Bool)0);
            come_value_156=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 617, "struct CVALUE*"))));
            __dec_obj77=come_value_156->c_value,
            come_value_156->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj78=come_value_156->type,
            come_value_156->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_156->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
            add_come_last_code(info,"%s",come_value_156->c_value);
            /*c*/ come_call_finalizer3(come_value_156,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        left_type_153->mChannel&&new_channel_141) {
            come_value_157=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 628, "struct CVALUE*"))));
            __dec_obj79=come_value_157->c_value,
            come_value_157->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s), (void*)0)",var__152->mCValueName));
            __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj80=come_value_157->type,
            come_value_157->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 630, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_157->type->mPointerNum=1;
            come_value_157->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
            add_come_last_code(info,"%s",come_value_157->c_value);
            /*c*/ come_call_finalizer3(come_value_157,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            check_assign_type(((char*)(__right_value243=xsprintf("\%s is assining to",((char*)(__right_value242=string_to_string(self->name)))))),left_type_153,right_type_143,right_value_142,(_Bool)0,(_Bool)1,(_Bool)1,info);
            (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            left_type_153->mHeap&&!right_value_142->type->mHeap) {
                err_msg(info,"require right value as heap object(%s)",self->name);
            }
            come_value_158=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 645, "struct CVALUE*"))));
            __dec_obj81=come_value_158->c_value,
            come_value_158->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__152->mCValueName,right_value_142->c_value));
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj82=come_value_158->type,
            come_value_158->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_153));
            /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_value_158->var=var__152;
            list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_158));
            add_come_last_code(info,"%s",come_value_158->c_value);
            /*c*/ come_call_finalizer3(come_value_158,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(right_value_142,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_153,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__1;
void* __right_value2 = (void*)0;
struct sType* result_6;
void* __right_value3 = (void*)0;
struct sType* __dec_obj2;
void* __right_value4 = (void*)0;
struct sType* __dec_obj3;
void* __right_value12 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value13 = (void*)0;
struct sType* __dec_obj8;
void* __right_value14 = (void*)0;
struct sType* __dec_obj9;
void* __right_value16 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value17 = (void*)0;
struct sNode* __dec_obj11;
void* __right_value18 = (void*)0;
char* __dec_obj12;
void* __right_value19 = (void*)0;
char* __dec_obj13;
void* __right_value20 = (void*)0;
char* __dec_obj14;
void* __right_value28 = (void*)0;
struct list$1sNode$ph* __dec_obj18;
void* __right_value29 = (void*)0;
char* __dec_obj19;
void* __right_value30 = (void*)0;
struct list$1sType$ph* __dec_obj20;
void* __right_value38 = (void*)0;
struct list$1char$ph* __dec_obj24;
void* __right_value39 = (void*)0;
struct sType* __dec_obj25;
struct sType* __result_obj__16;
    if(    self==(void*)0) {
        __result_obj__1 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__1;
    }
    result_6=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_6->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj2=result_6->mOriginalLoadVarType,
        result_6->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj3=result_6->mChannelType,
        result_6->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj7=result_6->mGenericsTypes,
        result_6->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj7,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj8=result_6->mNoSolvedGenericsType,
        result_6->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_6->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj9=result_6->mAnyOriginalType,
        result_6->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj9,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj10=result_6->mSizeNum,
        result_6->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj11=result_6->mAlignas,
        result_6->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj11 ? __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj12=result_6->mTupleName,
        result_6->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj13=result_6->mAttribute,
        result_6->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_6->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_6->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_6->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_6->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_6->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_6->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_6->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_6->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_6->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_6->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_6->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_6->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_6->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_6->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_6->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_6->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_6->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_6->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_6->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_6->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_6->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_6->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_6->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_6->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj14=result_6->mAsmName,
        result_6->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_6->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_6->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_6->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj18=result_6->mArrayNum,
        result_6->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj18,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_6->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_6->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_6->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_6->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_6->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj19=result_6->mOriginalTypeName,
        result_6->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_6->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_6->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_6->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_6->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj20=result_6->mParamTypes,
        result_6->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj20,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj24=result_6->mParamNames,
        result_6->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj25=result_6->mResultType,
        result_6->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_6->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_6->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__16 = (struct sType*)come_increment_ref_count(result_6);
    /*c*/ come_call_finalizer3(result_6,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__16,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__16;
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
struct list_item$1sType$ph* it_0;
struct list_item$1sType$ph* prev_it_1;
    it_0=self->head;
    while(    it_0!=((void*)0)) {
        prev_it_1=it_0;
        it_0=it_0->next;
        /*c*/ come_call_finalizer3(prev_it_1,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_2;
struct list_item$1sNode$ph* prev_it_3;
    it_2=self->head;
    while(    it_2!=((void*)0)) {
        prev_it_3=it_2;
        it_2=it_2->next;
        /*c*/ come_call_finalizer3(prev_it_3,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_4;
struct list_item$1char$ph* prev_it_5;
    it_4=self->head;
    while(    it_4!=((void*)0)) {
        prev_it_5=it_4;
        it_4=it_4->next;
        /*c*/ come_call_finalizer3(prev_it_5,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__2;
void* __right_value5 = (void*)0;
void* __right_value6 = (void*)0;
struct list$1sType$ph* result_7;
struct list_item$1sType$ph* it_8;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct list$1sType$ph* __result_obj__5;
    if(    self==((void*)0)) {
        __result_obj__2 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__2,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__2;
    }
    result_7=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_8=self->head;
    while(    it_8!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_7,(struct sType*)come_increment_ref_count(sType_clone(it_8->item)));
        }
        else {
            list$1sType$ph_add(result_7,(struct sType*)come_increment_ref_count(sType_clone(it_8->item)));
        }
        it_8=it_8->next;
    }
    __result_obj__5 = (struct list$1sType$ph*)come_increment_ref_count(result_7);
    /*c*/ come_call_finalizer3(result_7,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__5,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__5;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__3;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__3 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__3,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__3;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value7 = (void*)0;
struct list_item$1sType$ph* litem_9;
struct sType* __dec_obj4;
void* __right_value8 = (void*)0;
struct list_item$1sType$ph* litem_10;
struct sType* __dec_obj5;
void* __right_value9 = (void*)0;
struct list_item$1sType$ph* litem_11;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__4;
    if(    self->len==0) {
        litem_9=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value7=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_9->prev=((void*)0);
        litem_9->next=((void*)0);
        __dec_obj4=litem_9->item,
        litem_9->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_9;
        self->head=litem_9;
    }
    else if(    self->len==1) {
        litem_10=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value8=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        __dec_obj5=litem_10->item,
        litem_10->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        litem_11=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value9=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        __dec_obj6=litem_11->item,
        litem_11->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
    __result_obj__4 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__4;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_12;
struct list_item$1sType$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)) {
        prev_it_13=it_12;
        it_12=it_12->next;
        /*c*/ come_call_finalizer3(prev_it_13,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__6;
void* __right_value15 = (void*)0;
struct sNode* result_14;
struct sNode* __result_obj__7;
    if(    self==(void*)0) {
        __result_obj__6 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__6) ? __result_obj__6 = come_decrement_ref_count(__result_obj__6, ((struct sNode*)__result_obj__6)->finalize, ((struct sNode*)__result_obj__6)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__6;
    }
    result_14=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_14->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_14->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_14->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_14->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_14->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_14->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_14->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_14->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_14->kind=self->kind;
    }
    __result_obj__7 = (struct sNode*)come_increment_ref_count(result_14);
    ((result_14) ? result_14 = come_decrement_ref_count(result_14, ((struct sNode*)result_14)->finalize, ((struct sNode*)result_14)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__7) ? __result_obj__7 = come_decrement_ref_count(__result_obj__7, ((struct sNode*)__result_obj__7)->finalize, ((struct sNode*)__result_obj__7)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__7;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__8;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct list$1sNode$ph* result_15;
struct list_item$1sNode$ph* it_16;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
struct list$1sNode$ph* __result_obj__11;
    if(    self==((void*)0)) {
        __result_obj__8 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__8,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__8;
    }
    result_15=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_16=self->head;
    while(    it_16!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_15,(struct sNode*)come_increment_ref_count(sNode_clone(it_16->item)));
        }
        else {
            list$1sNode$ph_add(result_15,(struct sNode*)come_increment_ref_count(sNode_clone(it_16->item)));
        }
        it_16=it_16->next;
    }
    __result_obj__11 = (struct list$1sNode$ph*)come_increment_ref_count(result_15);
    /*c*/ come_call_finalizer3(result_15,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__11,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__9;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__9 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__9,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__9;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value23 = (void*)0;
struct list_item$1sNode$ph* litem_17;
struct sNode* __dec_obj15;
void* __right_value24 = (void*)0;
struct list_item$1sNode$ph* litem_18;
struct sNode* __dec_obj16;
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_19;
struct sNode* __dec_obj17;
struct list$1sNode$ph* __result_obj__10;
    if(    self->len==0) {
        litem_17=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value23=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_17->prev=((void*)0);
        litem_17->next=((void*)0);
        __dec_obj15=litem_17->item,
        litem_17->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_17;
        self->head=litem_17;
    }
    else if(    self->len==1) {
        litem_18=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value24=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        __dec_obj16=litem_18->item,
        litem_18->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        litem_19=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        __dec_obj17=litem_19->item,
        litem_19->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj17 ? __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
    __result_obj__10 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__10;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_20;
struct list_item$1sNode$ph* prev_it_21;
    it_20=self->head;
    while(    it_20!=((void*)0)) {
        prev_it_21=it_20;
        it_20=it_20->next;
        /*c*/ come_call_finalizer3(prev_it_21,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__12;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct list$1char$ph* result_22;
struct list_item$1char$ph* it_23;
void* __right_value36 = (void*)0;
void* __right_value37 = (void*)0;
struct list$1char$ph* __result_obj__15;
    if(    self==((void*)0)) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__12,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__12;
    }
    result_22=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_23=self->head;
    while(    it_23!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_22,(char*)come_increment_ref_count((char*)come_memdup(it_23->item, "./comelang.h", 1032, "char*")));
        }
        it_23=it_23->next;
    }
    __result_obj__15 = (struct list$1char$ph*)come_increment_ref_count(result_22);
    /*c*/ come_call_finalizer3(result_22,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value33 = (void*)0;
struct list_item$1char$ph* litem_24;
char* __dec_obj21;
void* __right_value34 = (void*)0;
struct list_item$1char$ph* litem_25;
char* __dec_obj22;
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_26;
char* __dec_obj23;
struct list$1char$ph* __result_obj__14;
    if(    self->len==0) {
        litem_24=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value33=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_24->prev=((void*)0);
        litem_24->next=((void*)0);
        __dec_obj21=litem_24->item,
        litem_24->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_24;
        self->head=litem_24;
    }
    else if(    self->len==1) {
        litem_25=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value34=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_25->prev=self->head;
        litem_25->next=((void*)0);
        __dec_obj22=litem_25->item,
        litem_25->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_25;
        self->head->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_26->prev=self->tail;
        litem_26->next=((void*)0);
        __dec_obj23=litem_26->item,
        litem_26->item=(char*)come_increment_ref_count(item);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_26;
        self->tail=litem_26;
    }
    self->len++;
    __result_obj__14 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__14;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_27;
struct list_item$1char$ph* prev_it_28;
    it_27=self->head;
    while(    it_27!=((void*)0)) {
        prev_it_28=it_27;
        it_27=it_27->next;
        /*c*/ come_call_finalizer3(prev_it_28,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__17;
void* __right_value42 = (void*)0;
void* __right_value43 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* result_31;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_32;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__22;
    if(    self==((void*)0)) {
        __result_obj__17 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__17,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__17;
    }
    result_31=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
    it_32=self->head;
    while(    it_32!=((void*)0)) {
        if(        1) {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_31,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_32->item)));
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_add(result_31,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_clone(it_32->item)));
        }
        it_32=it_32->next;
    }
    __result_obj__22 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(result_31);
    /*c*/ come_call_finalizer3(result_31,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__22,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__22;
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_29;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)) {
        prev_it_30=it_29;
        it_29=it_29->next;
        /*c*/ come_call_finalizer3(prev_it_30,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple3$3sType$phchar$phsNode$ph$p_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__18;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__18 = (struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__18,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__18;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_add(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value44 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_33;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj29;
void* __right_value45 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_34;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj30;
void* __right_value46 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_35;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj31;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__19;
    if(    self->len==0) {
        litem_33=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value44=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_33->prev=((void*)0);
        litem_33->next=((void*)0);
        __dec_obj29=litem_33->item,
        litem_33->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj29,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_33;
        self->head=litem_33;
    }
    else if(    self->len==1) {
        litem_34=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value45=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        __dec_obj30=litem_34->item,
        litem_34->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj30,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value46=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        __dec_obj31=litem_35->item,
        litem_35->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj31,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
    __result_obj__19 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__19;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_clone(struct tuple3$3sType$phchar$phsNode$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__20;
void* __right_value47 = (void*)0;
struct tuple3$3sType$phchar$phsNode$ph* result_36;
void* __right_value48 = (void*)0;
struct sType* __dec_obj32;
void* __right_value49 = (void*)0;
char* __dec_obj33;
void* __right_value50 = (void*)0;
struct sNode* __dec_obj34;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__21;
    if(    self==(void*)0) {
        __result_obj__20 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__20,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__20;
    }
    result_36=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "tuple3$3sType$phchar$phsNode$ph_clone", 3, "struct tuple3$3sType$phchar$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_36->v1,
        result_36->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj33=result_36->v2,
        result_36->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phsNode$ph_clone", 5, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj34=result_36->v3,
        result_36->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__21 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(result_36);
    /*c*/ come_call_finalizer3(result_36,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__21,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__21;
}

static void tuple3$3sType$phchar$phsNode$ph_finalize(struct tuple3$3sType$phchar$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        ((self->v3) ? self->v3 = come_decrement_ref_count(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it_37;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev_it_38;
    it_37=self->head;
    while(    it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*c*/ come_call_finalizer3(prev_it_38,list_item$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStoreNode_finalize(struct sStoreNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        (self->attribute = come_decrement_ref_count(self->attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_40;
unsigned int it_41;
struct sVar* __result_obj__25;
struct sVar* __result_obj__26;
struct sVar* __result_obj__27;
struct sVar* __result_obj__28;
    hash_40=string_get_hash_key(((char*)key))%self->size;
    it_41=hash_40;
    while(    (_Bool)1) {
        if(        self->item_existance[it_41]) {
            if(            string_equals(self->keys[it_41],key)) {
                __result_obj__25 = (struct sVar*)come_increment_ref_count(self->items[it_41]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__25,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__25;
            }
            it_41++;
            if(            it_41>=self->size) {
                it_41=0;
            }
            else if(            it_41==hash_40) {
                __result_obj__26 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__26,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__27,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__28,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__28;
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_remove(struct map$2char$phsVar$ph* self, char* key){
unsigned int hash_42;
unsigned int it_43;
struct map$2char$phsVar$ph* __result_obj__33;
    hash_42=string_get_hash_key(((char*)key))%self->size;
    it_43=hash_42;
    while(    (_Bool)1) {
        if(        self->item_existance[it_43]) {
            if(            string_equals(self->keys[it_43],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_43]);
                self->item_existance[it_43]=(_Bool)0;
                if(                1) {
                    (self->keys[it_43] = come_decrement_ref_count(self->keys[it_43], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_43]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_43],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_43]=((void*)0);
                self->len--;
                break;
            }
            it_43++;
            if(            it_43>=self->size) {
                it_43=0;
            }
            else if(            it_43==hash_42) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__33 = self;
    return __result_obj__33;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_44;
struct list_item$1char$ph* it_45;
struct list$1char$ph* __result_obj__32;
    it2_44=0;
    it_45=self->head;
    while(    it_45!=((void*)0)) {
        if(        string_equals(it_45->item,item)) {
            list$1char$ph_delete(self,it2_44,it2_44+1);
            break;
        }
        it2_44++;
        it_45=it_45->next;
    }
    __result_obj__32 = self;
    return __result_obj__32;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_46;
struct list$1char$ph* __result_obj__29;
struct list_item$1char$ph* it_49;
int i_50;
struct list_item$1char$ph* prev_it_51;
struct list_item$1char$ph* it_52;
int i_53;
struct list_item$1char$ph* prev_it_54;
struct list_item$1char$ph* it_55;
struct list_item$1char$ph* head_prev_it_56;
struct list_item$1char$ph* tail_it_57;
int i_58;
struct list_item$1char$ph* prev_it_59;
struct list$1char$ph* __result_obj__31;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_46=tail;
        tail=head;
        head=tmp_46;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__29 = self;
        return __result_obj__29;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_49=self->head;
        i_50=0;
        while(        it_49!=((void*)0)) {
            if(            i_50<tail) {
                prev_it_51=it_49;
                it_49=it_49->next;
                i_50++;
                /*c*/ come_call_finalizer3(prev_it_51,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_50==tail) {
                self->head=it_49;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_49=it_49->next;
                i_50++;
            }
        }
    }
    else if(    tail==self->len) {
        it_52=self->head;
        i_53=0;
        while(        it_52!=((void*)0)) {
            if(            i_53==head) {
                self->tail=it_52->prev;
                self->tail->next=((void*)0);
            }
            if(            i_53>=head) {
                prev_it_54=it_52;
                it_52=it_52->next;
                i_53++;
                /*c*/ come_call_finalizer3(prev_it_54,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_52=it_52->next;
                i_53++;
            }
        }
    }
    else {
        it_55=self->head;
        head_prev_it_56=((void*)0);
        tail_it_57=((void*)0);
        i_58=0;
        while(        it_55!=((void*)0)) {
            if(            i_58==head) {
                head_prev_it_56=it_55->prev;
            }
            if(            i_58==tail) {
                tail_it_57=it_55;
            }
            if(            i_58>=head&&i_58<tail) {
                prev_it_59=it_55;
                it_55=it_55->next;
                i_58++;
                /*c*/ come_call_finalizer3(prev_it_59,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_55=it_55->next;
                i_58++;
            }
        }
        if(        head_prev_it_56!=((void*)0)) {
            head_prev_it_56->next=tail_it_57;
        }
        if(        tail_it_57!=((void*)0)) {
            tail_it_57->prev=head_prev_it_56;
        }
    }
    __result_obj__31 = self;
    return __result_obj__31;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_47;
struct list_item$1char$ph* prev_it_48;
struct list$1char$ph* __result_obj__30;
    it_47=self->head;
    while(    it_47!=((void*)0)) {
        prev_it_48=it_47;
        it_47=it_47->next;
        /*c*/ come_call_finalizer3(prev_it_48,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__30 = self;
    return __result_obj__30;
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_begin(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_62;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__34;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__35;
struct tuple3$3sType$phchar$phsNode$ph* result_63;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__36;
result_62 = (void*)0;
result_63 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_62,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__34 = result_62;
        return __result_obj__34;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_63,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__36 = result_63;
    return __result_obj__36;
}

static _Bool list$1tuple3$3sType$phchar$phsNode$ph$ph_end(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sType$phchar$phsNode$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_next(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self){
struct tuple3$3sType$phchar$phsNode$ph* result_65;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__37;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__38;
struct tuple3$3sType$phchar$phsNode$ph* result_66;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__39;
result_65 = (void*)0;
result_66 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_65,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
        __result_obj__37 = result_65;
        return __result_obj__37;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__38 = self->it->item;
        return __result_obj__38;
    }
    memset(&result_66,0,sizeof(struct tuple3$3sType$phchar$phsNode$ph*));
    __result_obj__39 = result_66;
    return __result_obj__39;
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

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_79;
char* __result_obj__42;
char* __result_obj__43;
char* result_80;
char* __result_obj__44;
result_79 = (void*)0;
result_80 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_79,0,sizeof(char*));
        __result_obj__42 = result_79;
        return __result_obj__42;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__43 = self->it->item;
        return __result_obj__43;
    }
    memset(&result_80,0,sizeof(char*));
    __result_obj__44 = result_80;
    return __result_obj__44;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_82;
char* __result_obj__45;
char* __result_obj__46;
char* result_83;
char* __result_obj__47;
result_82 = (void*)0;
result_83 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_82,0,sizeof(char*));
        __result_obj__45 = result_82;
        return __result_obj__45;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__46 = self->it->item;
        return __result_obj__46;
    }
    memset(&result_83,0,sizeof(char*));
    __result_obj__47 = result_83;
    return __result_obj__47;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_86;
int i_87;
struct sType* __result_obj__48;
struct sType* default_value_88;
struct sType* __result_obj__49;
default_value_88 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_86=self->head;
    i_87=0;
    while(    it_86!=((void*)0)) {
        if(        position==i_87) {
            __result_obj__48 = (struct sType*)come_increment_ref_count(it_86->item);
            /*c*/ come_call_finalizer3(__result_obj__48,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__48;
        }
        it_86=it_86->next;
        i_87++;
    }
    memset(&default_value_88,0,sizeof(struct sType*));
    __result_obj__49 = (struct sType*)come_increment_ref_count(default_value_88);
    /*c*/ come_call_finalizer3(default_value_88,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__49,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_89;
int i_90;
struct sType* __result_obj__50;
struct sType* default_value_91;
struct sType* __result_obj__51;
default_value_91 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_89=self->head;
    i_90=0;
    while(    it_89!=((void*)0)) {
        if(        position==i_90) {
            __result_obj__50 = (struct sType*)come_increment_ref_count(it_89->item);
            /*c*/ come_call_finalizer3(__result_obj__50,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__50;
        }
        it_89=it_89->next;
        i_90++;
    }
    memset(&default_value_91,0,sizeof(struct sType*));
    __result_obj__51 = (struct sType*)come_increment_ref_count(default_value_91);
    /*c*/ come_call_finalizer3(default_value_91,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__51,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__51;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value103 = (void*)0;
struct list_item$1CVALUE$ph* litem_103;
struct CVALUE* __dec_obj44;
void* __right_value104 = (void*)0;
struct list_item$1CVALUE$ph* litem_104;
struct CVALUE* __dec_obj45;
void* __right_value105 = (void*)0;
struct list_item$1CVALUE$ph* litem_105;
struct CVALUE* __dec_obj46;
struct list$1CVALUE$ph* __result_obj__52;
    if(    self->len==0) {
        litem_103=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value103=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1043, "struct list_item$1CVALUE$ph*"))));
        litem_103->prev=((void*)0);
        litem_103->next=((void*)0);
        __dec_obj44=litem_103->item,
        litem_103->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_103;
        self->head=litem_103;
    }
    else if(    self->len==1) {
        litem_104=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value104=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1053, "struct list_item$1CVALUE$ph*"))));
        litem_104->prev=self->head;
        litem_104->next=((void*)0);
        __dec_obj45=litem_104->item,
        litem_104->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_104;
        self->head->next=litem_104;
    }
    else {
        litem_105=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value105=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1063, "struct list_item$1CVALUE$ph*"))));
        litem_105->prev=self->tail;
        litem_105->next=((void*)0);
        __dec_obj46=litem_105->item,
        litem_105->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_105;
        self->tail=litem_105;
    }
    self->len++;
    __result_obj__52 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__52;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_110;
struct sNode* __result_obj__53;
struct sNode* __result_obj__54;
struct sNode* result_111;
struct sNode* __result_obj__55;
result_110 = (void*)0;
result_111 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_110,0,sizeof(struct sNode*));
        __result_obj__53 = result_110;
        return __result_obj__53;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__54 = self->it->item;
        return __result_obj__54;
    }
    memset(&result_111,0,sizeof(struct sNode*));
    __result_obj__55 = result_111;
    return __result_obj__55;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_113;
struct sNode* __result_obj__56;
struct sNode* __result_obj__57;
struct sNode* result_114;
struct sNode* __result_obj__58;
result_113 = (void*)0;
result_114 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_113,0,sizeof(struct sNode*));
        __result_obj__56 = result_113;
        return __result_obj__56;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__57 = self->it->item;
        return __result_obj__57;
    }
    memset(&result_114,0,sizeof(struct sNode*));
    __result_obj__58 = result_114;
    return __result_obj__58;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value122 = (void*)0;
struct list_item$1CVALUE$ph* litem_118;
struct CVALUE* __dec_obj49;
void* __right_value123 = (void*)0;
struct list_item$1CVALUE$ph* litem_119;
struct CVALUE* __dec_obj50;
void* __right_value124 = (void*)0;
struct list_item$1CVALUE$ph* litem_120;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__59;
    if(    self->len==0) {
        litem_118=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value122=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_118->prev=((void*)0);
        litem_118->next=((void*)0);
        __dec_obj49=litem_118->item,
        litem_118->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_118;
        self->head=litem_118;
    }
    else if(    self->len==1) {
        litem_119=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value123=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_119->prev=self->head;
        litem_119->next=((void*)0);
        __dec_obj50=litem_119->item,
        litem_119->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_119;
        self->head->next=litem_119;
    }
    else {
        litem_120=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value124=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_120->prev=self->tail;
        litem_120->next=((void*)0);
        __dec_obj51=litem_120->item,
        litem_120->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_120;
        self->tail=litem_120;
    }
    self->len++;
    __result_obj__59 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__59;
}

struct sNewChannel* sNewChannel_initialize(struct sNewChannel* self, struct sInfo* info){
void* __right_value248 = (void*)0;
struct sNewChannel* __result_obj__63;
    ((struct sNodeBase*)(__right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value248,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__63 = (struct sNewChannel*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

char* sNewChannel_kind(struct sNewChannel* self){
void* __right_value249 = (void*)0;
char* __result_obj__64;
    __result_obj__64 = (char*)come_increment_ref_count(((char*)(__right_value249=__builtin_string("sNewChannel"))));
    (__right_value249 = come_decrement_ref_count(__right_value249, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__64 = come_decrement_ref_count(__result_obj__64, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__64;
}

_Bool sNewChannel_compile(struct sNewChannel* self, struct sInfo* info){
void* __right_value250 = (void*)0;
struct sNode* node_159;
_Bool Value_160;
_Bool __result_obj__65;
_Bool __result_obj__66;
    node_159=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_160=node_compile(node_159,info);
    if(    !Value_160) {
        __result_obj__65 = (_Bool)0;
        ((node_159) ? node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__65;
    }
    else {
    }
    __result_obj__66 = (_Bool)1;
    ((node_159) ? node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__66;
}

static void sNewChannel_finalize(struct sNewChannel* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWriteChannelNode* sWriteChannelNode_initialize(struct sWriteChannelNode* self, struct sNode* exp, struct sNode* right_value, struct sInfo* info){
void* __right_value251 = (void*)0;
struct sNode* __dec_obj83;
struct sNode* __dec_obj84;
struct sWriteChannelNode* __result_obj__67;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value251,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj83=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj83 ? __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj84=self->right_value,
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__67 = (struct sWriteChannelNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__67,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__67;
}

char* sWriteChannelNode_kind(struct sWriteChannelNode* self){
void* __right_value252 = (void*)0;
char* __result_obj__68;
    __result_obj__68 = (char*)come_increment_ref_count(((char*)(__right_value252=__builtin_string("sWriteChannelNode"))));
    (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__68 = come_decrement_ref_count(__result_obj__68, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__68;
}

_Bool sWriteChannelNode_compile(struct sWriteChannelNode* self, struct sInfo* info){
_Bool Value_161;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_162;
_Bool Value_163;
_Bool __result_obj__69;
void* __right_value254 = (void*)0;
struct CVALUE* right_value_164;
struct sType* right_type_165;
void* __right_value255 = (void*)0;
struct sType* left_type_166;
struct sType* channel_type_167;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct buffer* buf_169;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct CVALUE* come_value2_170;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* __dec_obj85;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* __dec_obj86;
_Bool __result_obj__70;
    Value_161=node_compile(self->exp,info);
    if(    !Value_161) {
        return (_Bool)0;
    }
    else {
    }
    come_value_162=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    Value_163=node_compile(self->right_value,info);
    if(    !Value_163) {
        __result_obj__69 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_value_162,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__69;
    }
    else {
    }
    right_value_164=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_165=right_value_164->type;
    left_type_166=(struct sType*)come_increment_ref_count(sType_clone(come_value_162->type));
    channel_type_167=(struct sType*)come_increment_ref_count(left_type_166->mChannelType);
    static int var_num_168=0;
    var_num_168++;
    if(    right_value_164->type->mHeap) {
        err_msg(info,"channel can't get heap type");
    }
    buf_169=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 727, "struct buffer*"))));
    buffer_append_format(buf_169,"char __channel_buf%d[sizeof(%s)+1];\n",var_num_168,((char*)(__right_value258=make_type_name_string(channel_type_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_169,"%s* __channel_p%d = __channel_buf%d;\n",((char*)(__right_value259=make_type_name_string(channel_type_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_168,var_num_168);
    (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_format(buf_169,"*__channel_p%d = %s;\n",var_num_168,right_value_164->c_value);
    add_come_code(info,((char*)(__right_value260=buffer_to_string(buf_169))));
    (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_170=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 735, "struct CVALUE*"))));
    __dec_obj85=come_value2_170->c_value,
    come_value2_170->c_value=(char*)come_increment_ref_count(xsprintf("if(write(%s[1], __channel_buf%d, sizeof(%s)) < 0) { puts(\"channel write error\"); exit(2); }",come_value_162->c_value,var_num_168,((char*)(__right_value263=make_type_name_string(channel_type_167,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0)))));
    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj86=come_value2_170->type,
    come_value2_170->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 739, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_170->type->mPointerNum=1;
    come_value2_170->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_170));
    add_come_last_code(info,"%s",come_value2_170->c_value);
    __result_obj__70 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_162,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_164,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_166,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_167,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_169,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_170,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__70;
}

static void sWriteChannelNode_finalize(struct sWriteChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        ((self->right_value) ? self->right_value = come_decrement_ref_count(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sReadChannelNode* sReadChannelNode_initialize(struct sReadChannelNode* self, struct sNode* exp, struct sInfo* info){
void* __right_value268 = (void*)0;
struct sNode* __dec_obj87;
struct sReadChannelNode* __result_obj__71;
    ((struct sNodeBase*)(__right_value268=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value268,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj87=self->exp,
    self->exp=(struct sNode*)come_increment_ref_count(exp);
    (__dec_obj87 ? __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__71 = (struct sReadChannelNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__71,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__71;
}

char* sReadChannelNode_kind(struct sReadChannelNode* self){
void* __right_value269 = (void*)0;
char* __result_obj__72;
    __result_obj__72 = (char*)come_increment_ref_count(((char*)(__right_value269=__builtin_string("sReadChannelNode"))));
    (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__72 = come_decrement_ref_count(__result_obj__72, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__72;
}

_Bool sReadChannelNode_compile(struct sReadChannelNode* self, struct sInfo* info){
struct sNode* exp_171;
_Bool Value_172;
_Bool __result_obj__73;
void* __right_value270 = (void*)0;
struct CVALUE* come_value_173;
void* __right_value271 = (void*)0;
struct sType* var_type_174;
struct sType* channel_type_175;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct CVALUE* come_value2_177;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
char* __dec_obj88;
void* __right_value278 = (void*)0;
struct sType* __dec_obj89;
_Bool __result_obj__74;
    exp_171=(struct sNode*)come_increment_ref_count(self->exp);
    Value_172=node_compile(exp_171,info);
    if(    !Value_172) {
        __result_obj__73 = (_Bool)0;
        ((exp_171) ? exp_171 = come_decrement_ref_count(exp_171, ((struct sNode*)exp_171)->finalize, ((struct sNode*)exp_171)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__73;
    }
    else {
    }
    come_value_173=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    var_type_174=(struct sType*)come_increment_ref_count(sType_clone(come_value_173->type));
    if(    !var_type_174->mChannel) {
        err_msg(info,"require right type is channel");
    }
    channel_type_175=(struct sType*)come_increment_ref_count(var_type_174->mChannelType);
    static int var_num_176=0;
    var_num_176++;
    add_come_code_at_function_head(info,"char __channel_bufl%d[sizeof(%s)+1];\n",var_num_176,((char*)(__right_value272=make_type_name_string(channel_type_175,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_177=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 789, "struct CVALUE*"))));
    __dec_obj88=come_value2_177->c_value,
    come_value2_177->c_value=(char*)come_increment_ref_count(xsprintf("((read(%s[0], __channel_bufl%d, sizeof(%s)) < 0 ? puts(\"read channel error\"), exit(2):0), *(%s*)__channel_bufl%d)",come_value_173->c_value,var_num_176,((char*)(__right_value275=make_type_name_string(channel_type_175,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value276=make_type_name_string(channel_type_175,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),var_num_176));
    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __dec_obj89=come_value2_177->type,
    come_value2_177->type=(struct sType*)come_increment_ref_count(sType_clone(channel_type_175));
    /*b*/ come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_177->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_177));
    add_come_last_code(info,"%s",come_value2_177->c_value);
    __result_obj__74 = (_Bool)1;
    ((exp_171) ? exp_171 = come_decrement_ref_count(exp_171, ((struct sNode*)exp_171)->finalize, ((struct sNode*)exp_171)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_173,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(var_type_174,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(channel_type_175,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value2_177,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

static void sReadChannelNode_finalize(struct sReadChannelNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        ((self->exp) ? self->exp = come_decrement_ref_count(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info, _Bool comma){
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sNode* _inf_value1;
struct sStoreNode* _inf_obj_value1;
void* __right_value290 = (void*)0;
struct sNode* __result_obj__77;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 806, "struct sNode");
    _inf_obj_value1=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value281=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 806, "struct sStoreNode*")),(char*)come_increment_ref_count(name),(struct list$1char$ph*)come_increment_ref_count(multiple_assign),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare),(struct sType*)come_increment_ref_count(type),alloc,(struct sNode*)come_increment_ref_count(right_value),info,(char*)come_increment_ref_count(xsprintf("")),comma))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreNode_finalize;
    _inf_value1->clone=(void*)sStoreNode_clone;
    _inf_value1->compile=(void*)sStoreNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStoreNode_kind;
    __result_obj__77 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value290=_inf_value1)));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(multiple_assign,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(multiple_declare,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((right_value) ? right_value = come_decrement_ref_count(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value281,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value290) ? __right_value290 = come_decrement_ref_count(__right_value290, ((struct sNode*)__right_value290)->finalize, ((struct sNode*)__right_value290)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__77) ? __result_obj__77 = come_decrement_ref_count(__result_obj__77, ((struct sNode*)__result_obj__77)->finalize, ((struct sNode*)__result_obj__77)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__77;
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
struct sStoreNode* __result_obj__75;
void* __right_value282 = (void*)0;
struct sStoreNode* result_178;
void* __right_value283 = (void*)0;
char* __dec_obj90;
void* __right_value284 = (void*)0;
char* __dec_obj91;
void* __right_value285 = (void*)0;
struct sType* __dec_obj92;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj93;
void* __right_value287 = (void*)0;
struct list$1char$ph* __dec_obj94;
void* __right_value288 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __dec_obj95;
void* __right_value289 = (void*)0;
char* __dec_obj96;
struct sStoreNode* __result_obj__76;
    if(    self==(void*)0) {
        __result_obj__75 = (void*)0;
        return __result_obj__75;
    }
    result_178=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "struct sStoreNode*"));
    if(    self!=((void*)0)) {
        result_178->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj90=result_178->sname,
        result_178->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreNode_clone", 5, "char*"));
        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_178->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj91=result_178->name,
        result_178->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sStoreNode_clone", 7, "char*"));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_178->alloc=self->alloc;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj92=result_178->type,
        result_178->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj93=result_178->right_value,
        result_178->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj94=result_178->multiple_assign,
        result_178->multiple_assign=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->multiple_assign));
        /*b*/ come_call_finalizer3(__dec_obj94,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj95=result_178->multiple_declare,
        result_178->multiple_declare=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph$p_clone(self->multiple_declare));
        /*b*/ come_call_finalizer3(__dec_obj95,list$1tuple3$3sType$phchar$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->attribute!=((void*)0)) {
        __dec_obj96=result_178->attribute,
        result_178->attribute=(char*)come_increment_ref_count((char*)come_memdup(self->attribute, "sStoreNode_clone", 13, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_178->comma=self->comma;
    }
    __result_obj__76 = result_178;
    /*c*/ come_call_finalizer3(result_178,sStoreNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__76;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
char* __dec_obj97;
struct sLoadNode* __result_obj__78;
    ((struct sNodeBase*)(__right_value291=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value291,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj97=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__78 = (struct sLoadNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__78,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __right_value293 = (void*)0;
char* __result_obj__79;
    __result_obj__79 = (char*)come_increment_ref_count(((char*)(__right_value293=__builtin_string("sLoadNode"))));
    (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__79;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_179;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
_Bool _if_conditional3;
struct sVar* parent_var_180;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct CVALUE* come_value_181;
struct sType* type_182;
void* __right_value298 = (void*)0;
char* __dec_obj98;
void* __right_value299 = (void*)0;
char* __dec_obj99;
void* __right_value300 = (void*)0;
struct sType* __dec_obj100;
_Bool __result_obj__80;
struct sVar* var__183;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sFun* fun_184;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_191;
void* __right_value306 = (void*)0;
char* __dec_obj101;
struct sType* __dec_obj102;
_Bool __result_obj__89;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_192;
void* __right_value309 = (void*)0;
char* __dec_obj103;
void* __right_value310 = (void*)0;
struct sType* __dec_obj104;
void* __right_value311 = (void*)0;
struct sType* __dec_obj105;
_Bool __result_obj__91;
    current_stack_frame_struct_179=info->current_stack_frame_struct;
    if(    (_if_conditional3=(current_stack_frame_struct_179&&((struct sVar*)(__right_value295=map$2char$phsVar$ph_at(info->lv_table->mVars,((char*)(__right_value294=__builtin_string(self->name))),((void*)0))))==((void*)0))),    (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value295,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        parent_var_180=get_variable_from_table(info->lv_table->mParent,self->name);
        if(        parent_var_180!=((void*)0)) {
            if(            string_operator_not_equals(parent_var_180->mFunName,info->come_fun->mName)) {
                come_value_181=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 836, "struct CVALUE*"))));
                type_182=parent_var_180->mType;
                if(                parent_var_180->mType->mOriginIsArray) {
                    __dec_obj98=come_value_181->c_value,
                    come_value_181->c_value=(char*)come_increment_ref_count(xsprintf("(parent->%s)",parent_var_180->mCValueName));
                    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj99=come_value_181->c_value,
                    come_value_181->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_180->mCValueName));
                    __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                __dec_obj100=come_value_181->type,
                come_value_181->type=(struct sType*)come_increment_ref_count(sType_clone(type_182));
                /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_181->var=((void*)0);
                add_come_last_code(info,"%s",come_value_181->c_value);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
                __result_obj__80 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_181,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__80;
                /*c*/ come_call_finalizer3(come_value_181,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    var__183=get_variable_from_table(info->lv_table,self->name);
    if(    var__183==((void*)0)) {
        var__183=get_variable_from_table(info->gv_table,self->name);
        if(        var__183==((void*)0)) {
            fun_184=((struct sFun*)(__right_value303=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value302=__builtin_string(self->name))))));
            (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value303,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            fun_184) {
                come_value_191=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 868, "struct CVALUE*"))));
                __dec_obj101=come_value_191->c_value,
                come_value_191->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_184->mName));
                __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj102=come_value_191->type,
                come_value_191->type=(struct sType*)come_increment_ref_count(fun_184->mLambdaType);
                /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                come_value_191->var=((void*)0);
                list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
                __result_obj__89 = (_Bool)1;
                /*c*/ come_call_finalizer3(come_value_191,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__89;
                /*c*/ come_call_finalizer3(come_value_191,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable",self->name);
            }
        }
    }
    come_value_192=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 884, "struct CVALUE*"))));
    __dec_obj103=come_value_192->c_value,
    come_value_192->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__183->mCValueName));
    __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj104=come_value_192->type,
    come_value_192->type=(struct sType*)come_increment_ref_count(sType_clone(var__183->mType));
    /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_192->var=var__183;
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_192));
    if(    list$1sNode$ph_length(come_value_192->type->mArrayNum)==1) {
        __dec_obj105=come_value_192->type->mOriginalLoadVarType,
        come_value_192->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_192->type));
        /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph_reset(come_value_192->type->mArrayNum);
        come_value_192->type->mPointerNum++;
        come_value_192->type->mOriginalTypeNamePointerNum=come_value_192->type->mPointerNum;
    }
    __result_obj__91 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_192,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__91;
}

static void sLoadNode_finalize(struct sLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_185;
unsigned int hash_186;
unsigned int it_187;
struct sFun* __result_obj__81;
struct sFun* __result_obj__82;
struct sFun* __result_obj__83;
struct sFun* __result_obj__84;
default_value_185 = (void*)0;
    memset(&default_value_185,0,sizeof(struct sFun*));
    hash_186=string_get_hash_key(((char*)key))%self->size;
    it_187=hash_186;
    while(    (_Bool)1) {
        if(        self->item_existance[it_187]) {
            if(            string_equals(self->keys[it_187],key)) {
                __result_obj__81 = (struct sFun*)come_increment_ref_count(self->items[it_187]);
                /*c*/ come_call_finalizer3(default_value_185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__81,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__81;
            }
            it_187++;
            if(            it_187>=self->size) {
                it_187=0;
            }
            else if(            it_187==hash_186) {
                __result_obj__82 = (struct sFun*)come_increment_ref_count(default_value_185);
                /*c*/ come_call_finalizer3(default_value_185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__82,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__82;
            }
        }
        else {
            __result_obj__83 = (struct sFun*)come_increment_ref_count(default_value_185);
            /*c*/ come_call_finalizer3(default_value_185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__83,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__83;
        }
    }
    __result_obj__84 = (struct sFun*)come_increment_ref_count(default_value_185);
    /*c*/ come_call_finalizer3(default_value_185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__84,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__84;
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
    if(    self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sFun* default_value_188;
unsigned int hash_189;
unsigned int it_190;
struct sFun* __result_obj__85;
struct sFun* __result_obj__86;
struct sFun* __result_obj__87;
struct sFun* __result_obj__88;
default_value_188 = (void*)0;
    memset(&default_value_188,0,sizeof(struct sFun*));
    hash_189=string_get_hash_key(((char*)key))%self->size;
    it_190=hash_189;
    while(    (_Bool)1) {
        if(        self->item_existance[it_190]) {
            if(            string_equals(self->keys[it_190],key)) {
                __result_obj__85 = (struct sFun*)come_increment_ref_count(self->items[it_190]);
                /*c*/ come_call_finalizer3(default_value_188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__85,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__85;
            }
            it_190++;
            if(            it_190>=self->size) {
                it_190=0;
            }
            else if(            it_190==hash_189) {
                __result_obj__86 = (struct sFun*)come_increment_ref_count(default_value_188);
                /*c*/ come_call_finalizer3(default_value_188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__86,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__86;
            }
        }
        else {
            __result_obj__87 = (struct sFun*)come_increment_ref_count(default_value_188);
            /*c*/ come_call_finalizer3(default_value_188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__87,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__87;
        }
    }
    __result_obj__88 = (struct sFun*)come_increment_ref_count(default_value_188);
    /*c*/ come_call_finalizer3(default_value_188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_193;
struct list_item$1sNode$ph* prev_it_194;
struct list$1sNode$ph* __result_obj__90;
    it_193=self->head;
    while(    it_193!=((void*)0)) {
        prev_it_194=it_193;
        it_193=it_193->next;
        /*c*/ come_call_finalizer3(prev_it_194,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__90 = self;
    return __result_obj__90;
}

_Bool is_inner_calling(struct sNode* node, struct sInfo* info){
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
_Bool _if_conditional4;
struct sLoadNode* load_node_195;
    if(    (_if_conditional4=(string_operator_equals(((char*)(__right_value313=node->kind(node->_protocol_obj))),"sLoadNode"))),    (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    _if_conditional4) {
        load_node_195=(struct sLoadNode*)(node->_protocol_obj);
        if(        string_operator_equals(load_node_195->name,"self")) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

struct sNode* create_load_var(char* var_name, struct sInfo* info){
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sNode* _inf_value2;
struct sLoadNode* _inf_obj_value2;
void* __right_value320 = (void*)0;
struct sNode* __result_obj__94;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 917, "struct sNode");
    _inf_obj_value2=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value316=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 917, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(var_name)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadNode_finalize;
    _inf_value2->clone=(void*)sLoadNode_clone;
    _inf_value2->compile=(void*)sLoadNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sLoadNode_terminated;
    _inf_value2->kind=(void*)sLoadNode_kind;
    __result_obj__94 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value320=_inf_value2)));
    /*c*/ come_call_finalizer3(__right_value316,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value320) ? __right_value320 = come_decrement_ref_count(__right_value320, ((struct sNode*)__right_value320)->finalize, ((struct sNode*)__right_value320)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__94) ? __result_obj__94 = come_decrement_ref_count(__result_obj__94, ((struct sNode*)__result_obj__94)->finalize, ((struct sNode*)__result_obj__94)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__94;
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
struct sLoadNode* __result_obj__92;
void* __right_value317 = (void*)0;
struct sLoadNode* result_196;
void* __right_value318 = (void*)0;
char* __dec_obj106;
void* __right_value319 = (void*)0;
char* __dec_obj107;
struct sLoadNode* __result_obj__93;
    if(    self==(void*)0) {
        __result_obj__92 = (void*)0;
        return __result_obj__92;
    }
    result_196=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "struct sLoadNode*"));
    if(    self!=((void*)0)) {
        result_196->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj106=result_196->sname,
        result_196->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadNode_clone", 5, "char*"));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_196->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj107=result_196->name,
        result_196->name=(char*)come_increment_ref_count((char*)come_memdup(self->name, "sLoadNode_clone", 7, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__93 = result_196;
    /*c*/ come_call_finalizer3(result_196,sLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__93;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* __dec_obj108;
struct sFunLoadNode* __result_obj__95;
    ((struct sNodeBase*)(__right_value321=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value321,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj108=self->name,
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__95 = (struct sFunLoadNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__95,sFunLoadNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__95;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __right_value323 = (void*)0;
char* __result_obj__96;
    __result_obj__96 = (char*)come_increment_ref_count(((char*)(__right_value323=__builtin_string("sFunLoadNode"))));
    (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__96 = come_decrement_ref_count(__result_obj__96, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__96;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sFun* fun_197;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct CVALUE* come_value_198;
void* __right_value329 = (void*)0;
char* __dec_obj109;
struct sType* __dec_obj110;
    fun_197=((struct sFun*)(__right_value326=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value325=__builtin_string(self->name))))));
    (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value326,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun_197==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable",self->name);
    }
    else {
        come_value_198=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 942, "struct CVALUE*"))));
        __dec_obj109=come_value_198->c_value,
        come_value_198->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_197->mName));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj110=come_value_198->type,
        come_value_198->type=(struct sType*)come_increment_ref_count(fun_197->mLambdaType);
        /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_198->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        /*c*/ come_call_finalizer3(come_value_198,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->name!=((void*)0)) {
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNode$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value330 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj116;
struct sArrayInitializer* __result_obj__103;
    ((struct sNodeBase*)(__right_value330=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value330,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj116=self->initializer,
    self->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(initializer));
    /*b*/ come_call_finalizer3(__dec_obj116,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__103 = (struct sArrayInitializer*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__103,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__103;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __right_value342 = (void*)0;
char* __result_obj__104;
    __result_obj__104 = (char*)come_increment_ref_count(((char*)(__right_value342=__builtin_string("sArrayInitializer"))));
    (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__104 = come_decrement_ref_count(__result_obj__104, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__104;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_209;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct buffer* buf_210;
int i_211;
struct sType* element_type_212;
struct list$1tuple2$2sNode$phsNode$ph$ph* o2_saved_213;
struct tuple2$2sNode$phsNode$ph* it_216;
struct tuple2$2sNode$phsNode$ph* multiple_assign_var2 = (void*)0;
struct sNode* index_219=0;
struct sNode* value_220=0;
struct CVALUE* come_value_221;
_Bool Value_222;
_Bool __result_obj__111;
void* __right_value345 = (void*)0;
struct CVALUE* __dec_obj117;
_Bool Value_223;
_Bool __result_obj__112;
void* __right_value346 = (void*)0;
struct CVALUE* come_value2_224;
void* __right_value347 = (void*)0;
struct sType* __dec_obj118;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct CVALUE* come_value_225;
void* __right_value350 = (void*)0;
char* __dec_obj119;
void* __right_value351 = (void*)0;
struct sType* __dec_obj120;
_Bool __result_obj__113;
    initializer_209=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_210=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 973, "struct buffer*"))));
    buffer_append_str(buf_210,"{");
    i_211=0;
    element_type_212=((void*)0);
    for(    o2_saved_213=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((initializer_209)),it_216=list$1tuple2$2sNode$phsNode$ph$ph_begin((o2_saved_213));    !list$1tuple2$2sNode$phsNode$ph$ph_end((o2_saved_213));    it_216=list$1tuple2$2sNode$phsNode$ph$ph_next((o2_saved_213))    ){
        multiple_assign_var2=it_216;
        index_219=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_220=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_221=((void*)0);
        if(        index_219) {
            Value_222=node_compile(index_219,info);
            if(            !Value_222) {
                __result_obj__111 = (_Bool)0;
                ((index_219) ? index_219 = come_decrement_ref_count(index_219, ((struct sNode*)index_219)->finalize, ((struct sNode*)index_219)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((value_220) ? value_220 = come_decrement_ref_count(value_220, ((struct sNode*)value_220)->finalize, ((struct sNode*)value_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(come_value_221,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(o2_saved_213,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(initializer_209,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(buf_210,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(element_type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__111;
            }
            else {
            }
            __dec_obj117=come_value_221,
            come_value_221=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            /*b*/ come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        Value_223=node_compile(value_220,info);
        if(        !Value_223) {
            __result_obj__112 = (_Bool)0;
            ((index_219) ? index_219 = come_decrement_ref_count(index_219, ((struct sNode*)index_219)->finalize, ((struct sNode*)index_219)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((value_220) ? value_220 = come_decrement_ref_count(value_220, ((struct sNode*)value_220)->finalize, ((struct sNode*)value_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(come_value_221,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(o2_saved_213,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_209,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_210,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(element_type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__112;
        }
        else {
        }
        come_value2_224=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        __dec_obj118=element_type_212,
        element_type_212=(struct sType*)come_increment_ref_count(sType_clone(come_value2_224->type));
        /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        if(        come_value_221) {
            buffer_append_format(buf_210,"[%s] = %s",come_value_221->c_value,come_value2_224->c_value);
        }
        else {
            buffer_append_str(buf_210,come_value2_224->c_value);
        }
        i_211++;
        if(        i_211!=list$1tuple2$2sNode$phsNode$ph$ph_length(initializer_209)) {
            buffer_append_str(buf_210,",");
        }
        ((index_219) ? index_219 = come_decrement_ref_count(index_219, ((struct sNode*)index_219)->finalize, ((struct sNode*)index_219)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((value_220) ? value_220 = come_decrement_ref_count(value_220, ((struct sNode*)value_220)->finalize, ((struct sNode*)value_220)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_221,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_224,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_213,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_210,"}");
    come_value_225=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1010, "struct CVALUE*"))));
    __dec_obj119=come_value_225->c_value,
    come_value_225->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_210));
    __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj120=come_value_225->type,
    come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_212));
    /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_225->type->mPointerNum++;
    come_value_225->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
    __result_obj__113 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_209,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_210,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(element_type_212,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_225,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__113;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph$p_clone(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__97;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* result_201;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_202;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__102;
    if(    self==((void*)0)) {
        __result_obj__97 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__97,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__97;
    }
    result_201=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    it_202=self->head;
    while(    it_202!=((void*)0)) {
        if(        1) {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_201,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_202->item)));
        }
        else {
            list$1tuple2$2sNode$phsNode$ph$ph_add(result_201,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_clone(it_202->item)));
        }
        it_202=it_202->next;
    }
    __result_obj__102 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(result_201);
    /*c*/ come_call_finalizer3(result_201,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__102,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__102;
}

static void list$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_199;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_200;
    it_199=self->head;
    while(    it_199!=((void*)0)) {
        prev_it_200=it_199;
        it_199=it_199->next;
        /*c*/ come_call_finalizer3(prev_it_200,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2sNode$phsNode$ph$p_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_initialize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__98;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__98 = (struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__98,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__98;
}

static struct list$1tuple2$2sNode$phsNode$ph$ph* list$1tuple2$2sNode$phsNode$ph$ph_add(struct list$1tuple2$2sNode$phsNode$ph$ph* self, struct tuple2$2sNode$phsNode$ph* item){
void* __right_value333 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_203;
struct tuple2$2sNode$phsNode$ph* __dec_obj111;
void* __right_value334 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_204;
struct tuple2$2sNode$phsNode$ph* __dec_obj112;
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* litem_205;
struct tuple2$2sNode$phsNode$ph* __dec_obj113;
struct list$1tuple2$2sNode$phsNode$ph$ph* __result_obj__99;
    if(    self->len==0) {
        litem_203=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value333=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        __dec_obj111=litem_203->item,
        litem_203->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj111,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value334=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        __dec_obj112=litem_204->item,
        litem_204->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj112,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2sNode$phsNode$ph$ph*)(__right_value335=(struct list_item$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2sNode$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2sNode$phsNode$ph$ph*"))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        __dec_obj113=litem_205->item,
        litem_205->item=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj113,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result_obj__99 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__99;
}

static struct tuple2$2sNode$phsNode$ph* tuple2$2sNode$phsNode$ph_clone(struct tuple2$2sNode$phsNode$ph* self){
struct tuple2$2sNode$phsNode$ph* __result_obj__100;
void* __right_value336 = (void*)0;
struct tuple2$2sNode$phsNode$ph* result_206;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj114;
void* __right_value338 = (void*)0;
struct sNode* __dec_obj115;
struct tuple2$2sNode$phsNode$ph* __result_obj__101;
    if(    self==(void*)0) {
        __result_obj__100 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__100,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__100;
    }
    result_206=(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "tuple2$2sNode$phsNode$ph_clone", 3, "struct tuple2$2sNode$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj114=result_206->v1,
        result_206->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        (__dec_obj114 ? __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj115=result_206->v2,
        result_206->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj115 ? __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__101 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(result_206);
    /*c*/ come_call_finalizer3(result_206,tuple2$2sNode$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__101,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

static void tuple2$2sNode$phsNode$ph_finalize(struct tuple2$2sNode$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        ((self->v1) ? self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2sNode$phsNode$ph$ph_finalize(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct list_item$1tuple2$2sNode$phsNode$ph$ph* it_207;
struct list_item$1tuple2$2sNode$phsNode$ph$ph* prev_it_208;
    it_207=self->head;
    while(    it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*c*/ come_call_finalizer3(prev_it_208,list_item$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_begin(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_214;
struct tuple2$2sNode$phsNode$ph* __result_obj__105;
struct tuple2$2sNode$phsNode$ph* __result_obj__106;
struct tuple2$2sNode$phsNode$ph* result_215;
struct tuple2$2sNode$phsNode$ph* __result_obj__107;
result_214 = (void*)0;
result_215 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_214,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__105 = result_214;
        return __result_obj__105;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__106 = self->it->item;
        return __result_obj__106;
    }
    memset(&result_215,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__107 = result_215;
    return __result_obj__107;
}

static _Bool list$1tuple2$2sNode$phsNode$ph$ph_end(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNode$phsNode$ph* list$1tuple2$2sNode$phsNode$ph$ph_next(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
struct tuple2$2sNode$phsNode$ph* result_217;
struct tuple2$2sNode$phsNode$ph* __result_obj__108;
struct tuple2$2sNode$phsNode$ph* __result_obj__109;
struct tuple2$2sNode$phsNode$ph* result_218;
struct tuple2$2sNode$phsNode$ph* __result_obj__110;
result_217 = (void*)0;
result_218 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_217,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
        __result_obj__108 = result_217;
        return __result_obj__108;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__109 = self->it->item;
        return __result_obj__109;
    }
    memset(&result_218,0,sizeof(struct tuple2$2sNode$phsNode$ph*));
    __result_obj__110 = result_218;
    return __result_obj__110;
}

static int list$1tuple2$2sNode$phsNode$ph$ph_length(struct list$1tuple2$2sNode$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* initializer_226;
void* __right_value354 = (void*)0;
struct sNode* index_227;
_Bool no_comma_228;
void* __right_value355 = (void*)0;
struct sNode* exp_229;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
_Bool no_comma_231;
void* __right_value358 = (void*)0;
struct sNode* exp_232;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sNode* index_235;
_Bool no_comma_236;
void* __right_value364 = (void*)0;
struct sNode* exp_237;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
_Bool no_comma_238;
void* __right_value367 = (void*)0;
struct sNode* exp_239;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value3;
struct sArrayInitializer* _inf_obj_value3;
void* __right_value375 = (void*)0;
struct sNode* __result_obj__120;
    expected_next_character(123,info);
    initializer_226=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph_initialize((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2sNode$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2sNode$phsNode$ph$ph)*(1), "07var.c", 1028, "struct list$1tuple2$2sNode$phsNode$ph$ph*"))));
    if(    *info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_227=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_228=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_229=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_228;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_226,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1044, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_227),(struct sNode*)come_increment_ref_count(exp_229))));
        ((index_227) ? index_227 = come_decrement_ref_count(index_227, ((struct sNode*)index_227)->finalize, ((struct sNode*)index_227)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((exp_229) ? exp_229 = come_decrement_ref_count(exp_229, ((struct sNode*)exp_229)->finalize, ((struct sNode*)exp_229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_231=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_232=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_231;
        list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_226,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1052, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_232))));
        ((exp_232) ? exp_232 = come_decrement_ref_count(exp_232, ((struct sNode*)exp_232)->finalize, ((struct sNode*)exp_232)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    *info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_235=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_236=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_237=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_236;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_226,(struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(tuple2$2sNode$phsNode$ph_initialize((struct tuple2$2sNode$phsNode$ph**)come_increment_ref_count((struct tuple2$2sNode$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sNode$phsNode$ph)*(1), "07var.c", 1079, "struct tuple2$2sNode$phsNode$ph")),(struct sNode*)come_increment_ref_count(index_235),(struct sNode*)come_increment_ref_count(exp_237))));
            ((index_235) ? index_235 = come_decrement_ref_count(index_235, ((struct sNode*)index_235)->finalize, ((struct sNode*)index_235)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_237) ? exp_237 = come_decrement_ref_count(exp_237, ((struct sNode*)exp_237)->finalize, ((struct sNode*)exp_237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_238=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_239=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_238;
            list$1tuple2$2sNode$phsNode$ph$ph_add(initializer_226,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1087, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_239))));
            ((exp_239) ? exp_239 = come_decrement_ref_count(exp_239, ((struct sNode*)exp_239)->finalize, ((struct sNode*)exp_239)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1093, "struct sNode");
    _inf_obj_value3=(struct sArrayInitializer*)come_increment_ref_count(((struct sArrayInitializer*)(__right_value371=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 1093, "struct sArrayInitializer*")),(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(initializer_226),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sArrayInitializer_finalize;
    _inf_value3->clone=(void*)sArrayInitializer_clone;
    _inf_value3->compile=(void*)sArrayInitializer_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sArrayInitializer_kind;
    __result_obj__120 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value375=_inf_value3)));
    /*c*/ come_call_finalizer3(initializer_226,list$1tuple2$2sNode$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value371,sArrayInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value375) ? __right_value375 = come_decrement_ref_count(__right_value375, ((struct sNode*)__right_value375)->finalize, ((struct sNode*)__right_value375)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__120) ? __result_obj__120 = come_decrement_ref_count(__result_obj__120, ((struct sNode*)__result_obj__120)->finalize, ((struct sNode*)__result_obj__120)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__120;
}

static unsigned int tuple2$2sNode$phsNode$ph_get_hash_key(struct tuple2$2sNode$phsNode$ph* self){
unsigned int result_230;
    result_230=0;
    result_230+=int_get_hash_key(((int)self->v1));
    result_230+=int_get_hash_key(((int)self->v2));
    return result_230;
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
struct sNode* __dec_obj121;
struct sNode* __dec_obj122;
struct tuple2$2sNode$phsNode$ph* __result_obj__114;
    __dec_obj121=self->v1,
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    (__dec_obj121 ? __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj122=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__114 = (struct tuple2$2sNode$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((v1) ? v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__114,tuple2$2sNode$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__114;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__115;
void* __right_value359 = (void*)0;
struct tuple2$2void$psNode$ph* result_233;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj123;
struct tuple2$2void$psNode$ph* __result_obj__116;
    if(    self==(void*)0) {
        __result_obj__115 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__115,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__115;
    }
    result_233=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_233->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj123=result_233->v2,
        result_233->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj123 ? __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__116 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(result_233);
    /*c*/ come_call_finalizer3(result_233,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__116,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__116;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_234;
    result_234=0;
    result_234+=int_get_hash_key(((int)self->v1));
    result_234+=int_get_hash_key(((int)self->v2));
    return result_234;
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
struct sNode* __dec_obj124;
struct tuple2$2void$psNode$ph* __result_obj__117;
    self->v1=v1;
    __dec_obj124=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj124 ? __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__117 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__117,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__117;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
struct sArrayInitializer* __result_obj__118;
void* __right_value372 = (void*)0;
struct sArrayInitializer* result_240;
void* __right_value373 = (void*)0;
char* __dec_obj125;
void* __right_value374 = (void*)0;
struct list$1tuple2$2sNode$phsNode$ph$ph* __dec_obj126;
struct sArrayInitializer* __result_obj__119;
    if(    self==(void*)0) {
        __result_obj__118 = (void*)0;
        return __result_obj__118;
    }
    result_240=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc_v2(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "struct sArrayInitializer*"));
    if(    self!=((void*)0)) {
        result_240->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj125=result_240->sname,
        result_240->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sArrayInitializer_clone", 5, "char*"));
        __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_240->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj126=result_240->initializer,
        result_240->initializer=(struct list$1tuple2$2sNode$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2sNode$phsNode$ph$ph$p_clone(self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj126,list$1tuple2$2sNode$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__119 = result_240;
    /*c*/ come_call_finalizer3(result_240,sArrayInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__119;
}

struct sStructInitializer* sStructInitializer_initialize(struct sStructInitializer* self, struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sInfo* info){
void* __right_value376 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj132;
struct sStructInitializer* __result_obj__127;
    ((struct sNodeBase*)(__right_value376=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value376,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj132=self->initializer,
    self->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(initializer));
    /*b*/ come_call_finalizer3(__dec_obj132,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__127 = (struct sStructInitializer*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__127,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__127;
}

char* sStructInitializer_kind(struct sStructInitializer* self){
void* __right_value388 = (void*)0;
char* __result_obj__128;
    __result_obj__128 = (char*)come_increment_ref_count(((char*)(__right_value388=__builtin_string("sStructInitializer"))));
    (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__128 = come_decrement_ref_count(__result_obj__128, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__128;
}

_Bool sStructInitializer_compile(struct sStructInitializer* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* initializer_251;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* buf_252;
int i_253;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_254;
struct tuple2$2char$phsNode$ph* it_257;
struct tuple2$2char$phsNode$ph* multiple_assign_var3 = (void*)0;
char* name_260=0;
struct sNode* value_261=0;
_Bool Value_262;
_Bool __result_obj__135;
void* __right_value391 = (void*)0;
struct CVALUE* come_value2_263;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_264;
void* __right_value394 = (void*)0;
char* __dec_obj133;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* __dec_obj134;
_Bool __result_obj__136;
    initializer_251=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->initializer);
    buf_252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "07var.c", 1114, "struct buffer*"))));
    buffer_append_str(buf_252,"{");
    i_253=0;
    for(    o2_saved_254=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((initializer_251)),it_257=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_254));    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_254));    it_257=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_254))    ){
        multiple_assign_var3=it_257;
        name_260=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        value_261=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
        Value_262=node_compile(value_261,info);
        if(        !Value_262) {
            __result_obj__135 = (_Bool)0;
            (name_260 = come_decrement_ref_count(name_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((value_261) ? value_261 = come_decrement_ref_count(value_261, ((struct sNode*)value_261)->finalize, ((struct sNode*)value_261)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(o2_saved_254,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(initializer_251,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_252,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__135;
        }
        else {
        }
        come_value2_263=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        name_260) {
            buffer_append_format(buf_252,".%s = %s",name_260,come_value2_263->c_value);
        }
        else {
            buffer_append_format(buf_252,"%s",come_value2_263->c_value);
        }
        i_253++;
        if(        i_253!=list$1tuple2$2char$phsNode$ph$ph_length(initializer_251)) {
            buffer_append_str(buf_252,",");
        }
        (name_260 = come_decrement_ref_count(name_260, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((value_261) ? value_261 = come_decrement_ref_count(value_261, ((struct sNode*)value_261)->finalize, ((struct sNode*)value_261)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value2_263,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_254,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    buffer_append_str(buf_252,"}");
    come_value_264=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "07var.c", 1140, "struct CVALUE*"))));
    __dec_obj133=come_value_264->c_value,
    come_value_264->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_252));
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj134=come_value_264->type,
    come_value_264->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "07var.c", 1143, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_264->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_264));
    __result_obj__136 = (_Bool)1;
    /*c*/ come_call_finalizer3(initializer_251,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(buf_252,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_264,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__136;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__121;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_243;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_244;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__126;
    if(    self==((void*)0)) {
        __result_obj__121 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__121,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__121;
    }
    result_243=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1024, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_244=self->head;
    while(    it_244!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_243,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_244->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_243,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_clone(it_244->item)));
        }
        it_244=it_244->next;
    }
    __result_obj__126 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(result_243);
    /*c*/ come_call_finalizer3(result_243,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__126,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__126;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_241;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__122;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__122 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__122,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__122;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value379 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_245;
struct tuple2$2char$phsNode$ph* __dec_obj127;
void* __right_value380 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_246;
struct tuple2$2char$phsNode$ph* __dec_obj128;
void* __right_value381 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_247;
struct tuple2$2char$phsNode$ph* __dec_obj129;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__123;
    if(    self->len==0) {
        litem_245=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value379=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_245->prev=((void*)0);
        litem_245->next=((void*)0);
        __dec_obj127=litem_245->item,
        litem_245->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj127,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_245;
        self->head=litem_245;
    }
    else if(    self->len==1) {
        litem_246=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value380=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_246->prev=self->head;
        litem_246->next=((void*)0);
        __dec_obj128=litem_246->item,
        litem_246->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj128,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_246;
        self->head->next=litem_246;
    }
    else {
        litem_247=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value381=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_247->prev=self->tail;
        litem_247->next=((void*)0);
        __dec_obj129=litem_247->item,
        litem_247->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj129,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_247;
        self->tail=litem_247;
    }
    self->len++;
    __result_obj__123 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__123;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__124;
void* __right_value382 = (void*)0;
struct tuple2$2char$phsNode$ph* result_248;
void* __right_value383 = (void*)0;
char* __dec_obj130;
void* __right_value384 = (void*)0;
struct sNode* __dec_obj131;
struct tuple2$2char$phsNode$ph* __result_obj__125;
    if(    self==(void*)0) {
        __result_obj__124 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__124,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__124;
    }
    result_248=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj130=result_248->v1,
        result_248->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj131=result_248->v2,
        result_248->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__125 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(result_248);
    /*c*/ come_call_finalizer3(result_248,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__125,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__125;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_249;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_250;
    it_249=self->head;
    while(    it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*c*/ come_call_finalizer3(prev_it_250,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStructInitializer_finalize(struct sStructInitializer* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->initializer,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_255;
struct tuple2$2char$phsNode$ph* __result_obj__129;
struct tuple2$2char$phsNode$ph* __result_obj__130;
struct tuple2$2char$phsNode$ph* result_256;
struct tuple2$2char$phsNode$ph* __result_obj__131;
result_255 = (void*)0;
result_256 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_255,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__129 = result_255;
        return __result_obj__129;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__130 = self->it->item;
        return __result_obj__130;
    }
    memset(&result_256,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__131 = result_256;
    return __result_obj__131;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_258;
struct tuple2$2char$phsNode$ph* __result_obj__132;
struct tuple2$2char$phsNode$ph* __result_obj__133;
struct tuple2$2char$phsNode$ph* result_259;
struct tuple2$2char$phsNode$ph* __result_obj__134;
result_258 = (void*)0;
result_259 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_258,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__132 = result_258;
        return __result_obj__132;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__133 = self->it->item;
        return __result_obj__133;
    }
    memset(&result_259,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__134 = result_259;
    return __result_obj__134;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_struct_initializer(struct sInfo* info){
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* initializer_265;
void* __right_value400 = (void*)0;
char* name_266;
_Bool no_comma_267;
void* __right_value401 = (void*)0;
struct sNode* exp_268;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
_Bool no_comma_270;
void* __right_value404 = (void*)0;
struct sNode* exp_271;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* name_272;
_Bool no_comma_273;
void* __right_value408 = (void*)0;
struct sNode* exp_274;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
_Bool no_comma_275;
void* __right_value411 = (void*)0;
struct sNode* exp_276;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sNode* _inf_value4;
struct sStructInitializer* _inf_obj_value4;
void* __right_value419 = (void*)0;
struct sNode* __result_obj__140;
    expected_next_character(123,info);
    initializer_265=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "07var.c", 1156, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    if(    *info->p==46) {
        info->p++;
        skip_spaces_and_lf(info);
        name_266=(char*)come_increment_ref_count(parse_word(info));
        expected_next_character(61,info);
        no_comma_267=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_268=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_267;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_265,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1171, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_266),(struct sNode*)come_increment_ref_count(exp_268))));
        (name_266 = come_decrement_ref_count(name_266, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((exp_268) ? exp_268 = come_decrement_ref_count(exp_268, ((struct sNode*)exp_268)->finalize, ((struct sNode*)exp_268)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        no_comma_270=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_271=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_270;
        list$1tuple2$2char$phsNode$ph$ph_add(initializer_265,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1179, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_271))));
        ((exp_271) ? exp_271 = come_decrement_ref_count(exp_271, ((struct sNode*)exp_271)->finalize, ((struct sNode*)exp_271)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    while(    *info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(        *info->p==125) {
            break;
        }
        if(        *info->p==46) {
            info->p++;
            skip_spaces_and_lf(info);
            name_272=(char*)come_increment_ref_count(parse_word(info));
            expected_next_character(61,info);
            no_comma_273=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_274=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_273;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_265,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "07var.c", 1205, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(name_272),(struct sNode*)come_increment_ref_count(exp_274))));
            (name_272 = come_decrement_ref_count(name_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((exp_274) ? exp_274 = come_decrement_ref_count(exp_274, ((struct sNode*)exp_274)->finalize, ((struct sNode*)exp_274)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            no_comma_275=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_276=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_275;
            list$1tuple2$2char$phsNode$ph$ph_add(initializer_265,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "07var.c", 1213, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_276))));
            ((exp_276) ? exp_276 = come_decrement_ref_count(exp_276, ((struct sNode*)exp_276)->finalize, ((struct sNode*)exp_276)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    expected_next_character(125,info);
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1219, "struct sNode");
    _inf_obj_value4=(struct sStructInitializer*)come_increment_ref_count(((struct sStructInitializer*)(__right_value415=sStructInitializer_initialize((struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "07var.c", 1219, "struct sStructInitializer*")),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(initializer_265),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sStructInitializer_finalize;
    _inf_value4->clone=(void*)sStructInitializer_clone;
    _inf_value4->compile=(void*)sStructInitializer_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sStructInitializer_kind;
    __result_obj__140 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value419=_inf_value4)));
    /*c*/ come_call_finalizer3(initializer_265,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value415,sStructInitializer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value419) ? __right_value419 = come_decrement_ref_count(__right_value419, ((struct sNode*)__right_value419)->finalize, ((struct sNode*)__right_value419)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__140;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_269;
    result_269=0;
    result_269+=int_get_hash_key(((int)self->v1));
    result_269+=int_get_hash_key(((int)self->v2));
    return result_269;
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
char* __dec_obj135;
struct sNode* __dec_obj136;
struct tuple2$2char$phsNode$ph* __result_obj__137;
    __dec_obj135=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj136=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__137 = (struct tuple2$2char$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__137,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__137;
}

static struct sStructInitializer* sStructInitializer_clone(struct sStructInitializer* self){
struct sStructInitializer* __result_obj__138;
void* __right_value416 = (void*)0;
struct sStructInitializer* result_277;
void* __right_value417 = (void*)0;
char* __dec_obj137;
void* __right_value418 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj138;
struct sStructInitializer* __result_obj__139;
    if(    self==(void*)0) {
        __result_obj__138 = (void*)0;
        return __result_obj__138;
    }
    result_277=(struct sStructInitializer*)come_increment_ref_count((struct sStructInitializer*)come_calloc_v2(1, sizeof(struct sStructInitializer)*(1), "sStructInitializer_clone", 3, "struct sStructInitializer*"));
    if(    self!=((void*)0)) {
        result_277->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_277->sname,
        result_277->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructInitializer_clone", 5, "char*"));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_277->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj138=result_277->initializer,
        result_277->initializer=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_clone(self->initializer));
        /*b*/ come_call_finalizer3(__dec_obj138,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__139 = result_277;
    /*c*/ come_call_finalizer3(result_277,sStructInitializer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__139;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param, _Bool comma){
void* __right_value420 = (void*)0;
struct sVar* self_278;
void* __right_value421 = (void*)0;
char* __dec_obj139;
void* __right_value422 = (void*)0;
struct sType* __dec_obj140;
void* __right_value423 = (void*)0;
char* __dec_obj141;
void* __right_value424 = (void*)0;
char* __dec_obj142;
void* __right_value425 = (void*)0;
char* __dec_obj143;
char* __dec_obj144;
void* __right_value434 = (void*)0;
    self_278=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1224, "struct sVar*"));
    __dec_obj139=self_278->mName,
    self_278->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj140=self_278->mType,
    self_278->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    if(    function_param) {
        __dec_obj141=self_278->mCValueName,
        self_278->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        static int n_279=0;
        __dec_obj142=self_278->mCValueName,
        self_278->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_279++));
        __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    self_278->mAllocaValue=(_Bool)0;
    self_278->mNoFree=(_Bool)0;
    if(    info->come_fun) {
        __dec_obj143=self_278->mFunName,
        self_278->mFunName=(char*)come_increment_ref_count((char*)come_memdup(info->come_fun->mName, "07var.c", 1240, "char*"));
        __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj144=self_278->mFunName,
        self_278->mFunName=((void*)0);
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    self_278->mComma=comma;
    map$2char$phsVar$ph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_278));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_278,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_insert(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_295;
unsigned int it_296;
_Bool same_key_exist_297;
char* it2_298;
struct map$2char$phsVar$ph* __result_obj__148;
    if(    self->len*10>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_295=string_get_hash_key(((char*)key))%self->size;
    it_296=hash_295;
    while(    (_Bool)1) {
        if(        self->item_existance[it_296]) {
            if(            string_equals(self->keys[it_296],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_296]);
                    (self->keys[it_296] = come_decrement_ref_count(self->keys[it_296], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_296]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_296]);
                    self->keys[it_296]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_296],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_296]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_296]=item;
                }
                break;
            }
            it_296++;
            if(            it_296>=self->size) {
                it_296=0;
            }
            else if(            it_296==hash_295) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_296]=(_Bool)1;
            if(            1) {
                self->keys[it_296]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_296]=key;
            }
            if(            1) {
                self->items[it_296]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_296]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_297=(_Bool)0;
    for(    it2_298=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_298=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_298,key)) {
            same_key_exist_297=(_Bool)1;
        }
    }
    if(    !same_key_exist_297) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__148 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__148;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_280;
void* __right_value426 = (void*)0;
char** keys_281;
void* __right_value427 = (void*)0;
struct sVar** items_282;
void* __right_value428 = (void*)0;
_Bool* item_existance_283;
int len_284;
char* it_287;
struct sVar* default_value_290;
void* __right_value429 = (void*)0;
struct sVar* it2_291;
unsigned int hash_292;
int n_293;
struct sVar* default_value_294;
void* __right_value430 = (void*)0;
default_value_290 = (void*)0;
default_value_294 = (void*)0;
    size_280=self->size*10;
    keys_281=(char**)come_increment_ref_count(((char**)(__right_value426=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_280)), "./comelang.h", 2167, "char**"))));
    items_282=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value427=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_280)), "./comelang.h", 2168, "struct sVar**"))));
    item_existance_283=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value428=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_280)), "./comelang.h", 2169, "_Bool*"))));
    len_284=0;
    for(    it_287=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_287=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_290,0,sizeof(struct sVar*));
        it2_291=((struct sVar*)(__right_value429=map$2char$phsVar$ph_at(self,it_287,(struct sVar*)come_increment_ref_count(default_value_290))));
        /*c*/ come_call_finalizer3(__right_value429,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_292=string_get_hash_key(((char*)it_287))%size_280;
        n_293=hash_292;
        while(        (_Bool)1) {
            if(            item_existance_283[n_293]) {
                n_293++;
                if(                n_293>=size_280) {
                    n_293=0;
                }
                else if(                n_293==hash_292) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_283[n_293]=(_Bool)1;
                keys_281[n_293]=it_287;
                items_282[n_293]=((struct sVar*)(__right_value430=map$2char$phsVar$ph_at(self,it_287,(struct sVar*)come_increment_ref_count(default_value_294))));
                /*c*/ come_call_finalizer3(__right_value430,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_284++;
                /*c*/ come_call_finalizer3(default_value_294,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_294,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_290,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_281;
    self->items=items_282;
    self->item_existance=item_existance_283;
    self->size=size_280;
    self->len=len_284;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_285;
char* __result_obj__141;
char* __result_obj__142;
char* result_286;
char* __result_obj__143;
result_285 = (void*)0;
result_286 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_285,0,sizeof(char*));
        __result_obj__141 = result_285;
        return __result_obj__141;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__142 = self->key_list->it->item;
        return __result_obj__142;
    }
    memset(&result_286,0,sizeof(char*));
    __result_obj__143 = result_286;
    return __result_obj__143;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_288;
char* __result_obj__144;
char* __result_obj__145;
char* result_289;
char* __result_obj__146;
result_288 = (void*)0;
result_289 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_288,0,sizeof(char*));
        __result_obj__144 = result_288;
        return __result_obj__144;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__145 = self->key_list->it->item;
        return __result_obj__145;
    }
    memset(&result_289,0,sizeof(char*));
    __result_obj__146 = result_289;
    return __result_obj__146;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value431 = (void*)0;
struct list_item$1char$ph* litem_299;
char* __dec_obj145;
void* __right_value432 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj146;
void* __right_value433 = (void*)0;
struct list_item$1char$ph* litem_301;
char* __dec_obj147;
struct list$1char$ph* __result_obj__147;
    if(    self->len==0) {
        litem_299=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value431=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_299->prev=((void*)0);
        litem_299->next=((void*)0);
        __dec_obj145=litem_299->item,
        litem_299->item=(char*)come_increment_ref_count(item);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_299;
        self->head=litem_299;
    }
    else if(    self->len==1) {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value432=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_300->prev=self->head;
        litem_300->next=((void*)0);
        __dec_obj146=litem_300->item,
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_300;
        self->head->next=litem_300;
    }
    else {
        litem_301=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value433=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
        litem_301->prev=self->tail;
        litem_301->next=((void*)0);
        __dec_obj147=litem_301->item,
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_301;
        self->tail=litem_301;
    }
    self->len++;
    __result_obj__147 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__147;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value435 = (void*)0;
struct sVar* self_302;
void* __right_value436 = (void*)0;
char* __dec_obj148;
void* __right_value437 = (void*)0;
struct sType* __dec_obj149;
void* __right_value438 = (void*)0;
char* __dec_obj150;
void* __right_value439 = (void*)0;
    self_302=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1253, "struct sVar*"));
    __dec_obj148=self_302->mName,
    self_302->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj149=self_302->mType,
    self_302->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_302->mGlobal=(_Bool)1;
    __dec_obj150=self_302->mCValueName,
    self_302->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_302->mAllocaValue=(_Bool)0;
    self_302->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_302));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_302,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value440 = (void*)0;
struct sVar* self_303;
void* __right_value441 = (void*)0;
char* __dec_obj151;
void* __right_value442 = (void*)0;
struct sType* __dec_obj152;
void* __right_value443 = (void*)0;
char* __dec_obj153;
void* __right_value444 = (void*)0;
    self_303=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "07var.c", 1270, "struct sVar*"));
    __dec_obj151=self_303->mName,
    self_303->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj152=self_303->mType,
    self_303->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /*b*/ come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self_303->mGlobal=(_Bool)1;
    __dec_obj153=self_303->mCValueName,
    self_303->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self_303->mAllocaValue=(_Bool)0;
    self_303->mNoFree=(_Bool)0;
    map$2char$phsVar$ph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_303));
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(self_303,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
int sline_real_304;
_Bool is_type_name_flag_305;
_Bool multiple_declare_306;
char* p_307;
int sline_308;
void* __right_value445 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* type_309=0;
char* name_310=0;
_Bool err_311=0;
void* __right_value446 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var5 = (void*)0;
struct sType* type_312=0;
char* name_313=0;
void* __right_value447 = (void*)0;
_Bool no_output_err_314;
_Bool no_comma_315;
_Bool no_output_come_code_316;
void* __right_value448 = (void*)0;
struct sNode* exp_317;
_Bool attr_define_318;
char* p_319;
int sline_320;
void* __right_value449 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_321=0;
char* name_322=0;
_Bool err_323=0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct sFun* fun_324;
void* __right_value453 = (void*)0;
char* buf2_325;
struct list$1char$ph* multiple_assign_326;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1char$ph* __dec_obj154;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
char* buf3_327;
void* __right_value458 = (void*)0;
_Bool no_comma_328;
void* __right_value459 = (void*)0;
struct sNode* right_value_329;
void* __right_value460 = (void*)0;
struct sNode* __dec_obj155;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value465 = (void*)0;
struct sNode* node_330;
struct sNode* __result_obj__149;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sNode* _inf_value6;
struct sNewChannel* _inf_obj_value6;
void* __right_value470 = (void*)0;
struct sNode* node_331;
struct sNode* __result_obj__152;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare_333;
void* __right_value473 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* base_type_334=0;
char* name_335=0;
_Bool err_336=0;
void* __right_value474 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var8 = (void*)0;
struct sType* type2_337=0;
char* var_name_338=0;
_Bool no_comma_339;
void* __right_value475 = (void*)0;
struct sNode* exp_340;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
_Bool no_comma_353;
void* __right_value481 = (void*)0;
struct sNode* exp_354;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_357=0;
char* var_name_358=0;
_Bool no_comma_359;
void* __right_value490 = (void*)0;
struct sNode* exp_360;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
_Bool no_comma_361;
void* __right_value493 = (void*)0;
struct sNode* exp_362;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* right_node_363;
void* __right_value498 = (void*)0;
char* var_name2_364;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* _inf_value7;
struct sStoreNode* _inf_obj_value7;
void* __right_value503 = (void*)0;
struct sNode* node_365;
struct sNode* __result_obj__158;
void* __right_value504 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type_366=0;
char* name_367=0;
_Bool err_368=0;
void* __right_value505 = (void*)0;
char* __dec_obj167;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value517 = (void*)0;
struct sNode* self_node_374;
void* __right_value518 = (void*)0;
struct sNode* right_node_375;
void* __right_value519 = (void*)0;
struct sNode* node_376;
struct sNode* __result_obj__163;
void* __right_value520 = (void*)0;
struct sNode* __result_obj__164;
void* __right_value521 = (void*)0;
struct sNode* right_value_377;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value527 = (void*)0;
struct sNode* node_378;
struct sNode* __result_obj__165;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
_Bool _elif_conditional1;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* _inf_value10;
struct sLoadNode* _inf_obj_value10;
void* __right_value534 = (void*)0;
struct sNode* node_379;
void* __right_value535 = (void*)0;
struct sNode* __dec_obj176;
struct sNode* __result_obj__166;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sNode* _inf_value11;
struct sLoadNode* _inf_obj_value11;
void* __right_value539 = (void*)0;
struct sNode* node_380;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj177;
struct sNode* __result_obj__167;
char* word_381;
void* __right_value541 = (void*)0;
char* __dec_obj178;
void* __right_value542 = (void*)0;
char* __dec_obj179;
_Bool is_type_name_flag_382;
void* __right_value543 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var11 = (void*)0;
struct sType* type_383=0;
char* name_384=0;
_Bool err_385=0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* _inf_value12;
struct sLoadNode* _inf_obj_value12;
void* __right_value546 = (void*)0;
struct sNode* node_386;
struct sNode* __result_obj__168;
struct sNode* right_value_387;
_Bool no_comma_388;
void* __right_value547 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value548 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sNode* _inf_value13;
struct sStoreNode* _inf_obj_value13;
void* __right_value553 = (void*)0;
struct sNode* node_389;
struct sNode* __result_obj__169;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sNode* _inf_value14;
struct sStoreNode* _inf_obj_value14;
void* __right_value557 = (void*)0;
struct sNode* node_390;
struct sNode* __result_obj__170;
word_381 = (void*)0;
    sline_real_304=info->sline_real;
    info->sline_real=head_sline;
    is_type_name_flag_305=is_type_name(buf,info);
    multiple_declare_306=(_Bool)0;
    if(    is_type_name_flag_305) {
        p_307=info->p;
        sline_308=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            parse_sharp_v5(info);
            multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value445=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_309=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
            name_310=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            err_311=multiple_assign_var4->v3;
            /*c*/ come_call_finalizer3(__right_value445,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            err_311) {
                parse_sharp_v5(info);
                multiple_assign_var5=((struct tuple2$2sType$phchar$ph*)(__right_value446=parse_variable_name((struct sType*)come_increment_ref_count(type_309),(_Bool)1,info)));
                type_312=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                name_313=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*c*/ come_call_finalizer3(__right_value446,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==123) {
                        ((char*)(__right_value447=skip_block(info,(_Bool)0)));
                        (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        no_output_err_314=info->no_output_err;
                        no_comma_315=info->no_comma;
                        no_output_come_code_316=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_317=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_315;
                        info->no_output_err=no_output_err_314;
                        info->no_output_come_code=no_output_come_code_316;
                        ((exp_317) ? exp_317 = come_decrement_ref_count(exp_317, ((struct sNode*)exp_317)->finalize, ((struct sNode*)exp_317)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                }
                if(                !is_type_name(name_313,info)&&*info->p==44) {
                    multiple_declare_306=(_Bool)1;
                }
                /*c*/ come_call_finalizer3(type_312,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_313 = come_decrement_ref_count(name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(type_309,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_310 = come_decrement_ref_count(name_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_307;
        info->sline=sline_308;
    }
    attr_define_318=(_Bool)0;
    if(    is_type_name_flag_305&&info->defining_class) {
        p_319=info->p;
        sline_320=info->sline;
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value449=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_321=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_322=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_323=multiple_assign_var6->v3;
        /*c*/ come_call_finalizer3(__right_value449,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        err_323&&strmemcmp(info->p,"self")) {
            attr_define_318=(_Bool)1;
        }
        info->p=p_319;
        info->sline=sline_320;
        /*c*/ come_call_finalizer3(type_321,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_322 = come_decrement_ref_count(name_322, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    fun_324=((struct sFun*)(__right_value452=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value451=__builtin_string(buf))))));
    (__right_value450 = come_decrement_ref_count(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value451 = come_decrement_ref_count(__right_value451, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value452,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    (!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_325=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_326=((void*)0);
        if(        *info->p==44) {
            __dec_obj154=multiple_assign_326,
            multiple_assign_326=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "07var.c", 1379, "struct list$1char$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj154,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            list$1char$ph_push_back(multiple_assign_326,(char*)come_increment_ref_count((char*)come_memdup(buf2_325, "07var.c", 1380, "char*")));
            while(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_327=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1char$ph_push_back(multiple_assign_326,(char*)come_increment_ref_count((char*)come_memdup(buf3_327, "07var.c", 1390, "char*")));
                (buf3_327 = come_decrement_ref_count(buf3_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        parse_sharp_v5(info);
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_328=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_329=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_328;
            parse_sharp_v5(info);
            __dec_obj155=right_value_329,
            right_value_329=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_329),info));
            (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1409, "struct sNode");
            _inf_obj_value5=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value464=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1409, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf2_325)),(struct list$1char$ph*)come_increment_ref_count(multiple_assign_326),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_329),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sStoreNode_finalize;
            _inf_value5->clone=(void*)sStoreNode_clone;
            _inf_value5->compile=(void*)sStoreNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sStoreNode_kind;
            node_330=(struct sNode*)come_increment_ref_count(_inf_value5);
            /*c*/ come_call_finalizer3(__right_value464,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            info->sline_real=sline_real_304;
            __result_obj__149 = (struct sNode*)come_increment_ref_count(node_330);
            ((right_value_329) ? right_value_329 = come_decrement_ref_count(right_value_329, ((struct sNode*)right_value_329)->finalize, ((struct sNode*)right_value_329)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_330) ? node_330 = come_decrement_ref_count(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (buf2_325 = come_decrement_ref_count(buf2_325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(multiple_assign_326,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__149) ? __result_obj__149 = come_decrement_ref_count(__result_obj__149, ((struct sNode*)__result_obj__149)->finalize, ((struct sNode*)__result_obj__149)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__149;
            ((right_value_329) ? right_value_329 = come_decrement_ref_count(right_value_329, ((struct sNode*)right_value_329)->finalize, ((struct sNode*)right_value_329)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_330) ? node_330 = come_decrement_ref_count(node_330, ((struct sNode*)node_330)->finalize, ((struct sNode*)node_330)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        (buf2_325 = come_decrement_ref_count(buf2_325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(multiple_assign_326,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    gComePthread&&charp_operator_equals(buf,"__channel__")) {
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1419, "struct sNode");
        _inf_obj_value6=(struct sNewChannel*)come_increment_ref_count(((struct sNewChannel*)(__right_value467=sNewChannel_initialize((struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "07var.c", 1419, "struct sNewChannel*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sNewChannel_finalize;
        _inf_value6->clone=(void*)sNewChannel_clone;
        _inf_value6->compile=(void*)sNewChannel_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sNewChannel_kind;
        node_331=(struct sNode*)come_increment_ref_count(_inf_value6);
        /*c*/ come_call_finalizer3(__right_value467,sNewChannel_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_304;
        __result_obj__152 = (struct sNode*)come_increment_ref_count(node_331);
        ((node_331) ? node_331 = come_decrement_ref_count(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__152) ? __result_obj__152 = come_decrement_ref_count(__result_obj__152, ((struct sNode*)__result_obj__152)->finalize, ((struct sNode*)__result_obj__152)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__152;
        ((node_331) ? node_331 = come_decrement_ref_count(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    multiple_declare_306) {
        info->p=head;
        info->sline=head_sline;
        multiple_declare_333=(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(list$1tuple3$3sType$phchar$phsNode$ph$ph_initialize((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "07var.c", 1427, "struct list$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        parse_sharp_v5(info);
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value473=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        base_type_334=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        name_335=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_336=multiple_assign_var7->v3;
        /*c*/ come_call_finalizer3(__right_value473,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_336) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        parse_sharp_v5(info);
        multiple_assign_var8=((struct tuple2$2sType$phchar$ph*)(__right_value474=parse_variable_name((struct sType*)come_increment_ref_count(base_type_334),(_Bool)1,info)));
        type2_337=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        var_name_338=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        /*c*/ come_call_finalizer3(__right_value474,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        *info->p==61) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            type2_337->mClass->mStruct&&list$1sNode$ph_length(type2_337->mArrayNum)==0) {
                info->struct_initializer=(_Bool)1;
                no_comma_339=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_340=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_339;
                info->struct_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_333,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1454, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_337),(char*)come_increment_ref_count(var_name_338),(struct sNode*)come_increment_ref_count(exp_340))));
                ((exp_340) ? exp_340 = come_decrement_ref_count(exp_340, ((struct sNode*)exp_340)->finalize, ((struct sNode*)exp_340)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                info->array_initializer=(_Bool)1;
                no_comma_353=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_354=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_353;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_333,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1464, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_337),(char*)come_increment_ref_count(var_name_338),(struct sNode*)come_increment_ref_count(exp_354))));
                ((exp_354) ? exp_354 = come_decrement_ref_count(exp_354, ((struct sNode*)exp_354)->finalize, ((struct sNode*)exp_354)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_333,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1468, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_337),(char*)come_increment_ref_count(var_name_338),((void*)0))));
        }
        while(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value489=parse_variable_name((struct sType*)come_increment_ref_count(base_type_334),(_Bool)0,info)));
            type2_357=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            var_name_358=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            /*c*/ come_call_finalizer3(__right_value489,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type2_357->mClass->mStruct&&list$1sNode$ph_length(type2_357->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_359=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_360=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_359;
                    info->struct_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_333,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1490, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_357),(char*)come_increment_ref_count(var_name_358),(struct sNode*)come_increment_ref_count(exp_360))));
                    ((exp_360) ? exp_360 = come_decrement_ref_count(exp_360, ((struct sNode*)exp_360)->finalize, ((struct sNode*)exp_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    no_comma_361=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_362=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_361;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_333,(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(tuple3$3sType$phchar$phsNode$ph_initialize((struct tuple3$3sType$phchar$phsNode$ph**)come_increment_ref_count((struct tuple3$3sType$phchar$phsNode$ph*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phsNode$ph)*(1), "07var.c", 1502, "struct tuple3$3sType$phchar$phsNode$ph")),(struct sType*)come_increment_ref_count(type2_357),(char*)come_increment_ref_count(var_name_358),(struct sNode*)come_increment_ref_count(exp_362))));
                    ((exp_362) ? exp_362 = come_decrement_ref_count(exp_362, ((struct sNode*)exp_362)->finalize, ((struct sNode*)exp_362)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
            }
            else {
                list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(multiple_declare_333,(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(tuple3$3sType$phchar$phvoid$p_initialize((struct tuple3$3sType$phchar$phvoid$p**)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "07var.c", 1506, "struct tuple3$3sType$phchar$phvoid$p")),(struct sType*)come_increment_ref_count(type2_357),(char*)come_increment_ref_count(var_name_358),((void*)0))));
            }
            /*c*/ come_call_finalizer3(type2_357,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_358 = come_decrement_ref_count(var_name_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        right_node_363=((void*)0);
        var_name2_364=(char*)come_increment_ref_count(__builtin_string(""));
        _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1513, "struct sNode");
        _inf_obj_value7=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value502=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1513, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(multiple_declare_333),(struct sType*)come_increment_ref_count(base_type_334),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sStoreNode_finalize;
        _inf_value7->clone=(void*)sStoreNode_clone;
        _inf_value7->compile=(void*)sStoreNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sStoreNode_kind;
        node_365=(struct sNode*)come_increment_ref_count(_inf_value7);
        /*c*/ come_call_finalizer3(__right_value502,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_304;
        __result_obj__158 = (struct sNode*)come_increment_ref_count(node_365);
        /*c*/ come_call_finalizer3(multiple_declare_333,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_334,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_335 = come_decrement_ref_count(name_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_338 = come_decrement_ref_count(var_name_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_363) ? right_node_363 = come_decrement_ref_count(right_node_363, ((struct sNode*)right_node_363)->finalize, ((struct sNode*)right_node_363)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_364 = come_decrement_ref_count(var_name2_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_365) ? node_365 = come_decrement_ref_count(node_365, ((struct sNode*)node_365)->finalize, ((struct sNode*)node_365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__158) ? __result_obj__158 = come_decrement_ref_count(__result_obj__158, ((struct sNode*)__result_obj__158)->finalize, ((struct sNode*)__result_obj__158)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__158;
        /*c*/ come_call_finalizer3(multiple_declare_333,list$1tuple3$3sType$phchar$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(base_type_334,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_335 = come_decrement_ref_count(name_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_337,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_338 = come_decrement_ref_count(var_name_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((right_node_363) ? right_node_363 = come_decrement_ref_count(right_node_363, ((struct sNode*)right_node_363)->finalize, ((struct sNode*)right_node_363)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (var_name2_364 = come_decrement_ref_count(var_name2_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_365) ? node_365 = come_decrement_ref_count(node_365, ((struct sNode*)node_365)->finalize, ((struct sNode*)node_365)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    attr_define_318) {
        info->p=head;
        info->sline=head_sline;
        parse_sharp_v5(info);
        multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value504=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_366=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name_367=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_368=multiple_assign_var10->v3;
        /*c*/ come_call_finalizer3(__right_value504,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        parse_sharp_v5(info);
        if(        !err_368) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        info->p+=strlen("self.");
        __dec_obj167=name_367,
        name_367=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        list$1tuple2$2char$phsType$ph$ph_add(info->defining_class->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "07var.c", 1536, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_367),(struct sType*)come_increment_ref_count(type_366))));
        if(        *info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1544, "struct sNode");
            _inf_obj_value8=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value516=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1544, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sLoadNode_finalize;
            _inf_value8->clone=(void*)sLoadNode_clone;
            _inf_value8->compile=(void*)sLoadNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sLoadNode_terminated;
            _inf_value8->kind=(void*)sLoadNode_kind;
            self_node_374=(struct sNode*)come_increment_ref_count(_inf_value8);
            /*c*/ come_call_finalizer3(__right_value516,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            right_node_375=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node_376=(struct sNode*)come_increment_ref_count(store_field(self_node_374,(struct sNode*)come_increment_ref_count(right_node_375),(char*)come_increment_ref_count(name_367),info));
            info->sline_real=sline_real_304;
            __result_obj__163 = (struct sNode*)come_increment_ref_count(node_376);
            ((self_node_374) ? self_node_374 = come_decrement_ref_count(self_node_374, ((struct sNode*)self_node_374)->finalize, ((struct sNode*)self_node_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_375) ? right_node_375 = come_decrement_ref_count(right_node_375, ((struct sNode*)right_node_375)->finalize, ((struct sNode*)right_node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_376) ? node_376 = come_decrement_ref_count(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(type_366,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_367 = come_decrement_ref_count(name_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__163) ? __result_obj__163 = come_decrement_ref_count(__result_obj__163, ((struct sNode*)__result_obj__163)->finalize, ((struct sNode*)__result_obj__163)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__163;
            ((self_node_374) ? self_node_374 = come_decrement_ref_count(self_node_374, ((struct sNode*)self_node_374)->finalize, ((struct sNode*)self_node_374)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_node_375) ? right_node_375 = come_decrement_ref_count(right_node_375, ((struct sNode*)right_node_375)->finalize, ((struct sNode*)right_node_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((node_376) ? node_376 = come_decrement_ref_count(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            info->sline_real=sline_real_304;
            __result_obj__164 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value520=create_null_node(info))));
            /*c*/ come_call_finalizer3(type_366,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_367 = come_decrement_ref_count(name_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__right_value520) ? __right_value520 = come_decrement_ref_count(__right_value520, ((struct sNode*)__right_value520)->finalize, ((struct sNode*)__right_value520)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__164) ? __result_obj__164 = come_decrement_ref_count(__result_obj__164, ((struct sNode*)__result_obj__164)->finalize, ((struct sNode*)__result_obj__164)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__164;
        }
        /*c*/ come_call_finalizer3(type_366,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_367 = come_decrement_ref_count(name_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !is_type_name_flag_305&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62&&!info->no_assign) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_377=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj175=right_value_377,
        right_value_377=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_377),info));
        (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1569, "struct sNode");
        _inf_obj_value9=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value526=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1569, "struct sStoreNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_377),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStoreNode_finalize;
        _inf_value9->clone=(void*)sStoreNode_clone;
        _inf_value9->compile=(void*)sStoreNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStoreNode_kind;
        node_378=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*c*/ come_call_finalizer3(__right_value526,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        info->sline_real=sline_real_304;
        __result_obj__165 = (struct sNode*)come_increment_ref_count(node_378);
        ((right_value_377) ? right_value_377 = come_decrement_ref_count(right_value_377, ((struct sNode*)right_value_377)->finalize, ((struct sNode*)right_value_377)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_378) ? node_378 = come_decrement_ref_count(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__165) ? __result_obj__165 = come_decrement_ref_count(__result_obj__165, ((struct sNode*)__result_obj__165)->finalize, ((struct sNode*)__result_obj__165)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__165;
        ((right_value_377) ? right_value_377 = come_decrement_ref_count(right_value_377, ((struct sNode*)right_value_377)->finalize, ((struct sNode*)right_value_377)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_378) ? node_378 = come_decrement_ref_count(node_378, ((struct sNode*)node_378)->finalize, ((struct sNode*)node_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (_elif_conditional1=(!is_type_name_flag_305||((struct sFun*)(__right_value530=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value529=__builtin_string(buf)))))))),    (__right_value528 = come_decrement_ref_count(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value530,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _elif_conditional1) {
        _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1574, "struct sNode");
        _inf_obj_value10=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value533=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1574, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sLoadNode_finalize;
        _inf_value10->clone=(void*)sLoadNode_clone;
        _inf_value10->compile=(void*)sLoadNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sLoadNode_terminated;
        _inf_value10->kind=(void*)sLoadNode_kind;
        node_379=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*c*/ come_call_finalizer3(__right_value533,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj176=node_379,
        node_379=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_379),info));
        (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_304;
        __result_obj__166 = (struct sNode*)come_increment_ref_count(node_379);
        ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__166) ? __result_obj__166 = come_decrement_ref_count(__result_obj__166, ((struct sNode*)__result_obj__166)->finalize, ((struct sNode*)__result_obj__166)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__166;
        ((node_379) ? node_379 = come_decrement_ref_count(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    !is_type_name_flag_305) {
        _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1582, "struct sNode");
        _inf_obj_value11=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value538=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1582, "struct sLoadNode*")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sLoadNode_finalize;
        _inf_value11->clone=(void*)sLoadNode_clone;
        _inf_value11->compile=(void*)sLoadNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sLoadNode_terminated;
        _inf_value11->kind=(void*)sLoadNode_kind;
        node_380=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*c*/ come_call_finalizer3(__right_value538,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj177=node_380,
        node_380=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_380),info));
        (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        info->sline_real=sline_real_304;
        __result_obj__167 = (struct sNode*)come_increment_ref_count(node_380);
        ((node_380) ? node_380 = come_decrement_ref_count(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__167) ? __result_obj__167 = come_decrement_ref_count(__result_obj__167, ((struct sNode*)__result_obj__167)->finalize, ((struct sNode*)__result_obj__167)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__167;
        ((node_380) ? node_380 = come_decrement_ref_count(node_380, ((struct sNode*)node_380)->finalize, ((struct sNode*)node_380)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        info->p=head;
        info->sline=head_sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj178=word_381,
            word_381=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj179=word_381,
            word_381=(char*)come_increment_ref_count(__builtin_string(""));
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        is_type_name_flag_382=is_type_name(word_381,info);
        info->p=head;
        info->sline=head_sline;
        if(        is_type_name_flag_382) {
            parse_sharp_v5(info);
            multiple_assign_var11=((struct tuple3$3sType$phchar$phbool$*)(__right_value543=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type_383=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_384=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_385=multiple_assign_var11->v3;
            /*c*/ come_call_finalizer3(__right_value543,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            parse_sharp_v5(info);
            if(            !err_385) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            if(            *info->p==61&&*(info->p+1)!=62&&info->no_assign) {
                _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1619, "struct sNode");
                _inf_obj_value12=(struct sLoadNode*)come_increment_ref_count(((struct sLoadNode*)(__right_value545=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc_v2(1, sizeof(struct sLoadNode)*(1), "07var.c", 1619, "struct sLoadNode*")),(char*)come_increment_ref_count(name_384),info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sLoadNode_finalize;
                _inf_value12->clone=(void*)sLoadNode_clone;
                _inf_value12->compile=(void*)sLoadNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sLoadNode_terminated;
                _inf_value12->kind=(void*)sLoadNode_kind;
                node_386=(struct sNode*)come_increment_ref_count(_inf_value12);
                /*c*/ come_call_finalizer3(__right_value545,sLoadNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_304;
                __result_obj__168 = (struct sNode*)come_increment_ref_count(node_386);
                ((node_386) ? node_386 = come_decrement_ref_count(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_384 = come_decrement_ref_count(name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_381 = come_decrement_ref_count(word_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__168) ? __result_obj__168 = come_decrement_ref_count(__result_obj__168, ((struct sNode*)__result_obj__168)->finalize, ((struct sNode*)__result_obj__168)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__168;
                ((node_386) ? node_386 = come_decrement_ref_count(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            *info->p==61&&*(info->p+1)!=62&&!info->no_assign) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_value_387=((void*)0);
                if(                type_383->mClass->mStruct&&list$1sNode$ph_length(type_383->mArrayNum)==0) {
                    info->struct_initializer=(_Bool)1;
                    no_comma_388=info->no_comma;
                    info->no_comma=(_Bool)1;
                    __dec_obj180=right_value_387,
                    right_value_387=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    info->no_comma=no_comma_388;
                    info->struct_initializer=(_Bool)0;
                }
                else {
                    info->array_initializer=(_Bool)1;
                    parse_sharp_v5(info);
                    __dec_obj181=right_value_387,
                    right_value_387=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    parse_sharp_v5(info);
                    info->array_initializer=(_Bool)0;
                }
                __dec_obj182=right_value_387,
                right_value_387=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_387),info));
                (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1648, "struct sNode");
                _inf_obj_value13=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value552=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1648, "struct sStoreNode*")),(char*)come_increment_ref_count(name_384),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_383),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_387),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sStoreNode_finalize;
                _inf_value13->clone=(void*)sStoreNode_clone;
                _inf_value13->compile=(void*)sStoreNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sStoreNode_kind;
                node_389=(struct sNode*)come_increment_ref_count(_inf_value13);
                /*c*/ come_call_finalizer3(__right_value552,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_304;
                __result_obj__169 = (struct sNode*)come_increment_ref_count(node_389);
                ((right_value_387) ? right_value_387 = come_decrement_ref_count(right_value_387, ((struct sNode*)right_value_387)->finalize, ((struct sNode*)right_value_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_389) ? node_389 = come_decrement_ref_count(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_384 = come_decrement_ref_count(name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_381 = come_decrement_ref_count(word_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__169) ? __result_obj__169 = come_decrement_ref_count(__result_obj__169, ((struct sNode*)__result_obj__169)->finalize, ((struct sNode*)__result_obj__169)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__169;
                ((right_value_387) ? right_value_387 = come_decrement_ref_count(right_value_387, ((struct sNode*)right_value_387)->finalize, ((struct sNode*)right_value_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_389) ? node_389 = come_decrement_ref_count(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1653, "struct sNode");
                _inf_obj_value14=(struct sStoreNode*)come_increment_ref_count(((struct sStoreNode*)(__right_value556=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc_v2(1, sizeof(struct sStoreNode)*(1), "07var.c", 1653, "struct sStoreNode*")),(char*)come_increment_ref_count(name_384),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_383),(_Bool)1,((void*)0),info,(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sStoreNode_finalize;
                _inf_value14->clone=(void*)sStoreNode_clone;
                _inf_value14->compile=(void*)sStoreNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sStoreNode_kind;
                node_390=(struct sNode*)come_increment_ref_count(_inf_value14);
                /*c*/ come_call_finalizer3(__right_value556,sStoreNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->sline_real=sline_real_304;
                __result_obj__170 = (struct sNode*)come_increment_ref_count(node_390);
                ((node_390) ? node_390 = come_decrement_ref_count(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(type_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_384 = come_decrement_ref_count(name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (word_381 = come_decrement_ref_count(word_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__170) ? __result_obj__170 = come_decrement_ref_count(__result_obj__170, ((struct sNode*)__result_obj__170)->finalize, ((struct sNode*)__result_obj__170)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__170;
                ((node_390) ? node_390 = come_decrement_ref_count(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            /*c*/ come_call_finalizer3(type_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_384 = come_decrement_ref_count(name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (word_381 = come_decrement_ref_count(word_381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    err_msg(info,"unexpected word(%s)(1)",buf);
    exit(2);
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

static struct sNewChannel* sNewChannel_clone(struct sNewChannel* self){
struct sNewChannel* __result_obj__150;
void* __right_value468 = (void*)0;
struct sNewChannel* result_332;
void* __right_value469 = (void*)0;
char* __dec_obj156;
struct sNewChannel* __result_obj__151;
    if(    self==(void*)0) {
        __result_obj__150 = (void*)0;
        return __result_obj__150;
    }
    result_332=(struct sNewChannel*)come_increment_ref_count((struct sNewChannel*)come_calloc_v2(1, sizeof(struct sNewChannel)*(1), "sNewChannel_clone", 3, "struct sNewChannel*"));
    if(    self!=((void*)0)) {
        result_332->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj156=result_332->sname,
        result_332->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNewChannel_clone", 5, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_332->sline_real=self->sline_real;
    }
    __result_obj__151 = result_332;
    /*c*/ come_call_finalizer3(result_332,sNewChannel_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__151;
}

static struct list$1tuple3$3sType$phchar$phsNode$ph$ph* list$1tuple3$3sType$phchar$phsNode$ph$ph_push_back(struct list$1tuple3$3sType$phchar$phsNode$ph$ph* self, struct tuple3$3sType$phchar$phsNode$ph* item){
void* __right_value476 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_341;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj157;
void* __right_value477 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_342;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj158;
void* __right_value478 = (void*)0;
struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* litem_343;
struct tuple3$3sType$phchar$phsNode$ph* __dec_obj159;
struct list$1tuple3$3sType$phchar$phsNode$ph$ph* __result_obj__153;
    if(    self->len==0) {
        litem_341=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value476=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1113, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj157=litem_341->item,
        litem_341->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj157,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value477=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1123, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj158=litem_342->item,
        litem_342->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj158,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)(__right_value478=(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph)*(1), "./comelang.h", 1133, "struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph*"))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj159=litem_343->item,
        litem_343->item=(struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj159,tuple3$3sType$phchar$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result_obj__153 = self;
    /*c*/ come_call_finalizer3(item,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__153;
}

static unsigned int tuple3$3sType$phchar$phsNode$ph_get_hash_key(struct tuple3$3sType$phchar$phsNode$ph* self){
unsigned int result_344;
    result_344=0;
    result_344+=int_get_hash_key(((int)self->v1));
    result_344+=int_get_hash_key(((int)self->v2));
    result_344+=int_get_hash_key(((int)self->v3));
    return result_344;
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
    if(    !bool_equals(left->mDefferRightValue,right->mDefferRightValue)) {
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
    if(    !bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
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
    if(    !bool_equals(left->mUniq,right->mUniq)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_345;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_346;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_345=left->head;
    it2_346=right->head;
    while(    it_345!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_345->item,it2_346->item)) {
            return (_Bool)0;
        }
        it_345=it_345->next;
        it2_346=it2_346->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_347;
struct list_item$1sType$ph* it2_348;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_347=left->head;
    it2_348=right->head;
    while(    it_347!=((void*)0)) {
        if(        !sType_equals(it_347->item,it2_348->item)) {
            return (_Bool)0;
        }
        it_347=it_347->next;
        it2_348=it2_348->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_349;
struct list_item$1sNode$ph* it2_350;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_349=left->head;
    it2_350=right->head;
    while(    it_349!=((void*)0)) {
        if(        !sNode_equals(it_349->item,it2_350->item)) {
            return (_Bool)0;
        }
        it_349=it_349->next;
        it2_350=it2_350->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_351;
struct list_item$1char$ph* it2_352;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_351=left->head;
    it2_352=right->head;
    while(    it_351!=((void*)0)) {
        if(        !string_equals(it_351->item,it2_352->item)) {
            return (_Bool)0;
        }
        it_351=it_351->next;
        it2_352=it2_352->next;
    }
    return (_Bool)1;
}

static struct tuple3$3sType$phchar$phsNode$ph* tuple3$3sType$phchar$phsNode$ph_initialize(struct tuple3$3sType$phchar$phsNode$ph* self, struct sType* v1, char* v2, struct sNode* v3){
struct sType* __dec_obj160;
char* __dec_obj161;
struct sNode* __dec_obj162;
struct tuple3$3sType$phchar$phsNode$ph* __result_obj__154;
    __dec_obj160=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj160,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj161=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj162=self->v3,
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__154 = (struct tuple3$3sType$phchar$phsNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v3) ? v3 = come_decrement_ref_count(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__154,tuple3$3sType$phchar$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__154;
}

static void tuple3$3sType$phchar$phvoid$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3sType$phchar$phvoid$p* tuple3$3sType$phchar$phvoid$p_clone(struct tuple3$3sType$phchar$phvoid$p* self){
struct tuple3$3sType$phchar$phvoid$p* __result_obj__155;
void* __right_value484 = (void*)0;
struct tuple3$3sType$phchar$phvoid$p* result_355;
void* __right_value485 = (void*)0;
struct sType* __dec_obj163;
void* __right_value486 = (void*)0;
char* __dec_obj164;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__156;
    if(    self==(void*)0) {
        __result_obj__155 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__155,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__155;
    }
    result_355=(struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count((struct tuple3$3sType$phchar$phvoid$p*)come_calloc_v2(1, sizeof(struct tuple3$3sType$phchar$phvoid$p)*(1), "tuple3$3sType$phchar$phvoid$p_clone", 3, "struct tuple3$3sType$phchar$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj163=result_355->v1,
        result_355->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj164=result_355->v2,
        result_355->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple3$3sType$phchar$phvoid$p_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_355->v3=self->v3;
    }
    __result_obj__156 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(result_355);
    /*c*/ come_call_finalizer3(result_355,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__156,tuple3$3sType$phchar$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__156;
}

static unsigned int tuple3$3sType$phchar$phvoid$p_get_hash_key(struct tuple3$3sType$phchar$phvoid$p* self){
unsigned int result_356;
    result_356=0;
    result_356+=int_get_hash_key(((int)self->v1));
    result_356+=int_get_hash_key(((int)self->v2));
    result_356+=int_get_hash_key(((int)self->v3));
    return result_356;
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
struct sType* __dec_obj165;
char* __dec_obj166;
struct tuple3$3sType$phchar$phvoid$p* __result_obj__157;
    __dec_obj165=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj166=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v3=v3;
    __result_obj__157 = (struct tuple3$3sType$phchar$phvoid$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__157,tuple3$3sType$phchar$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__157;
}

static void tuple3$3sType$phchar$phvoid$p$p_finalize(struct tuple3$3sType$phchar$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value506 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_369;
struct tuple2$2char$phsType$ph* __dec_obj168;
void* __right_value507 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_370;
struct tuple2$2char$phsType$ph* __dec_obj169;
void* __right_value508 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_371;
struct tuple2$2char$phsType$ph* __dec_obj170;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__159;
    if(    self->len==0) {
        litem_369=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value506=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_369->prev=((void*)0);
        litem_369->next=((void*)0);
        __dec_obj168=litem_369->item,
        litem_369->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj168,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_369;
        self->head=litem_369;
    }
    else if(    self->len==1) {
        litem_370=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value507=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_370->prev=self->head;
        litem_370->next=((void*)0);
        __dec_obj169=litem_370->item,
        litem_370->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj169,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_370;
        self->head->next=litem_370;
    }
    else {
        litem_371=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value508=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_371->prev=self->tail;
        litem_371->next=((void*)0);
        __dec_obj170=litem_371->item,
        litem_371->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj170,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_371;
        self->tail=litem_371;
    }
    self->len++;
    __result_obj__159 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__159;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsType$ph* __result_obj__160;
void* __right_value509 = (void*)0;
struct tuple2$2char$phsType$ph* result_372;
void* __right_value510 = (void*)0;
char* __dec_obj171;
void* __right_value511 = (void*)0;
struct sType* __dec_obj172;
struct tuple2$2char$phsType$ph* __result_obj__161;
    if(    self==(void*)0) {
        __result_obj__160 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__160,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__160;
    }
    result_372=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj171=result_372->v1,
        result_372->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj172=result_372->v2,
        result_372->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /*b*/ come_call_finalizer3(__dec_obj172,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__161 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(result_372);
    /*c*/ come_call_finalizer3(result_372,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__161,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__161;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_373;
    result_373=0;
    result_373+=int_get_hash_key(((int)self->v1));
    result_373+=int_get_hash_key(((int)self->v2));
    return result_373;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj173;
struct sType* __dec_obj174;
struct tuple2$2char$phsType$ph* __result_obj__162;
    __dec_obj173=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj174=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__162 = (struct tuple2$2char$phsType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__162,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__162;
}

struct sNode* expression_node_v95(struct sInfo* info){
struct sNode* node_391;
void* __right_value558 = (void*)0;
struct sNode* exp_392;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value15;
struct sReadChannelNode* _inf_obj_value15;
void* __right_value564 = (void*)0;
struct sNode* __result_obj__173;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj185;
struct sNode* __result_obj__174;
node_391 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=strlen("<-");
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        exp_392=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1679, "struct sNode");
        _inf_obj_value15=(struct sReadChannelNode*)come_increment_ref_count(((struct sReadChannelNode*)(__right_value560=sReadChannelNode_initialize((struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "07var.c", 1679, "struct sReadChannelNode*")),(struct sNode*)come_increment_ref_count(exp_392),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sReadChannelNode_finalize;
        _inf_value15->clone=(void*)sReadChannelNode_clone;
        _inf_value15->compile=(void*)sReadChannelNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sline_real=(void*)sNodeBase_sline_real;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sReadChannelNode_kind;
        __result_obj__173 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value564=_inf_value15)));
        ((exp_392) ? exp_392 = come_decrement_ref_count(exp_392, ((struct sNode*)exp_392)->finalize, ((struct sNode*)exp_392)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node_391) ? node_391 = come_decrement_ref_count(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value560,sReadChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value564) ? __right_value564 = come_decrement_ref_count(__right_value564, ((struct sNode*)__right_value564)->finalize, ((struct sNode*)__right_value564)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__173;
        ((exp_392) ? exp_392 = come_decrement_ref_count(exp_392, ((struct sNode*)exp_392)->finalize, ((struct sNode*)exp_392)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        __dec_obj185=node_391,
        node_391=(struct sNode*)come_increment_ref_count(expression_node_v1(info));
        (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__174 = (struct sNode*)come_increment_ref_count(node_391);
    ((node_391) ? node_391 = come_decrement_ref_count(node_391, ((struct sNode*)node_391)->finalize, ((struct sNode*)node_391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__174) ? __result_obj__174 = come_decrement_ref_count(__result_obj__174, ((struct sNode*)__result_obj__174)->finalize, ((struct sNode*)__result_obj__174)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__174;
}

static struct sReadChannelNode* sReadChannelNode_clone(struct sReadChannelNode* self){
struct sReadChannelNode* __result_obj__171;
void* __right_value561 = (void*)0;
struct sReadChannelNode* result_393;
void* __right_value562 = (void*)0;
char* __dec_obj183;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj184;
struct sReadChannelNode* __result_obj__172;
    if(    self==(void*)0) {
        __result_obj__171 = (void*)0;
        return __result_obj__171;
    }
    result_393=(struct sReadChannelNode*)come_increment_ref_count((struct sReadChannelNode*)come_calloc_v2(1, sizeof(struct sReadChannelNode)*(1), "sReadChannelNode_clone", 3, "struct sReadChannelNode*"));
    if(    self!=((void*)0)) {
        result_393->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj183=result_393->sname,
        result_393->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sReadChannelNode_clone", 5, "char*"));
        __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_393->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj184=result_393->exp,
        result_393->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__172 = result_393;
    /*c*/ come_call_finalizer3(result_393,sReadChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__172;
}

struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info){
void* __right_value566 = (void*)0;
struct sNode* right_value_394;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj186;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* _inf_value16;
struct sWriteChannelNode* _inf_obj_value16;
void* __right_value574 = (void*)0;
struct sNode* __result_obj__177;
void* __right_value575 = (void*)0;
struct sNode* __result_obj__178;
    if(    !node->terminated(node->_protocol_obj)&&strncmp(info->p,"<-",strlen("<-"))==0) {
        info->p+=2;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        right_value_394=(struct sNode*)come_increment_ref_count(expression_v13(info));
        parse_sharp_v5(info);
        __dec_obj186=right_value_394,
        right_value_394=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_394),info));
        (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        parse_sharp_v5(info);
        _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "07var.c", 1702, "struct sNode");
        _inf_obj_value16=(struct sWriteChannelNode*)come_increment_ref_count(((struct sWriteChannelNode*)(__right_value569=sWriteChannelNode_initialize((struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "07var.c", 1702, "struct sWriteChannelNode*")),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_value_394),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sWriteChannelNode_finalize;
        _inf_value16->clone=(void*)sWriteChannelNode_clone;
        _inf_value16->compile=(void*)sWriteChannelNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sline_real=(void*)sNodeBase_sline_real;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sWriteChannelNode_kind;
        __result_obj__177 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value574=_inf_value16)));
        ((right_value_394) ? right_value_394 = come_decrement_ref_count(right_value_394, ((struct sNode*)right_value_394)->finalize, ((struct sNode*)right_value_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value569,sWriteChannelNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value574) ? __right_value574 = come_decrement_ref_count(__right_value574, ((struct sNode*)__right_value574)->finalize, ((struct sNode*)__right_value574)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__177) ? __result_obj__177 = come_decrement_ref_count(__result_obj__177, ((struct sNode*)__result_obj__177)->finalize, ((struct sNode*)__result_obj__177)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__177;
        ((right_value_394) ? right_value_394 = come_decrement_ref_count(right_value_394, ((struct sNode*)right_value_394)->finalize, ((struct sNode*)right_value_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__178 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value575=post_position_operator((struct sNode*)come_increment_ref_count(node),info))));
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__right_value575) ? __right_value575 = come_decrement_ref_count(__right_value575, ((struct sNode*)__right_value575)->finalize, ((struct sNode*)__right_value575)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__178) ? __result_obj__178 = come_decrement_ref_count(__result_obj__178, ((struct sNode*)__result_obj__178)->finalize, ((struct sNode*)__result_obj__178)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__178;
}

static struct sWriteChannelNode* sWriteChannelNode_clone(struct sWriteChannelNode* self){
struct sWriteChannelNode* __result_obj__175;
void* __right_value570 = (void*)0;
struct sWriteChannelNode* result_395;
void* __right_value571 = (void*)0;
char* __dec_obj187;
void* __right_value572 = (void*)0;
struct sNode* __dec_obj188;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj189;
struct sWriteChannelNode* __result_obj__176;
    if(    self==(void*)0) {
        __result_obj__175 = (void*)0;
        return __result_obj__175;
    }
    result_395=(struct sWriteChannelNode*)come_increment_ref_count((struct sWriteChannelNode*)come_calloc_v2(1, sizeof(struct sWriteChannelNode)*(1), "sWriteChannelNode_clone", 3, "struct sWriteChannelNode*"));
    if(    self!=((void*)0)) {
        result_395->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result_395->sname,
        result_395->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sWriteChannelNode_clone", 5, "char*"));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_395->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj188=result_395->exp,
        result_395->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj189=result_395->right_value,
        result_395->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        (__dec_obj189 ? __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__176 = result_395;
    /*c*/ come_call_finalizer3(result_395,sWriteChannelNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__176;
}

