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

struct tuple2$2int$bool$
{
    int v1;
    _Bool v2;
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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
};

struct tuple2$2void$psNode$ph
{
    void* v1;
    struct sNode* v2;
};

struct sStoreFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};

struct sNullCheckNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};

struct sNullableNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sLoadFieldNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    char* mName;
};

struct sStoreArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNode$ph* mArrayNum;
    _Bool mQuote;
};

struct sLoadArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};

struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
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
struct tuple2$2int$bool$* err_msg(struct sInfo* info, char* msg, ...);
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
struct tuple3$3char$phsFun$psGenericsFun$p* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self);
static _Bool tuple3$3char$phsFun$psGenericsFun$p_equals(struct tuple3$3char$phsFun$psGenericsFun$p* left, struct tuple3$3char$phsFun$psGenericsFun$p* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3);
static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self);
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self);
static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self);
static _Bool tuple2$2void$psNode$ph_equals(struct tuple2$2void$psNode$ph* left, struct tuple2$2void$psNode$ph* right);
static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_initialize(struct tuple2$2void$psNode$ph* self, void* v1, struct sNode* v2);
static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
struct tuple3$3char$phsFun$psGenericsFun$p* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
char* fun_name2_0;
struct sFun* operator_fun_1;
struct sGenericsFun* generics_fun_2;
void* __right_value0 = (void*)0;
char* none_generics_name_3;
void* __right_value1 = (void*)0;
struct sType* obj_type_4;
void* __right_value2 = (void*)0;
char* __dec_obj1;
void* __right_value3 = (void*)0;
char* fun_name3_5;
void* __right_value4 = (void*)0;
void* __right_value42 = (void*)0;
struct sType* no_solved_type_14;
struct sType* __dec_obj25;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_38=0;
_Bool err_39=0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
char* __dec_obj26;
int i_46;
void* __right_value48 = (void*)0;
char* new_fun_name_47;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
char* __dec_obj27;
void* __right_value51 = (void*)0;
void* __right_value57 = (void*)0;
void* __right_value58 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__44;
memset(&i_46, 0, sizeof(int));
    fun_name2_0=((void*)0);
    operator_fun_1=((void*)0);
    generics_fun_2=((void*)0);
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_3=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_4=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj1=fun_name2_0,
        fun_name2_0=(char*)come_increment_ref_count(create_method_name(obj_type_4,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_5=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_3,fun_name));
        generics_fun_2=((struct sGenericsFun*)(__right_value4=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_5,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value4,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_2) {
            no_solved_type_14=(struct sType*)come_increment_ref_count(sType_clone(type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj25=no_solved_type_14,
                no_solved_type_14=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value44=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_0)),generics_fun_2,obj_type_4,info)));
            name_38=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_39=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value44,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_39) {
                exit(1);
            }
            operator_fun_1=((struct sFun*)(__right_value45=map$2char$phsFun$ph_operator_load_element(info->funcs,name_38)));
            /*c*/ come_call_finalizer3(__right_value45,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(no_solved_type_14,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_38 = come_decrement_ref_count(name_38, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            operator_fun_1=((struct sFun*)(__right_value46=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_0)));
            /*c*/ come_call_finalizer3(__right_value46,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_3 = come_decrement_ref_count(none_generics_name_3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_4,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_5 = come_decrement_ref_count(fun_name3_5, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj26=fun_name2_0,
        fun_name2_0=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_46=128-1;        i_46>=1;        i_46--        ){
            new_fun_name_47=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_0,i_46));
            operator_fun_1=((struct sFun*)(__right_value49=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_47)));
            /*c*/ come_call_finalizer3(__right_value49,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_1) {
                __dec_obj27=fun_name2_0,
                fun_name2_0=(char*)come_increment_ref_count(__builtin_string(new_fun_name_47));
                __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_47 = come_decrement_ref_count(new_fun_name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_47 = come_decrement_ref_count(new_fun_name_47, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_1==((void*)0)) {
            operator_fun_1=((struct sFun*)(__right_value51=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_0)));
            /*c*/ come_call_finalizer3(__right_value51,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __result_obj__44 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value58=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p**)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "18field.c", 59, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(fun_name2_0),operator_fun_1,generics_fun_2))));
    (fun_name2_0 = come_decrement_ref_count(fun_name2_0, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value58,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__44,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__44;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_6;
unsigned int it_7;
struct sGenericsFun* __result_obj__1;
struct sGenericsFun* __result_obj__2;
struct sGenericsFun* __result_obj__3;
struct sGenericsFun* __result_obj__4;
    hash_6=string_get_hash_key(((char*)key))%self->size;
    it_7=hash_6;
    while(    (_Bool)1) {
        if(        self->item_existance[it_7]) {
            if(            string_equals(self->keys[it_7],key)) {
                __result_obj__1 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_7]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__1,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__1;
            }
            it_7++;
            if(            it_7>=self->size) {
                it_7=0;
            }
            else if(            it_7==hash_6) {
                __result_obj__2 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__2,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__2;
            }
        }
        else {
            __result_obj__3 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__3,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__3;
        }
    }
    __result_obj__4 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__4,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__4;
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
struct list_item$1sType$ph* it_8;
struct list_item$1sType$ph* prev_it_9;
    it_8=self->head;
    while(    it_8!=((void*)0)) {
        prev_it_9=it_8;
        it_8=it_8->next;
        /*c*/ come_call_finalizer3(prev_it_9,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_10;
struct list_item$1sNode$ph* prev_it_11;
    it_10=self->head;
    while(    it_10!=((void*)0)) {
        prev_it_11=it_10;
        it_10=it_10->next;
        /*c*/ come_call_finalizer3(prev_it_11,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_12;
struct list_item$1char$ph* prev_it_13;
    it_12=self->head;
    while(    it_12!=((void*)0)) {
        prev_it_13=it_12;
        it_12=it_12->next;
        /*c*/ come_call_finalizer3(prev_it_13,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__5;
void* __right_value5 = (void*)0;
struct sType* result_15;
void* __right_value6 = (void*)0;
struct sType* __dec_obj2;
void* __right_value7 = (void*)0;
struct sType* __dec_obj3;
void* __right_value15 = (void*)0;
struct list$1sType$ph* __dec_obj7;
void* __right_value16 = (void*)0;
struct sType* __dec_obj8;
void* __right_value18 = (void*)0;
struct sNode* __dec_obj9;
void* __right_value19 = (void*)0;
struct sNode* __dec_obj10;
void* __right_value20 = (void*)0;
char* __dec_obj11;
void* __right_value21 = (void*)0;
char* __dec_obj12;
void* __right_value22 = (void*)0;
char* __dec_obj13;
void* __right_value30 = (void*)0;
struct list$1sNode$ph* __dec_obj17;
void* __right_value31 = (void*)0;
char* __dec_obj18;
void* __right_value32 = (void*)0;
struct list$1sType$ph* __dec_obj19;
void* __right_value40 = (void*)0;
struct list$1char$ph* __dec_obj23;
void* __right_value41 = (void*)0;
struct sType* __dec_obj24;
struct sType* __result_obj__20;
    if(    self==(void*)0) {
        __result_obj__5 = (void*)0;
        return __result_obj__5;
    }
    result_15=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_15->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj2=result_15->mOriginalLoadVarType,
        result_15->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj2,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj3=result_15->mChannelType,
        result_15->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj3,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj7=result_15->mGenericsTypes,
        result_15->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj7,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj8=result_15->mNoSolvedGenericsType,
        result_15->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj8,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj9=result_15->mSizeNum,
        result_15->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj10=result_15->mAlignas,
        result_15->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj10 ? __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj11=result_15->mTupleName,
        result_15->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 11, "char*"));
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj12=result_15->mAttribute,
        result_15->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 12, "char*"));
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_15->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_15->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_15->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_15->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_15->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_15->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_15->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_15->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_15->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_15->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_15->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_15->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_15->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_15->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_15->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_15->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_15->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_15->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_15->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_15->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_15->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_15->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_15->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj13=result_15->mAsmName,
        result_15->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 36, "char*"));
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_15->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_15->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_15->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj17=result_15->mArrayNum,
        result_15->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj17,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_15->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_15->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_15->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_15->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_15->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj18=result_15->mOriginalTypeName,
        result_15->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 46, "char*"));
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_15->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_15->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_15->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_15->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj19=result_15->mParamTypes,
        result_15->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj19,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj23=result_15->mParamNames,
        result_15->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj24=result_15->mResultType,
        result_15->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_15->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_15->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__20 = result_15;
    /*c*/ come_call_finalizer3(result_15,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__20;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__6;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct list$1sType$ph* result_16;
struct list_item$1sType$ph* it_17;
void* __right_value13 = (void*)0;
void* __right_value14 = (void*)0;
struct list$1sType$ph* __result_obj__9;
    if(    self==((void*)0)) {
        __result_obj__6 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__6,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__6;
    }
    result_16=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_17=self->head;
    while(    it_17!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_16,(struct sType*)come_increment_ref_count(sType_clone(it_17->item)));
        }
        else {
            list$1sType$ph_add(result_16,(struct sType*)come_increment_ref_count(sType_clone(it_17->item)));
        }
        it_17=it_17->next;
    }
    __result_obj__9 = (struct list$1sType$ph*)come_increment_ref_count(result_16);
    /*c*/ come_call_finalizer3(result_16,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__9,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__9;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__7;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__7 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__7,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__7;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value10 = (void*)0;
struct list_item$1sType$ph* litem_18;
struct sType* __dec_obj4;
void* __right_value11 = (void*)0;
struct list_item$1sType$ph* litem_19;
struct sType* __dec_obj5;
void* __right_value12 = (void*)0;
struct list_item$1sType$ph* litem_20;
struct sType* __dec_obj6;
struct list$1sType$ph* __result_obj__8;
    if(    self->len==0) {
        litem_18=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value10=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_18->prev=((void*)0);
        litem_18->next=((void*)0);
        __dec_obj4=litem_18->item,
        litem_18->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj4,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_18;
        self->head=litem_18;
    }
    else if(    self->len==1) {
        litem_19=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value11=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_19->prev=self->head;
        litem_19->next=((void*)0);
        __dec_obj5=litem_19->item,
        litem_19->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj5,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_19;
        self->head->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value12=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_20->prev=self->tail;
        litem_20->next=((void*)0);
        __dec_obj6=litem_20->item,
        litem_20->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj6,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_20;
        self->tail=litem_20;
    }
    self->len++;
    __result_obj__8 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__8;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_21;
struct list_item$1sType$ph* prev_it_22;
    it_21=self->head;
    while(    it_21!=((void*)0)) {
        prev_it_22=it_21;
        it_21=it_21->next;
        /*c*/ come_call_finalizer3(prev_it_22,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__10;
void* __right_value17 = (void*)0;
struct sNode* result_23;
struct sNode* __result_obj__11;
    if(    self==(void*)0) {
        __result_obj__10 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__10) ? __result_obj__10 = come_decrement_ref_count(__result_obj__10, ((struct sNode*)__result_obj__10)->finalize, ((struct sNode*)__result_obj__10)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__10;
    }
    result_23=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_23->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_23->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_23->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_23->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_23->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_23->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_23->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_23->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_23->kind=self->kind;
    }
    __result_obj__11 = (struct sNode*)come_increment_ref_count(result_23);
    ((result_23) ? result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__11) ? __result_obj__11 = come_decrement_ref_count(__result_obj__11, ((struct sNode*)__result_obj__11)->finalize, ((struct sNode*)__result_obj__11)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__11;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__12;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
struct list$1sNode$ph* result_24;
struct list_item$1sNode$ph* it_25;
void* __right_value28 = (void*)0;
void* __right_value29 = (void*)0;
struct list$1sNode$ph* __result_obj__15;
    if(    self==((void*)0)) {
        __result_obj__12 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__12,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__12;
    }
    result_24=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_25=self->head;
    while(    it_25!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_24,(struct sNode*)come_increment_ref_count(sNode_clone(it_25->item)));
        }
        else {
            list$1sNode$ph_add(result_24,(struct sNode*)come_increment_ref_count(sNode_clone(it_25->item)));
        }
        it_25=it_25->next;
    }
    __result_obj__15 = (struct list$1sNode$ph*)come_increment_ref_count(result_24);
    /*c*/ come_call_finalizer3(result_24,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__15,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__15;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__13;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__13 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__13,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__13;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value25 = (void*)0;
struct list_item$1sNode$ph* litem_26;
struct sNode* __dec_obj14;
void* __right_value26 = (void*)0;
struct list_item$1sNode$ph* litem_27;
struct sNode* __dec_obj15;
void* __right_value27 = (void*)0;
struct list_item$1sNode$ph* litem_28;
struct sNode* __dec_obj16;
struct list$1sNode$ph* __result_obj__14;
    if(    self->len==0) {
        litem_26=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value25=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_26->prev=((void*)0);
        litem_26->next=((void*)0);
        __dec_obj14=litem_26->item,
        litem_26->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj14 ? __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_26;
        self->head=litem_26;
    }
    else if(    self->len==1) {
        litem_27=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value26=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_27->prev=self->head;
        litem_27->next=((void*)0);
        __dec_obj15=litem_27->item,
        litem_27->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj15 ? __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_27;
        self->head->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value27=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_28->prev=self->tail;
        litem_28->next=((void*)0);
        __dec_obj16=litem_28->item,
        litem_28->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj16 ? __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_28;
        self->tail=litem_28;
    }
    self->len++;
    __result_obj__14 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__14;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_29;
struct list_item$1sNode$ph* prev_it_30;
    it_29=self->head;
    while(    it_29!=((void*)0)) {
        prev_it_30=it_29;
        it_29=it_29->next;
        /*c*/ come_call_finalizer3(prev_it_30,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__16;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct list$1char$ph* result_31;
struct list_item$1char$ph* it_32;
void* __right_value38 = (void*)0;
void* __right_value39 = (void*)0;
struct list$1char$ph* __result_obj__19;
    if(    self==((void*)0)) {
        __result_obj__16 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__16,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__16;
    }
    result_31=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_32=self->head;
    while(    it_32!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_31,(char*)come_increment_ref_count((char*)come_memdup(it_32->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_31,(char*)come_increment_ref_count((char*)come_memdup(it_32->item, "./comelang.h", 1032, "char*")));
        }
        it_32=it_32->next;
    }
    __result_obj__19 = (struct list$1char$ph*)come_increment_ref_count(result_31);
    /*c*/ come_call_finalizer3(result_31,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__19,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__19;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__17;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__17 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__17,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__17;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value35 = (void*)0;
struct list_item$1char$ph* litem_33;
char* __dec_obj20;
void* __right_value36 = (void*)0;
struct list_item$1char$ph* litem_34;
char* __dec_obj21;
void* __right_value37 = (void*)0;
struct list_item$1char$ph* litem_35;
char* __dec_obj22;
struct list$1char$ph* __result_obj__18;
    if(    self->len==0) {
        litem_33=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value35=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_33->prev=((void*)0);
        litem_33->next=((void*)0);
        __dec_obj20=litem_33->item,
        litem_33->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_33;
        self->head=litem_33;
    }
    else if(    self->len==1) {
        litem_34=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value36=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        __dec_obj21=litem_34->item,
        litem_34->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        litem_35=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value37=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        __dec_obj22=litem_35->item,
        litem_35->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
    __result_obj__18 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__18;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_36;
struct list_item$1char$ph* prev_it_37;
    it_36=self->head;
    while(    it_36!=((void*)0)) {
        prev_it_37=it_36;
        it_36=it_36->next;
        /*c*/ come_call_finalizer3(prev_it_37,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_40;
unsigned int hash_41;
unsigned int it_42;
struct sFun* __result_obj__21;
struct sFun* __result_obj__22;
struct sFun* __result_obj__23;
struct sFun* __result_obj__24;
default_value_40 = (void*)0;
    memset(&default_value_40,0,sizeof(struct sFun*));
    hash_41=string_get_hash_key(((char*)key))%self->size;
    it_42=hash_41;
    while(    (_Bool)1) {
        if(        self->item_existance[it_42]) {
            if(            string_equals(self->keys[it_42],key)) {
                __result_obj__21 = (struct sFun*)come_increment_ref_count(self->items[it_42]);
                /*c*/ come_call_finalizer3(default_value_40,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__21,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__21;
            }
            it_42++;
            if(            it_42>=self->size) {
                it_42=0;
            }
            else if(            it_42==hash_41) {
                __result_obj__22 = (struct sFun*)come_increment_ref_count(default_value_40);
                /*c*/ come_call_finalizer3(default_value_40,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__22,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__22;
            }
        }
        else {
            __result_obj__23 = (struct sFun*)come_increment_ref_count(default_value_40);
            /*c*/ come_call_finalizer3(default_value_40,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__23,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__23;
        }
    }
    __result_obj__24 = (struct sFun*)come_increment_ref_count(default_value_40);
    /*c*/ come_call_finalizer3(default_value_40,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__24,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__24;
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
struct sFun* default_value_43;
unsigned int hash_44;
unsigned int it_45;
struct sFun* __result_obj__25;
struct sFun* __result_obj__26;
struct sFun* __result_obj__27;
struct sFun* __result_obj__28;
default_value_43 = (void*)0;
    memset(&default_value_43,0,sizeof(struct sFun*));
    hash_44=string_get_hash_key(((char*)key))%self->size;
    it_45=hash_44;
    while(    (_Bool)1) {
        if(        self->item_existance[it_45]) {
            if(            string_equals(self->keys[it_45],key)) {
                __result_obj__25 = (struct sFun*)come_increment_ref_count(self->items[it_45]);
                /*c*/ come_call_finalizer3(default_value_43,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__25,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__25;
            }
            it_45++;
            if(            it_45>=self->size) {
                it_45=0;
            }
            else if(            it_45==hash_44) {
                __result_obj__26 = (struct sFun*)come_increment_ref_count(default_value_43);
                /*c*/ come_call_finalizer3(default_value_43,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__26,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__26;
            }
        }
        else {
            __result_obj__27 = (struct sFun*)come_increment_ref_count(default_value_43);
            /*c*/ come_call_finalizer3(default_value_43,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__27,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__27;
        }
    }
    __result_obj__28 = (struct sFun*)come_increment_ref_count(default_value_43);
    /*c*/ come_call_finalizer3(default_value_43,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__28,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__28;
}

static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self){
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__29;
void* __right_value52 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* result_48;
void* __right_value53 = (void*)0;
char* __dec_obj28;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__30;
    if(    self==(void*)0) {
        __result_obj__29 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__29,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__29;
    }
    result_48=(struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "tuple3$3char$phsFun$psGenericsFun$p_clone", 3, "struct tuple3$3char$phsFun$psGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj28=result_48->v1,
        result_48->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple3$3char$phsFun$psGenericsFun$p_clone", 4, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_48->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_48->v3=self->v3;
    }
    __result_obj__30 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(result_48);
    /*c*/ come_call_finalizer3(result_48,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__30,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__30;
}

static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self){
unsigned int result_49;
    result_49=0;
    result_49+=int_get_hash_key(((int)self->v1));
    result_49+=int_get_hash_key(((int)self->v2));
    result_49+=int_get_hash_key(((int)self->v3));
    return result_49;
}

static _Bool tuple3$3char$phsFun$psGenericsFun$p_equals(struct tuple3$3char$phsFun$psGenericsFun$p* left, struct tuple3$3char$phsFun$psGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTextBlock,right->mTextBlock)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTextBlockSName,right->mTextBlockSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mTextBlockSline,right->mTextBlockSline)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mConstFun,right->mConstFun)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenericsFun,right->mGenericsFun)) {
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
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_50;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_51;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_50=left->head;
    it2_51=right->head;
    while(    it_50!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_50->item,it2_51->item)) {
            return (_Bool)0;
        }
        it_50=it_50->next;
        it2_51=it2_51->next;
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
struct list_item$1sType$ph* it_52;
struct list_item$1sType$ph* it2_53;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_52=left->head;
    it2_53=right->head;
    while(    it_52!=((void*)0)) {
        if(        !sType_equals(it_52->item,it2_53->item)) {
            return (_Bool)0;
        }
        it_52=it_52->next;
        it2_53=it2_53->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_54;
struct list_item$1sNode$ph* it2_55;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_54=left->head;
    it2_55=right->head;
    while(    it_54!=((void*)0)) {
        if(        !sNode_equals(it_54->item,it2_55->item)) {
            return (_Bool)0;
        }
        it_54=it_54->next;
        it2_55=it2_55->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_56;
struct list_item$1char$ph* it2_57;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_56=left->head;
    it2_57=right->head;
    while(    it_56!=((void*)0)) {
        if(        !string_equals(it_56->item,it2_57->item)) {
            return (_Bool)0;
        }
        it_56=it_56->next;
        it2_57=it2_57->next;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNode$ph_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2char$phsVar$ph_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right){
int n_58;
_Bool result_59;
char* it_62;
char* default_value_65;
void* __right_value54 = (void*)0;
char* it2_66;
struct sVar* default_value2_69;
void* __right_value55 = (void*)0;
struct sVar* item_70;
void* __right_value56 = (void*)0;
struct sVar* item2_73;
default_value_65 = (void*)0;
default_value2_69 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_58=0;
    result_59=(_Bool)1;
    for(    it_62=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_62=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_65,0,sizeof(char*));
        it2_66=((char*)(__right_value54=list$1char$ph_item(right->key_list,n_58,default_value_65)));
        (__right_value54 = come_decrement_ref_count(__right_value54, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_62,it2_66)) {
            memset(&default_value2_69,0,sizeof(struct sVar*));
            item_70=((struct sVar*)(__right_value55=map$2char$phsVar$ph_at(left,it_62,(struct sVar*)come_increment_ref_count(default_value2_69))));
            /*c*/ come_call_finalizer3(__right_value55,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_73=((struct sVar*)(__right_value56=map$2char$phsVar$ph_at(right,it2_66,(struct sVar*)come_increment_ref_count(default_value2_69))));
            /*c*/ come_call_finalizer3(__right_value56,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_70,item2_73)) {
                result_59=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_69,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_59=(_Bool)0;
        }
        n_58++;
        (default_value_65 = come_decrement_ref_count(default_value_65, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_59;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_60;
char* __result_obj__31;
char* __result_obj__32;
char* result_61;
char* __result_obj__33;
result_60 = (void*)0;
result_61 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_60,0,sizeof(char*));
        __result_obj__31 = result_60;
        return __result_obj__31;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__32 = self->it->item;
        return __result_obj__32;
    }
    memset(&result_61,0,sizeof(char*));
    __result_obj__33 = result_61;
    return __result_obj__33;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_63;
char* __result_obj__34;
char* __result_obj__35;
char* result_64;
char* __result_obj__36;
result_63 = (void*)0;
result_64 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_63,0,sizeof(char*));
        __result_obj__34 = result_63;
        return __result_obj__34;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__35 = self->it->item;
        return __result_obj__35;
    }
    memset(&result_64,0,sizeof(char*));
    __result_obj__36 = result_64;
    return __result_obj__36;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_67;
int i_68;
char* __result_obj__37;
char* __result_obj__38;
    if(    position<0) {
        position+=self->len;
    }
    it_67=self->head;
    i_68=0;
    while(    it_67!=((void*)0)) {
        if(        position==i_68) {
            __result_obj__37 = (char*)come_increment_ref_count(it_67->item);
            (__result_obj__37 = come_decrement_ref_count(__result_obj__37, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__37;
        }
        it_67=it_67->next;
        i_68++;
    }
    __result_obj__38 = (char*)come_increment_ref_count(default_value);
    (__result_obj__38 = come_decrement_ref_count(__result_obj__38, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__38;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_71;
unsigned int it_72;
struct sVar* __result_obj__39;
struct sVar* __result_obj__40;
struct sVar* __result_obj__41;
struct sVar* __result_obj__42;
    hash_71=string_get_hash_key(((char*)key))%self->size;
    it_72=hash_71;
    while(    (_Bool)1) {
        if(        self->item_existance[it_72]) {
            if(            string_equals(self->keys[it_72],key)) {
                __result_obj__39 = (struct sVar*)come_increment_ref_count(self->items[it_72]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__39,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__39;
            }
            it_72++;
            if(            it_72>=self->size) {
                it_72=0;
            }
            else if(            it_72==hash_71) {
                __result_obj__40 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__40,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__40;
            }
        }
        else {
            __result_obj__41 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__41,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__41;
        }
    }
    __result_obj__42 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__42,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__42;
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
    if(    !bool_equals(left->mComma,right->mComma)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
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
    if(    !bool_equals(left->mConstFun,right->mConstFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_initialize(struct tuple3$3char$phsFun$psGenericsFun$p* self, char* v1, struct sFun* v2, struct sGenericsFun* v3){
char* __dec_obj29;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__43;
    __dec_obj29=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__43 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__43,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__43;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct sNode* left_node, struct sNode* middle_node, struct sNode* right_node, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value59 = (void*)0;
struct sType* generics_type_74;
struct sType* __dec_obj30;
struct sClass* klass_75;
char* class_name_76;
struct sFun* operator_fun_77;
char* fun_name2_78;
struct sGenericsFun* generics_fun_79;
void* __right_value60 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var2 = (void*)0;
char* fun_name2_80=0;
struct sFun* operator_fun_81=0;
struct sGenericsFun* generics_fun_82=0;
_Bool result_83;
struct sNode* obj_84;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_85;
void* __right_value68 = (void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct sNode* node_93;
_Bool Value_94;
_Bool __result_obj__50;
    generics_type_74=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_74->mNoSolvedGenericsType) {
        __dec_obj30=generics_type_74,
        generics_type_74=(struct sType*)come_increment_ref_count(generics_type_74->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    klass_75=type->mClass;
    class_name_76=klass_75->mName;
    operator_fun_77=((void*)0);
    fun_name2_78=((void*)0);
    generics_fun_79=((void*)0);
    (fun_name2_78 = come_decrement_ref_count(fun_name2_78, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    multiple_assign_var2=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value60=get_operator_function(type,fun_name,info)));
    fun_name2_80=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    operator_fun_81=multiple_assign_var2->v2;
    generics_fun_82=multiple_assign_var2->v3;
    /*c*/ come_call_finalizer3(__right_value60,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    result_83=(_Bool)0;
    if(    operator_fun_81) {
        obj_84=(struct sNode*)come_increment_ref_count(left_node);
        params_85=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "18field.c", 83, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_85,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 85, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(left_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_85,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 86, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(middle_node))));
        list$1tuple2$2char$phsNode$ph$ph_add(params_85,(struct tuple2$2void$psNode$ph*)come_increment_ref_count(tuple2$2void$psNode$ph_initialize((struct tuple2$2void$psNode$ph**)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "18field.c", 87, "struct tuple2$2void$psNode$ph")),((void*)0),(struct sNode*)come_increment_ref_count(right_node))));
        node_93=(struct sNode*)come_increment_ref_count(create_method_call(fun_name,(struct sNode*)come_increment_ref_count(obj_84),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_85),((void*)0),0,((void*)0),(_Bool)0,info));
        Value_94=node_compile(node_93,info);
        if(        Value_94) {
            result_83=(_Bool)1;
        }
        else {
        }
        ((obj_84) ? obj_84 = come_decrement_ref_count(obj_84, ((struct sNode*)obj_84)->finalize, ((struct sNode*)obj_84)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(params_85,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_93) ? node_93 = come_decrement_ref_count(node_93, ((struct sNode*)node_93)->finalize, ((struct sNode*)node_93)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__50 = result_83;
    ((left_node) ? left_node = come_decrement_ref_count(left_node, ((struct sNode*)left_node)->finalize, ((struct sNode*)left_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((middle_node) ? middle_node = come_decrement_ref_count(middle_node, ((struct sNode*)middle_node)->finalize, ((struct sNode*)middle_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_node) ? right_node = come_decrement_ref_count(right_node, ((struct sNode*)right_node)->finalize, ((struct sNode*)right_node)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(generics_type_74,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_80 = come_decrement_ref_count(fun_name2_80, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__50;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__45;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__45 = (struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__45,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__45;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_86;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_87;
    it_86=self->head;
    while(    it_86!=((void*)0)) {
        prev_it_87=it_86;
        it_86=it_86->next;
        /*c*/ come_call_finalizer3(prev_it_87,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value63 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_88;
struct tuple2$2char$phsNode$ph* __dec_obj31;
void* __right_value64 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_89;
struct tuple2$2char$phsNode$ph* __dec_obj32;
void* __right_value65 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_90;
struct tuple2$2char$phsNode$ph* __dec_obj33;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__46;
    if(    self->len==0) {
        litem_88=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value63=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1043, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_88->prev=((void*)0);
        litem_88->next=((void*)0);
        __dec_obj31=litem_88->item,
        litem_88->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj31,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_88;
        self->head=litem_88;
    }
    else if(    self->len==1) {
        litem_89=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value64=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1053, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_89->prev=self->head;
        litem_89->next=((void*)0);
        __dec_obj32=litem_89->item,
        litem_89->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj32,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_89;
        self->head->next=litem_89;
    }
    else {
        litem_90=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value65=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc_v2(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1063, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_90->prev=self->tail;
        litem_90->next=((void*)0);
        __dec_obj33=litem_90->item,
        litem_90->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj33,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_90;
        self->tail=litem_90;
    }
    self->len++;
    __result_obj__46 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__46;
}

static void tuple2$2void$psNode$ph_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2void$psNode$ph* tuple2$2void$psNode$ph_clone(struct tuple2$2void$psNode$ph* self){
struct tuple2$2void$psNode$ph* __result_obj__47;
void* __right_value66 = (void*)0;
struct tuple2$2void$psNode$ph* result_91;
void* __right_value67 = (void*)0;
struct sNode* __dec_obj34;
struct tuple2$2void$psNode$ph* __result_obj__48;
    if(    self==(void*)0) {
        __result_obj__47 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__47,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__47;
    }
    result_91=(struct tuple2$2void$psNode$ph*)come_increment_ref_count((struct tuple2$2void$psNode$ph*)come_calloc_v2(1, sizeof(struct tuple2$2void$psNode$ph)*(1), "tuple2$2void$psNode$ph_clone", 3, "struct tuple2$2void$psNode$ph*"));
    if(    self!=((void*)0)) {
        result_91->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj34=result_91->v2,
        result_91->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__48 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(result_91);
    /*c*/ come_call_finalizer3(result_91,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__48,tuple2$2void$psNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__48;
}

static unsigned int tuple2$2void$psNode$ph_get_hash_key(struct tuple2$2void$psNode$ph* self){
unsigned int result_92;
    result_92=0;
    result_92+=int_get_hash_key(((int)self->v1));
    result_92+=int_get_hash_key(((int)self->v2));
    return result_92;
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
struct sNode* __dec_obj35;
struct tuple2$2void$psNode$ph* __result_obj__49;
    self->v1=v1;
    __dec_obj35=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj35 ? __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__49 = (struct tuple2$2void$psNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__49,tuple2$2void$psNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__49;
}

static void tuple2$2void$psNode$ph$p_finalize(struct tuple2$2void$psNode$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct sNode* __dec_obj36;
void* __right_value77 = (void*)0;
struct sNode* __dec_obj37;
void* __right_value78 = (void*)0;
char* __dec_obj38;
struct sStoreFieldNode* __result_obj__51;
    ((struct sNodeBase*)(__right_value75=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value75,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj36=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj37=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj38=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__51 = (struct sStoreFieldNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__51,sStoreFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__51;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __right_value79 = (void*)0;
char* __result_obj__52;
    __result_obj__52 = (char*)come_increment_ref_count(((char*)(__right_value79=__builtin_string("sStoreFieldNode"))));
    (__right_value79 = come_decrement_ref_count(__right_value79, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__52 = come_decrement_ref_count(__result_obj__52, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__52;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_95;
struct sNode* right_96;
void* __right_value80 = (void*)0;
char* name_97;
_Bool Value_98;
_Bool __result_obj__53;
void* __right_value81 = (void*)0;
struct CVALUE* left_value_99;
struct sType* left_type2_100;
struct sType* __dec_obj39;
int i_101;
void* __right_value82 = (void*)0;
void* __right_value83 = (void*)0;
_Bool _if_conditional1;
void* __right_value84 = (void*)0;
char* __dec_obj40;
_Bool Value_108;
_Bool __result_obj__58;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
_Bool new_channel_109;
void* __right_value87 = (void*)0;
struct CVALUE* right_value_110;
struct sType* right_type_111;
struct sType* left_type_112;
struct sType* left_type3_113;
void* __right_value88 = (void*)0;
struct sClass* klass_114;
struct sType* field_type_123;
int index_124;
char* child_field_name_125;
_Bool child_field_is_pointer_126;
void* __right_value89 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_127;
struct tuple2$2char$phsType$ph* field_130;
struct tuple2$2char$phsType$ph* multiple_assign_var3 = (void*)0;
char* field_name_133=0;
struct sType* field_type2_134=0;
void* __right_value90 = (void*)0;
struct sType* __dec_obj41;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_135;
struct tuple2$2char$phsType$ph* field_136;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* field_name_137=0;
struct sType* field_type2_138=0;
struct sClass* klass2_139;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_140;
struct tuple2$2char$phsType$ph* field2_141;
struct tuple2$2char$phsType$ph* multiple_assign_var5 = (void*)0;
char* field_name2_142=0;
struct sType* field_type3_143=0;
void* __right_value91 = (void*)0;
char* __dec_obj42;
void* __right_value92 = (void*)0;
struct sType* __dec_obj43;
void* __right_value93 = (void*)0;
struct sType* __dec_obj44;
void* __right_value94 = (void*)0;
void* __right_value95 = (void*)0;
void* __right_value96 = (void*)0;
struct CVALUE* come_value_144;
void* __right_value97 = (void*)0;
void* __right_value98 = (void*)0;
void* __right_value99 = (void*)0;
void* __right_value100 = (void*)0;
void* __right_value101 = (void*)0;
_Bool __result_obj__73;
char* c_value_145;
void* __right_value102 = (void*)0;
char* __dec_obj45;
void* __right_value103 = (void*)0;
char* __dec_obj46;
void* __right_value104 = (void*)0;
char* __dec_obj47;
void* __right_value105 = (void*)0;
char* __dec_obj48;
void* __right_value106 = (void*)0;
char* c_value_146;
void* __right_value107 = (void*)0;
char* __dec_obj49;
char* c_value_147;
void* __right_value108 = (void*)0;
char* __dec_obj50;
void* __right_value109 = (void*)0;
char* __dec_obj51;
void* __right_value110 = (void*)0;
char* __dec_obj52;
void* __right_value111 = (void*)0;
char* __dec_obj53;
void* __right_value112 = (void*)0;
char* c_value_148;
void* __right_value113 = (void*)0;
char* __dec_obj54;
void* __right_value114 = (void*)0;
char* c_value_149;
void* __right_value115 = (void*)0;
char* __dec_obj55;
void* __right_value116 = (void*)0;
char* __dec_obj56;
void* __right_value117 = (void*)0;
char* __dec_obj57;
void* __right_value118 = (void*)0;
char* __dec_obj58;
void* __right_value119 = (void*)0;
char* c_value_150;
void* __right_value120 = (void*)0;
char* __dec_obj59;
char* c_value_151;
void* __right_value121 = (void*)0;
char* __dec_obj60;
void* __right_value122 = (void*)0;
char* __dec_obj61;
void* __right_value123 = (void*)0;
char* __dec_obj62;
void* __right_value124 = (void*)0;
char* __dec_obj63;
void* __right_value125 = (void*)0;
char* c_value_152;
void* __right_value126 = (void*)0;
char* __dec_obj64;
void* __right_value127 = (void*)0;
void* __right_value128 = (void*)0;
char* __dec_obj65;
void* __right_value129 = (void*)0;
char* __dec_obj66;
void* __right_value130 = (void*)0;
struct sType* __dec_obj67;
_Bool __result_obj__75;
void* __right_value134 = (void*)0;
char* __dec_obj71;
void* __right_value135 = (void*)0;
char* __dec_obj72;
void* __right_value136 = (void*)0;
char* __dec_obj73;
void* __right_value137 = (void*)0;
char* __dec_obj74;
void* __right_value138 = (void*)0;
char* __dec_obj75;
void* __right_value139 = (void*)0;
char* __dec_obj76;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct sType* __dec_obj77;
_Bool __result_obj__76;
c_value_145 = (void*)0;
c_value_147 = (void*)0;
c_value_149 = (void*)0;
c_value_151 = (void*)0;
    left_95=self->mLeft;
    right_96=self->mRight;
    name_97=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_98=node_compile(left_95,info);
    if(    !Value_98) {
        __result_obj__53 = (_Bool)0;
        (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__53;
    }
    else {
    }
    left_value_99=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_100=(struct sType*)come_increment_ref_count(left_value_99->type);
    if(    left_type2_100->mNoSolvedGenericsType) {
        __dec_obj39=left_type2_100,
        left_type2_100=(struct sType*)come_increment_ref_count(left_type2_100->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_100->mClass->mName,"tuple1")||string_operator_equals(left_type2_100->mClass->mName,"tuple2")||string_operator_equals(left_type2_100->mClass->mName,"tuple3")||string_operator_equals(left_type2_100->mClass->mName,"tuple3")||string_operator_equals(left_type2_100->mClass->mName,"tuple4")||string_operator_equals(left_type2_100->mClass->mName,"tuple5")) {
        for(        i_101=0;        i_101<list$1sType$ph_length(left_type2_100->mGenericsTypes);        i_101++        ){
            if(            (_if_conditional1=(string_operator_equals(name_97,((struct sType*)(__right_value83=list$1sType$ph_operator_load_element(left_type2_100->mGenericsTypes,i_101)))->mTupleName))),            /*c*/ come_call_finalizer3(__right_value82,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value83,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                __dec_obj40=name_97,
                name_97=(char*)come_increment_ref_count(xsprintf("v%d",i_101+1));
                __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
    }
    Value_108=node_compile(right_96,info);
    if(    !Value_108) {
        __result_obj__58 = (_Bool)0;
        (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_value_99,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type2_100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__58;
    }
    else {
    }
    new_channel_109=string_operator_equals(((char*)(__right_value86=right_96->kind(right_96->_protocol_obj))),"sNewChannel");
    (__right_value85 = come_decrement_ref_count(__right_value85, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    right_value_110=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_111=right_value_110->type;
    left_type_112=(struct sType*)come_increment_ref_count(left_value_99->type);
    left_type3_113=(struct sType*)come_increment_ref_count(left_type_112);
    klass_114=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,left_type3_113->mClass->mName));
    field_type_123=((void*)0);
    index_124=0;
    child_field_name_125=((void*)0);
    child_field_is_pointer_126=(_Bool)0;
    if(    klass_114->mFields==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value89=err_msg(info,"%s fields are null",klass_114->mName)));
        /*c*/ come_call_finalizer3(__right_value89,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    for(    o2_saved_127=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_114->mFields)),field_130=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_127));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_127));    field_130=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_127))    ){
        multiple_assign_var3=field_130;
        field_name_133=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type2_134=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        string_operator_equals(field_name_133,name_97)) {
            __dec_obj41=field_type_123,
            field_type_123=(struct sType*)come_increment_ref_count(sType_clone(field_type2_134));
            /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_133 = come_decrement_ref_count(field_name_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_134,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        index_124++;
        (field_name_133 = come_decrement_ref_count(field_name_133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type2_134,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_127,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    index_124==list$1tuple2$2char$phsType$ph$ph_length(klass_114->mFields)) {
        index_124=0;
        for(        o2_saved_135=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_114->mFields)),field_136=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_135));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_135));        field_136=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_135))        ){
            multiple_assign_var4=field_136;
            field_name_137=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            field_type2_138=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
            klass2_139=field_type2_138->mClass;
            if(            klass2_139->mUnion) {
                for(                o2_saved_140=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_139->mFields)),field2_141=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_140));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_140));                field2_141=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_140))                ){
                    multiple_assign_var5=field2_141;
                    field_name2_142=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    field_type3_143=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(                    string_operator_equals(field_name2_142,name_97)) {
                        __dec_obj42=child_field_name_125,
                        child_field_name_125=(char*)come_increment_ref_count(__builtin_string(field_name_137));
                        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        field_type2_138->mPointerNum>0) {
                            child_field_is_pointer_126=(_Bool)1;
                        }
                        __dec_obj43=field_type_123,
                        field_type_123=(struct sType*)come_increment_ref_count(sType_clone(field_type3_143));
                        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        (field_name2_142 = come_decrement_ref_count(field_name2_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(field_type3_143,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    (field_name2_142 = come_decrement_ref_count(field_name2_142, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type3_143,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_140,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                child_field_name_125) {
                    (field_name_137 = come_decrement_ref_count(field_name_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type2_138,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_137,name_97)) {
                __dec_obj44=field_type_123,
                field_type_123=(struct sType*)come_increment_ref_count(sType_clone(field_type2_138));
                /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_137 = come_decrement_ref_count(field_name_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type2_138,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            index_124++;
            (field_name_137 = come_decrement_ref_count(field_name_137, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_138,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_135,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        index_124==list$1tuple2$2char$phsType$ph$ph_length(klass_114->mFields)||field_type_123==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value94=err_msg(info,"field not found(%s) in %s(1)",name_97,klass_114->mName)));
            /*c*/ come_call_finalizer3(__right_value94,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    come_value_144=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 217, "struct CVALUE*"))));
    right_type_111=((struct sType*)(__right_value97=sType_clone(right_value_110->type)));
    /*c*/ come_call_finalizer3(__right_value97,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    check_assign_type(((char*)(__right_value99=xsprintf("\%s is assigned to(1)",((char*)(__right_value98=string_to_string(name_97)))))),field_type_123,right_type_111,right_value_110,(_Bool)0,(_Bool)1,(_Bool)1,info);
    (__right_value98 = come_decrement_ref_count(__right_value98, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value99 = come_decrement_ref_count(__right_value99, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    right_type_111=((struct sType*)(__right_value100=sType_clone(right_value_110->type)));
    /*c*/ come_call_finalizer3(__right_value100,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    field_type_123->mHeap&&!right_value_110->type->mHeap) {
        if(        string_operator_equals(right_value_110->type->mClass->mName,"void")&&right_value_110->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                ((struct tuple2$2int$bool$*)(__right_value101=err_msg(info,"require right value as heap object(%s)(1)",name_97)));
                /*c*/ come_call_finalizer3(__right_value101,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__73 = (_Bool)0;
                (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_99,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value_110,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_112,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type3_113,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(klass_114,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_125 = come_decrement_ref_count(child_field_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_144,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__73;
            }
        }
    }
    if(    field_type_123->mHeap&&right_type_111->mHeap&&field_type_123->mPointerNum>0&&right_type_111->mPointerNum>0) {
        if(        left_value_99->type->mPointerNum==1) {
            if(            child_field_name_125) {
                if(                child_field_is_pointer_126) {
                    __dec_obj45=c_value_145,
                    c_value_145=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj46=c_value_145,
                    c_value_145=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_123,c_value_145,info,(_Bool)0,(_Bool)0);
                std_move(field_type_123,right_type_111,right_value_110,info,(_Bool)0);
                if(                child_field_is_pointer_126) {
                    __dec_obj47=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj48=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_145 = come_decrement_ref_count(c_value_145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_146=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_99->c_value,name_97));
                decrement_ref_count_object(field_type_123,c_value_146,info,(_Bool)0,(_Bool)0);
                std_move(field_type_123,right_type_111,right_value_110,info,(_Bool)0);
                __dec_obj49=come_value_144->c_value,
                come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_99->c_value,name_97,right_value_110->c_value));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_146 = come_decrement_ref_count(c_value_146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_99->type->mPointerNum==0) {
            if(            child_field_name_125) {
                if(                child_field_is_pointer_126) {
                    __dec_obj50=c_value_147,
                    c_value_147=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj51=c_value_147,
                    c_value_147=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_123,c_value_147,info,(_Bool)0,(_Bool)0);
                std_move(field_type_123,right_type_111,right_value_110,info,(_Bool)0);
                if(                child_field_is_pointer_126) {
                    __dec_obj52=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj53=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_147 = come_decrement_ref_count(c_value_147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_148=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_99->c_value,name_97));
                decrement_ref_count_object(field_type_123,c_value_148,info,(_Bool)0,(_Bool)0);
                std_move(field_type_123,right_value_110->type,right_value_110,info,(_Bool)0);
                __dec_obj54=come_value_144->c_value,
                come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_99->c_value,name_97,right_value_110->c_value));
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_148 = come_decrement_ref_count(c_value_148, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value114=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_97,left_value_99->type->mPointerNum)));
            /*c*/ come_call_finalizer3(__right_value114,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else if(    field_type_123->mHeap&&field_type_123->mPointerNum>0&&right_type_111->mPointerNum>0&&string_operator_equals(right_type_111->mClass->mName,"void")) {
        if(        left_value_99->type->mPointerNum==1) {
            if(            child_field_name_125) {
                if(                child_field_is_pointer_126) {
                    __dec_obj55=c_value_149,
                    c_value_149=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj56=c_value_149,
                    c_value_149=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_123,c_value_149,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_126) {
                    __dec_obj57=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj58=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_149 = come_decrement_ref_count(c_value_149, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_150=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_99->c_value,name_97));
                decrement_ref_count_object(field_type_123,c_value_150,info,(_Bool)0,(_Bool)0);
                __dec_obj59=come_value_144->c_value,
                come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_99->c_value,name_97,right_value_110->c_value));
                __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_150 = come_decrement_ref_count(c_value_150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_99->type->mPointerNum==0) {
            if(            child_field_name_125) {
                if(                child_field_is_pointer_126) {
                    __dec_obj60=c_value_151,
                    c_value_151=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj61=c_value_151,
                    c_value_151=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_99->c_value,child_field_name_125,name_97));
                    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_123,c_value_151,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_126) {
                    __dec_obj62=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj63=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_151 = come_decrement_ref_count(c_value_151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_152=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_99->c_value,name_97));
                decrement_ref_count_object(field_type_123,c_value_152,info,(_Bool)0,(_Bool)0);
                __dec_obj64=come_value_144->c_value,
                come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_99->c_value,name_97,right_value_110->c_value));
                __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_152 = come_decrement_ref_count(c_value_152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value127=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_97,left_value_99->type->mPointerNum)));
            /*c*/ come_call_finalizer3(__right_value127,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else if(    field_type_123->mChannel&&new_channel_109) {
        if(        child_field_is_pointer_126) {
            __dec_obj65=come_value_144->c_value,
            come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_99->c_value,name_97,right_value_110->c_value));
            __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj66=come_value_144->c_value,
            come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_99->c_value,name_97,right_value_110->c_value));
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        __dec_obj67=come_value_144->type,
        come_value_144->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_110->type));
        /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_144->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
        add_come_last_code(info,"%s",come_value_144->c_value);
        __result_obj__75 = (_Bool)1;
        (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_value_99,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type2_100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_110,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_112,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type3_113,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(klass_114,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(field_type_123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (child_field_name_125 = come_decrement_ref_count(child_field_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value_144,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__75;
    }
    else {
        if(        left_value_99->type->mPointerNum==1) {
            if(            child_field_name_125) {
                if(                child_field_is_pointer_126) {
                    __dec_obj71=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj72=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj73=come_value_144->c_value,
                come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_99->c_value,name_97,right_value_110->c_value));
                __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else if(        left_value_99->type->mPointerNum==0) {
            if(            child_field_name_125) {
                if(                child_field_is_pointer_126) {
                    __dec_obj74=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj75=come_value_144->c_value,
                    come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_99->c_value,child_field_name_125,name_97,right_value_110->c_value));
                    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj76=come_value_144->c_value,
                come_value_144->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_99->c_value,name_97,right_value_110->c_value));
                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else {
            ((struct tuple2$2int$bool$*)(__right_value140=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_97,left_value_99->type->mPointerNum)));
            /*c*/ come_call_finalizer3(__right_value140,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __dec_obj77=come_value_144->type,
    come_value_144->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_123));
    /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_144->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_144));
    add_come_last_code(info,"%s",come_value_144->c_value);
    __result_obj__76 = (_Bool)1;
    (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_value_99,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type2_100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_110,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_112,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type3_113,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(klass_114,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(field_type_123,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (child_field_name_125 = come_decrement_ref_count(child_field_name_125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_144,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__76;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_102;
int i_103;
struct sType* __result_obj__54;
struct sType* default_value_104;
struct sType* __result_obj__55;
default_value_104 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_102=self->head;
    i_103=0;
    while(    it_102!=((void*)0)) {
        if(        position==i_103) {
            __result_obj__54 = (struct sType*)come_increment_ref_count(it_102->item);
            /*c*/ come_call_finalizer3(__result_obj__54,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__54;
        }
        it_102=it_102->next;
        i_103++;
    }
    memset(&default_value_104,0,sizeof(struct sType*));
    __result_obj__55 = (struct sType*)come_increment_ref_count(default_value_104);
    /*c*/ come_call_finalizer3(default_value_104,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__55,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__55;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_105;
int i_106;
struct sType* __result_obj__56;
struct sType* default_value_107;
struct sType* __result_obj__57;
default_value_107 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_105=self->head;
    i_106=0;
    while(    it_105!=((void*)0)) {
        if(        position==i_106) {
            __result_obj__56 = (struct sType*)come_increment_ref_count(it_105->item);
            /*c*/ come_call_finalizer3(__result_obj__56,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__56;
        }
        it_105=it_105->next;
        i_106++;
    }
    memset(&default_value_107,0,sizeof(struct sType*));
    __result_obj__57 = (struct sType*)come_increment_ref_count(default_value_107);
    /*c*/ come_call_finalizer3(default_value_107,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__57,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__57;
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

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_115;
unsigned int hash_116;
unsigned int it_117;
struct sClass* __result_obj__59;
struct sClass* __result_obj__60;
struct sClass* __result_obj__61;
struct sClass* __result_obj__62;
default_value_115 = (void*)0;
    memset(&default_value_115,0,sizeof(struct sClass*));
    hash_116=string_get_hash_key(((char*)key))%self->size;
    it_117=hash_116;
    while(    (_Bool)1) {
        if(        self->item_existance[it_117]) {
            if(            string_equals(self->keys[it_117],key)) {
                __result_obj__59 = (struct sClass*)come_increment_ref_count(self->items[it_117]);
                /*c*/ come_call_finalizer3(default_value_115,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__59,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__59;
            }
            it_117++;
            if(            it_117>=self->size) {
                it_117=0;
            }
            else if(            it_117==hash_116) {
                __result_obj__60 = (struct sClass*)come_increment_ref_count(default_value_115);
                /*c*/ come_call_finalizer3(default_value_115,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__60,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__60;
            }
        }
        else {
            __result_obj__61 = (struct sClass*)come_increment_ref_count(default_value_115);
            /*c*/ come_call_finalizer3(default_value_115,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__61,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__61;
        }
    }
    __result_obj__62 = (struct sClass*)come_increment_ref_count(default_value_115);
    /*c*/ come_call_finalizer3(default_value_115,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__62,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__62;
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

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_118;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_119;
    it_118=self->head;
    while(    it_118!=((void*)0)) {
        prev_it_119=it_118;
        it_118=it_118->next;
        /*c*/ come_call_finalizer3(prev_it_119,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_120;
unsigned int hash_121;
unsigned int it_122;
struct sClass* __result_obj__63;
struct sClass* __result_obj__64;
struct sClass* __result_obj__65;
struct sClass* __result_obj__66;
default_value_120 = (void*)0;
    memset(&default_value_120,0,sizeof(struct sClass*));
    hash_121=string_get_hash_key(((char*)key))%self->size;
    it_122=hash_121;
    while(    (_Bool)1) {
        if(        self->item_existance[it_122]) {
            if(            string_equals(self->keys[it_122],key)) {
                __result_obj__63 = (struct sClass*)come_increment_ref_count(self->items[it_122]);
                /*c*/ come_call_finalizer3(default_value_120,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__63,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__63;
            }
            it_122++;
            if(            it_122>=self->size) {
                it_122=0;
            }
            else if(            it_122==hash_121) {
                __result_obj__64 = (struct sClass*)come_increment_ref_count(default_value_120);
                /*c*/ come_call_finalizer3(default_value_120,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__64,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__64;
            }
        }
        else {
            __result_obj__65 = (struct sClass*)come_increment_ref_count(default_value_120);
            /*c*/ come_call_finalizer3(default_value_120,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__65,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__65;
        }
    }
    __result_obj__66 = (struct sClass*)come_increment_ref_count(default_value_120);
    /*c*/ come_call_finalizer3(default_value_120,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static void tuple2$2int$bool$$p_finalize(struct tuple2$2int$bool$* self){
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_128;
struct tuple2$2char$phsType$ph* __result_obj__67;
struct tuple2$2char$phsType$ph* __result_obj__68;
struct tuple2$2char$phsType$ph* result_129;
struct tuple2$2char$phsType$ph* __result_obj__69;
result_128 = (void*)0;
result_129 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_128,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__67 = result_128;
        return __result_obj__67;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__68 = self->it->item;
        return __result_obj__68;
    }
    memset(&result_129,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__69 = result_129;
    return __result_obj__69;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_131;
struct tuple2$2char$phsType$ph* __result_obj__70;
struct tuple2$2char$phsType$ph* __result_obj__71;
struct tuple2$2char$phsType$ph* result_132;
struct tuple2$2char$phsType$ph* __result_obj__72;
result_131 = (void*)0;
result_132 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_131,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__70 = result_131;
        return __result_obj__70;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__71 = self->it->item;
        return __result_obj__71;
    }
    memset(&result_132,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__72 = result_132;
    return __result_obj__72;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value131 = (void*)0;
struct list_item$1CVALUE$ph* litem_153;
struct CVALUE* __dec_obj68;
void* __right_value132 = (void*)0;
struct list_item$1CVALUE$ph* litem_154;
struct CVALUE* __dec_obj69;
void* __right_value133 = (void*)0;
struct list_item$1CVALUE$ph* litem_155;
struct CVALUE* __dec_obj70;
struct list$1CVALUE$ph* __result_obj__74;
    if(    self->len==0) {
        litem_153=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value131=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        __dec_obj68=litem_153->item,
        litem_153->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value132=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        __dec_obj69=litem_154->item,
        litem_154->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value133=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        __dec_obj70=litem_155->item,
        litem_155->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj70,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result_obj__74 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__74;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct sNode* __dec_obj78;
struct sNullCheckNode* __result_obj__77;
struct sNullCheckNode* __result_obj__78;
    ((struct sNodeBase*)(__right_value142=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value142,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj78=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mOnlyNullCecker=only_null_checker;
    __result_obj__77 = (struct sNullCheckNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__77,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__77;
    __result_obj__78 = (struct sNullCheckNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__78,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __right_value144 = (void*)0;
char* __result_obj__79;
    __result_obj__79 = (char*)come_increment_ref_count(((char*)(__right_value144=__builtin_string("sNullCheckNode"))));
    (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__79 = come_decrement_ref_count(__result_obj__79, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__79;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_156;
_Bool Value_157;
void* __right_value145 = (void*)0;
struct CVALUE* left_value_158;
void* __right_value146 = (void*)0;
char* method_name_159;
void* __right_value147 = (void*)0;
_Bool _if_conditional2;
struct sType* obj_type_162;
struct sType* obj_type2_163;
void* __right_value148 = (void*)0;
void* __right_value149 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_164=0;
struct sGenericsFun* generics_fun_165=0;
char* __dec_obj79;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct sFun* fun_166;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
struct sType* type_167;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value156 = (void*)0;
char* __dec_obj80;
void* __right_value157 = (void*)0;
struct sType* __dec_obj81;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct CVALUE* come_value_169;
char* __dec_obj82;
void* __right_value160 = (void*)0;
struct sType* __dec_obj83;
_Bool __result_obj__84;
    left_156=self->mLeft;
    Value_157=node_compile(left_156,info);
    if(    !Value_157) {
        return (_Bool)0;
    }
    else {
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    !self->mOnlyNullCecker&&left_value_158->type->mNoSolvedGenericsType&&left_value_158->type->mNoSolvedGenericsType->mClass&&string_operator_equals(left_value_158->type->mNoSolvedGenericsType->mClass->mName,"optional")) {
        method_name_159=(char*)come_increment_ref_count(create_method_name(left_value_158->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional2=(((struct sFun*)(__right_value147=map$2char$phsFun$ph_at(info->funcs,method_name_159,((void*)0))))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value147,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            obj_type_162=left_value_158->type->mNoSolvedGenericsType;
            if(            list$1sType$ph_length(obj_type_162->mGenericsTypes)>0) {
                obj_type2_163=left_value_158->type;
                multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value149=make_generics_function(obj_type2_163,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1)));
                name_164=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                generics_fun_165=multiple_assign_var6->v2;
                /*c*/ come_call_finalizer3(__right_value149,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj79=method_name_159,
                method_name_159=(char*)come_increment_ref_count(name_164);
                __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (name_164 = come_decrement_ref_count(name_164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value150=err_msg(info,"require expect implementation(%s)",left_value_158->type->mClass->mName)));
                /*c*/ come_call_finalizer3(__right_value150,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        fun_166=((struct sFun*)(__right_value151=map$2char$phsFun$ph_operator_load_element(info->funcs,method_name_159)));
        /*c*/ come_call_finalizer3(__right_value151,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_166==((void*)0)) {
            ((struct tuple2$2int$bool$*)(__right_value152=err_msg(info,"function not found(%s)",method_name_159)));
            /*c*/ come_call_finalizer3(__right_value152,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        type_167=(struct sType*)come_increment_ref_count(solve_generics(fun_166->mResultType,left_value_158->type,info));
        come_value_168=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 454, "struct CVALUE*"))));
        __dec_obj80=come_value_168->c_value,
        come_value_168->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_159,left_value_158->c_value));
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj81=come_value_168->type,
        come_value_168->type=(struct sType*)come_increment_ref_count(sType_clone(type_167));
        /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_168->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_168));
        add_come_last_code(info,"%s",come_value_168->c_value);
        (method_name_159 = come_decrement_ref_count(method_name_159, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_167,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_168,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_158));
    }
    else if(    left_value_158->type->mPointerNum>0) {
        come_value_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 468, "struct CVALUE*"))));
        __dec_obj82=come_value_169->c_value,
        come_value_169->c_value=(char*)come_increment_ref_count(left_value_158->c_value);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj83=come_value_169->type,
        come_value_169->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_158->type));
        /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_169->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
        add_come_last_code(info,"%s",come_value_169->c_value);
        /*c*/ come_call_finalizer3(come_value_169,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_158));
    }
    __result_obj__84 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_158,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__84;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_160;
unsigned int it_161;
struct sFun* __result_obj__80;
struct sFun* __result_obj__81;
struct sFun* __result_obj__82;
struct sFun* __result_obj__83;
    hash_160=string_get_hash_key(((char*)key))%self->size;
    it_161=hash_160;
    while(    (_Bool)1) {
        if(        self->item_existance[it_161]) {
            if(            string_equals(self->keys[it_161],key)) {
                __result_obj__80 = (struct sFun*)come_increment_ref_count(self->items[it_161]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__80,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__80;
            }
            it_161++;
            if(            it_161>=self->size) {
                it_161=0;
            }
            else if(            it_161==hash_160) {
                __result_obj__81 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__81,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__81;
            }
        }
        else {
            __result_obj__82 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__82,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__82;
        }
    }
    __result_obj__83 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__83,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__83;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj84;
struct sNullableNode* __result_obj__85;
    ((struct sNodeBase*)(__right_value161=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value161,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj84=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj84 ? __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__85 = (struct sNullableNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullableNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__85,sNullableNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__85;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __right_value163 = (void*)0;
char* __result_obj__86;
    __result_obj__86 = (char*)come_increment_ref_count(((char*)(__right_value163=__builtin_string("sNullableNode"))));
    (__right_value163 = come_decrement_ref_count(__right_value163, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__86 = come_decrement_ref_count(__result_obj__86, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__86;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_170;
_Bool Value_171;
void* __right_value164 = (void*)0;
struct CVALUE* left_value_172;
void* __right_value170 = (void*)0;
struct CVALUE* come_value_173;
_Bool __result_obj__89;
    left_170=self->mLeft;
    Value_171=node_compile(left_170,info);
    if(    !Value_171) {
        return (_Bool)0;
    }
    else {
    }
    left_value_172=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    left_value_172->type->mPointerNum>0&&left_value_172->type->mNullValue) {
        come_value_173=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_172));
        come_value_173->type->mNullValue=(_Bool)0;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_173));
        add_come_last_code(info,"%s",come_value_173->c_value);
        /*c*/ come_call_finalizer3(come_value_173,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_172));
    }
    __result_obj__89 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_172,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__89;
}

static void sNullableNode_finalize(struct sNullableNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__87;
void* __right_value165 = (void*)0;
struct CVALUE* result_174;
void* __right_value166 = (void*)0;
char* __dec_obj85;
void* __right_value167 = (void*)0;
struct sType* __dec_obj86;
void* __right_value168 = (void*)0;
char* __dec_obj87;
void* __right_value169 = (void*)0;
char* __dec_obj88;
struct CVALUE* __result_obj__88;
    if(    self==(void*)0) {
        __result_obj__87 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__87,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__87;
    }
    result_174=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj85=result_174->c_value,
        result_174->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj86=result_174->type,
        result_174->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_174->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_174->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj87=result_174->c_value_without_right_value_objects,
        result_174->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj88=result_174->c_value_without_cast_object_value,
        result_174->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__88 = (struct CVALUE*)come_increment_ref_count(result_174);
    /*c*/ come_call_finalizer3(result_174,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__88,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__88;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value176 = (void*)0;
struct sNode* __result_obj__92;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 529, "struct sNode");
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value172=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc_v2(1, sizeof(struct sNullableNode)*(1), "18field.c", 529, "struct sNullableNode*")),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result_obj__92 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value176=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value172,sNullableNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value176) ? __right_value176 = come_decrement_ref_count(__right_value176, ((struct sNode*)__right_value176)->finalize, ((struct sNode*)__right_value176)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__92) ? __result_obj__92 = come_decrement_ref_count(__result_obj__92, ((struct sNode*)__result_obj__92)->finalize, ((struct sNode*)__result_obj__92)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__92;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
struct sNullableNode* __result_obj__90;
void* __right_value173 = (void*)0;
struct sNullableNode* result_175;
void* __right_value174 = (void*)0;
char* __dec_obj89;
void* __right_value175 = (void*)0;
struct sNode* __dec_obj90;
struct sNullableNode* __result_obj__91;
    if(    self==(void*)0) {
        __result_obj__90 = (void*)0;
        return __result_obj__90;
    }
    result_175=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc_v2(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode*"));
    if(    self!=((void*)0)) {
        result_175->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj89=result_175->sname,
        result_175->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullableNode_clone", 5, "char*"));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_175->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj90=result_175->mLeft,
        result_175->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj90 ? __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__91 = result_175;
    /*c*/ come_call_finalizer3(result_175,sNullableNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__91;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
struct sNode* __dec_obj91;
void* __right_value179 = (void*)0;
char* __dec_obj92;
struct sLoadFieldNode* __result_obj__93;
    ((struct sNodeBase*)(__right_value177=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value177,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj91=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj91 ? __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj92=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__93 = (struct sLoadFieldNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__93,sLoadFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__93;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __right_value180 = (void*)0;
char* __result_obj__94;
    __result_obj__94 = (char*)come_increment_ref_count(((char*)(__right_value180=__builtin_string("sLoadFieldNode"))));
    (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__94 = come_decrement_ref_count(__result_obj__94, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__94;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_176;
void* __right_value181 = (void*)0;
char* name_177;
_Bool Value_178;
_Bool __result_obj__95;
void* __right_value182 = (void*)0;
struct CVALUE* left_value_179;
struct sType* left_type2_180;
struct sType* __dec_obj93;
int i_181;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
_Bool _if_conditional3;
void* __right_value185 = (void*)0;
char* __dec_obj94;
struct sType* left_type_182;
void* __right_value186 = (void*)0;
struct sType* left_type2_183;
struct sClass* klass_184;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sType* field_type_185;
int index_186;
_Bool child_field_is_pointer_187;
char* child_field_name_188;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_189;
struct tuple2$2char$phsType$ph* field_190;
struct tuple2$2char$phsType$ph* multiple_assign_var7 = (void*)0;
char* field_name_191=0;
struct sType* field_type2_192=0;
void* __right_value194 = (void*)0;
struct sType* __dec_obj95;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_193;
struct tuple2$2char$phsType$ph* field_194;
struct tuple2$2char$phsType$ph* multiple_assign_var8 = (void*)0;
char* field_name_195=0;
struct sType* field_type2_196=0;
struct sClass* klass2_197;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_198;
struct tuple2$2char$phsType$ph* field2_199;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* field_name2_200=0;
struct sType* field_type3_201=0;
void* __right_value195 = (void*)0;
char* __dec_obj96;
void* __right_value196 = (void*)0;
struct sType* __dec_obj97;
void* __right_value197 = (void*)0;
struct sType* __dec_obj98;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
struct CVALUE* come_value_202;
void* __right_value201 = (void*)0;
char* __dec_obj99;
void* __right_value202 = (void*)0;
char* __dec_obj100;
void* __right_value203 = (void*)0;
char* __dec_obj101;
void* __right_value204 = (void*)0;
char* __dec_obj102;
void* __right_value205 = (void*)0;
char* __dec_obj103;
void* __right_value206 = (void*)0;
char* __dec_obj104;
void* __right_value207 = (void*)0;
struct sType* __dec_obj105;
void* __right_value208 = (void*)0;
struct sType* __dec_obj106;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sType* __dec_obj107;
_Bool __result_obj__97;
    left_176=self->mLeft;
    name_177=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_178=node_compile(left_176,info);
    if(    !Value_178) {
        __result_obj__95 = (_Bool)0;
        (name_177 = come_decrement_ref_count(name_177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__95;
    }
    else {
    }
    left_value_179=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_180=(struct sType*)come_increment_ref_count(left_value_179->type);
    if(    left_type2_180->mNoSolvedGenericsType) {
        __dec_obj93=left_type2_180,
        left_type2_180=(struct sType*)come_increment_ref_count(left_type2_180->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_180->mClass->mName,"tuple1")||string_operator_equals(left_type2_180->mClass->mName,"tuple2")||string_operator_equals(left_type2_180->mClass->mName,"tuple3")||string_operator_equals(left_type2_180->mClass->mName,"tuple3")||string_operator_equals(left_type2_180->mClass->mName,"tuple4")||string_operator_equals(left_type2_180->mClass->mName,"tuple5")) {
        for(        i_181=0;        i_181<list$1sType$ph_length(left_type2_180->mGenericsTypes);        i_181++        ){
            if(            (_if_conditional3=(string_operator_equals(name_177,((struct sType*)(__right_value184=list$1sType$ph_operator_load_element(left_type2_180->mGenericsTypes,i_181)))->mTupleName))),            /*c*/ come_call_finalizer3(__right_value183,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value184,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional3) {
                __dec_obj94=name_177,
                name_177=(char*)come_increment_ref_count(xsprintf("v%d",i_181+1));
                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
    }
    left_type_182=left_value_179->type;
    /*c*/ come_call_finalizer3(left_type2_180,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    left_type2_183=(struct sType*)come_increment_ref_count(solve_generics(left_type_182,left_type_182,info));
    klass_184=left_type2_183->mClass;
    klass_184=((struct sClass*)(__right_value189=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value188=__builtin_string(klass_184->mName))))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value189,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    field_type_185=((void*)0);
    index_186=0;
    child_field_is_pointer_187=(_Bool)0;
    child_field_name_188=((void*)0);
    klass_184=((struct sClass*)(__right_value192=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value191=__builtin_string(klass_184->mName))))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value192,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass_184==((void*)0)||klass_184->mFields==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value193=err_msg(info,"invalid class %s",klass_184->mName)));
        /*c*/ come_call_finalizer3(__right_value193,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    for(    o2_saved_189=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_184->mFields)),field_190=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_189));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_189));    field_190=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_189))    ){
        multiple_assign_var7=field_190;
        field_name_191=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        field_type2_192=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        string_operator_equals(field_name_191,name_177)) {
            __dec_obj95=field_type_185,
            field_type_185=(struct sType*)come_increment_ref_count(sType_clone(field_type2_192));
            /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_191 = come_decrement_ref_count(field_name_191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_192,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        index_186++;
        (field_name_191 = come_decrement_ref_count(field_name_191, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type2_192,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_189,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    index_186==list$1tuple2$2char$phsType$ph$ph_length(klass_184->mFields)) {
        index_186=0;
        for(        o2_saved_193=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_184->mFields)),field_194=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_193));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_193));        field_194=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_193))        ){
            multiple_assign_var8=field_194;
            field_name_195=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            field_type2_196=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
            klass2_197=field_type2_196->mClass;
            if(            klass2_197->mUnion) {
                for(                o2_saved_198=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_197->mFields)),field2_199=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_198));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_198));                field2_199=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_198))                ){
                    multiple_assign_var9=field2_199;
                    field_name2_200=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    field_type3_201=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
                    if(                    string_operator_equals(field_name2_200,name_177)) {
                        __dec_obj96=child_field_name_188,
                        child_field_name_188=(char*)come_increment_ref_count(__builtin_string(field_name_195));
                        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        field_type2_196->mPointerNum>0) {
                            child_field_is_pointer_187=(_Bool)1;
                        }
                        __dec_obj97=field_type_185,
                        field_type_185=(struct sType*)come_increment_ref_count(sType_clone(field_type3_201));
                        /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        (field_name2_200 = come_decrement_ref_count(field_name2_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(field_type3_201,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    (field_name2_200 = come_decrement_ref_count(field_name2_200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type3_201,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_198,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                child_field_name_188) {
                    (field_name_195 = come_decrement_ref_count(field_name_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type2_196,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_195,name_177)) {
                __dec_obj98=field_type_185,
                field_type_185=(struct sType*)come_increment_ref_count(sType_clone(field_type2_196));
                /*b*/ come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_195 = come_decrement_ref_count(field_name_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type2_196,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            index_186++;
            (field_name_195 = come_decrement_ref_count(field_name_195, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_196,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_193,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        index_186==list$1tuple2$2char$phsType$ph$ph_length(klass_184->mFields)) {
            ((struct tuple2$2int$bool$*)(__right_value198=err_msg(info,"field not found(%s) in %s(2)",name_177,klass_184->mName)));
            /*c*/ come_call_finalizer3(__right_value198,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    come_value_202=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 638, "struct CVALUE*"))));
    if(    left_value_179->type->mPointerNum>0) {
        if(        child_field_name_188) {
            if(            child_field_is_pointer_187) {
                __dec_obj99=come_value_202->c_value,
                come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_179->c_value,child_field_name_188,name_177));
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj100=come_value_202->c_value,
                come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_179->c_value,child_field_name_188,name_177));
                __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else {
            __dec_obj101=come_value_202->c_value,
            come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_179->c_value,name_177));
            __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        if(        child_field_name_188) {
            if(            child_field_is_pointer_187) {
                __dec_obj102=come_value_202->c_value,
                come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_179->c_value,child_field_name_188,name_177));
                __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj103=come_value_202->c_value,
                come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_179->c_value,child_field_name_188,name_177));
                __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else {
            __dec_obj104=come_value_202->c_value,
            come_value_202->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_179->c_value,name_177));
            __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    __dec_obj105=come_value_202->type,
    come_value_202->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_185));
    /*b*/ come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj106=come_value_202->type,
    come_value_202->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_202->type,info->generics_type,info));
    /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_202->var=((void*)0);
    if(    field_type_185==((void*)0)) {
        ((struct tuple2$2int$bool$*)(__right_value209=err_msg(info,"no field(%s)",name_177)));
        /*c*/ come_call_finalizer3(__right_value209,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    list$1sNode$ph_length(come_value_202->type->mArrayNum)==1) {
        __dec_obj107=come_value_202->type->mOriginalLoadVarType,
        come_value_202->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_202->type));
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph_reset(come_value_202->type->mArrayNum);
        come_value_202->type->mPointerNum++;
        come_value_202->type->mOriginalTypeNamePointerNum=come_value_202->type->mPointerNum;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_202));
    __result_obj__97 = (_Bool)1;
    (name_177 = come_decrement_ref_count(name_177, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_value_179,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type2_183,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(field_type_185,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (child_field_name_188 = come_decrement_ref_count(child_field_name_188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_202,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__97;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_203;
struct list_item$1sNode$ph* prev_it_204;
struct list$1sNode$ph* __result_obj__96;
    it_203=self->head;
    while(    it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        /*c*/ come_call_finalizer3(prev_it_204,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__96 = self;
    return __result_obj__96;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value217 = (void*)0;
struct sNode* __result_obj__100;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 697, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value212=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 697, "struct sLoadFieldNode*")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result_obj__100 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value217=_inf_value2)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value212,sLoadFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value217) ? __right_value217 = come_decrement_ref_count(__right_value217, ((struct sNode*)__right_value217)->finalize, ((struct sNode*)__right_value217)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__100) ? __result_obj__100 = come_decrement_ref_count(__result_obj__100, ((struct sNode*)__result_obj__100)->finalize, ((struct sNode*)__result_obj__100)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__100;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
struct sLoadFieldNode* __result_obj__98;
void* __right_value213 = (void*)0;
struct sLoadFieldNode* result_205;
void* __right_value214 = (void*)0;
char* __dec_obj108;
void* __right_value215 = (void*)0;
struct sNode* __dec_obj109;
void* __right_value216 = (void*)0;
char* __dec_obj110;
struct sLoadFieldNode* __result_obj__99;
    if(    self==(void*)0) {
        __result_obj__98 = (void*)0;
        return __result_obj__98;
    }
    result_205=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*"));
    if(    self!=((void*)0)) {
        result_205->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj108=result_205->sname,
        result_205->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadFieldNode_clone", 5, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_205->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj109=result_205->mLeft,
        result_205->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj109 ? __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj110=result_205->mName,
        result_205->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sLoadFieldNode_clone", 8, "char*"));
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__99 = result_205;
    /*c*/ come_call_finalizer3(result_205,sLoadFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__99;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value220 = (void*)0;
struct sNode* __dec_obj112;
void* __right_value221 = (void*)0;
struct list$1sNode$ph* __dec_obj113;
struct sStoreArrayNode* __result_obj__101;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value218,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj112=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj112 ? __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj113=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    /*b*/ come_call_finalizer3(__dec_obj113,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mQuote=quote;
    __result_obj__101 = (struct sStoreArrayNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__101,sStoreArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__101;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __right_value222 = (void*)0;
char* __result_obj__102;
    __result_obj__102 = (char*)come_increment_ref_count(((char*)(__right_value222=__builtin_string("sStoreArrayNode"))));
    (__right_value222 = come_decrement_ref_count(__right_value222, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__102 = come_decrement_ref_count(__result_obj__102, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__102;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_206;
struct sNode* right_207;
struct list$1sNode$ph* array_num_nodes_208;
_Bool Value_209;
_Bool __result_obj__103;
void* __right_value223 = (void*)0;
struct CVALUE* left_value_210;
struct sType* left_type_211;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1CVALUE$ph* array_num_212;
struct list$1sNode$ph* o2_saved_215;
struct sNode* it_218;
_Bool Value_221;
_Bool __result_obj__111;
void* __right_value226 = (void*)0;
struct CVALUE* c_value_222;
char* fun_name_223;
void* __right_value227 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var10 = (void*)0;
char* fun_name2_224=0;
struct sFun* operator_fun_225=0;
struct sGenericsFun* generics_fun_226=0;
_Bool Value_227;
_Bool __result_obj__112;
void* __right_value228 = (void*)0;
struct CVALUE* right_value_228;
struct sType* right_type_229;
struct sClass* klass_230;
void* __right_value229 = (void*)0;
struct sType* type_231;
_Bool calling_fun_232;
void* __right_value230 = (void*)0;
struct sNode* middle_233;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
struct CVALUE* come_value_246;
int i_247;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct buffer* buf_260;
struct list$1CVALUE$ph* o2_saved_261;
struct CVALUE* it_264;
void* __right_value236 = (void*)0;
char* left_value_code_267;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
char* __dec_obj114;
void* __right_value239 = (void*)0;
char* __dec_obj115;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
char* __dec_obj116;
void* __right_value242 = (void*)0;
char* __dec_obj117;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* result_type_268;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sNode$ph* __dec_obj118;
struct sType* __dec_obj119;
void* __right_value247 = (void*)0;
struct sType* __dec_obj120;
_Bool __result_obj__129;
memset(&calling_fun_232, 0, sizeof(_Bool));
    left_206=(struct sNode*)come_increment_ref_count(self->mLeft);
    right_207=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_208=self->mArrayNum;
    Value_209=node_compile(left_206,info);
    if(    !Value_209) {
        __result_obj__103 = (_Bool)0;
        ((left_206) ? left_206 = come_decrement_ref_count(left_206, ((struct sNode*)left_206)->finalize, ((struct sNode*)left_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((right_207) ? right_207 = come_decrement_ref_count(right_207, ((struct sNode*)right_207)->finalize, ((struct sNode*)right_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__103;
    }
    else {
    }
    left_value_210=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_211=left_value_210->type;
    array_num_212=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 731, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_215=(array_num_nodes_208),it_218=list$1sNode$ph_begin((o2_saved_215));    !list$1sNode$ph_end((o2_saved_215));    it_218=list$1sNode$ph_next((o2_saved_215))    ){
        Value_221=node_compile(it_218,info);
        if(        !Value_221) {
            __result_obj__111 = (_Bool)0;
            ((left_206) ? left_206 = come_decrement_ref_count(left_206, ((struct sNode*)left_206)->finalize, ((struct sNode*)left_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((right_207) ? right_207 = come_decrement_ref_count(right_207, ((struct sNode*)right_207)->finalize, ((struct sNode*)right_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_value_210,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_212,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__111;
        }
        else {
        }
        c_value_222=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_212,(struct CVALUE*)come_increment_ref_count(c_value_222));
        /*c*/ come_call_finalizer3(c_value_222,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    fun_name_223="operator_store_element";
    multiple_assign_var10=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value227=get_operator_function(left_type_211,fun_name_223,info)));
    fun_name2_224=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    operator_fun_225=multiple_assign_var10->v2;
    generics_fun_226=multiple_assign_var10->v3;
    /*c*/ come_call_finalizer3(__right_value227,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_227=node_compile(right_207,info);
    if(    !Value_227) {
        __result_obj__112 = (_Bool)0;
        ((left_206) ? left_206 = come_decrement_ref_count(left_206, ((struct sNode*)left_206)->finalize, ((struct sNode*)left_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((right_207) ? right_207 = come_decrement_ref_count(right_207, ((struct sNode*)right_207)->finalize, ((struct sNode*)right_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_210,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(array_num_212,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_224 = come_decrement_ref_count(fun_name2_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__112;
    }
    else {
    }
    right_value_228=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_229=right_value_228->type;
    klass_230=left_value_210->type->mClass;
    type_231=(struct sType*)come_increment_ref_count(sType_clone(left_value_210->type));
    if(    self->mQuote) {
        calling_fun_232=(_Bool)0;
    }
    else {
        middle_233=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_208,0));
        calling_fun_232=operator_overload_fun2(type_231,fun_name_223,(struct sNode*)come_increment_ref_count(left_206),(struct sNode*)come_increment_ref_count(middle_233),(struct sNode*)come_increment_ref_count(right_207),left_value_210,((struct CVALUE*)(__right_value231=list$1CVALUE$ph_operator_load_element(array_num_212,0))),right_value_228,info);
        /*c*/ come_call_finalizer3(__right_value231,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((middle_233) ? middle_233 = come_decrement_ref_count(middle_233, ((struct sNode*)middle_233)->finalize, ((struct sNode*)middle_233)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    !calling_fun_232) {
        come_value_246=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 768, "struct CVALUE*"))));
        if(        list$1sNode$ph_length(left_type_211->mArrayNum)>0) {
            for(            i_247=0;            i_247<list$1CVALUE$ph_length(array_num_212);            i_247++            ){
                list$1sNode$ph_delete(left_type_211->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_211->mPointerNum>0) {
            left_type_211->mPointerNum-=list$1CVALUE$ph_length(array_num_212);
            if(            left_type_211->mPointerNum<0) {
                left_type_211->mPointerNum=0;
            }
        }
        buf_260=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 783, "struct buffer*"))));
        buffer_append_str(buf_260,left_value_210->c_value);
        for(        o2_saved_261=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_212)),it_264=list$1CVALUE$ph_begin((o2_saved_261));        !list$1CVALUE$ph_end((o2_saved_261));        it_264=list$1CVALUE$ph_next((o2_saved_261))        ){
            buffer_append_format(buf_260,"[%s]",it_264->c_value);
        }
        /*c*/ come_call_finalizer3(o2_saved_261,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        left_value_code_267=(char*)come_increment_ref_count(buffer_to_string(buf_260));
        check_assign_type(((char*)(__right_value237=xsprintf("array is assinged to(2)"))),left_type_211,right_type_229,right_value_228,(_Bool)0,(_Bool)1,(_Bool)1,info);
        (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        left_type_211->mHeap&&right_type_229->mHeap&&left_type_211->mPointerNum>0&&right_type_229->mPointerNum>0) {
            if(            left_value_210->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_211,left_value_code_267,info,(_Bool)0,(_Bool)0);
                std_move(left_type_211,right_type_229,right_value_228,info,(_Bool)0);
                __dec_obj114=come_value_246->c_value,
                come_value_246->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_267,right_value_228->c_value));
                __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            left_value_210->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_211,left_value_code_267,info,(_Bool)0,(_Bool)0);
                std_move(left_type_211,right_type_229,right_value_228,info,(_Bool)0);
                __dec_obj115=come_value_246->c_value,
                come_value_246->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_267,right_value_228->c_value));
                __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value240=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_267,left_value_210->type->mPointerNum)));
                /*c*/ come_call_finalizer3(__right_value240,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        else {
            if(            left_value_210->type->mPointerNum>=1) {
                __dec_obj116=come_value_246->c_value,
                come_value_246->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_267,right_value_228->c_value));
                __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            left_value_210->type->mPointerNum==0) {
                __dec_obj117=come_value_246->c_value,
                come_value_246->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_267,right_value_228->c_value));
                __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                ((struct tuple2$2int$bool$*)(__right_value243=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_267,left_value_210->type->mPointerNum)));
                /*c*/ come_call_finalizer3(__right_value243,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        result_type_268=(struct sType*)come_increment_ref_count(sType_clone(left_type_211));
        __dec_obj118=result_type_268->mArrayNum,
        result_type_268->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 822, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj118,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj119=come_value_246->type,
        come_value_246->type=(struct sType*)come_increment_ref_count(result_type_268);
        /*b*/ come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_246->var=((void*)0);
        __dec_obj120=come_value_246->type,
        come_value_246->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_246->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_246));
        add_come_last_code(info,"%s",come_value_246->c_value);
        /*c*/ come_call_finalizer3(come_value_246,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_260,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value_code_267 = come_decrement_ref_count(left_value_code_267, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__129 = (_Bool)1;
    ((left_206) ? left_206 = come_decrement_ref_count(left_206, ((struct sNode*)left_206)->finalize, ((struct sNode*)left_206)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((right_207) ? right_207 = come_decrement_ref_count(right_207, ((struct sNode*)right_207)->finalize, ((struct sNode*)right_207)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_210,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num_212,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_224 = come_decrement_ref_count(fun_name2_224, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(right_value_228,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_231,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__129;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        ((self->mRight) ? self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__104 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__104,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__104;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_213;
struct list_item$1CVALUE$ph* prev_it_214;
    it_213=self->head;
    while(    it_213!=((void*)0)) {
        prev_it_214=it_213;
        it_213=it_213->next;
        /*c*/ come_call_finalizer3(prev_it_214,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_216;
struct sNode* __result_obj__105;
struct sNode* __result_obj__106;
struct sNode* result_217;
struct sNode* __result_obj__107;
result_216 = (void*)0;
result_217 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_216,0,sizeof(struct sNode*));
        __result_obj__105 = result_216;
        return __result_obj__105;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__106 = self->it->item;
        return __result_obj__106;
    }
    memset(&result_217,0,sizeof(struct sNode*));
    __result_obj__107 = result_217;
    return __result_obj__107;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_219;
struct sNode* __result_obj__108;
struct sNode* __result_obj__109;
struct sNode* result_220;
struct sNode* __result_obj__110;
result_219 = (void*)0;
result_220 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_219,0,sizeof(struct sNode*));
        __result_obj__108 = result_219;
        return __result_obj__108;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__109 = self->it->item;
        return __result_obj__109;
    }
    memset(&result_220,0,sizeof(struct sNode*));
    __result_obj__110 = result_220;
    return __result_obj__110;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_234;
int i_235;
struct sNode* __result_obj__113;
struct sNode* default_value_236;
struct sNode* __result_obj__114;
default_value_236 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_234=self->head;
    i_235=0;
    while(    it_234!=((void*)0)) {
        if(        position==i_235) {
            __result_obj__113 = (struct sNode*)come_increment_ref_count(it_234->item);
            ((__result_obj__113) ? __result_obj__113 = come_decrement_ref_count(__result_obj__113, ((struct sNode*)__result_obj__113)->finalize, ((struct sNode*)__result_obj__113)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__113;
        }
        it_234=it_234->next;
        i_235++;
    }
    memset(&default_value_236,0,sizeof(struct sNode*));
    __result_obj__114 = (struct sNode*)come_increment_ref_count(default_value_236);
    ((default_value_236) ? default_value_236 = come_decrement_ref_count(default_value_236, ((struct sNode*)default_value_236)->finalize, ((struct sNode*)default_value_236)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__114) ? __result_obj__114 = come_decrement_ref_count(__result_obj__114, ((struct sNode*)__result_obj__114)->finalize, ((struct sNode*)__result_obj__114)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__114;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_237;
int i_238;
struct sNode* __result_obj__115;
struct sNode* default_value_239;
struct sNode* __result_obj__116;
default_value_239 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_237=self->head;
    i_238=0;
    while(    it_237!=((void*)0)) {
        if(        position==i_238) {
            __result_obj__115 = (struct sNode*)come_increment_ref_count(it_237->item);
            ((__result_obj__115) ? __result_obj__115 = come_decrement_ref_count(__result_obj__115, ((struct sNode*)__result_obj__115)->finalize, ((struct sNode*)__result_obj__115)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__115;
        }
        it_237=it_237->next;
        i_238++;
    }
    memset(&default_value_239,0,sizeof(struct sNode*));
    __result_obj__116 = (struct sNode*)come_increment_ref_count(default_value_239);
    ((default_value_239) ? default_value_239 = come_decrement_ref_count(default_value_239, ((struct sNode*)default_value_239)->finalize, ((struct sNode*)default_value_239)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__116) ? __result_obj__116 = come_decrement_ref_count(__result_obj__116, ((struct sNode*)__result_obj__116)->finalize, ((struct sNode*)__result_obj__116)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__116;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_240;
int i_241;
struct CVALUE* __result_obj__117;
struct CVALUE* default_value_242;
struct CVALUE* __result_obj__118;
default_value_242 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_240=self->head;
    i_241=0;
    while(    it_240!=((void*)0)) {
        if(        position==i_241) {
            __result_obj__117 = (struct CVALUE*)come_increment_ref_count(it_240->item);
            /*c*/ come_call_finalizer3(__result_obj__117,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__117;
        }
        it_240=it_240->next;
        i_241++;
    }
    memset(&default_value_242,0,sizeof(struct CVALUE*));
    __result_obj__118 = (struct CVALUE*)come_increment_ref_count(default_value_242);
    /*c*/ come_call_finalizer3(default_value_242,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__118,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__118;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_243;
int i_244;
struct CVALUE* __result_obj__119;
struct CVALUE* default_value_245;
struct CVALUE* __result_obj__120;
default_value_245 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_243=self->head;
    i_244=0;
    while(    it_243!=((void*)0)) {
        if(        position==i_244) {
            __result_obj__119 = (struct CVALUE*)come_increment_ref_count(it_243->item);
            /*c*/ come_call_finalizer3(__result_obj__119,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__119;
        }
        it_243=it_243->next;
        i_244++;
    }
    memset(&default_value_245,0,sizeof(struct CVALUE*));
    __result_obj__120 = (struct CVALUE*)come_increment_ref_count(default_value_245);
    /*c*/ come_call_finalizer3(default_value_245,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__120,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__120;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_248;
struct list$1sNode$ph* __result_obj__121;
struct list_item$1sNode$ph* it_249;
int i_250;
struct list_item$1sNode$ph* prev_it_251;
struct list_item$1sNode$ph* it_252;
int i_253;
struct list_item$1sNode$ph* prev_it_254;
struct list_item$1sNode$ph* it_255;
struct list_item$1sNode$ph* head_prev_it_256;
struct list_item$1sNode$ph* tail_it_257;
int i_258;
struct list_item$1sNode$ph* prev_it_259;
struct list$1sNode$ph* __result_obj__122;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_248=tail;
        tail=head;
        head=tmp_248;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__121 = self;
        return __result_obj__121;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_249=self->head;
        i_250=0;
        while(        it_249!=((void*)0)) {
            if(            i_250<tail) {
                prev_it_251=it_249;
                it_249=it_249->next;
                i_250++;
                /*c*/ come_call_finalizer3(prev_it_251,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_250==tail) {
                self->head=it_249;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_249=it_249->next;
                i_250++;
            }
        }
    }
    else if(    tail==self->len) {
        it_252=self->head;
        i_253=0;
        while(        it_252!=((void*)0)) {
            if(            i_253==head) {
                self->tail=it_252->prev;
                self->tail->next=((void*)0);
            }
            if(            i_253>=head) {
                prev_it_254=it_252;
                it_252=it_252->next;
                i_253++;
                /*c*/ come_call_finalizer3(prev_it_254,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_252=it_252->next;
                i_253++;
            }
        }
    }
    else {
        it_255=self->head;
        head_prev_it_256=((void*)0);
        tail_it_257=((void*)0);
        i_258=0;
        while(        it_255!=((void*)0)) {
            if(            i_258==head) {
                head_prev_it_256=it_255->prev;
            }
            if(            i_258==tail) {
                tail_it_257=it_255;
            }
            if(            i_258>=head&&i_258<tail) {
                prev_it_259=it_255;
                it_255=it_255->next;
                i_258++;
                /*c*/ come_call_finalizer3(prev_it_259,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_255=it_255->next;
                i_258++;
            }
        }
        if(        head_prev_it_256!=((void*)0)) {
            head_prev_it_256->next=tail_it_257;
        }
        if(        tail_it_257!=((void*)0)) {
            tail_it_257->prev=head_prev_it_256;
        }
    }
    __result_obj__122 = self;
    return __result_obj__122;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_262;
struct CVALUE* __result_obj__123;
struct CVALUE* __result_obj__124;
struct CVALUE* result_263;
struct CVALUE* __result_obj__125;
result_262 = (void*)0;
result_263 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_262,0,sizeof(struct CVALUE*));
        __result_obj__123 = result_262;
        return __result_obj__123;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__124 = self->it->item;
        return __result_obj__124;
    }
    memset(&result_263,0,sizeof(struct CVALUE*));
    __result_obj__125 = result_263;
    return __result_obj__125;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_265;
struct CVALUE* __result_obj__126;
struct CVALUE* __result_obj__127;
struct CVALUE* result_266;
struct CVALUE* __result_obj__128;
result_265 = (void*)0;
result_266 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_265,0,sizeof(struct CVALUE*));
        __result_obj__126 = result_265;
        return __result_obj__126;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__127 = self->it->item;
        return __result_obj__127;
    }
    memset(&result_266,0,sizeof(struct CVALUE*));
    __result_obj__128 = result_266;
    return __result_obj__128;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
void* __right_value250 = (void*)0;
struct sNode* __dec_obj122;
struct sLoadArrayNode* __result_obj__130;
    ((struct sNodeBase*)(__right_value248=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value248,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj121=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    /*b*/ come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj122=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj122 ? __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__130 = (struct sLoadArrayNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__130,sLoadArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__130;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __right_value251 = (void*)0;
char* __result_obj__131;
    __result_obj__131 = (char*)come_increment_ref_count(((char*)(__right_value251=__builtin_string("sLoadArrayNode"))));
    (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__131 = come_decrement_ref_count(__result_obj__131, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__131;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_269;
struct list$1sNode$ph* array_num_nodes_270;
_Bool Value_271;
_Bool __result_obj__132;
void* __right_value252 = (void*)0;
struct CVALUE* left_value_272;
void* __right_value253 = (void*)0;
struct sType* left_type_273;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1CVALUE$ph* array_num_274;
struct list$1sNode$ph* o2_saved_275;
struct sNode* it_276;
_Bool Value_277;
_Bool __result_obj__133;
void* __right_value256 = (void*)0;
struct CVALUE* c_value_278;
void* __right_value257 = (void*)0;
struct sType* type_279;
char* fun_name_280;
_Bool calling_fun_281;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct CVALUE* come_value_282;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct buffer* buf_283;
struct list$1CVALUE$ph* o2_saved_284;
struct CVALUE* it_285;
void* __right_value264 = (void*)0;
char* left_value_code_286;
void* __right_value265 = (void*)0;
char* __dec_obj123;
void* __right_value266 = (void*)0;
struct sType* result_type_287;
struct sType* __dec_obj124;
int n_288;
void* __right_value267 = (void*)0;
struct sType* __dec_obj125;
void* __right_value268 = (void*)0;
struct sType* __dec_obj126;
int i_289;
void* __right_value269 = (void*)0;
struct sType* __dec_obj127;
void* __right_value270 = (void*)0;
struct sType* __dec_obj128;
_Bool __result_obj__134;
memset(&calling_fun_281, 0, sizeof(_Bool));
    left_269=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_270=self->mArrayNum;
    Value_271=node_compile(left_269,info);
    if(    !Value_271) {
        __result_obj__132 = (_Bool)0;
        ((left_269) ? left_269 = come_decrement_ref_count(left_269, ((struct sNode*)left_269)->finalize, ((struct sNode*)left_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__132;
    }
    else {
    }
    left_value_272=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_273=(struct sType*)come_increment_ref_count(sType_clone(left_value_272->type));
    array_num_274=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 868, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_275=(array_num_nodes_270),it_276=list$1sNode$ph_begin((o2_saved_275));    !list$1sNode$ph_end((o2_saved_275));    it_276=list$1sNode$ph_next((o2_saved_275))    ){
        Value_277=node_compile(it_276,info);
        if(        !Value_277) {
            __result_obj__133 = (_Bool)0;
            ((left_269) ? left_269 = come_decrement_ref_count(left_269, ((struct sNode*)left_269)->finalize, ((struct sNode*)left_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_value_272,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__133;
        }
        else {
        }
        c_value_278=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_274,(struct CVALUE*)come_increment_ref_count(c_value_278));
        /*c*/ come_call_finalizer3(c_value_278,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_279=(struct sType*)come_increment_ref_count(sType_clone(left_value_272->type));
    fun_name_280="operator_load_element";
    if(    self->mQuote) {
        calling_fun_281=(_Bool)0;
    }
    else {
        calling_fun_281=operator_overload_fun(type_279,fun_name_280,(struct sNode*)come_increment_ref_count(left_269),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_270,0)),(struct CVALUE*)come_increment_ref_count(left_value_272),(struct CVALUE*)come_increment_ref_count(list$1CVALUE$ph_operator_load_element(array_num_274,0)),self->mBreakGuard,info);
    }
    if(    !calling_fun_281) {
        come_value_282=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 892, "struct CVALUE*"))));
        buf_283=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 894, "struct buffer*"))));
        buffer_append_str(buf_283,left_value_272->c_value);
        for(        o2_saved_284=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_274)),it_285=list$1CVALUE$ph_begin((o2_saved_284));        !list$1CVALUE$ph_end((o2_saved_284));        it_285=list$1CVALUE$ph_next((o2_saved_284))        ){
            buffer_append_format(buf_283,"[%s]",it_285->c_value);
        }
        /*c*/ come_call_finalizer3(o2_saved_284,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        left_value_code_286=(char*)come_increment_ref_count(buffer_to_string(buf_283));
        __dec_obj123=come_value_282->c_value,
        come_value_282->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_286));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type_287=(struct sType*)come_increment_ref_count(sType_clone(left_type_273));
        if(        result_type_287->mOriginalLoadVarType) {
            __dec_obj124=result_type_287,
            result_type_287=(struct sType*)come_increment_ref_count(result_type_287->mOriginalLoadVarType);
            /*b*/ come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_287->mArrayNum)>0) {
            n_288=list$1sNode$ph_length(result_type_287->mArrayNum)-list$1CVALUE$ph_length(array_num_274);
            if(            n_288==0) {
                __dec_obj125=result_type_287,
                result_type_287=(struct sType*)come_increment_ref_count(sType_clone(left_type_273));
                /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_273->mOriginalLoadVarType) {
                    __dec_obj126=result_type_287,
                    result_type_287=(struct sType*)come_increment_ref_count(sType_clone(left_type_273->mOriginalLoadVarType));
                    /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_287->mArrayNum);
            }
            else if(            n_288>0) {
                for(                i_289=0;                i_289<n_288;                i_289++                ){
                    list$1sNode$ph_delete(result_type_287->mArrayNum,-1,-1);
                }
            }
            else if(            n_288<0) {
                list$1sNode$ph_reset(result_type_287->mArrayNum);
                result_type_287->mPointerNum+=n_288;
                if(                result_type_287->mPointerNum<0) {
                    result_type_287->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_287->mPointerNum>0) {
                result_type_287->mPointerNum-=list$1CVALUE$ph_length(array_num_274);
                if(                result_type_287->mPointerNum<0) {
                    result_type_287->mPointerNum=0;
                }
            }
        }
        __dec_obj127=come_value_282->type,
        come_value_282->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_287));
        /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_282->var=((void*)0);
        __dec_obj128=come_value_282->type,
        come_value_282->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_282->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj128,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_282));
        add_come_last_code(info,"%s",come_value_282->c_value);
        /*c*/ come_call_finalizer3(come_value_282,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_283,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value_code_286 = come_decrement_ref_count(left_value_code_286, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_287,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__134 = (_Bool)1;
    ((left_269) ? left_269 = come_decrement_ref_count(left_269, ((struct sNode*)left_269)->finalize, ((struct sNode*)left_269)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_272,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_273,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num_274,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_279,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__134;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sNode$ph* __dec_obj129;
void* __right_value273 = (void*)0;
struct sNode* __dec_obj130;
struct sLoadRangeArrayNode* __result_obj__135;
    ((struct sNodeBase*)(__right_value271=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value271,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj129=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    /*b*/ come_call_finalizer3(__dec_obj129,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj130=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__135 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__135,sLoadRangeArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__135;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __right_value274 = (void*)0;
char* __result_obj__136;
    __result_obj__136 = (char*)come_increment_ref_count(((char*)(__right_value274=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__136 = come_decrement_ref_count(__result_obj__136, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__136;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_290;
struct list$1sNode$ph* array_num_nodes_291;
_Bool Value_292;
_Bool __result_obj__137;
void* __right_value275 = (void*)0;
struct CVALUE* left_value_293;
void* __right_value276 = (void*)0;
struct sType* left_type_294;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct list$1CVALUE$ph* array_num_295;
struct list$1sNode$ph* o2_saved_296;
struct sNode* it_297;
_Bool Value_298;
_Bool __result_obj__138;
void* __right_value279 = (void*)0;
struct CVALUE* c_value_299;
void* __right_value280 = (void*)0;
struct sType* type_300;
char* fun_name_301;
_Bool calling_fun_302;
void* __right_value281 = (void*)0;
struct sNode* middle_303;
void* __right_value282 = (void*)0;
struct sNode* right_304;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct CVALUE* come_value_305;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct buffer* buf_306;
struct list$1CVALUE$ph* o2_saved_307;
struct CVALUE* it_308;
void* __right_value289 = (void*)0;
char* left_value_code_309;
void* __right_value290 = (void*)0;
char* __dec_obj131;
void* __right_value291 = (void*)0;
struct sType* result_type_310;
struct sType* __dec_obj132;
int n_311;
void* __right_value292 = (void*)0;
struct sType* __dec_obj133;
void* __right_value293 = (void*)0;
struct sType* __dec_obj134;
int i_312;
void* __right_value294 = (void*)0;
struct sType* __dec_obj135;
void* __right_value295 = (void*)0;
struct sType* __dec_obj136;
_Bool __result_obj__139;
memset(&calling_fun_302, 0, sizeof(_Bool));
    left_290=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_291=self->mArrayNum;
    Value_292=node_compile(left_290,info);
    if(    !Value_292) {
        __result_obj__137 = (_Bool)0;
        ((left_290) ? left_290 = come_decrement_ref_count(left_290, ((struct sNode*)left_290)->finalize, ((struct sNode*)left_290)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__137;
    }
    else {
    }
    left_value_293=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_294=(struct sType*)come_increment_ref_count(sType_clone(left_value_293->type));
    array_num_295=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 990, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_296=(array_num_nodes_291),it_297=list$1sNode$ph_begin((o2_saved_296));    !list$1sNode$ph_end((o2_saved_296));    it_297=list$1sNode$ph_next((o2_saved_296))    ){
        Value_298=node_compile(it_297,info);
        if(        !Value_298) {
            __result_obj__138 = (_Bool)0;
            ((left_290) ? left_290 = come_decrement_ref_count(left_290, ((struct sNode*)left_290)->finalize, ((struct sNode*)left_290)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_value_293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_294,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_295,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__138;
        }
        else {
        }
        c_value_299=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_295,(struct CVALUE*)come_increment_ref_count(c_value_299));
        /*c*/ come_call_finalizer3(c_value_299,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_300=(struct sType*)come_increment_ref_count(sType_clone(left_value_293->type));
    fun_name_301="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_302=(_Bool)0;
    }
    else {
        middle_303=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_291,0));
        right_304=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_291,1));
        calling_fun_302=operator_overload_fun2(type_300,fun_name_301,(struct sNode*)come_increment_ref_count(left_290),(struct sNode*)come_increment_ref_count(middle_303),(struct sNode*)come_increment_ref_count(right_304),left_value_293,((struct CVALUE*)(__right_value283=list$1CVALUE$ph_operator_load_element(array_num_295,0))),((struct CVALUE*)(__right_value284=list$1CVALUE$ph_operator_load_element(array_num_295,1))),info);
        /*c*/ come_call_finalizer3(__right_value283,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value284,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((middle_303) ? middle_303 = come_decrement_ref_count(middle_303, ((struct sNode*)middle_303)->finalize, ((struct sNode*)middle_303)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((right_304) ? right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    !calling_fun_302) {
        come_value_305=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 1016, "struct CVALUE*"))));
        buf_306=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 1018, "struct buffer*"))));
        buffer_append_str(buf_306,left_value_293->c_value);
        for(        o2_saved_307=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_295)),it_308=list$1CVALUE$ph_begin((o2_saved_307));        !list$1CVALUE$ph_end((o2_saved_307));        it_308=list$1CVALUE$ph_next((o2_saved_307))        ){
            buffer_append_format(buf_306,"[%s]",it_308->c_value);
        }
        /*c*/ come_call_finalizer3(o2_saved_307,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        left_value_code_309=(char*)come_increment_ref_count(buffer_to_string(buf_306));
        __dec_obj131=come_value_305->c_value,
        come_value_305->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_309));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type_310=(struct sType*)come_increment_ref_count(sType_clone(left_type_294));
        if(        result_type_310->mOriginalLoadVarType) {
            __dec_obj132=result_type_310,
            result_type_310=(struct sType*)come_increment_ref_count(result_type_310->mOriginalLoadVarType);
            /*b*/ come_call_finalizer3(__dec_obj132,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_310->mArrayNum)>0) {
            n_311=list$1sNode$ph_length(result_type_310->mArrayNum)-list$1CVALUE$ph_length(array_num_295);
            if(            n_311==0) {
                __dec_obj133=result_type_310,
                result_type_310=(struct sType*)come_increment_ref_count(sType_clone(left_type_294));
                /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_294->mOriginalLoadVarType) {
                    __dec_obj134=result_type_310,
                    result_type_310=(struct sType*)come_increment_ref_count(sType_clone(left_type_294->mOriginalLoadVarType));
                    /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_310->mArrayNum);
            }
            else if(            n_311>0) {
                for(                i_312=0;                i_312<n_311;                i_312++                ){
                    list$1sNode$ph_delete(result_type_310->mArrayNum,-1,-1);
                }
            }
            else if(            n_311<0) {
                list$1sNode$ph_reset(result_type_310->mArrayNum);
                result_type_310->mPointerNum+=n_311;
                if(                result_type_310->mPointerNum<0) {
                    result_type_310->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_310->mPointerNum>0) {
                result_type_310->mPointerNum-=list$1CVALUE$ph_length(array_num_295);
                if(                result_type_310->mPointerNum<0) {
                    result_type_310->mPointerNum=0;
                }
            }
        }
        __dec_obj135=come_value_305->type,
        come_value_305->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_310));
        /*b*/ come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_305->var=((void*)0);
        __dec_obj136=come_value_305->type,
        come_value_305->type=(struct sType*)come_increment_ref_count(solve_generics(come_value_305->type,info->generics_type,info));
        /*b*/ come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_305));
        add_come_last_code(info,"%s",come_value_305->c_value);
        /*c*/ come_call_finalizer3(come_value_305,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_306,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value_code_309 = come_decrement_ref_count(left_value_code_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_310,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__139 = (_Bool)1;
    ((left_290) ? left_290 = come_decrement_ref_count(left_290, ((struct sNode*)left_290)->finalize, ((struct sNode*)left_290)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_294,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num_295,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_300,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__139;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        ((self->mLeft) ? self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value296 = (void*)0;
struct sNode* __result_obj__140;
    ((struct tuple2$2int$bool$*)(__right_value296=err_msg(info,"parse_method_call is failed")));
    /*c*/ come_call_finalizer3(__right_value296,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__140 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__140) ? __result_obj__140 = come_decrement_ref_count(__result_obj__140, ((struct sNode*)__result_obj__140)->finalize, ((struct sNode*)__result_obj__140)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__140;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value304 = (void*)0;
struct sNode* __result_obj__143;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1094, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value298=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1094, "struct sStoreFieldNode*")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result_obj__143 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value304=_inf_value3)));
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value298,sStoreFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value304) ? __right_value304 = come_decrement_ref_count(__right_value304, ((struct sNode*)__right_value304)->finalize, ((struct sNode*)__right_value304)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__143) ? __result_obj__143 = come_decrement_ref_count(__result_obj__143, ((struct sNode*)__result_obj__143)->finalize, ((struct sNode*)__result_obj__143)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__143;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
struct sStoreFieldNode* __result_obj__141;
void* __right_value299 = (void*)0;
struct sStoreFieldNode* result_313;
void* __right_value300 = (void*)0;
char* __dec_obj137;
void* __right_value301 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value302 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value303 = (void*)0;
char* __dec_obj140;
struct sStoreFieldNode* __result_obj__142;
    if(    self==(void*)0) {
        __result_obj__141 = (void*)0;
        return __result_obj__141;
    }
    result_313=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*"));
    if(    self!=((void*)0)) {
        result_313->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj137=result_313->sname,
        result_313->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreFieldNode_clone", 5, "char*"));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_313->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj138=result_313->mLeft,
        result_313->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj138 ? __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj139=result_313->mRight,
        result_313->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj140=result_313->mName,
        result_313->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStoreFieldNode_clone", 9, "char*"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__142 = result_313;
    /*c*/ come_call_finalizer3(result_313,sStoreFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__142;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
_Bool range_array_314;
char* p_315;
int sline_316;
_Bool no_comma_317;
_Bool no_output_err_318;
_Bool no_output_come_code_319;
void* __right_value305 = (void*)0;
struct sNode* exp_320;
_Bool quote_321;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1sNode$ph* array_num_322;
void* __right_value308 = (void*)0;
struct sNode* node2_323;
void* __right_value312 = (void*)0;
struct sNode* node3_327;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value319 = (void*)0;
struct sNode* __dec_obj147;
_Bool quote_329;
_Bool range_330;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1sNode$ph* array_num_331;
_Bool range_array2_332;
char* p_333;
int sline_334;
_Bool no_comma_335;
_Bool no_output_err_336;
_Bool no_output_come_code_337;
void* __right_value322 = (void*)0;
struct sNode* exp_338;
void* __right_value323 = (void*)0;
struct sNode* node2_339;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sNode* right_node_340;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj152;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value340 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value341 = (void*)0;
char* field_name_343;
_Bool parse_method_generics_type_344;
char* p_345;
int sline_346;
void* __right_value342 = (void*)0;
char* word_347;
void* __right_value343 = (void*)0;
struct sNode* right_node_348;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* _inf_value7;
struct sStoreFieldNode* _inf_obj_value7;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj157;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* __dec_obj158;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj159;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* __dec_obj160;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj161;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* __dec_obj162;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj164;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value8;
struct sLoadFieldNode* _inf_obj_value8;
void* __right_value363 = (void*)0;
struct sNode* __dec_obj165;
void* __right_value364 = (void*)0;
struct sNode* node2_349;
struct sNode* __dec_obj166;
struct sNode* __result_obj__151;
    while(    (_Bool)1) {
        range_array_314=(_Bool)0;
        {
            p_315=info->p;
            sline_316=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_317=info->no_comma;
                no_output_err_318=info->no_output_err;
                no_output_come_code_319=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_320=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_317;
                info->no_output_err=no_output_err_318;
                info->no_output_come_code=no_output_come_code_319;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_314=(_Bool)1;
                }
                ((exp_320) ? exp_320 = come_decrement_ref_count(exp_320, ((struct sNode*)exp_320)->finalize, ((struct sNode*)exp_320)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            info->p=p_315;
            info->sline=sline_316;
        }
        if(        range_array_314&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_321=*info->p==92;
            if(            quote_321) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_322=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1138, "struct list$1sNode$ph*"))));
            skip_pointer_attribute(info);
            node2_323=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_push_back(array_num_322,(struct sNode*)come_increment_ref_count(node2_323));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_327=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(array_num_322,(struct sNode*)come_increment_ref_count(node3_327));
                expected_next_character(93,info);
                ((node3_327) ? node3_327 = come_decrement_ref_count(node3_327, ((struct sNode*)node3_327)->finalize, ((struct sNode*)node3_327)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1159, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value314=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1159, "struct sLoadRangeArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_322),quote_321,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj147=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value314,sLoadRangeArrayNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_322,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node2_323) ? node2_323 = come_decrement_ref_count(node2_323, ((struct sNode*)node2_323)->finalize, ((struct sNode*)node2_323)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !range_array_314&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_329=*info->p==92;
            if(            quote_329) {
                info->p++;
            }
            range_330=(_Bool)0;
            array_num_331=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1168, "struct list$1sNode$ph*"))));
            while(            1) {
                range_array2_332=(_Bool)0;
                {
                    p_333=info->p;
                    sline_334=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_335=info->no_comma;
                        no_output_err_336=info->no_output_err;
                        no_output_come_code_337=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_338=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_335;
                        info->no_output_err=no_output_err_336;
                        info->no_output_come_code=no_output_come_code_337;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_332=(_Bool)1;
                        }
                        ((exp_338) ? exp_338 = come_decrement_ref_count(exp_338, ((struct sNode*)exp_338)->finalize, ((struct sNode*)exp_338)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    info->p=p_333;
                    info->sline=sline_334;
                }
                if(                range_array2_332) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_339=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(array_num_331,(struct sNode*)come_increment_ref_count(node2_339));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        ((struct tuple2$2int$bool$*)(__right_value324=err_msg(info,"require ] character")));
                        /*c*/ come_call_finalizer3(__right_value324,tuple2$2int$bool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                    }
                    ((node2_339) ? node2_339 = come_decrement_ref_count(node2_339, ((struct sNode*)node2_339)->finalize, ((struct sNode*)node2_339)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_340=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1241, "struct sNode");
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value327=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1241, "struct sStoreArrayNode*")),node,(struct sNode*)come_increment_ref_count(right_node_340),(struct list$1sNode$ph*)come_increment_ref_count(array_num_331),quote_329,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj152=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                (__dec_obj152 ? __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value327,sStoreArrayNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((right_node_340) ? right_node_340 = come_decrement_ref_count(right_node_340, ((struct sNode*)right_node_340)->finalize, ((struct sNode*)right_node_340)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1244, "struct sNode");
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value335=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1244, "struct sLoadArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_331),quote_329,(_Bool)0,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj156=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                (__dec_obj156 ? __dec_obj156 = come_decrement_ref_count(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value335,sLoadArrayNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(array_num_331,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_343=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_344=(_Bool)0;
            {
                p_345=info->p;
                sline_346=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_347=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_347,info)) {
                            parse_method_generics_type_344=(_Bool)1;
                        }
                        (word_347 = come_decrement_ref_count(word_347, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                info->p=p_345;
                info->sline=sline_346;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_348=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1299, "struct sNode");
                _inf_obj_value7=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value345=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1299, "struct sStoreFieldNode*")),node,(struct sNode*)come_increment_ref_count(right_node_348),(char*)come_increment_ref_count(field_name_343),info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value7->clone=(void*)sStoreFieldNode_clone;
                _inf_value7->compile=(void*)sStoreFieldNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sStoreFieldNode_kind;
                __dec_obj157=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value7);
                (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value345,sStoreFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((right_node_348) ? right_node_348 = come_decrement_ref_count(right_node_348, ((struct sNode*)right_node_348)->finalize, ((struct sNode*)right_node_348)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            string_operator_equals(field_name_343,"expect")) {
                __dec_obj158=node,
                node=(struct sNode*)come_increment_ref_count(parse_expect_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||parse_method_generics_type_344)) {
                if(                string_operator_equals(field_name_343,"if")) {
                    __dec_obj159=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_343,"elif")) {
                    __dec_obj160=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj160 ? __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_343,"case")) {
                    __dec_obj161=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj161 ? __dec_obj161 = come_decrement_ref_count(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_343,"less")) {
                    __dec_obj162=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_343,"rescue")) {
                    __dec_obj163=node,
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else {
                    __dec_obj164=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_343),info));
                    (__dec_obj164 ? __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
            }
            else {
                _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1326, "struct sNode");
                _inf_obj_value8=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value362=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1326, "struct sLoadFieldNode*")),node,(char*)come_increment_ref_count(field_name_343),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value8->clone=(void*)sLoadFieldNode_clone;
                _inf_value8->compile=(void*)sLoadFieldNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sline_real=(void*)sNodeBase_sline_real;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sNodeBase_terminated;
                _inf_value8->kind=(void*)sLoadFieldNode_kind;
                __dec_obj165=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value8);
                (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value362,sLoadFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (field_name_343 = come_decrement_ref_count(field_name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            node2_349=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_349==((void*)0)) {
                ((node2_349) ? node2_349 = come_decrement_ref_count(node2_349, ((struct sNode*)node2_349)->finalize, ((struct sNode*)node2_349)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            __dec_obj166=node,
            node=(struct sNode*)come_increment_ref_count(node2_349);
            (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            ((node2_349) ? node2_349 = come_decrement_ref_count(node2_349, ((struct sNode*)node2_349)->finalize, ((struct sNode*)node2_349)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    __result_obj__151 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__151) ? __result_obj__151 = come_decrement_ref_count(__result_obj__151, ((struct sNode*)__result_obj__151)->finalize, ((struct sNode*)__result_obj__151)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__151;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value309 = (void*)0;
struct list_item$1sNode$ph* litem_324;
struct sNode* __dec_obj141;
void* __right_value310 = (void*)0;
struct list_item$1sNode$ph* litem_325;
struct sNode* __dec_obj142;
void* __right_value311 = (void*)0;
struct list_item$1sNode$ph* litem_326;
struct sNode* __dec_obj143;
struct list$1sNode$ph* __result_obj__144;
    if(    self->len==0) {
        litem_324=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value309=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_324->prev=((void*)0);
        litem_324->next=((void*)0);
        __dec_obj141=litem_324->item,
        litem_324->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj141 ? __dec_obj141 = come_decrement_ref_count(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_324;
        self->head=litem_324;
    }
    else if(    self->len==1) {
        litem_325=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value310=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_325->prev=self->head;
        litem_325->next=((void*)0);
        __dec_obj142=litem_325->item,
        litem_325->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj142 ? __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_325;
        self->head->next=litem_325;
    }
    else {
        litem_326=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value311=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_326->prev=self->tail;
        litem_326->next=((void*)0);
        __dec_obj143=litem_326->item,
        litem_326->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj143 ? __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_326;
        self->tail=litem_326;
    }
    self->len++;
    __result_obj__144 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__144;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
struct sLoadRangeArrayNode* __result_obj__145;
void* __right_value315 = (void*)0;
struct sLoadRangeArrayNode* result_328;
void* __right_value316 = (void*)0;
char* __dec_obj144;
void* __right_value317 = (void*)0;
struct list$1sNode$ph* __dec_obj145;
void* __right_value318 = (void*)0;
struct sNode* __dec_obj146;
struct sLoadRangeArrayNode* __result_obj__146;
    if(    self==(void*)0) {
        __result_obj__145 = (void*)0;
        return __result_obj__145;
    }
    result_328=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*"));
    if(    self!=((void*)0)) {
        result_328->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj144=result_328->sname,
        result_328->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadRangeArrayNode_clone", 5, "char*"));
        __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_328->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj145=result_328->mArrayNum,
        result_328->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj145,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj146=result_328->mLeft,
        result_328->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj146 ? __dec_obj146 = come_decrement_ref_count(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_328->mQuote=self->mQuote;
    }
    __result_obj__146 = result_328;
    /*c*/ come_call_finalizer3(result_328,sLoadRangeArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__146;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
struct sStoreArrayNode* __result_obj__147;
void* __right_value328 = (void*)0;
struct sStoreArrayNode* result_341;
void* __right_value329 = (void*)0;
char* __dec_obj148;
void* __right_value330 = (void*)0;
struct sNode* __dec_obj149;
void* __right_value331 = (void*)0;
struct sNode* __dec_obj150;
void* __right_value332 = (void*)0;
struct list$1sNode$ph* __dec_obj151;
struct sStoreArrayNode* __result_obj__148;
    if(    self==(void*)0) {
        __result_obj__147 = (void*)0;
        return __result_obj__147;
    }
    result_341=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*"));
    if(    self!=((void*)0)) {
        result_341->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj148=result_341->sname,
        result_341->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreArrayNode_clone", 5, "char*"));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_341->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj149=result_341->mLeft,
        result_341->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj149 ? __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj150=result_341->mRight,
        result_341->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj150 ? __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj151=result_341->mArrayNum,
        result_341->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj151,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_341->mQuote=self->mQuote;
    }
    __result_obj__148 = result_341;
    /*c*/ come_call_finalizer3(result_341,sStoreArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__148;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
struct sLoadArrayNode* __result_obj__149;
void* __right_value336 = (void*)0;
struct sLoadArrayNode* result_342;
void* __right_value337 = (void*)0;
char* __dec_obj153;
void* __right_value338 = (void*)0;
struct list$1sNode$ph* __dec_obj154;
void* __right_value339 = (void*)0;
struct sNode* __dec_obj155;
struct sLoadArrayNode* __result_obj__150;
    if(    self==(void*)0) {
        __result_obj__149 = (void*)0;
        return __result_obj__149;
    }
    result_342=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*"));
    if(    self!=((void*)0)) {
        result_342->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_342->sname,
        result_342->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadArrayNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj154=result_342->mArrayNum,
        result_342->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj154,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_342->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj155=result_342->mLeft,
        result_342->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_342->mQuote=self->mQuote;
    }
    __result_obj__150 = result_342;
    /*c*/ come_call_finalizer3(result_342,sLoadArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__150;
}

