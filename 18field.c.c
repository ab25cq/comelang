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

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char* v1;
    struct sFun* v2;
    struct sGenericsFun* v3;
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
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
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
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
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
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

struct tuple3$3char$phsFun$psGenericsFun$p* get_operator_function(struct sType* type, char* fun_name, struct sInfo* info){
char* fun_name2_239;
struct sFun* operator_fun_240;
struct sGenericsFun* generics_fun_241;
void* __right_value187 = (void*)0;
char* none_generics_name_242;
void* __right_value188 = (void*)0;
struct sType* obj_type_243;
void* __right_value189 = (void*)0;
char* __dec_obj16;
void* __right_value190 = (void*)0;
char* fun_name3_244;
void* __right_value191 = (void*)0;
void* __right_value230 = (void*)0;
struct sType* no_solved_type_251;
struct sType* __dec_obj41;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_275=0;
_Bool err_276=0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
char* __dec_obj42;
int i_283;
void* __right_value236 = (void*)0;
char* new_fun_name_284;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
char* __dec_obj43;
void* __right_value239 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__205;
memset(&i_283, 0, sizeof(int));
    fun_name2_239=((void*)0);
    operator_fun_240=((void*)0);
    generics_fun_241=((void*)0);
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_242=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_243=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info,(_Bool)0));
        __dec_obj16=fun_name2_239,
        fun_name2_239=(char*)come_increment_ref_count(create_method_name(obj_type_243,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_244=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_242,fun_name));
        generics_fun_241=((struct sGenericsFun*)(__right_value191=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_244,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value191,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_241) {
            no_solved_type_251=(struct sType*)come_increment_ref_count(sType_clone(type));
            if(            type->mNoSolvedGenericsType) {
                __dec_obj41=no_solved_type_251,
                no_solved_type_251=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
                /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value232=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_239)),generics_fun_241,obj_type_243,info)));
            name_275=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_276=multiple_assign_var1->v2;
            /*c*/ come_call_finalizer3(__right_value232,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_276) {
                exit(1);
            }
            operator_fun_240=((struct sFun*)(__right_value233=map$2char$phsFun$ph_operator_load_element(info->funcs,name_275)));
            /*c*/ come_call_finalizer3(__right_value233,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(no_solved_type_251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_275 = come_decrement_ref_count(name_275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            operator_fun_240=((struct sFun*)(__right_value234=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_239)));
            /*c*/ come_call_finalizer3(__right_value234,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_242 = come_decrement_ref_count(none_generics_name_242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_243,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_244 = come_decrement_ref_count(fun_name3_244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj42=fun_name2_239,
        fun_name2_239=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_283=128-1;        i_283>=1;        i_283--        ){
            new_fun_name_284=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_239,i_283));
            operator_fun_240=((struct sFun*)(__right_value237=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_284)));
            /*c*/ come_call_finalizer3(__right_value237,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            operator_fun_240) {
                __dec_obj43=fun_name2_239,
                fun_name2_239=(char*)come_increment_ref_count(__builtin_string(new_fun_name_284));
                __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_284 = come_decrement_ref_count(new_fun_name_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_284 = come_decrement_ref_count(new_fun_name_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        operator_fun_240==((void*)0)) {
            operator_fun_240=((struct sFun*)(__right_value239=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_239)));
            /*c*/ come_call_finalizer3(__right_value239,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    __result_obj__205 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value246=tuple3$3char$phsFun$psGenericsFun$p_initialize((struct tuple3$3char$phsFun$psGenericsFun$p**)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "18field.c", 59, "struct tuple3$3char$phsFun$psGenericsFun$p")),(char*)come_increment_ref_count(fun_name2_239),operator_fun_240,generics_fun_241))));
    (fun_name2_239 = come_decrement_ref_count(fun_name2_239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value246,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_245;
unsigned int it_246;
struct sGenericsFun* __result_obj__163;
struct sGenericsFun* __result_obj__164;
struct sGenericsFun* __result_obj__165;
struct sGenericsFun* __result_obj__166;
    hash_245=string_get_hash_key(((char*)key))%self->size;
    it_246=hash_245;
    while((_Bool)1) {
        if(        self->item_existance[it_246]) {
            if(            string_equals(self->keys[it_246],key)) {
                __result_obj__163 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_246]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__163,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__163;
            }
            it_246++;
            if(            it_246>=self->size) {
                it_246=0;
            }
            else if(            it_246==hash_245) {
                __result_obj__164 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__164,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__164;
            }
        }
        else {
            __result_obj__165 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__165,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__165;
        }
    }
    __result_obj__166 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__166,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
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
struct list_item$1sType$ph* it_247;
struct list_item$1sType$ph* prev_it_248;
    it_247=self->head;
    while(it_247!=((void*)0)) {
        prev_it_248=it_247;
        it_247=it_247->next;
        /*c*/ come_call_finalizer3(prev_it_248,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_249;
struct list_item$1sNode$ph* prev_it_250;
    it_249=self->head;
    while(it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*c*/ come_call_finalizer3(prev_it_250,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__167;
void* __right_value192 = (void*)0;
struct sType* result_252;
void* __right_value193 = (void*)0;
struct sType* __dec_obj17;
void* __right_value194 = (void*)0;
struct sType* __dec_obj18;
void* __right_value202 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value203 = (void*)0;
struct sType* __dec_obj23;
void* __right_value204 = (void*)0;
struct sType* __dec_obj24;
void* __right_value206 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value207 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value208 = (void*)0;
char* __dec_obj27;
void* __right_value209 = (void*)0;
char* __dec_obj28;
void* __right_value210 = (void*)0;
char* __dec_obj29;
void* __right_value218 = (void*)0;
struct list$1sNode$ph* __dec_obj33;
void* __right_value219 = (void*)0;
char* __dec_obj34;
void* __right_value220 = (void*)0;
struct list$1sType$ph* __dec_obj35;
void* __right_value228 = (void*)0;
struct list$1char$ph* __dec_obj39;
void* __right_value229 = (void*)0;
struct sType* __dec_obj40;
struct sType* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__167 = (void*)0;
        return __result_obj__167;
    }
    result_252=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_252->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj17=result_252->mOriginalLoadVarType,
        result_252->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj18=result_252->mChannelType,
        result_252->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj22=result_252->mGenericsTypes,
        result_252->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj23=result_252->mNoSolvedGenericsType,
        result_252->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj24=result_252->mAnyOriginalType,
        result_252->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj25=result_252->mSizeNum,
        result_252->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj26=result_252->mAlignas,
        result_252->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj27=result_252->mTupleName,
        result_252->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj28=result_252->mAttribute,
        result_252->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_252->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_252->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_252->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_252->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_252->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_252->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_252->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_252->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_252->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_252->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_252->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_252->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_252->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_252->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_252->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_252->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_252->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_252->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_252->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_252->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_252->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_252->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_252->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj29=result_252->mAsmName,
        result_252->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_252->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_252->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj33=result_252->mArrayNum,
        result_252->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj33,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_252->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=result_252->mOriginalTypeName,
        result_252->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_252->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_252->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_252->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj35=result_252->mParamTypes,
        result_252->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj39=result_252->mParamNames,
        result_252->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj40=result_252->mResultType,
        result_252->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_252->mVarArgs=self->mVarArgs;
    }
    __result_obj__181 = result_252;
    /*c*/ come_call_finalizer3(result_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__168;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1sType$ph* result_253;
struct list_item$1sType$ph* it_254;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1sType$ph* __result_obj__171;
    if(    self==((void*)0)) {
        __result_obj__168 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__168;
    }
    result_253=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_254=self->head;
    while(it_254!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_253,(struct sType*)come_increment_ref_count(sType_clone(it_254->item)));
        }
        else {
            list$1sType$ph_add(result_253,(struct sType*)come_increment_ref_count(sType_clone(it_254->item)));
        }
        it_254=it_254->next;
    }
    __result_obj__171 = (struct list$1sType$ph*)come_increment_ref_count(result_253);
    /*c*/ come_call_finalizer3(result_253,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__169;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__169 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value197 = (void*)0;
struct list_item$1sType$ph* litem_255;
struct sType* __dec_obj19;
void* __right_value198 = (void*)0;
struct list_item$1sType$ph* litem_256;
struct sType* __dec_obj20;
void* __right_value199 = (void*)0;
struct list_item$1sType$ph* litem_257;
struct sType* __dec_obj21;
struct list$1sType$ph* __result_obj__170;
    if(    self->len==0) {
        litem_255=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value197=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_255->prev=((void*)0);
        litem_255->next=((void*)0);
        __dec_obj19=litem_255->item,
        litem_255->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_255;
        self->head=litem_255;
    }
    else if(    self->len==1) {
        litem_256=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value198=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_256->prev=self->head;
        litem_256->next=((void*)0);
        __dec_obj20=litem_256->item,
        litem_256->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_256;
        self->head->next=litem_256;
    }
    else {
        litem_257=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value199=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_257->prev=self->tail;
        litem_257->next=((void*)0);
        __dec_obj21=litem_257->item,
        litem_257->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_257;
        self->tail=litem_257;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_258;
struct list_item$1sType$ph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        /*c*/ come_call_finalizer3(prev_it_259,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__172;
void* __right_value205 = (void*)0;
struct sNode* result_260;
struct sNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__172;
    }
    result_260=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_260->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_260->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_260->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_260->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_260->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_260->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_260->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_260->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_260->kind=self->kind;
    }
    __result_obj__173 = (struct sNode*)come_increment_ref_count(result_260);
    ((result_260) ? result_260 = come_decrement_ref_count(result_260, ((struct sNode*)result_260)->finalize, ((struct sNode*)result_260)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__174;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct list$1sNode$ph* result_261;
struct list_item$1sNode$ph* it_262;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct list$1sNode$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_261=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_262=self->head;
    while(it_262!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_261,(struct sNode*)come_increment_ref_count(sNode_clone(it_262->item)));
        }
        else {
            list$1sNode$ph_add(result_261,(struct sNode*)come_increment_ref_count(sNode_clone(it_262->item)));
        }
        it_262=it_262->next;
    }
    __result_obj__177 = (struct list$1sNode$ph*)come_increment_ref_count(result_261);
    /*c*/ come_call_finalizer3(result_261,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__175;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__175 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value213 = (void*)0;
struct list_item$1sNode$ph* litem_263;
struct sNode* __dec_obj30;
void* __right_value214 = (void*)0;
struct list_item$1sNode$ph* litem_264;
struct sNode* __dec_obj31;
void* __right_value215 = (void*)0;
struct list_item$1sNode$ph* litem_265;
struct sNode* __dec_obj32;
struct list$1sNode$ph* __result_obj__176;
    if(    self->len==0) {
        litem_263=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value213=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj30=litem_263->item,
        litem_263->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value214=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj31=litem_264->item,
        litem_264->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value215=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj32=litem_265->item,
        litem_265->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result_obj__176 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__176;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_266;
struct list_item$1sNode$ph* prev_it_267;
    it_266=self->head;
    while(it_266!=((void*)0)) {
        prev_it_267=it_266;
        it_266=it_266->next;
        /*c*/ come_call_finalizer3(prev_it_267,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
struct list$1char$ph* result_268;
struct list_item$1char$ph* it_269;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1char$ph* __result_obj__180;
    if(    self==((void*)0)) {
        __result_obj__178 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_268=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_269=self->head;
    while(it_269!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_268,(char*)come_increment_ref_count((char*)come_memdup(it_269->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_268,(char*)come_increment_ref_count((char*)come_memdup(it_269->item, "./comelang.h", 1030, "char*")));
        }
        it_269=it_269->next;
    }
    __result_obj__180 = (struct list$1char$ph*)come_increment_ref_count(result_268);
    /*c*/ come_call_finalizer3(result_268,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value223 = (void*)0;
struct list_item$1char$ph* litem_270;
char* __dec_obj36;
void* __right_value224 = (void*)0;
struct list_item$1char$ph* litem_271;
char* __dec_obj37;
void* __right_value225 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj38;
struct list$1char$ph* __result_obj__179;
    if(    self->len==0) {
        litem_270=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value223=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_270->prev=((void*)0);
        litem_270->next=((void*)0);
        __dec_obj36=litem_270->item,
        litem_270->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_270;
        self->head=litem_270;
    }
    else if(    self->len==1) {
        litem_271=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value224=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_271->prev=self->head;
        litem_271->next=((void*)0);
        __dec_obj37=litem_271->item,
        litem_271->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_271;
        self->head->next=litem_271;
    }
    else {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value225=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_272->prev=self->tail;
        litem_272->next=((void*)0);
        __dec_obj38=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_272;
        self->tail=litem_272;
    }
    self->len++;
    __result_obj__179 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_273;
struct list_item$1char$ph* prev_it_274;
    it_273=self->head;
    while(it_273!=((void*)0)) {
        prev_it_274=it_273;
        it_273=it_273->next;
        /*c*/ come_call_finalizer3(prev_it_274,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_277;
unsigned int hash_278;
unsigned int it_279;
struct sFun* __result_obj__182;
struct sFun* __result_obj__183;
struct sFun* __result_obj__184;
struct sFun* __result_obj__185;
default_value_277 = (void*)0;
    memset(&default_value_277,0,sizeof(struct sFun*));
    hash_278=string_get_hash_key(((char*)key))%self->size;
    it_279=hash_278;
    while((_Bool)1) {
        if(        self->item_existance[it_279]) {
            if(            string_equals(self->keys[it_279],key)) {
                __result_obj__182 = (struct sFun*)come_increment_ref_count(self->items[it_279]);
                /*c*/ come_call_finalizer3(default_value_277,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__182,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__182;
            }
            it_279++;
            if(            it_279>=self->size) {
                it_279=0;
            }
            else if(            it_279==hash_278) {
                __result_obj__183 = (struct sFun*)come_increment_ref_count(default_value_277);
                /*c*/ come_call_finalizer3(default_value_277,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__183,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
        }
        else {
            __result_obj__184 = (struct sFun*)come_increment_ref_count(default_value_277);
            /*c*/ come_call_finalizer3(default_value_277,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__184,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__184;
        }
    }
    __result_obj__185 = (struct sFun*)come_increment_ref_count(default_value_277);
    /*c*/ come_call_finalizer3(default_value_277,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
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
struct sFun* default_value_280;
unsigned int hash_281;
unsigned int it_282;
struct sFun* __result_obj__186;
struct sFun* __result_obj__187;
struct sFun* __result_obj__188;
struct sFun* __result_obj__189;
default_value_280 = (void*)0;
    memset(&default_value_280,0,sizeof(struct sFun*));
    hash_281=string_get_hash_key(((char*)key))%self->size;
    it_282=hash_281;
    while((_Bool)1) {
        if(        self->item_existance[it_282]) {
            if(            string_equals(self->keys[it_282],key)) {
                __result_obj__186 = (struct sFun*)come_increment_ref_count(self->items[it_282]);
                /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__186,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__186;
            }
            it_282++;
            if(            it_282>=self->size) {
                it_282=0;
            }
            else if(            it_282==hash_281) {
                __result_obj__187 = (struct sFun*)come_increment_ref_count(default_value_280);
                /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
        }
        else {
            __result_obj__188 = (struct sFun*)come_increment_ref_count(default_value_280);
            /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__188,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__188;
        }
    }
    __result_obj__189 = (struct sFun*)come_increment_ref_count(default_value_280);
    /*c*/ come_call_finalizer3(default_value_280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

static void tuple3$3char$phsFun$psGenericsFun$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple3$3char$phsFun$psGenericsFun$p* tuple3$3char$phsFun$psGenericsFun$p_clone(struct tuple3$3char$phsFun$psGenericsFun$p* self){
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__190;
void* __right_value240 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* result_285;
void* __right_value241 = (void*)0;
char* __dec_obj44;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__191;
    if(    self==(void*)0) {
        __result_obj__190 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__190,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__190;
    }
    result_285=(struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count((struct tuple3$3char$phsFun$psGenericsFun$p*)come_calloc_v2(1, sizeof(struct tuple3$3char$phsFun$psGenericsFun$p)*(1), "tuple3$3char$phsFun$psGenericsFun$p_clone", 3, "struct tuple3$3char$phsFun$psGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj44=result_285->v1,
        result_285->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple3$3char$phsFun$psGenericsFun$p_clone", 4, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_285->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_285->v3=self->v3;
    }
    __result_obj__191 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(result_285);
    /*c*/ come_call_finalizer3(result_285,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,tuple3$3char$phsFun$psGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static unsigned int tuple3$3char$phsFun$psGenericsFun$p_get_hash_key(struct tuple3$3char$phsFun$psGenericsFun$p* self){
unsigned int result_286;
    result_286=0;
    result_286+=int_get_hash_key(((int)self->v1));
    result_286+=int_get_hash_key(((int)self->v2));
    result_286+=int_get_hash_key(((int)self->v3));
    return result_286;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_287;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_288;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_287=left->head;
    it2_288=right->head;
    while(it_287!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_287->item,it2_288->item)) {
            return (_Bool)0;
        }
        it_287=it_287->next;
        it2_288=it2_288->next;
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
struct list_item$1sType$ph* it_289;
struct list_item$1sType$ph* it2_290;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_289=left->head;
    it2_290=right->head;
    while(it_289!=((void*)0)) {
        if(        !sType_equals(it_289->item,it2_290->item)) {
            return (_Bool)0;
        }
        it_289=it_289->next;
        it2_290=it2_290->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_291;
struct list_item$1sNode$ph* it2_292;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_291=left->head;
    it2_292=right->head;
    while(it_291!=((void*)0)) {
        if(        !sNode_equals(it_291->item,it2_292->item)) {
            return (_Bool)0;
        }
        it_291=it_291->next;
        it2_292=it2_292->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_293;
struct list_item$1char$ph* it2_294;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_293=left->head;
    it2_294=right->head;
    while(it_293!=((void*)0)) {
        if(        !string_equals(it_293->item,it2_294->item)) {
            return (_Bool)0;
        }
        it_293=it_293->next;
        it2_294=it2_294->next;
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
int n_295;
_Bool result_296;
char* it_299;
char* default_value_302;
void* __right_value242 = (void*)0;
char* it2_303;
struct sVar* default_value2_306;
void* __right_value243 = (void*)0;
struct sVar* item_307;
void* __right_value244 = (void*)0;
struct sVar* item2_310;
default_value_302 = (void*)0;
default_value2_306 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_295=0;
    result_296=(_Bool)1;
    for(    it_299=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_299=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_302,0,sizeof(char*));
        it2_303=((char*)(__right_value242=list$1char$ph_item(right->key_list,n_295,default_value_302)));
        (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_299,it2_303)) {
            memset(&default_value2_306,0,sizeof(struct sVar*));
            item_307=((struct sVar*)(__right_value243=map$2char$phsVar$ph_at(left,it_299,(struct sVar*)come_increment_ref_count(default_value2_306))));
            /*c*/ come_call_finalizer3(__right_value243,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_310=((struct sVar*)(__right_value244=map$2char$phsVar$ph_at(right,it2_303,(struct sVar*)come_increment_ref_count(default_value2_306))));
            /*c*/ come_call_finalizer3(__right_value244,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_307,item2_310)) {
                result_296=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_306,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_296=(_Bool)0;
        }
        n_295++;
        (default_value_302 = come_decrement_ref_count(default_value_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_296;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_297;
char* __result_obj__192;
char* __result_obj__193;
char* result_298;
char* __result_obj__194;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result_obj__192 = result_297;
        return __result_obj__192;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__193 = self->it->item;
        return __result_obj__193;
    }
    memset(&result_298,0,sizeof(char*));
    __result_obj__194 = result_298;
    return __result_obj__194;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_300;
char* __result_obj__195;
char* __result_obj__196;
char* result_301;
char* __result_obj__197;
result_300 = (void*)0;
result_301 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_300,0,sizeof(char*));
        __result_obj__195 = result_300;
        return __result_obj__195;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__196 = self->it->item;
        return __result_obj__196;
    }
    memset(&result_301,0,sizeof(char*));
    __result_obj__197 = result_301;
    return __result_obj__197;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_304;
int i_305;
char* __result_obj__198;
char* __result_obj__199;
    if(    position<0) {
        position+=self->len;
    }
    it_304=self->head;
    i_305=0;
    while(it_304!=((void*)0)) {
        if(        position==i_305) {
            __result_obj__198 = (char*)come_increment_ref_count(it_304->item);
            (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__198;
        }
        it_304=it_304->next;
        i_305++;
    }
    __result_obj__199 = (char*)come_increment_ref_count(default_value);
    (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__199;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_308;
unsigned int it_309;
struct sVar* __result_obj__200;
struct sVar* __result_obj__201;
struct sVar* __result_obj__202;
struct sVar* __result_obj__203;
    hash_308=string_get_hash_key(((char*)key))%self->size;
    it_309=hash_308;
    while((_Bool)1) {
        if(        self->item_existance[it_309]) {
            if(            string_equals(self->keys[it_309],key)) {
                __result_obj__200 = (struct sVar*)come_increment_ref_count(self->items[it_309]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__200,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__200;
            }
            it_309++;
            if(            it_309>=self->size) {
                it_309=0;
            }
            else if(            it_309==hash_308) {
                __result_obj__201 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__201,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__201;
            }
        }
        else {
            __result_obj__202 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__202,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__202;
        }
    }
    __result_obj__203 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
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
char* __dec_obj45;
struct tuple3$3char$phsFun$psGenericsFun$p* __result_obj__204;
    __dec_obj45=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    self->v3=v3;
    __result_obj__204 = (struct tuple3$3char$phsFun$psGenericsFun$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__204,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

static void tuple3$3char$phsFun$psGenericsFun$p$p_finalize(struct tuple3$3char$phsFun$psGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value247 = (void*)0;
struct sType* generics_type_311;
struct sType* __dec_obj46;
struct sClass* klass_312;
char* class_name_313;
void* __right_value248 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var2 = (void*)0;
char* fun_name2_314=0;
struct sFun* operator_fun_315=0;
struct sGenericsFun* generics_fun_316=0;
_Bool result_317;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct CVALUE* come_value_318;
char* left_value2_319;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var3 = (void*)0;
_Bool come_exception_var_1_326=0;
char* Err_327=0;
_Bool _if_conditional1;
_Bool __result_obj__210;
void* __right_value255 = (void*)0;
_Bool _if_conditional2;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
char* __dec_obj47;
void* __right_value258 = (void*)0;
char* __dec_obj48;
char* middle_value2_328;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var4 = (void*)0;
_Bool come_exception_var_2_329=0;
char* Err_330=0;
_Bool _if_conditional3;
_Bool __result_obj__211;
void* __right_value263 = (void*)0;
_Bool _if_conditional4;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
char* __dec_obj49;
void* __right_value266 = (void*)0;
char* __dec_obj50;
char* right_value2_331;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var5 = (void*)0;
_Bool come_exception_var_3_332=0;
char* Err_333=0;
_Bool _if_conditional5;
_Bool __result_obj__212;
void* __right_value271 = (void*)0;
_Bool _if_conditional6;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
char* __dec_obj51;
void* __right_value274 = (void*)0;
char* __dec_obj52;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
char* __dec_obj53;
void* __right_value280 = (void*)0;
struct sType* result_type1_334;
void* __right_value281 = (void*)0;
struct sType* result_type2_335;
struct sType* obj_type_336;
void* __right_value282 = (void*)0;
struct sType* __dec_obj54;
void* __right_value283 = (void*)0;
char* __dec_obj55;
_Bool __result_obj__214;
left_value2_319 = (void*)0;
middle_value2_328 = (void*)0;
right_value2_331 = (void*)0;
    generics_type_311=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_311->mNoSolvedGenericsType) {
        __dec_obj46=generics_type_311,
        generics_type_311=(struct sType*)come_increment_ref_count(generics_type_311->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    klass_312=type->mClass;
    class_name_313=klass_312->mName;
    multiple_assign_var2=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value248=get_operator_function(type,fun_name,info)));
    fun_name2_314=(char*)come_increment_ref_count(multiple_assign_var2->v1);
    operator_fun_315=multiple_assign_var2->v2;
    generics_fun_316=multiple_assign_var2->v3;
    /*c*/ come_call_finalizer3(__right_value248,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    result_317=(_Bool)0;
    if(    operator_fun_315) {
        come_value_318=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 78, "struct CVALUE*"))));
        multiple_assign_var3=((struct tuple2$2bool$char$ph*)(__right_value254=check_assign_type(((char*)(__right_value252=xsprintf("\%s is assigned to",((char*)(__right_value251=string_to_string(fun_name2_314)))))),((struct sType*)(__right_value253=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,0))),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_1_326=multiple_assign_var3->v1;
        Err_327=(char*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        (_if_conditional1=(Err_327)),        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value253,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value254,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional1) {
            __result_obj__210 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_318,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value2_319 = come_decrement_ref_count(left_value2_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_327 = come_decrement_ref_count(Err_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_type_311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_314 = come_decrement_ref_count(fun_name2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__210;
        }
        else {
        }
        if(        (_if_conditional2=(((struct sType*)(__right_value255=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,0)))->mHeap&&left_value->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value255,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)(__right_value256=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,0))),left_value->type,left_value,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value256,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj47=left_value2_319,
            left_value2_319=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj48=left_value2_319,
            left_value2_319=(char*)come_increment_ref_count((char*)come_memdup(left_value->c_value, "18field.c", 88, "char*"));
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        (Err_327 = come_decrement_ref_count(Err_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var4=((struct tuple2$2bool$char$ph*)(__right_value262=check_assign_type(((char*)(__right_value260=xsprintf("\%s is assigned to",((char*)(__right_value259=string_to_string(fun_name2_314)))))),((struct sType*)(__right_value261=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,1))),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_2_329=multiple_assign_var4->v1;
        Err_330=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        (_if_conditional3=(Err_330)),        (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value261,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value262,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional3) {
            __result_obj__211 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_318,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value2_319 = come_decrement_ref_count(left_value2_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (middle_value2_328 = come_decrement_ref_count(middle_value2_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_330 = come_decrement_ref_count(Err_330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_type_311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_314 = come_decrement_ref_count(fun_name2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__211;
        }
        else {
        }
        if(        (_if_conditional4=(((struct sType*)(__right_value263=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,1)))->mHeap&&middle_value->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value263,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional4) {
            std_move(((struct sType*)(__right_value264=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,1))),middle_value->type,middle_value,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value264,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj49=middle_value2_328,
            middle_value2_328=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj50=middle_value2_328,
            middle_value2_328=(char*)come_increment_ref_count((char*)come_memdup(middle_value->c_value, "18field.c", 99, "char*"));
            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        (Err_330 = come_decrement_ref_count(Err_330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        multiple_assign_var5=((struct tuple2$2bool$char$ph*)(__right_value270=check_assign_type(((char*)(__right_value268=xsprintf("\%s is assigned to",((char*)(__right_value267=string_to_string(fun_name2_314)))))),((struct sType*)(__right_value269=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,2))),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_3_332=multiple_assign_var5->v1;
        Err_333=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        if(        (_if_conditional5=(Err_333)),        (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value269,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        /*c*/ come_call_finalizer3(__right_value270,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional5) {
            __result_obj__212 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_318,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value2_319 = come_decrement_ref_count(left_value2_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (middle_value2_328 = come_decrement_ref_count(middle_value2_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (right_value2_331 = come_decrement_ref_count(right_value2_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_333 = come_decrement_ref_count(Err_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_type_311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_314 = come_decrement_ref_count(fun_name2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__212;
        }
        else {
        }
        if(        (_if_conditional6=(((struct sType*)(__right_value271=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,2)))->mHeap&&right_value->type->mHeap)),        /*c*/ come_call_finalizer3(__right_value271,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional6) {
            std_move(((struct sType*)(__right_value272=list$1sType$ph_operator_load_element(operator_fun_315->mParamTypes,2))),right_value->type,right_value,info,(_Bool)1);
            /*c*/ come_call_finalizer3(__right_value272,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj51=right_value2_331,
            right_value2_331=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj52=right_value2_331,
            right_value2_331=(char*)come_increment_ref_count((char*)come_memdup(right_value->c_value, "18field.c", 110, "char*"));
            __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        __dec_obj53=come_value_318->c_value,
        come_value_318->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value275=string_to_string(fun_name2_314))),((char*)(__right_value276=string_to_string(left_value2_319))),((char*)(__right_value277=string_to_string(middle_value2_328))),((char*)(__right_value278=string_to_string(right_value2_331)))));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value277 = come_decrement_ref_count(__right_value277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value278 = come_decrement_ref_count(__right_value278, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type1_334=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_315->mResultType));
        result_type2_335=(struct sType*)come_increment_ref_count(solve_generics(result_type1_334,generics_type_311,info,(_Bool)0));
        obj_type_336=(struct sType*)come_increment_ref_count(generics_type_311);
        __dec_obj54=come_value_318->type,
        come_value_318->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_335));
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_318->var=((void*)0);
        if(        result_type2_335->mHeap) {
            append_object_to_right_values2(come_value_318,(struct sType*)come_increment_ref_count(result_type2_335),info,(_Bool)0,((void*)0),((void*)0));
        }
        __dec_obj55=come_value_318->c_value,
        come_value_318->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_318->c_value,come_value_318->type,info));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value_318->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_318));
        result_317=(_Bool)1;
        /*c*/ come_call_finalizer3(come_value_318,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value2_319 = come_decrement_ref_count(left_value2_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (middle_value2_328 = come_decrement_ref_count(middle_value2_328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (right_value2_331 = come_decrement_ref_count(right_value2_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_333 = come_decrement_ref_count(Err_333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type1_334,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_335,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(obj_type_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__214 = result_317;
    /*c*/ come_call_finalizer3(generics_type_311,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_314 = come_decrement_ref_count(fun_name2_314, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__214;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_320;
int i_321;
struct sType* __result_obj__206;
struct sType* default_value_322;
struct sType* __result_obj__207;
default_value_322 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_320=self->head;
    i_321=0;
    while(it_320!=((void*)0)) {
        if(        position==i_321) {
            __result_obj__206 = (struct sType*)come_increment_ref_count(it_320->item);
            /*c*/ come_call_finalizer3(__result_obj__206,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__206;
        }
        it_320=it_320->next;
        i_321++;
    }
    memset(&default_value_322,0,sizeof(struct sType*));
    __result_obj__207 = (struct sType*)come_increment_ref_count(default_value_322);
    /*c*/ come_call_finalizer3(default_value_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_323;
int i_324;
struct sType* __result_obj__208;
struct sType* default_value_325;
struct sType* __result_obj__209;
default_value_325 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_323=self->head;
    i_324=0;
    while(it_323!=((void*)0)) {
        if(        position==i_324) {
            __result_obj__208 = (struct sType*)come_increment_ref_count(it_323->item);
            /*c*/ come_call_finalizer3(__result_obj__208,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__208;
        }
        it_323=it_323->next;
        i_324++;
    }
    memset(&default_value_325,0,sizeof(struct sType*));
    __result_obj__209 = (struct sType*)come_increment_ref_count(default_value_325);
    /*c*/ come_call_finalizer3(default_value_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value284 = (void*)0;
struct list_item$1CVALUE$ph* litem_337;
struct CVALUE* __dec_obj56;
void* __right_value285 = (void*)0;
struct list_item$1CVALUE$ph* litem_338;
struct CVALUE* __dec_obj57;
void* __right_value286 = (void*)0;
struct list_item$1CVALUE$ph* litem_339;
struct CVALUE* __dec_obj58;
struct list$1CVALUE$ph* __result_obj__213;
    if(    self->len==0) {
        litem_337=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value284=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1111, "struct list_item$1CVALUE$ph*"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj56=litem_337->item,
        litem_337->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj56,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value285=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1121, "struct list_item$1CVALUE$ph*"))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj57=litem_338->item,
        litem_338->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj57,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value286=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1131, "struct list_item$1CVALUE$ph*"))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj58=litem_339->item,
        litem_339->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result_obj__213 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value290 = (void*)0;
char* __dec_obj61;
struct sStoreFieldNode* __result_obj__215;
    ((struct sNodeBase*)(__right_value287=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value287,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj59=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj60=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj61=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__215 = (struct sStoreFieldNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__215,sStoreFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __right_value291 = (void*)0;
char* __result_obj__216;
    __result_obj__216 = (char*)come_increment_ref_count(((char*)(__right_value291=__builtin_string("sStoreFieldNode"))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__216;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_340;
struct sNode* right_341;
void* __right_value292 = (void*)0;
char* name_342;
_Bool Value_343;
_Bool __result_obj__217;
void* __right_value293 = (void*)0;
struct CVALUE* left_value_344;
struct sType* left_type2_345;
struct sType* __dec_obj62;
int i_346;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
_Bool _if_conditional7;
void* __right_value296 = (void*)0;
char* __dec_obj63;
_Bool Value_347;
_Bool __result_obj__218;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
_Bool new_channel_348;
void* __right_value299 = (void*)0;
struct CVALUE* right_value_349;
struct sType* right_type_350;
struct sType* left_type_351;
struct sType* left_type3_352;
void* __right_value300 = (void*)0;
struct sClass* klass_353;
struct sType* field_type_362;
int index_363;
char* child_field_name_364;
_Bool child_field_is_pointer_365;
void* __right_value301 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_4_366=0;
char* Err_367=0;
_Bool _if_conditional8;
_Bool __result_obj__227;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_368;
struct tuple2$2char$phsType$ph* field_371;
struct tuple2$2char$phsType$ph* multiple_assign_var7 = (void*)0;
char* field_name_374=0;
struct sType* field_type2_375=0;
void* __right_value302 = (void*)0;
struct sType* __dec_obj64;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_376;
struct tuple2$2char$phsType$ph* field_377;
struct tuple2$2char$phsType$ph* multiple_assign_var8 = (void*)0;
char* field_name_378=0;
struct sType* field_type2_379=0;
struct sClass* klass2_380;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_381;
struct tuple2$2char$phsType$ph* field2_382;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* field_name2_383=0;
struct sType* field_type3_384=0;
void* __right_value303 = (void*)0;
char* __dec_obj65;
void* __right_value304 = (void*)0;
struct sType* __dec_obj66;
void* __right_value305 = (void*)0;
struct sType* __dec_obj67;
void* __right_value306 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_5_385=0;
char* Err_386=0;
_Bool _if_conditional9;
_Bool __result_obj__234;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_387;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_6_388=0;
char* Err_389=0;
_Bool _if_conditional10;
_Bool __result_obj__235;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_7_390=0;
char* Err_391=0;
_Bool _if_conditional11;
_Bool __result_obj__236;
_Bool __result_obj__237;
char* c_value_392;
void* __right_value315 = (void*)0;
char* __dec_obj68;
void* __right_value316 = (void*)0;
char* __dec_obj69;
void* __right_value317 = (void*)0;
char* __dec_obj70;
void* __right_value318 = (void*)0;
char* __dec_obj71;
void* __right_value319 = (void*)0;
char* c_value_393;
void* __right_value320 = (void*)0;
char* __dec_obj72;
char* c_value_394;
void* __right_value321 = (void*)0;
char* __dec_obj73;
void* __right_value322 = (void*)0;
char* __dec_obj74;
void* __right_value323 = (void*)0;
char* __dec_obj75;
void* __right_value324 = (void*)0;
char* __dec_obj76;
void* __right_value325 = (void*)0;
char* c_value_395;
void* __right_value326 = (void*)0;
char* __dec_obj77;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_8_396=0;
char* Err_397=0;
_Bool _if_conditional12;
_Bool __result_obj__238;
char* c_value_398;
void* __right_value328 = (void*)0;
char* __dec_obj78;
void* __right_value329 = (void*)0;
char* __dec_obj79;
void* __right_value330 = (void*)0;
char* __dec_obj80;
void* __right_value331 = (void*)0;
char* __dec_obj81;
void* __right_value332 = (void*)0;
char* c_value_399;
void* __right_value333 = (void*)0;
char* __dec_obj82;
char* c_value_400;
void* __right_value334 = (void*)0;
char* __dec_obj83;
void* __right_value335 = (void*)0;
char* __dec_obj84;
void* __right_value336 = (void*)0;
char* __dec_obj85;
void* __right_value337 = (void*)0;
char* __dec_obj86;
void* __right_value338 = (void*)0;
char* c_value_401;
void* __right_value339 = (void*)0;
char* __dec_obj87;
void* __right_value340 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_9_402=0;
char* Err_403=0;
_Bool _if_conditional13;
_Bool __result_obj__239;
void* __right_value341 = (void*)0;
char* __dec_obj88;
void* __right_value342 = (void*)0;
char* __dec_obj89;
void* __right_value343 = (void*)0;
struct sType* __dec_obj90;
_Bool __result_obj__240;
void* __right_value344 = (void*)0;
char* __dec_obj91;
void* __right_value345 = (void*)0;
char* __dec_obj92;
void* __right_value346 = (void*)0;
char* __dec_obj93;
void* __right_value347 = (void*)0;
char* __dec_obj94;
void* __right_value348 = (void*)0;
char* __dec_obj95;
void* __right_value349 = (void*)0;
char* __dec_obj96;
void* __right_value350 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_10_404=0;
char* Err_405=0;
_Bool _if_conditional14;
_Bool __result_obj__241;
void* __right_value351 = (void*)0;
struct sType* __dec_obj97;
_Bool __result_obj__242;
c_value_392 = (void*)0;
c_value_394 = (void*)0;
c_value_398 = (void*)0;
c_value_400 = (void*)0;
    left_340=self->mLeft;
    right_341=self->mRight;
    name_342=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_343=node_compile(left_340,info);
    if(    !Value_343) {
        __result_obj__217 = (_Bool)0;
        (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__217;
    }
    else {
    }
    left_value_344=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_345=(struct sType*)come_increment_ref_count(left_value_344->type);
    if(    left_type2_345->mNoSolvedGenericsType) {
        __dec_obj62=left_type2_345,
        left_type2_345=(struct sType*)come_increment_ref_count(left_type2_345->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_345->mClass->mName,"tuple1")||string_operator_equals(left_type2_345->mClass->mName,"tuple2")||string_operator_equals(left_type2_345->mClass->mName,"tuple3")||string_operator_equals(left_type2_345->mClass->mName,"tuple3")||string_operator_equals(left_type2_345->mClass->mName,"tuple4")||string_operator_equals(left_type2_345->mClass->mName,"tuple5")) {
        for(        i_346=0;        i_346<list$1sType$ph_length(left_type2_345->mGenericsTypes);        i_346++        ){
            if(            (_if_conditional7=(string_operator_equals(name_342,((struct sType*)(__right_value295=list$1sType$ph_operator_load_element(left_type2_345->mGenericsTypes,i_346)))->mTupleName))),            /*c*/ come_call_finalizer3(__right_value294,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value295,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __dec_obj63=name_342,
                name_342=(char*)come_increment_ref_count(xsprintf("v%d",i_346+1));
                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
    }
    Value_347=node_compile(right_341,info);
    if(    !Value_347) {
        __result_obj__218 = (_Bool)0;
        (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__218;
    }
    else {
    }
    new_channel_348=string_operator_equals(((char*)(__right_value298=right_341->kind(right_341->_protocol_obj))),"sNewChannel");
    (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    right_value_349=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_350=right_value_349->type;
    left_type_351=(struct sType*)come_increment_ref_count(left_value_344->type);
    left_type3_352=(struct sType*)come_increment_ref_count(left_type_351);
    klass_353=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,left_type3_352->mClass->mName));
    field_type_362=((void*)0);
    index_363=0;
    child_field_name_364=((void*)0);
    child_field_is_pointer_365=(_Bool)0;
    if(    klass_353->mFields==((void*)0)) {
        multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value301=err_msg(info,"%s fields are null",klass_353->mName)));
        come_exception_var_4_366=multiple_assign_var6->v1;
        Err_367=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional8=(Err_367)),        /*c*/ come_call_finalizer3(__right_value301,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            __result_obj__227 = (_Bool)1;
            (Err_367 = come_decrement_ref_count(Err_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__227;
        }
        else {
        }
        (Err_367 = come_decrement_ref_count(Err_367, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    o2_saved_368=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_353->mFields)),field_371=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_368));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_368));    field_371=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_368))    ){
        multiple_assign_var7=field_371;
        field_name_374=(char*)come_increment_ref_count(multiple_assign_var7->v1);
        field_type2_375=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
        if(        string_operator_equals(field_name_374,name_342)) {
            __dec_obj64=field_type_362,
            field_type_362=(struct sType*)come_increment_ref_count(sType_clone(field_type2_375));
            /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_374 = come_decrement_ref_count(field_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_375,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        index_363++;
        (field_name_374 = come_decrement_ref_count(field_name_374, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type2_375,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_368,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    index_363==list$1tuple2$2char$phsType$ph$ph_length(klass_353->mFields)) {
        index_363=0;
        for(        o2_saved_376=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_353->mFields)),field_377=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_376));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_376));        field_377=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_376))        ){
            multiple_assign_var8=field_377;
            field_name_378=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            field_type2_379=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
            klass2_380=field_type2_379->mClass;
            if(            klass2_380->mUnion) {
                for(                o2_saved_381=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_380->mFields)),field2_382=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_381));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_381));                field2_382=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_381))                ){
                    multiple_assign_var9=field2_382;
                    field_name2_383=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    field_type3_384=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
                    if(                    string_operator_equals(field_name2_383,name_342)) {
                        __dec_obj65=child_field_name_364,
                        child_field_name_364=(char*)come_increment_ref_count(__builtin_string(field_name_378));
                        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        field_type2_379->mPointerNum>0) {
                            child_field_is_pointer_365=(_Bool)1;
                        }
                        __dec_obj66=field_type_362,
                        field_type_362=(struct sType*)come_increment_ref_count(sType_clone(field_type3_384));
                        /*b*/ come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        (field_name2_383 = come_decrement_ref_count(field_name2_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(field_type3_384,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    (field_name2_383 = come_decrement_ref_count(field_name2_383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type3_384,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_381,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                child_field_name_364) {
                    (field_name_378 = come_decrement_ref_count(field_name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type2_379,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_378,name_342)) {
                __dec_obj67=field_type_362,
                field_type_362=(struct sType*)come_increment_ref_count(sType_clone(field_type2_379));
                /*b*/ come_call_finalizer3(__dec_obj67,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_378 = come_decrement_ref_count(field_name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type2_379,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            index_363++;
            (field_name_378 = come_decrement_ref_count(field_name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_379,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_376,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        index_363==list$1tuple2$2char$phsType$ph$ph_length(klass_353->mFields)||field_type_362==((void*)0)) {
            multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value306=err_msg(info,"field not found(%s) in %s(1)",name_342,klass_353->mName)));
            come_exception_var_5_385=multiple_assign_var10->v1;
            Err_386=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            (_if_conditional9=(Err_386)),            /*c*/ come_call_finalizer3(__right_value306,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional9) {
                __result_obj__234 = (_Bool)1;
                (Err_386 = come_decrement_ref_count(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__234;
            }
            else {
            }
            (Err_386 = come_decrement_ref_count(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    come_value_387=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 263, "struct CVALUE*"))));
    right_type_350=((struct sType*)(__right_value309=sType_clone(right_value_349->type)));
    /*c*/ come_call_finalizer3(__right_value309,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value312=check_assign_type(((char*)(__right_value311=xsprintf("\%s is assigned to(1)",((char*)(__right_value310=string_to_string(name_342)))))),field_type_362,right_type_350,right_value_349,(_Bool)0,(_Bool)1,(_Bool)1,info)));
    come_exception_var_6_388=multiple_assign_var11->v1;
    Err_389=(char*)come_increment_ref_count(multiple_assign_var11->v2);
    if(    (_if_conditional10=(Err_389)),    (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value312,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional10) {
        __result_obj__235 = (_Bool)1;
        (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__235;
    }
    else {
    }
    right_type_350=((struct sType*)(__right_value313=sType_clone(right_value_349->type)));
    /*c*/ come_call_finalizer3(__right_value313,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    field_type_362->mHeap&&!right_value_349->type->mHeap) {
        if(        string_operator_equals(right_value_349->type->mClass->mName,"void")&&right_value_349->type->mPointerNum==1) {
        }
        else {
            if(            !gComeGC) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value314=err_msg(info,"require right value as heap object(%s)(1)",name_342)));
                come_exception_var_7_390=multiple_assign_var12->v1;
                Err_391=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                (_if_conditional11=(Err_391)),                /*c*/ come_call_finalizer3(__right_value314,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional11) {
                    printf("right type is %s pointer num %d heap %d\n",right_value_349->type->mClass->mName,right_value_349->type->mPointerNum,right_value_349->type->mHeap);
                    __result_obj__236 = (_Bool)1;
                    (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    return __result_obj__236;
                }
                else {
                }
                __result_obj__237 = (_Bool)0;
                (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__237;
                (Err_391 = come_decrement_ref_count(Err_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    field_type_362->mHeap&&right_type_350->mHeap&&field_type_362->mPointerNum>0&&right_type_350->mPointerNum>0) {
        if(        left_value_344->type->mPointerNum==1) {
            if(            child_field_name_364) {
                if(                child_field_is_pointer_365) {
                    __dec_obj68=c_value_392,
                    c_value_392=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj69=c_value_392,
                    c_value_392=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_362,c_value_392,info,(_Bool)0,(_Bool)0);
                std_move(field_type_362,right_type_350,right_value_349,info,(_Bool)0);
                if(                child_field_is_pointer_365) {
                    __dec_obj70=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj71=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_392 = come_decrement_ref_count(c_value_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_393=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_344->c_value,name_342));
                decrement_ref_count_object(field_type_362,c_value_393,info,(_Bool)0,(_Bool)0);
                std_move(field_type_362,right_type_350,right_value_349,info,(_Bool)0);
                __dec_obj72=come_value_387->c_value,
                come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_344->c_value,name_342,right_value_349->c_value));
                __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_393 = come_decrement_ref_count(c_value_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_344->type->mPointerNum==0) {
            if(            child_field_name_364) {
                if(                child_field_is_pointer_365) {
                    __dec_obj73=c_value_394,
                    c_value_394=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj74=c_value_394,
                    c_value_394=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_362,c_value_394,info,(_Bool)0,(_Bool)0);
                std_move(field_type_362,right_type_350,right_value_349,info,(_Bool)0);
                if(                child_field_is_pointer_365) {
                    __dec_obj75=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj76=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_394 = come_decrement_ref_count(c_value_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_395=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_344->c_value,name_342));
                decrement_ref_count_object(field_type_362,c_value_395,info,(_Bool)0,(_Bool)0);
                std_move(field_type_362,right_value_349->type,right_value_349,info,(_Bool)0);
                __dec_obj77=come_value_387->c_value,
                come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_344->c_value,name_342,right_value_349->c_value));
                __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_395 = come_decrement_ref_count(c_value_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_342,left_value_344->type->mPointerNum)));
            come_exception_var_8_396=multiple_assign_var13->v1;
            Err_397=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional12=(Err_397)),            /*c*/ come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional12) {
                __result_obj__238 = (_Bool)1;
                (Err_397 = come_decrement_ref_count(Err_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__238;
            }
            else {
            }
            (Err_397 = come_decrement_ref_count(Err_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    field_type_362->mHeap&&field_type_362->mPointerNum>0&&right_type_350->mPointerNum>0&&string_operator_equals(right_type_350->mClass->mName,"void")) {
        if(        left_value_344->type->mPointerNum==1) {
            if(            child_field_name_364) {
                if(                child_field_is_pointer_365) {
                    __dec_obj78=c_value_398,
                    c_value_398=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj79=c_value_398,
                    c_value_398=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_362,c_value_398,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_365) {
                    __dec_obj80=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj81=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_398 = come_decrement_ref_count(c_value_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_399=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_344->c_value,name_342));
                decrement_ref_count_object(field_type_362,c_value_399,info,(_Bool)0,(_Bool)0);
                __dec_obj82=come_value_387->c_value,
                come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_344->c_value,name_342,right_value_349->c_value));
                __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_399 = come_decrement_ref_count(c_value_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        left_value_344->type->mPointerNum==0) {
            if(            child_field_name_364) {
                if(                child_field_is_pointer_365) {
                    __dec_obj83=c_value_400,
                    c_value_400=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj84=c_value_400,
                    c_value_400=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_344->c_value,child_field_name_364,name_342));
                    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                decrement_ref_count_object(field_type_362,c_value_400,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_365) {
                    __dec_obj85=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj86=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                (c_value_400 = come_decrement_ref_count(c_value_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                c_value_401=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_344->c_value,name_342));
                decrement_ref_count_object(field_type_362,c_value_401,info,(_Bool)0,(_Bool)0);
                __dec_obj87=come_value_387->c_value,
                come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_344->c_value,name_342,right_value_349->c_value));
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (c_value_401 = come_decrement_ref_count(c_value_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value340=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_342,left_value_344->type->mPointerNum)));
            come_exception_var_9_402=multiple_assign_var14->v1;
            Err_403=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional13=(Err_403)),            /*c*/ come_call_finalizer3(__right_value340,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional13) {
                __result_obj__239 = (_Bool)1;
                (Err_403 = come_decrement_ref_count(Err_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__239;
            }
            else {
            }
            (Err_403 = come_decrement_ref_count(Err_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else if(    field_type_362->mChannel&&new_channel_348) {
        if(        child_field_is_pointer_365) {
            __dec_obj88=come_value_387->c_value,
            come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s->%s), %s);\n",left_value_344->c_value,name_342,right_value_349->c_value));
            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else {
            __dec_obj89=come_value_387->c_value,
            come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("(pipe(%s.%s), %s);\n",left_value_344->c_value,name_342,right_value_349->c_value));
            __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        __dec_obj90=come_value_387->type,
        come_value_387->type=(struct sType*)come_increment_ref_count(sType_clone(right_value_349->type));
        /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_387->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_387));
        add_come_last_code(info,"%s",come_value_387->c_value);
        __result_obj__240 = (_Bool)1;
        (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__240;
    }
    else {
        if(        left_value_344->type->mPointerNum==1) {
            if(            child_field_name_364) {
                if(                child_field_is_pointer_365) {
                    __dec_obj91=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj92=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj93=come_value_387->c_value,
                come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_344->c_value,name_342,right_value_349->c_value));
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else if(        left_value_344->type->mPointerNum==0) {
            if(            child_field_name_364) {
                if(                child_field_is_pointer_365) {
                    __dec_obj94=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
                else {
                    __dec_obj95=come_value_387->c_value,
                    come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_344->c_value,child_field_name_364,name_342,right_value_349->c_value));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj96=come_value_387->c_value,
                come_value_387->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_344->c_value,name_342,right_value_349->c_value));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else {
            multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value350=err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_342,left_value_344->type->mPointerNum)));
            come_exception_var_10_404=multiple_assign_var15->v1;
            Err_405=(char*)come_increment_ref_count(multiple_assign_var15->v2);
            if(            (_if_conditional14=(Err_405)),            /*c*/ come_call_finalizer3(__right_value350,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional14) {
                __result_obj__241 = (_Bool)1;
                (Err_405 = come_decrement_ref_count(Err_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__241;
            }
            else {
            }
            (Err_405 = come_decrement_ref_count(Err_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj97=come_value_387->type,
    come_value_387->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_362));
    /*b*/ come_call_finalizer3(__dec_obj97,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_387->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_387));
    add_come_last_code(info,"%s",come_value_387->c_value);
    __result_obj__242 = (_Bool)1;
    (name_342 = come_decrement_ref_count(name_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_value_344,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type2_345,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(right_value_349,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_351,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type3_352,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(klass_353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(field_type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (child_field_name_364 = come_decrement_ref_count(child_field_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_387,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
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

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_354;
unsigned int hash_355;
unsigned int it_356;
struct sClass* __result_obj__219;
struct sClass* __result_obj__220;
struct sClass* __result_obj__221;
struct sClass* __result_obj__222;
default_value_354 = (void*)0;
    memset(&default_value_354,0,sizeof(struct sClass*));
    hash_355=string_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            string_equals(self->keys[it_356],key)) {
                __result_obj__219 = (struct sClass*)come_increment_ref_count(self->items[it_356]);
                /*c*/ come_call_finalizer3(default_value_354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__219,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__219;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                __result_obj__220 = (struct sClass*)come_increment_ref_count(default_value_354);
                /*c*/ come_call_finalizer3(default_value_354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__220,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__220;
            }
        }
        else {
            __result_obj__221 = (struct sClass*)come_increment_ref_count(default_value_354);
            /*c*/ come_call_finalizer3(default_value_354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__221,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__221;
        }
    }
    __result_obj__222 = (struct sClass*)come_increment_ref_count(default_value_354);
    /*c*/ come_call_finalizer3(default_value_354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__222,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_357;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        /*c*/ come_call_finalizer3(prev_it_358,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sClass* default_value_359;
unsigned int hash_360;
unsigned int it_361;
struct sClass* __result_obj__223;
struct sClass* __result_obj__224;
struct sClass* __result_obj__225;
struct sClass* __result_obj__226;
default_value_359 = (void*)0;
    memset(&default_value_359,0,sizeof(struct sClass*));
    hash_360=string_get_hash_key(((char*)key))%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            string_equals(self->keys[it_361],key)) {
                __result_obj__223 = (struct sClass*)come_increment_ref_count(self->items[it_361]);
                /*c*/ come_call_finalizer3(default_value_359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__223,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__223;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                __result_obj__224 = (struct sClass*)come_increment_ref_count(default_value_359);
                /*c*/ come_call_finalizer3(default_value_359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__224,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__224;
            }
        }
        else {
            __result_obj__225 = (struct sClass*)come_increment_ref_count(default_value_359);
            /*c*/ come_call_finalizer3(default_value_359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__225,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__225;
        }
    }
    __result_obj__226 = (struct sClass*)come_increment_ref_count(default_value_359);
    /*c*/ come_call_finalizer3(default_value_359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_369;
struct tuple2$2char$phsType$ph* __result_obj__228;
struct tuple2$2char$phsType$ph* __result_obj__229;
struct tuple2$2char$phsType$ph* result_370;
struct tuple2$2char$phsType$ph* __result_obj__230;
result_369 = (void*)0;
result_370 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_369,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__228 = result_369;
        return __result_obj__228;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__229 = self->it->item;
        return __result_obj__229;
    }
    memset(&result_370,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__230 = result_370;
    return __result_obj__230;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_372;
struct tuple2$2char$phsType$ph* __result_obj__231;
struct tuple2$2char$phsType$ph* __result_obj__232;
struct tuple2$2char$phsType$ph* result_373;
struct tuple2$2char$phsType$ph* __result_obj__233;
result_372 = (void*)0;
result_373 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_372,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__231 = result_372;
        return __result_obj__231;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__232 = self->it->item;
        return __result_obj__232;
    }
    memset(&result_373,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__233 = result_373;
    return __result_obj__233;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* __dec_obj98;
struct sNullCheckNode* __result_obj__243;
struct sNullCheckNode* __result_obj__244;
    ((struct sNodeBase*)(__right_value352=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value352,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj98=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj98 ? __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mOnlyNullCecker=only_null_checker;
    __result_obj__243 = (struct sNullCheckNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__243,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
    __result_obj__244 = (struct sNullCheckNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__244,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__244;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __right_value354 = (void*)0;
char* __result_obj__245;
    __result_obj__245 = (char*)come_increment_ref_count(((char*)(__right_value354=__builtin_string("sNullCheckNode"))));
    (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_406;
_Bool Value_407;
void* __right_value355 = (void*)0;
struct CVALUE* left_value_408;
void* __right_value356 = (void*)0;
char* method_name_409;
void* __right_value357 = (void*)0;
_Bool _if_conditional15;
struct sType* obj_type_412;
struct sType* obj_type2_413;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_414=0;
struct sGenericsFun* generics_fun_415=0;
char* __dec_obj99;
void* __right_value360 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_11_416=0;
char* Err_417=0;
_Bool _if_conditional16;
_Bool __result_obj__250;
void* __right_value361 = (void*)0;
struct sFun* fun_418;
void* __right_value362 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var18 = (void*)0;
int come_exception_var_12_419=0;
char* Err_420=0;
_Bool _if_conditional17;
_Bool __result_obj__251;
void* __right_value363 = (void*)0;
struct sType* type_421;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct CVALUE* come_value_422;
void* __right_value366 = (void*)0;
char* __dec_obj100;
void* __right_value367 = (void*)0;
struct sType* __dec_obj101;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_423;
char* __dec_obj102;
void* __right_value370 = (void*)0;
struct sType* __dec_obj103;
_Bool __result_obj__252;
    left_406=self->mLeft;
    Value_407=node_compile(left_406,info);
    if(    !Value_407) {
        return (_Bool)0;
    }
    else {
    }
    left_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    !self->mOnlyNullCecker&&left_value_408->type->mNoSolvedGenericsType&&left_value_408->type->mNoSolvedGenericsType->mClass&&string_operator_equals(left_value_408->type->mNoSolvedGenericsType->mClass->mName,"optional")) {
        method_name_409=(char*)come_increment_ref_count(create_method_name(left_value_408->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        (_if_conditional15=(((struct sFun*)(__right_value357=map$2char$phsFun$ph_at(info->funcs,method_name_409,((void*)0))))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value357,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional15) {
            obj_type_412=left_value_408->type->mNoSolvedGenericsType;
            if(            list$1sType$ph_length(obj_type_412->mGenericsTypes)>0) {
                obj_type2_413=left_value_408->type;
                multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value359=make_generics_function(obj_type2_413,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1)));
                name_414=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                generics_fun_415=multiple_assign_var16->v2;
                /*c*/ come_call_finalizer3(__right_value359,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj99=method_name_409,
                method_name_409=(char*)come_increment_ref_count(name_414);
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (name_414 = come_decrement_ref_count(name_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value360=err_msg(info,"require expect implementation(%s)",left_value_408->type->mClass->mName)));
                come_exception_var_11_416=multiple_assign_var17->v1;
                Err_417=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                (_if_conditional16=(Err_417)),                /*c*/ come_call_finalizer3(__right_value360,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional16) {
                    __result_obj__250 = (_Bool)1;
                    (Err_417 = come_decrement_ref_count(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (method_name_409 = come_decrement_ref_count(method_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(left_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__250;
                }
                else {
                }
                (Err_417 = come_decrement_ref_count(Err_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        fun_418=((struct sFun*)(__right_value361=map$2char$phsFun$ph_operator_load_element(info->funcs,method_name_409)));
        /*c*/ come_call_finalizer3(__right_value361,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        fun_418==((void*)0)) {
            multiple_assign_var18=((struct tuple2$2int$char$ph*)(__right_value362=err_msg(info,"function not found(%s)",method_name_409)));
            come_exception_var_12_419=multiple_assign_var18->v1;
            Err_420=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            (_if_conditional17=(Err_420)),            /*c*/ come_call_finalizer3(__right_value362,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional17) {
                __result_obj__251 = (_Bool)1;
                (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (method_name_409 = come_decrement_ref_count(method_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__251;
            }
            else {
            }
            (Err_420 = come_decrement_ref_count(Err_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type_421=(struct sType*)come_increment_ref_count(solve_generics(fun_418->mResultType,left_value_408->type,info,(_Bool)0));
        come_value_422=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 516, "struct CVALUE*"))));
        __dec_obj100=come_value_422->c_value,
        come_value_422->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_409,left_value_408->c_value));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj101=come_value_422->type,
        come_value_422->type=(struct sType*)come_increment_ref_count(sType_clone(type_421));
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_422->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_422));
        add_come_last_code(info,"%s",come_value_422->c_value);
        (method_name_409 = come_decrement_ref_count(method_name_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value_422,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_408));
    }
    else if(    left_value_408->type->mPointerNum>0) {
        come_value_423=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 530, "struct CVALUE*"))));
        __dec_obj102=come_value_423->c_value,
        come_value_423->c_value=(char*)come_increment_ref_count(left_value_408->c_value);
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj103=come_value_423->type,
        come_value_423->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_408->type));
        /*b*/ come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_423->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_423));
        add_come_last_code(info,"%s",come_value_423->c_value);
        /*c*/ come_call_finalizer3(come_value_423,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_408));
    }
    __result_obj__252 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_408,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
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
unsigned int hash_410;
unsigned int it_411;
struct sFun* __result_obj__246;
struct sFun* __result_obj__247;
struct sFun* __result_obj__248;
struct sFun* __result_obj__249;
    hash_410=string_get_hash_key(((char*)key))%self->size;
    it_411=hash_410;
    while((_Bool)1) {
        if(        self->item_existance[it_411]) {
            if(            string_equals(self->keys[it_411],key)) {
                __result_obj__246 = (struct sFun*)come_increment_ref_count(self->items[it_411]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__246,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__246;
            }
            it_411++;
            if(            it_411>=self->size) {
                it_411=0;
            }
            else if(            it_411==hash_410) {
                __result_obj__247 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__247,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__247;
            }
        }
        else {
            __result_obj__248 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__248,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__248;
        }
    }
    __result_obj__249 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sNode* __dec_obj104;
struct sNullableNode* __result_obj__253;
    ((struct sNodeBase*)(__right_value371=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value371,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj104=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__253 = (struct sNullableNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNullableNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__253,sNullableNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __right_value373 = (void*)0;
char* __result_obj__254;
    __result_obj__254 = (char*)come_increment_ref_count(((char*)(__right_value373=__builtin_string("sNullableNode"))));
    (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_424;
_Bool Value_425;
void* __right_value374 = (void*)0;
struct CVALUE* left_value_426;
void* __right_value380 = (void*)0;
struct CVALUE* come_value_427;
_Bool __result_obj__257;
    left_424=self->mLeft;
    Value_425=node_compile(left_424,info);
    if(    !Value_425) {
        return (_Bool)0;
    }
    else {
    }
    left_value_426=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    if(    left_value_426->type->mPointerNum>0&&left_value_426->type->mNullValue) {
        come_value_427=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_426));
        come_value_427->type->mNullValue=(_Bool)0;
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_427));
        add_come_last_code(info,"%s",come_value_427->c_value);
        /*c*/ come_call_finalizer3(come_value_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_426));
    }
    __result_obj__257 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
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
struct CVALUE* __result_obj__255;
void* __right_value375 = (void*)0;
struct CVALUE* result_428;
void* __right_value376 = (void*)0;
char* __dec_obj105;
void* __right_value377 = (void*)0;
struct sType* __dec_obj106;
void* __right_value378 = (void*)0;
char* __dec_obj107;
void* __right_value379 = (void*)0;
char* __dec_obj108;
struct CVALUE* __result_obj__256;
    if(    self==(void*)0) {
        __result_obj__255 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__255,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__255;
    }
    result_428=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj105=result_428->c_value,
        result_428->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj106=result_428->type,
        result_428->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_428->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_428->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj107=result_428->c_value_without_right_value_objects,
        result_428->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj108=result_428->c_value_without_cast_object_value,
        result_428->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__256 = (struct CVALUE*)come_increment_ref_count(result_428);
    /*c*/ come_call_finalizer3(result_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__256,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value386 = (void*)0;
struct sNode* __result_obj__260;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 591, "struct sNode");
    _inf_obj_value1=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value382=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc_v2(1, sizeof(struct sNullableNode)*(1), "18field.c", 591, "struct sNullableNode*")),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result_obj__260 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value386=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value382,sNullableNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value386) ? __right_value386 = come_decrement_ref_count(__right_value386, ((struct sNode*)__right_value386)->finalize, ((struct sNode*)__right_value386)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__260) ? __result_obj__260 = come_decrement_ref_count(__result_obj__260, ((struct sNode*)__result_obj__260)->finalize, ((struct sNode*)__result_obj__260)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__260;
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
struct sNullableNode* __result_obj__258;
void* __right_value383 = (void*)0;
struct sNullableNode* result_429;
void* __right_value384 = (void*)0;
char* __dec_obj109;
void* __right_value385 = (void*)0;
struct sNode* __dec_obj110;
struct sNullableNode* __result_obj__259;
    if(    self==(void*)0) {
        __result_obj__258 = (void*)0;
        return __result_obj__258;
    }
    result_429=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc_v2(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "struct sNullableNode*"));
    if(    self!=((void*)0)) {
        result_429->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj109=result_429->sname,
        result_429->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullableNode_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj110=result_429->mLeft,
        result_429->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj110 ? __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__259 = result_429;
    /*c*/ come_call_finalizer3(result_429,sNullableNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj111;
void* __right_value389 = (void*)0;
char* __dec_obj112;
struct sLoadFieldNode* __result_obj__261;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value387,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj111=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj111 ? __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj112=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__261 = (struct sLoadFieldNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__261,sLoadFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __right_value390 = (void*)0;
char* __result_obj__262;
    __result_obj__262 = (char*)come_increment_ref_count(((char*)(__right_value390=__builtin_string("sLoadFieldNode"))));
    (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__262 = come_decrement_ref_count(__result_obj__262, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__262;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_430;
void* __right_value391 = (void*)0;
char* name_431;
_Bool Value_432;
_Bool __result_obj__263;
void* __right_value392 = (void*)0;
struct CVALUE* left_value_433;
struct sType* left_type2_434;
struct sType* __dec_obj113;
int i_435;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
_Bool _if_conditional18;
void* __right_value395 = (void*)0;
char* __dec_obj114;
struct sType* left_type_436;
void* __right_value396 = (void*)0;
struct sType* left_type2_437;
struct sClass* klass_438;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sType* field_type_439;
int index_440;
_Bool child_field_is_pointer_441;
char* child_field_name_442;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_13_443=0;
char* Err_444=0;
_Bool _if_conditional19;
_Bool __result_obj__264;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_445;
struct tuple2$2char$phsType$ph* field_446;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* field_name_447=0;
struct sType* field_type2_448=0;
void* __right_value404 = (void*)0;
struct sType* __dec_obj115;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_449;
struct tuple2$2char$phsType$ph* field_450;
struct tuple2$2char$phsType$ph* multiple_assign_var21 = (void*)0;
char* field_name_451=0;
struct sType* field_type2_452=0;
struct sClass* klass2_453;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_454;
struct tuple2$2char$phsType$ph* field2_455;
struct tuple2$2char$phsType$ph* multiple_assign_var22 = (void*)0;
char* field_name2_456=0;
struct sType* field_type3_457=0;
void* __right_value405 = (void*)0;
char* __dec_obj116;
void* __right_value406 = (void*)0;
struct sType* __dec_obj117;
void* __right_value407 = (void*)0;
struct sType* __dec_obj118;
void* __right_value408 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_14_458=0;
char* Err_459=0;
_Bool _if_conditional20;
_Bool __result_obj__265;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value411 = (void*)0;
char* __dec_obj119;
void* __right_value412 = (void*)0;
char* __dec_obj120;
void* __right_value413 = (void*)0;
char* __dec_obj121;
void* __right_value414 = (void*)0;
char* __dec_obj122;
void* __right_value415 = (void*)0;
char* __dec_obj123;
void* __right_value416 = (void*)0;
char* __dec_obj124;
void* __right_value417 = (void*)0;
struct sType* __dec_obj125;
void* __right_value418 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_15_461=0;
char* Err_462=0;
_Bool _if_conditional21;
_Bool __result_obj__266;
void* __right_value419 = (void*)0;
struct sType* __dec_obj126;
_Bool __result_obj__268;
    left_430=self->mLeft;
    name_431=(char*)come_increment_ref_count(__builtin_string(self->mName));
    Value_432=node_compile(left_430,info);
    if(    !Value_432) {
        __result_obj__263 = (_Bool)0;
        (name_431 = come_decrement_ref_count(name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__263;
    }
    else {
    }
    left_value_433=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type2_434=(struct sType*)come_increment_ref_count(left_value_433->type);
    if(    left_type2_434->mNoSolvedGenericsType) {
        __dec_obj113=left_type2_434,
        left_type2_434=(struct sType*)come_increment_ref_count(left_type2_434->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    string_operator_equals(left_type2_434->mClass->mName,"tuple1")||string_operator_equals(left_type2_434->mClass->mName,"tuple2")||string_operator_equals(left_type2_434->mClass->mName,"tuple3")||string_operator_equals(left_type2_434->mClass->mName,"tuple3")||string_operator_equals(left_type2_434->mClass->mName,"tuple4")||string_operator_equals(left_type2_434->mClass->mName,"tuple5")) {
        for(        i_435=0;        i_435<list$1sType$ph_length(left_type2_434->mGenericsTypes);        i_435++        ){
            if(            (_if_conditional18=(string_operator_equals(name_431,((struct sType*)(__right_value394=list$1sType$ph_operator_load_element(left_type2_434->mGenericsTypes,i_435)))->mTupleName))),            /*c*/ come_call_finalizer3(__right_value393,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            /*c*/ come_call_finalizer3(__right_value394,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                __dec_obj114=name_431,
                name_431=(char*)come_increment_ref_count(xsprintf("v%d",i_435+1));
                __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
    }
    left_type_436=left_value_433->type;
    /*c*/ come_call_finalizer3(left_type2_434,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    left_type2_437=(struct sType*)come_increment_ref_count(solve_generics(left_type_436,left_type_436,info,(_Bool)0));
    klass_438=left_type2_437->mClass;
    klass_438=((struct sClass*)(__right_value399=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value398=__builtin_string(klass_438->mName))))));
    (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value399,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    field_type_439=((void*)0);
    index_440=0;
    child_field_is_pointer_441=(_Bool)0;
    child_field_name_442=((void*)0);
    klass_438=((struct sClass*)(__right_value402=map$2char$phsClass$ph_operator_load_element(info->classes,((char*)(__right_value401=__builtin_string(klass_438->mName))))));
    (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value402,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass_438==((void*)0)||klass_438->mFields==((void*)0)) {
        multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value403=err_msg(info,"invalid class %s",klass_438->mName)));
        come_exception_var_13_443=multiple_assign_var19->v1;
        Err_444=(char*)come_increment_ref_count(multiple_assign_var19->v2);
        if(        (_if_conditional19=(Err_444)),        /*c*/ come_call_finalizer3(__right_value403,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional19) {
            __result_obj__264 = (_Bool)1;
            (Err_444 = come_decrement_ref_count(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_431 = come_decrement_ref_count(name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(left_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type2_437,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(field_type_439,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (child_field_name_442 = come_decrement_ref_count(child_field_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__264;
        }
        else {
        }
        (Err_444 = come_decrement_ref_count(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    for(    o2_saved_445=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_438->mFields)),field_446=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_445));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_445));    field_446=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_445))    ){
        multiple_assign_var20=field_446;
        field_name_447=(char*)come_increment_ref_count(multiple_assign_var20->v1);
        field_type2_448=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
        if(        string_operator_equals(field_name_447,name_431)) {
            __dec_obj115=field_type_439,
            field_type_439=(struct sType*)come_increment_ref_count(sType_clone(field_type2_448));
            /*b*/ come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            (field_name_447 = come_decrement_ref_count(field_name_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        index_440++;
        (field_name_447 = come_decrement_ref_count(field_name_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type2_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_445,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    index_440==list$1tuple2$2char$phsType$ph$ph_length(klass_438->mFields)) {
        index_440=0;
        for(        o2_saved_449=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_438->mFields)),field_450=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_449));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_449));        field_450=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_449))        ){
            multiple_assign_var21=field_450;
            field_name_451=(char*)come_increment_ref_count(multiple_assign_var21->v1);
            field_type2_452=(struct sType*)come_increment_ref_count(multiple_assign_var21->v2);
            klass2_453=field_type2_452->mClass;
            if(            klass2_453->mUnion) {
                for(                o2_saved_454=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass2_453->mFields)),field2_455=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_454));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_454));                field2_455=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_454))                ){
                    multiple_assign_var22=field2_455;
                    field_name2_456=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                    field_type3_457=(struct sType*)come_increment_ref_count(multiple_assign_var22->v2);
                    if(                    string_operator_equals(field_name2_456,name_431)) {
                        __dec_obj116=child_field_name_442,
                        child_field_name_442=(char*)come_increment_ref_count(__builtin_string(field_name_451));
                        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        field_type2_452->mPointerNum>0) {
                            child_field_is_pointer_441=(_Bool)1;
                        }
                        __dec_obj117=field_type_439,
                        field_type_439=(struct sType*)come_increment_ref_count(sType_clone(field_type3_457));
                        /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                        (field_name2_456 = come_decrement_ref_count(field_name2_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(field_type3_457,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        break;
                    }
                    (field_name2_456 = come_decrement_ref_count(field_name2_456, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type3_457,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_454,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                child_field_name_442) {
                    (field_name_451 = come_decrement_ref_count(field_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type2_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    break;
                }
            }
            if(            string_operator_equals(field_name_451,name_431)) {
                __dec_obj118=field_type_439,
                field_type_439=(struct sType*)come_increment_ref_count(sType_clone(field_type2_452));
                /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                (field_name_451 = come_decrement_ref_count(field_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type2_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
            }
            index_440++;
            (field_name_451 = come_decrement_ref_count(field_name_451, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type2_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_449,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        index_440==list$1tuple2$2char$phsType$ph$ph_length(klass_438->mFields)) {
            multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value408=err_msg(info,"field not found(%s) in %s(2)",name_431,klass_438->mName)));
            come_exception_var_14_458=multiple_assign_var23->v1;
            Err_459=(char*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            (_if_conditional20=(Err_459)),            /*c*/ come_call_finalizer3(__right_value408,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional20) {
                __result_obj__265 = (_Bool)1;
                (Err_459 = come_decrement_ref_count(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_431 = come_decrement_ref_count(name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(left_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(left_type2_437,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(field_type_439,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (child_field_name_442 = come_decrement_ref_count(child_field_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__265;
            }
            else {
            }
            (Err_459 = come_decrement_ref_count(Err_459, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    come_value_460=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 704, "struct CVALUE*"))));
    if(    left_value_433->type->mPointerNum>0) {
        if(        child_field_name_442) {
            if(            child_field_is_pointer_441) {
                __dec_obj119=come_value_460->c_value,
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_433->c_value,child_field_name_442,name_431));
                __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj120=come_value_460->c_value,
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_433->c_value,child_field_name_442,name_431));
                __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else {
            __dec_obj121=come_value_460->c_value,
            come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_433->c_value,name_431));
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        if(        child_field_name_442) {
            if(            child_field_is_pointer_441) {
                __dec_obj122=come_value_460->c_value,
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_433->c_value,child_field_name_442,name_431));
                __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj123=come_value_460->c_value,
                come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_433->c_value,child_field_name_442,name_431));
                __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
        }
        else {
            __dec_obj124=come_value_460->c_value,
            come_value_460->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_433->c_value,name_431));
            __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    __dec_obj125=come_value_460->type,
    come_value_460->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_439));
    /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_460->var=((void*)0);
    if(    field_type_439==((void*)0)) {
        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value418=err_msg(info,"no field(%s)",name_431)));
        come_exception_var_15_461=multiple_assign_var24->v1;
        Err_462=(char*)come_increment_ref_count(multiple_assign_var24->v2);
        if(        (_if_conditional21=(Err_462)),        /*c*/ come_call_finalizer3(__right_value418,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional21) {
            __result_obj__266 = (_Bool)1;
            (Err_462 = come_decrement_ref_count(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (name_431 = come_decrement_ref_count(name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(left_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type2_437,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(field_type_439,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (child_field_name_442 = come_decrement_ref_count(child_field_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(come_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__266;
        }
        else {
        }
        (Err_462 = come_decrement_ref_count(Err_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    list$1sNode$ph_length(come_value_460->type->mArrayNum)==1) {
        __dec_obj126=come_value_460->type->mOriginalLoadVarType,
        come_value_460->type->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(come_value_460->type));
        /*b*/ come_call_finalizer3(__dec_obj126,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sNode$ph_reset(come_value_460->type->mArrayNum);
        come_value_460->type->mPointerNum++;
        come_value_460->type->mOriginalTypeNamePointerNum=come_value_460->type->mPointerNum;
    }
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_460));
    __result_obj__268 = (_Bool)1;
    (name_431 = come_decrement_ref_count(name_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(left_value_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type2_437,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(field_type_439,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (child_field_name_442 = come_decrement_ref_count(child_field_name_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
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
struct list_item$1sNode$ph* it_463;
struct list_item$1sNode$ph* prev_it_464;
struct list$1sNode$ph* __result_obj__267;
    it_463=self->head;
    while(it_463!=((void*)0)) {
        prev_it_464=it_463;
        it_463=it_463->next;
        /*c*/ come_call_finalizer3(prev_it_464,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = self;
    return __result_obj__267;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value426 = (void*)0;
struct sNode* __result_obj__271;
    _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 763, "struct sNode");
    _inf_obj_value2=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value421=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 763, "struct sLoadFieldNode*")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result_obj__271 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value426=_inf_value2)));
    ((left) ? left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value421,sLoadFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value426) ? __right_value426 = come_decrement_ref_count(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__271) ? __result_obj__271 = come_decrement_ref_count(__result_obj__271, ((struct sNode*)__result_obj__271)->finalize, ((struct sNode*)__result_obj__271)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__271;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
struct sLoadFieldNode* __result_obj__269;
void* __right_value422 = (void*)0;
struct sLoadFieldNode* result_465;
void* __right_value423 = (void*)0;
char* __dec_obj127;
void* __right_value424 = (void*)0;
struct sNode* __dec_obj128;
void* __right_value425 = (void*)0;
char* __dec_obj129;
struct sLoadFieldNode* __result_obj__270;
    if(    self==(void*)0) {
        __result_obj__269 = (void*)0;
        return __result_obj__269;
    }
    result_465=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "struct sLoadFieldNode*"));
    if(    self!=((void*)0)) {
        result_465->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj127=result_465->sname,
        result_465->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadFieldNode_clone", 5, "char*"));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_465->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj128=result_465->mLeft,
        result_465->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj128 ? __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj129=result_465->mName,
        result_465->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sLoadFieldNode_clone", 8, "char*"));
        __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__270 = result_465;
    /*c*/ come_call_finalizer3(result_465,sLoadFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj131;
void* __right_value430 = (void*)0;
struct list$1sNode$ph* __dec_obj132;
struct sStoreArrayNode* __result_obj__272;
    ((struct sNodeBase*)(__right_value427=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value427,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj130=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj131=self->mRight,
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    (__dec_obj131 ? __dec_obj131 = come_decrement_ref_count(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj132=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    /*b*/ come_call_finalizer3(__dec_obj132,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mQuote=quote;
    __result_obj__272 = (struct sStoreArrayNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStoreArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__272,sStoreArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __right_value431 = (void*)0;
char* __result_obj__273;
    __result_obj__273 = (char*)come_increment_ref_count(((char*)(__right_value431=__builtin_string("sStoreArrayNode"))));
    (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__273 = come_decrement_ref_count(__result_obj__273, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__273;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_466;
struct sNode* right_467;
struct list$1sNode$ph* array_num_nodes_468;
_Bool Value_469;
_Bool __result_obj__274;
void* __right_value432 = (void*)0;
struct CVALUE* left_value_470;
struct sType* left_type_471;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1CVALUE$ph* array_num_472;
struct list$1sNode$ph* o2_saved_475;
struct sNode* it_478;
_Bool Value_481;
_Bool __result_obj__282;
void* __right_value435 = (void*)0;
struct CVALUE* c_value_482;
char* fun_name_483;
void* __right_value436 = (void*)0;
struct tuple3$3char$phsFun$psGenericsFun$p* multiple_assign_var25 = (void*)0;
char* fun_name2_484=0;
struct sFun* operator_fun_485=0;
struct sGenericsFun* generics_fun_486=0;
_Bool Value_487;
_Bool __result_obj__283;
void* __right_value437 = (void*)0;
struct CVALUE* right_value_488;
struct sType* right_type_489;
struct sClass* klass_490;
void* __right_value438 = (void*)0;
struct sType* type_491;
_Bool calling_fun_492;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct CVALUE* come_value_499;
int i_500;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct buffer* buf_513;
struct list$1CVALUE$ph* o2_saved_514;
struct CVALUE* it_517;
void* __right_value444 = (void*)0;
char* left_value_code_520;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_16_521=0;
char* Err_522=0;
_Bool _if_conditional22;
_Bool __result_obj__296;
void* __right_value447 = (void*)0;
char* __dec_obj133;
void* __right_value448 = (void*)0;
char* __dec_obj134;
void* __right_value449 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_17_523=0;
char* Err_524=0;
_Bool _if_conditional23;
_Bool __result_obj__297;
void* __right_value450 = (void*)0;
char* __dec_obj135;
void* __right_value451 = (void*)0;
char* __dec_obj136;
void* __right_value452 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_18_525=0;
char* Err_526=0;
_Bool _if_conditional24;
_Bool __result_obj__298;
void* __right_value453 = (void*)0;
struct sType* result_type_527;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1sNode$ph* __dec_obj137;
struct sType* __dec_obj138;
_Bool __result_obj__299;
memset(&calling_fun_492, 0, sizeof(_Bool));
    left_466=self->mLeft;
    right_467=(struct sNode*)come_increment_ref_count(self->mRight);
    array_num_nodes_468=self->mArrayNum;
    Value_469=node_compile(left_466,info);
    if(    !Value_469) {
        __result_obj__274 = (_Bool)0;
        ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__274;
    }
    else {
    }
    left_value_470=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_471=left_value_470->type;
    array_num_472=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 797, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_475=(array_num_nodes_468),it_478=list$1sNode$ph_begin((o2_saved_475));    !list$1sNode$ph_end((o2_saved_475));    it_478=list$1sNode$ph_next((o2_saved_475))    ){
        Value_481=node_compile(it_478,info);
        if(        !Value_481) {
            __result_obj__282 = (_Bool)0;
            ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_472,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__282;
        }
        else {
        }
        c_value_482=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_472,(struct CVALUE*)come_increment_ref_count(c_value_482));
        /*c*/ come_call_finalizer3(c_value_482,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    fun_name_483="operator_store_element";
    multiple_assign_var25=((struct tuple3$3char$phsFun$psGenericsFun$p*)(__right_value436=get_operator_function(left_type_471,fun_name_483,info)));
    fun_name2_484=(char*)come_increment_ref_count(multiple_assign_var25->v1);
    operator_fun_485=multiple_assign_var25->v2;
    generics_fun_486=multiple_assign_var25->v3;
    /*c*/ come_call_finalizer3(__right_value436,tuple3$3char$phsFun$psGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_487=node_compile(right_467,info);
    if(    !Value_487) {
        __result_obj__283 = (_Bool)0;
        ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(left_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(array_num_472,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_484 = come_decrement_ref_count(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__283;
    }
    else {
    }
    right_value_488=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_489=right_value_488->type;
    klass_490=left_value_470->type->mClass;
    type_491=(struct sType*)come_increment_ref_count(sType_clone(left_value_470->type));
    if(    self->mQuote) {
        calling_fun_492=(_Bool)0;
    }
    else {
        calling_fun_492=operator_overload_fun2(type_491,fun_name_483,left_value_470,((struct CVALUE*)(__right_value439=list$1CVALUE$ph_operator_load_element(array_num_472,0))),right_value_488,info);
        /*c*/ come_call_finalizer3(__right_value439,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !calling_fun_492) {
        come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 833, "struct CVALUE*"))));
        if(        list$1sNode$ph_length(left_type_471->mArrayNum)>0) {
            for(            i_500=0;            i_500<list$1CVALUE$ph_length(array_num_472);            i_500++            ){
                list$1sNode$ph_delete(left_type_471->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_471->mPointerNum>0) {
            left_type_471->mPointerNum-=list$1CVALUE$ph_length(array_num_472);
            if(            left_type_471->mPointerNum<0) {
                left_type_471->mPointerNum=0;
            }
        }
        buf_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 848, "struct buffer*"))));
        buffer_append_str(buf_513,left_value_470->c_value);
        for(        o2_saved_514=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_472)),it_517=list$1CVALUE$ph_begin((o2_saved_514));        !list$1CVALUE$ph_end((o2_saved_514));        it_517=list$1CVALUE$ph_next((o2_saved_514))        ){
            buffer_append_format(buf_513,"[%s]",it_517->c_value);
        }
        /*c*/ come_call_finalizer3(o2_saved_514,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        left_value_code_520=(char*)come_increment_ref_count(buffer_to_string(buf_513));
        multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value446=check_assign_type(((char*)(__right_value445=xsprintf("array is assinged to(2)"))),left_type_471,right_type_489,right_value_488,(_Bool)0,(_Bool)1,(_Bool)1,info)));
        come_exception_var_16_521=multiple_assign_var26->v1;
        Err_522=(char*)come_increment_ref_count(multiple_assign_var26->v2);
        if(        (_if_conditional22=(Err_522)),        (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        /*c*/ come_call_finalizer3(__right_value446,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional22) {
            __result_obj__296 = (_Bool)1;
            /*c*/ come_call_finalizer3(come_value_499,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(buf_513,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (left_value_code_520 = come_decrement_ref_count(left_value_code_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (Err_522 = come_decrement_ref_count(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_472,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name2_484 = come_decrement_ref_count(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(right_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__296;
        }
        else {
        }
        if(        left_type_471->mHeap&&right_type_489->mHeap&&left_type_471->mPointerNum>0&&right_type_489->mPointerNum>0) {
            if(            left_value_470->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_471,left_value_code_520,info,(_Bool)0,(_Bool)0);
                std_move(left_type_471,right_type_489,right_value_488,info,(_Bool)0);
                __dec_obj133=come_value_499->c_value,
                come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_520,right_value_488->c_value));
                __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            left_value_470->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_471,left_value_code_520,info,(_Bool)0,(_Bool)0);
                std_move(left_type_471,right_type_489,right_value_488,info,(_Bool)0);
                __dec_obj134=come_value_499->c_value,
                come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_520,right_value_488->c_value));
                __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value449=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_520,left_value_470->type->mPointerNum)));
                come_exception_var_17_523=multiple_assign_var27->v1;
                Err_524=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                if(                (_if_conditional23=(Err_524)),                /*c*/ come_call_finalizer3(__right_value449,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional23) {
                    __result_obj__297 = (_Bool)1;
                    (Err_524 = come_decrement_ref_count(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_499,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(buf_513,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (left_value_code_520 = come_decrement_ref_count(left_value_code_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_522 = come_decrement_ref_count(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(left_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(array_num_472,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_484 = come_decrement_ref_count(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__297;
                }
                else {
                }
                (Err_524 = come_decrement_ref_count(Err_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            if(            left_value_470->type->mPointerNum>=1) {
                __dec_obj135=come_value_499->c_value,
                come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_520,right_value_488->c_value));
                __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            left_value_470->type->mPointerNum==0) {
                __dec_obj136=come_value_499->c_value,
                come_value_499->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_520,right_value_488->c_value));
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value452=err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_520,left_value_470->type->mPointerNum)));
                come_exception_var_18_525=multiple_assign_var28->v1;
                Err_526=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                if(                (_if_conditional24=(Err_526)),                /*c*/ come_call_finalizer3(__right_value452,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional24) {
                    __result_obj__298 = (_Bool)1;
                    (Err_526 = come_decrement_ref_count(Err_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(come_value_499,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(buf_513,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (left_value_code_520 = come_decrement_ref_count(left_value_code_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (Err_522 = come_decrement_ref_count(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(left_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(array_num_472,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_484 = come_decrement_ref_count(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(right_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__298;
                }
                else {
                }
                (Err_526 = come_decrement_ref_count(Err_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        result_type_527=(struct sType*)come_increment_ref_count(sType_clone(left_type_471));
        __dec_obj137=result_type_527->mArrayNum,
        result_type_527->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 894, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj137,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj138=come_value_499->type,
        come_value_499->type=(struct sType*)come_increment_ref_count(result_type_527);
        /*b*/ come_call_finalizer3(__dec_obj138,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_499->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_499));
        add_come_last_code(info,"%s",come_value_499->c_value);
        /*c*/ come_call_finalizer3(come_value_499,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_513,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value_code_520 = come_decrement_ref_count(left_value_code_520, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (Err_522 = come_decrement_ref_count(Err_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_527,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__299 = (_Bool)1;
    ((right_467) ? right_467 = come_decrement_ref_count(right_467, ((struct sNode*)right_467)->finalize, ((struct sNode*)right_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_470,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num_472,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_484 = come_decrement_ref_count(fun_name2_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(right_value_488,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_491,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
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
struct list$1CVALUE$ph* __result_obj__275;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__275 = (struct list$1CVALUE$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_473;
struct list_item$1CVALUE$ph* prev_it_474;
    it_473=self->head;
    while(it_473!=((void*)0)) {
        prev_it_474=it_473;
        it_473=it_473->next;
        /*c*/ come_call_finalizer3(prev_it_474,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_476;
struct sNode* __result_obj__276;
struct sNode* __result_obj__277;
struct sNode* result_477;
struct sNode* __result_obj__278;
result_476 = (void*)0;
result_477 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_476,0,sizeof(struct sNode*));
        __result_obj__276 = result_476;
        return __result_obj__276;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__277 = self->it->item;
        return __result_obj__277;
    }
    memset(&result_477,0,sizeof(struct sNode*));
    __result_obj__278 = result_477;
    return __result_obj__278;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_479;
struct sNode* __result_obj__279;
struct sNode* __result_obj__280;
struct sNode* result_480;
struct sNode* __result_obj__281;
result_479 = (void*)0;
result_480 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_479,0,sizeof(struct sNode*));
        __result_obj__279 = result_479;
        return __result_obj__279;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__280 = self->it->item;
        return __result_obj__280;
    }
    memset(&result_480,0,sizeof(struct sNode*));
    __result_obj__281 = result_480;
    return __result_obj__281;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_493;
int i_494;
struct CVALUE* __result_obj__284;
struct CVALUE* default_value_495;
struct CVALUE* __result_obj__285;
default_value_495 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_493=self->head;
    i_494=0;
    while(it_493!=((void*)0)) {
        if(        position==i_494) {
            __result_obj__284 = (struct CVALUE*)come_increment_ref_count(it_493->item);
            /*c*/ come_call_finalizer3(__result_obj__284,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__284;
        }
        it_493=it_493->next;
        i_494++;
    }
    memset(&default_value_495,0,sizeof(struct CVALUE*));
    __result_obj__285 = (struct CVALUE*)come_increment_ref_count(default_value_495);
    /*c*/ come_call_finalizer3(default_value_495,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_496;
int i_497;
struct CVALUE* __result_obj__286;
struct CVALUE* default_value_498;
struct CVALUE* __result_obj__287;
default_value_498 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_496=self->head;
    i_497=0;
    while(it_496!=((void*)0)) {
        if(        position==i_497) {
            __result_obj__286 = (struct CVALUE*)come_increment_ref_count(it_496->item);
            /*c*/ come_call_finalizer3(__result_obj__286,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__286;
        }
        it_496=it_496->next;
        i_497++;
    }
    memset(&default_value_498,0,sizeof(struct CVALUE*));
    __result_obj__287 = (struct CVALUE*)come_increment_ref_count(default_value_498);
    /*c*/ come_call_finalizer3(default_value_498,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__287,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__287;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_501;
struct list$1sNode$ph* __result_obj__288;
struct list_item$1sNode$ph* it_502;
int i_503;
struct list_item$1sNode$ph* prev_it_504;
struct list_item$1sNode$ph* it_505;
int i_506;
struct list_item$1sNode$ph* prev_it_507;
struct list_item$1sNode$ph* it_508;
struct list_item$1sNode$ph* head_prev_it_509;
struct list_item$1sNode$ph* tail_it_510;
int i_511;
struct list_item$1sNode$ph* prev_it_512;
struct list$1sNode$ph* __result_obj__289;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_501=tail;
        tail=head;
        head=tmp_501;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__288 = self;
        return __result_obj__288;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_502=self->head;
        i_503=0;
        while(it_502!=((void*)0)) {
            if(            i_503<tail) {
                prev_it_504=it_502;
                it_502=it_502->next;
                i_503++;
                /*c*/ come_call_finalizer3(prev_it_504,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_503==tail) {
                self->head=it_502;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_502=it_502->next;
                i_503++;
            }
        }
    }
    else if(    tail==self->len) {
        it_505=self->head;
        i_506=0;
        while(it_505!=((void*)0)) {
            if(            i_506==head) {
                self->tail=it_505->prev;
                self->tail->next=((void*)0);
            }
            if(            i_506>=head) {
                prev_it_507=it_505;
                it_505=it_505->next;
                i_506++;
                /*c*/ come_call_finalizer3(prev_it_507,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_505=it_505->next;
                i_506++;
            }
        }
    }
    else {
        it_508=self->head;
        head_prev_it_509=((void*)0);
        tail_it_510=((void*)0);
        i_511=0;
        while(it_508!=((void*)0)) {
            if(            i_511==head) {
                head_prev_it_509=it_508->prev;
            }
            if(            i_511==tail) {
                tail_it_510=it_508;
            }
            if(            i_511>=head&&i_511<tail) {
                prev_it_512=it_508;
                it_508=it_508->next;
                i_511++;
                /*c*/ come_call_finalizer3(prev_it_512,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_508=it_508->next;
                i_511++;
            }
        }
        if(        head_prev_it_509!=((void*)0)) {
            head_prev_it_509->next=tail_it_510;
        }
        if(        tail_it_510!=((void*)0)) {
            tail_it_510->prev=head_prev_it_509;
        }
    }
    __result_obj__289 = self;
    return __result_obj__289;
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_515;
struct CVALUE* __result_obj__290;
struct CVALUE* __result_obj__291;
struct CVALUE* result_516;
struct CVALUE* __result_obj__292;
result_515 = (void*)0;
result_516 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_515,0,sizeof(struct CVALUE*));
        __result_obj__290 = result_515;
        return __result_obj__290;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__291 = self->it->item;
        return __result_obj__291;
    }
    memset(&result_516,0,sizeof(struct CVALUE*));
    __result_obj__292 = result_516;
    return __result_obj__292;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_518;
struct CVALUE* __result_obj__293;
struct CVALUE* __result_obj__294;
struct CVALUE* result_519;
struct CVALUE* __result_obj__295;
result_518 = (void*)0;
result_519 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_518,0,sizeof(struct CVALUE*));
        __result_obj__293 = result_518;
        return __result_obj__293;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_519,0,sizeof(struct CVALUE*));
    __result_obj__295 = result_519;
    return __result_obj__295;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1sNode$ph* __dec_obj139;
void* __right_value458 = (void*)0;
struct sNode* __dec_obj140;
struct sLoadArrayNode* __result_obj__300;
    ((struct sNodeBase*)(__right_value456=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value456,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj139=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    /*b*/ come_call_finalizer3(__dec_obj139,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj140=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj140 ? __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__300 = (struct sLoadArrayNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sLoadArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __right_value459 = (void*)0;
char* __result_obj__301;
    __result_obj__301 = (char*)come_increment_ref_count(((char*)(__right_value459=__builtin_string("sLoadArrayNode"))));
    (__right_value459 = come_decrement_ref_count(__right_value459, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__301 = come_decrement_ref_count(__result_obj__301, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__301;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_528;
struct list$1sNode$ph* array_num_nodes_529;
_Bool Value_530;
_Bool __result_obj__302;
void* __right_value460 = (void*)0;
struct CVALUE* left_value_531;
void* __right_value461 = (void*)0;
struct sType* left_type_532;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct list$1CVALUE$ph* array_num_533;
struct list$1sNode$ph* o2_saved_534;
struct sNode* it_535;
_Bool Value_536;
_Bool __result_obj__303;
void* __right_value464 = (void*)0;
struct CVALUE* c_value_537;
void* __right_value465 = (void*)0;
struct sType* type_538;
char* fun_name_539;
_Bool calling_fun_540;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct CVALUE* come_value_547;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct buffer* buf_548;
struct list$1CVALUE$ph* o2_saved_549;
struct CVALUE* it_550;
void* __right_value472 = (void*)0;
char* left_value_code_551;
void* __right_value473 = (void*)0;
char* __dec_obj141;
void* __right_value474 = (void*)0;
struct sType* result_type_552;
struct sType* __dec_obj142;
int n_553;
void* __right_value475 = (void*)0;
struct sType* __dec_obj143;
void* __right_value476 = (void*)0;
struct sType* __dec_obj144;
int i_554;
void* __right_value477 = (void*)0;
struct sType* __dec_obj145;
_Bool __result_obj__308;
memset(&calling_fun_540, 0, sizeof(_Bool));
    left_528=(struct sNode*)come_increment_ref_count(self->mLeft);
    array_num_nodes_529=self->mArrayNum;
    Value_530=node_compile(left_528,info);
    if(    !Value_530) {
        __result_obj__302 = (_Bool)0;
        ((left_528) ? left_528 = come_decrement_ref_count(left_528, ((struct sNode*)left_528)->finalize, ((struct sNode*)left_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__302;
    }
    else {
    }
    left_value_531=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_532=(struct sType*)come_increment_ref_count(sType_clone(left_value_531->type));
    array_num_533=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 938, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_534=(array_num_nodes_529),it_535=list$1sNode$ph_begin((o2_saved_534));    !list$1sNode$ph_end((o2_saved_534));    it_535=list$1sNode$ph_next((o2_saved_534))    ){
        Value_536=node_compile(it_535,info);
        if(        !Value_536) {
            __result_obj__303 = (_Bool)0;
            ((left_528) ? left_528 = come_decrement_ref_count(left_528, ((struct sNode*)left_528)->finalize, ((struct sNode*)left_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(left_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_532,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_533,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__303;
        }
        else {
        }
        c_value_537=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_533,(struct CVALUE*)come_increment_ref_count(c_value_537));
        /*c*/ come_call_finalizer3(c_value_537,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_538=(struct sType*)come_increment_ref_count(sType_clone(left_value_531->type));
    fun_name_539="operator_load_element";
    if(    self->mQuote) {
        calling_fun_540=(_Bool)0;
    }
    else {
        calling_fun_540=operator_overload_fun(type_538,fun_name_539,(struct sNode*)come_increment_ref_count(left_528),(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(array_num_nodes_529,0)),(struct CVALUE*)come_increment_ref_count(left_value_531),(struct CVALUE*)come_increment_ref_count(list$1CVALUE$ph_operator_load_element(array_num_533,0)),self->mBreakGuard,info);
    }
    if(    !calling_fun_540) {
        come_value_547=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 962, "struct CVALUE*"))));
        buf_548=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 964, "struct buffer*"))));
        buffer_append_str(buf_548,left_value_531->c_value);
        for(        o2_saved_549=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_533)),it_550=list$1CVALUE$ph_begin((o2_saved_549));        !list$1CVALUE$ph_end((o2_saved_549));        it_550=list$1CVALUE$ph_next((o2_saved_549))        ){
            buffer_append_format(buf_548,"[%s]",it_550->c_value);
        }
        /*c*/ come_call_finalizer3(o2_saved_549,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        left_value_code_551=(char*)come_increment_ref_count(buffer_to_string(buf_548));
        __dec_obj141=come_value_547->c_value,
        come_value_547->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_551));
        __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type_552=(struct sType*)come_increment_ref_count(sType_clone(left_type_532));
        if(        result_type_552->mOriginalLoadVarType) {
            __dec_obj142=result_type_552,
            result_type_552=(struct sType*)come_increment_ref_count(result_type_552->mOriginalLoadVarType);
            /*b*/ come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_552->mArrayNum)>0) {
            n_553=list$1sNode$ph_length(result_type_552->mArrayNum)-list$1CVALUE$ph_length(array_num_533);
            if(            n_553==0) {
                __dec_obj143=result_type_552,
                result_type_552=(struct sType*)come_increment_ref_count(sType_clone(left_type_532));
                /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_532->mOriginalLoadVarType) {
                    __dec_obj144=result_type_552,
                    result_type_552=(struct sType*)come_increment_ref_count(sType_clone(left_type_532->mOriginalLoadVarType));
                    /*b*/ come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_552->mArrayNum);
            }
            else if(            n_553>0) {
                for(                i_554=0;                i_554<n_553;                i_554++                ){
                    list$1sNode$ph_delete(result_type_552->mArrayNum,-1,-1);
                }
            }
            else if(            n_553<0) {
                list$1sNode$ph_reset(result_type_552->mArrayNum);
                result_type_552->mPointerNum+=n_553;
                if(                result_type_552->mPointerNum<0) {
                    result_type_552->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_552->mPointerNum>0) {
                result_type_552->mPointerNum-=list$1CVALUE$ph_length(array_num_533);
                if(                result_type_552->mPointerNum<0) {
                    result_type_552->mPointerNum=0;
                }
            }
        }
        __dec_obj145=come_value_547->type,
        come_value_547->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_552));
        /*b*/ come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_547->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_547));
        add_come_last_code(info,"%s",come_value_547->c_value);
        /*c*/ come_call_finalizer3(come_value_547,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_548,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value_code_551 = come_decrement_ref_count(left_value_code_551, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_552,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__308 = (_Bool)1;
    ((left_528) ? left_528 = come_decrement_ref_count(left_528, ((struct sNode*)left_528)->finalize, ((struct sNode*)left_528)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(left_value_531,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_532,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num_533,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_538,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
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

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_541;
int i_542;
struct sNode* __result_obj__304;
struct sNode* default_value_543;
struct sNode* __result_obj__305;
default_value_543 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_541=self->head;
    i_542=0;
    while(it_541!=((void*)0)) {
        if(        position==i_542) {
            __result_obj__304 = (struct sNode*)come_increment_ref_count(it_541->item);
            ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__304;
        }
        it_541=it_541->next;
        i_542++;
    }
    memset(&default_value_543,0,sizeof(struct sNode*));
    __result_obj__305 = (struct sNode*)come_increment_ref_count(default_value_543);
    ((default_value_543) ? default_value_543 = come_decrement_ref_count(default_value_543, ((struct sNode*)default_value_543)->finalize, ((struct sNode*)default_value_543)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__305) ? __result_obj__305 = come_decrement_ref_count(__result_obj__305, ((struct sNode*)__result_obj__305)->finalize, ((struct sNode*)__result_obj__305)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__305;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_544;
int i_545;
struct sNode* __result_obj__306;
struct sNode* default_value_546;
struct sNode* __result_obj__307;
default_value_546 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_544=self->head;
    i_545=0;
    while(it_544!=((void*)0)) {
        if(        position==i_545) {
            __result_obj__306 = (struct sNode*)come_increment_ref_count(it_544->item);
            ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__306;
        }
        it_544=it_544->next;
        i_545++;
    }
    memset(&default_value_546,0,sizeof(struct sNode*));
    __result_obj__307 = (struct sNode*)come_increment_ref_count(default_value_546);
    ((default_value_546) ? default_value_546 = come_decrement_ref_count(default_value_546, ((struct sNode*)default_value_546)->finalize, ((struct sNode*)default_value_546)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__307;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNode$ph* array_num, _Bool quote, struct sInfo* info){
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1sNode$ph* __dec_obj146;
void* __right_value480 = (void*)0;
struct sNode* __dec_obj147;
struct sLoadRangeArrayNode* __result_obj__309;
    ((struct sNodeBase*)(__right_value478=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value478,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj146=self->mArrayNum,
    self->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(array_num));
    /*b*/ come_call_finalizer3(__dec_obj146,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj147=self->mLeft,
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    (__dec_obj147 ? __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    self->mQuote=quote;
    __result_obj__309 = (struct sLoadRangeArrayNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,sLoadRangeArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __right_value481 = (void*)0;
char* __result_obj__310;
    __result_obj__310 = (char*)come_increment_ref_count(((char*)(__right_value481=__builtin_string("sLoadRangeArrayNode"))));
    (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__310 = come_decrement_ref_count(__result_obj__310, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__310;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_555;
struct list$1sNode$ph* array_num_nodes_556;
_Bool Value_557;
void* __right_value482 = (void*)0;
struct CVALUE* left_value_558;
void* __right_value483 = (void*)0;
struct sType* left_type_559;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct list$1CVALUE$ph* array_num_560;
struct list$1sNode$ph* o2_saved_561;
struct sNode* it_562;
_Bool Value_563;
_Bool __result_obj__311;
void* __right_value486 = (void*)0;
struct CVALUE* c_value_564;
void* __right_value487 = (void*)0;
struct sType* type_565;
char* fun_name_566;
_Bool calling_fun_567;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct CVALUE* come_value_568;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct buffer* buf_569;
struct list$1CVALUE$ph* o2_saved_570;
struct CVALUE* it_571;
void* __right_value494 = (void*)0;
char* left_value_code_572;
void* __right_value495 = (void*)0;
char* __dec_obj148;
void* __right_value496 = (void*)0;
struct sType* result_type_573;
struct sType* __dec_obj149;
int n_574;
void* __right_value497 = (void*)0;
struct sType* __dec_obj150;
void* __right_value498 = (void*)0;
struct sType* __dec_obj151;
int i_575;
void* __right_value499 = (void*)0;
struct sType* __dec_obj152;
_Bool __result_obj__312;
memset(&calling_fun_567, 0, sizeof(_Bool));
    left_555=self->mLeft;
    array_num_nodes_556=self->mArrayNum;
    Value_557=node_compile(left_555,info);
    if(    !Value_557) {
        return (_Bool)0;
    }
    else {
    }
    left_value_558=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    left_type_559=(struct sType*)come_increment_ref_count(sType_clone(left_value_558->type));
    array_num_560=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list$1CVALUE$ph)*(1), "18field.c", 1058, "struct list$1CVALUE$ph*"))));
    for(    o2_saved_561=(array_num_nodes_556),it_562=list$1sNode$ph_begin((o2_saved_561));    !list$1sNode$ph_end((o2_saved_561));    it_562=list$1sNode$ph_next((o2_saved_561))    ){
        Value_563=node_compile(it_562,info);
        if(        !Value_563) {
            __result_obj__311 = (_Bool)0;
            /*c*/ come_call_finalizer3(left_value_558,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(left_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_560,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__311;
        }
        else {
        }
        c_value_564=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUE$ph_push_back(array_num_560,(struct CVALUE*)come_increment_ref_count(c_value_564));
        /*c*/ come_call_finalizer3(c_value_564,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_565=(struct sType*)come_increment_ref_count(sType_clone(left_value_558->type));
    fun_name_566="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_567=(_Bool)0;
    }
    else {
        calling_fun_567=operator_overload_fun2(type_565,fun_name_566,left_value_558,((struct CVALUE*)(__right_value488=list$1CVALUE$ph_operator_load_element(array_num_560,0))),((struct CVALUE*)(__right_value489=list$1CVALUE$ph_operator_load_element(array_num_560,1))),info);
        /*c*/ come_call_finalizer3(__right_value488,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value489,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !calling_fun_567) {
        come_value_568=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "18field.c", 1082, "struct CVALUE*"))));
        buf_569=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "18field.c", 1084, "struct buffer*"))));
        buffer_append_str(buf_569,left_value_558->c_value);
        for(        o2_saved_570=(struct list$1CVALUE$ph*)come_increment_ref_count((array_num_560)),it_571=list$1CVALUE$ph_begin((o2_saved_570));        !list$1CVALUE$ph_end((o2_saved_570));        it_571=list$1CVALUE$ph_next((o2_saved_570))        ){
            buffer_append_format(buf_569,"[%s]",it_571->c_value);
        }
        /*c*/ come_call_finalizer3(o2_saved_570,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        left_value_code_572=(char*)come_increment_ref_count(buffer_to_string(buf_569));
        __dec_obj148=come_value_568->c_value,
        come_value_568->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_572));
        __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type_573=(struct sType*)come_increment_ref_count(sType_clone(left_type_559));
        if(        result_type_573->mOriginalLoadVarType) {
            __dec_obj149=result_type_573,
            result_type_573=(struct sType*)come_increment_ref_count(result_type_573->mOriginalLoadVarType);
            /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        list$1sNode$ph_length(result_type_573->mArrayNum)>0) {
            n_574=list$1sNode$ph_length(result_type_573->mArrayNum)-list$1CVALUE$ph_length(array_num_560);
            if(            n_574==0) {
                __dec_obj150=result_type_573,
                result_type_573=(struct sType*)come_increment_ref_count(sType_clone(left_type_559));
                /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                if(                left_type_559->mOriginalLoadVarType) {
                    __dec_obj151=result_type_573,
                    result_type_573=(struct sType*)come_increment_ref_count(sType_clone(left_type_559->mOriginalLoadVarType));
                    /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                list$1sNode$ph_reset(result_type_573->mArrayNum);
            }
            else if(            n_574>0) {
                for(                i_575=0;                i_575<n_574;                i_575++                ){
                    list$1sNode$ph_delete(result_type_573->mArrayNum,-1,-1);
                }
            }
            else if(            n_574<0) {
                list$1sNode$ph_reset(result_type_573->mArrayNum);
                result_type_573->mPointerNum+=n_574;
                if(                result_type_573->mPointerNum<0) {
                    result_type_573->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_573->mPointerNum>0) {
                result_type_573->mPointerNum-=list$1CVALUE$ph_length(array_num_560);
                if(                result_type_573->mPointerNum<0) {
                    result_type_573->mPointerNum=0;
                }
            }
        }
        __dec_obj152=come_value_568->type,
        come_value_568->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_573));
        /*b*/ come_call_finalizer3(__dec_obj152,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value_568->var=((void*)0);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_568));
        add_come_last_code(info,"%s",come_value_568->c_value);
        /*c*/ come_call_finalizer3(come_value_568,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_569,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (left_value_code_572 = come_decrement_ref_count(left_value_code_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_573,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__312 = (_Bool)1;
    /*c*/ come_call_finalizer3(left_value_558,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(left_type_559,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(array_num_560,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_565,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
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
void* __right_value500 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c1_576=0;
char* Err_577=0;
struct sNode* __result_obj__313;
    multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value500=err_msg(info,"parse_method_call is failed")));
    come_exception_var_c1_576=multiple_assign_var29->v1;
    Err_577=(char*)come_increment_ref_count(multiple_assign_var29->v2);
    ((Err_577)?(puts(Err_577),exit(2)):(0));
    /*c*/ come_call_finalizer3(__right_value500,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    exit(2);
    __result_obj__313 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (Err_577 = come_decrement_ref_count(Err_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__313) ? __result_obj__313 = come_decrement_ref_count(__result_obj__313, ((struct sNode*)__result_obj__313)->finalize, ((struct sNode*)__result_obj__313)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__313;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value508 = (void*)0;
struct sNode* __result_obj__316;
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1158, "struct sNode");
    _inf_obj_value3=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value502=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1158, "struct sStoreFieldNode*")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result_obj__316 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value508=_inf_value3)));
    ((right) ? right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value502,sStoreFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value508) ? __right_value508 = come_decrement_ref_count(__right_value508, ((struct sNode*)__right_value508)->finalize, ((struct sNode*)__right_value508)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__316;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
struct sStoreFieldNode* __result_obj__314;
void* __right_value503 = (void*)0;
struct sStoreFieldNode* result_578;
void* __right_value504 = (void*)0;
char* __dec_obj153;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj154;
void* __right_value506 = (void*)0;
struct sNode* __dec_obj155;
void* __right_value507 = (void*)0;
char* __dec_obj156;
struct sStoreFieldNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_578=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "struct sStoreFieldNode*"));
    if(    self!=((void*)0)) {
        result_578->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj153=result_578->sname,
        result_578->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreFieldNode_clone", 5, "char*"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_578->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj154=result_578->mLeft,
        result_578->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj154 ? __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj155=result_578->mRight,
        result_578->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj155 ? __dec_obj155 = come_decrement_ref_count(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj156=result_578->mName,
        result_578->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStoreFieldNode_clone", 9, "char*"));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__315 = result_578;
    /*c*/ come_call_finalizer3(result_578,sStoreFieldNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
_Bool range_array_579;
char* p_580;
int sline_581;
_Bool no_comma_582;
_Bool no_output_err_583;
_Bool no_output_come_code_584;
void* __right_value509 = (void*)0;
struct sNode* exp_585;
_Bool quote_586;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1sNode$ph* array_num_587;
void* __right_value512 = (void*)0;
struct sNode* node2_588;
void* __right_value516 = (void*)0;
struct sNode* node3_592;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value523 = (void*)0;
struct sNode* __dec_obj163;
_Bool quote_594;
_Bool range_595;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct list$1sNode$ph* array_num_596;
_Bool range_array2_597;
char* p_598;
int sline_599;
_Bool no_comma_600;
_Bool no_output_err_601;
_Bool no_output_come_code_602;
void* __right_value526 = (void*)0;
struct sNode* exp_603;
void* __right_value527 = (void*)0;
struct sNode* node2_604;
void* __right_value528 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_c2_605=0;
char* Err_606=0;
_Bool break_guard_607;
void* __right_value529 = (void*)0;
struct sNode* right_node_608;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value537 = (void*)0;
struct sNode* __dec_obj168;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value544 = (void*)0;
struct sNode* __dec_obj172;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sNode* _inf_value7;
struct sNullCheckNode* _inf_obj_value7;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj175;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sNode* _inf_value8;
struct sNullableNode* _inf_obj_value8;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj176;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value556 = (void*)0;
char* field_name_612;
_Bool parse_method_generics_type_613;
char* p_614;
int sline_615;
void* __right_value557 = (void*)0;
char* word_616;
void* __right_value558 = (void*)0;
struct sNode* right_node_617;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value9;
struct sStoreFieldNode* _inf_obj_value9;
void* __right_value561 = (void*)0;
struct sNode* __dec_obj178;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* __dec_obj181;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj183;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* __dec_obj184;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* __dec_obj185;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* __dec_obj186;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value10;
struct sLoadFieldNode* _inf_obj_value10;
void* __right_value580 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value581 = (void*)0;
struct sNode* node2_618;
struct sNode* __dec_obj188;
struct sNode* __result_obj__326;
    while((_Bool)1) {
        range_array_579=(_Bool)0;
        {
            p_580=info->p;
            sline_581=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_582=info->no_comma;
                no_output_err_583=info->no_output_err;
                no_output_come_code_584=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_585=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_582;
                info->no_output_err=no_output_err_583;
                info->no_output_come_code=no_output_come_code_584;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_579=(_Bool)1;
                }
                ((exp_585) ? exp_585 = come_decrement_ref_count(exp_585, ((struct sNode*)exp_585)->finalize, ((struct sNode*)exp_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            info->p=p_580;
            info->sline=sline_581;
        }
        if(        range_array_579&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_586=*info->p==92;
            if(            quote_586) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_587=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1202, "struct list$1sNode$ph*"))));
            skip_pointer_attribute(info);
            node2_588=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNode$ph_push_back(array_num_587,(struct sNode*)come_increment_ref_count(node2_588));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_592=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNode$ph_push_back(array_num_587,(struct sNode*)come_increment_ref_count(node3_592));
                expected_next_character(93,info);
                ((node3_592) ? node3_592 = come_decrement_ref_count(node3_592, ((struct sNode*)node3_592)->finalize, ((struct sNode*)node3_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1223, "struct sNode");
            _inf_obj_value4=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value518=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1223, "struct sLoadRangeArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_587),quote_586,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj163=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            (__dec_obj163 ? __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value518,sLoadRangeArrayNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(array_num_587,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node2_588) ? node2_588 = come_decrement_ref_count(node2_588, ((struct sNode*)node2_588)->finalize, ((struct sNode*)node2_588)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        !range_array_579&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_594=*info->p==92;
            if(            quote_594) {
                info->p++;
            }
            range_595=(_Bool)0;
            array_num_596=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "18field.c", 1232, "struct list$1sNode$ph*"))));
            while(1) {
                range_array2_597=(_Bool)0;
                {
                    p_598=info->p;
                    sline_599=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_600=info->no_comma;
                        no_output_err_601=info->no_output_err;
                        no_output_come_code_602=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_603=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_600;
                        info->no_output_err=no_output_err_601;
                        info->no_output_come_code=no_output_come_code_602;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_597=(_Bool)1;
                        }
                        ((exp_603) ? exp_603 = come_decrement_ref_count(exp_603, ((struct sNode*)exp_603)->finalize, ((struct sNode*)exp_603)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    info->p=p_598;
                    info->sline=sline_599;
                }
                if(                range_array2_597) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_604=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph_push_back(array_num_596,(struct sNode*)come_increment_ref_count(node2_604));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value528=err_msg(info,"require ] character")));
                        come_exception_var_c2_605=multiple_assign_var30->v1;
                        Err_606=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                        ((Err_606)?(puts(Err_606),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value528,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_606 = come_decrement_ref_count(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_604) ? node2_604 = come_decrement_ref_count(node2_604, ((struct sNode*)node2_604)->finalize, ((struct sNode*)node2_604)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    break;
                }
            }
            break_guard_607=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_607=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_608=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1307, "struct sNode");
                _inf_obj_value5=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(__right_value531=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1307, "struct sStoreArrayNode*")),node,(struct sNode*)come_increment_ref_count(right_node_608),(struct list$1sNode$ph*)come_increment_ref_count(array_num_596),quote_594,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj168=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                (__dec_obj168 ? __dec_obj168 = come_decrement_ref_count(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value531,sStoreArrayNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((right_node_608) ? right_node_608 = come_decrement_ref_count(right_node_608, ((struct sNode*)right_node_608)->finalize, ((struct sNode*)right_node_608)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1310, "struct sNode");
                _inf_obj_value6=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(__right_value539=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1310, "struct sLoadArrayNode*")),node,(struct list$1sNode$ph*)come_increment_ref_count(array_num_596),quote_594,break_guard_607,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj172=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                (__dec_obj172 ? __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value539,sLoadArrayNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(array_num_596,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1340, "struct sNode");
            _inf_obj_value7=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(__right_value546=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc_v2(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1340, "struct sNullCheckNode*")),node,(_Bool)0,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sNullCheckNode_finalize;
            _inf_value7->clone=(void*)sNullCheckNode_clone;
            _inf_value7->compile=(void*)sNullCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sNullCheckNode_kind;
            __dec_obj175=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value546,sNullCheckNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1348, "struct sNode");
            _inf_obj_value8=(struct sNullableNode*)come_increment_ref_count(((struct sNullableNode*)(__right_value552=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc_v2(1, sizeof(struct sNullableNode)*(1), "18field.c", 1348, "struct sNullableNode*")),node,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullableNode_finalize;
            _inf_value8->clone=(void*)sNullableNode_clone;
            _inf_value8->compile=(void*)sNullableNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullableNode_kind;
            __dec_obj176=node,
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            (__dec_obj176 ? __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value552,sNullableNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj177=node,
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
            (__dec_obj177 ? __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
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
            field_name_612=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_613=(_Bool)0;
            {
                p_614=info->p;
                sline_615=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_616=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_616,info)) {
                            parse_method_generics_type_613=(_Bool)1;
                        }
                        (word_616 = come_decrement_ref_count(word_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                info->p=p_614;
                info->sline=sline_615;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_617=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1404, "struct sNode");
                _inf_obj_value9=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(__right_value560=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc_v2(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1404, "struct sStoreFieldNode*")),node,(struct sNode*)come_increment_ref_count(right_node_617),(char*)come_increment_ref_count(field_name_612),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value9->clone=(void*)sStoreFieldNode_clone;
                _inf_value9->compile=(void*)sStoreFieldNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sStoreFieldNode_kind;
                __dec_obj178=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value9);
                (__dec_obj178 ? __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value560,sStoreFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((right_node_617) ? right_node_617 = come_decrement_ref_count(right_node_617, ((struct sNode*)right_node_617)->finalize, ((struct sNode*)right_node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_612,"exception_throw")||string_operator_equals(field_name_612,"exception_value")||parse_method_generics_type_613||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_612,"if")) {
                    __dec_obj179=node,
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_612,"elif")) {
                    __dec_obj180=node,
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj180 ? __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_612,"case")) {
                    __dec_obj181=node,
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj181 ? __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_612,"less")) {
                    __dec_obj182=node,
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj182 ? __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_612,"rescue")) {
                    __dec_obj183=node,
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj183 ? __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_612,"exception_throw")) {
                    __dec_obj184=node,
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj184 ? __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else if(                string_operator_equals(field_name_612,"exception_value")) {
                    __dec_obj185=node,
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    (__dec_obj185 ? __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
                else {
                    __dec_obj186=node,
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_612),info));
                    (__dec_obj186 ? __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                }
            }
            else {
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "18field.c", 1436, "struct sNode");
                _inf_obj_value10=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(__right_value579=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc_v2(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1436, "struct sLoadFieldNode*")),node,(char*)come_increment_ref_count(field_name_612),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value10->clone=(void*)sLoadFieldNode_clone;
                _inf_value10->compile=(void*)sLoadFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLoadFieldNode_kind;
                __dec_obj187=node,
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                (__dec_obj187 ? __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                /*c*/ come_call_finalizer3(__right_value579,sLoadFieldNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (field_name_612 = come_decrement_ref_count(field_name_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            node2_618=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_618==((void*)0)) {
                ((node2_618) ? node2_618 = come_decrement_ref_count(node2_618, ((struct sNode*)node2_618)->finalize, ((struct sNode*)node2_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            __dec_obj188=node,
            node=(struct sNode*)come_increment_ref_count(node2_618);
            (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            ((node2_618) ? node2_618 = come_decrement_ref_count(node2_618, ((struct sNode*)node2_618)->finalize, ((struct sNode*)node2_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    __result_obj__326 = (struct sNode*)come_increment_ref_count(node);
    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__326) ? __result_obj__326 = come_decrement_ref_count(__result_obj__326, ((struct sNode*)__result_obj__326)->finalize, ((struct sNode*)__result_obj__326)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__326;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value513 = (void*)0;
struct list_item$1sNode$ph* litem_589;
struct sNode* __dec_obj157;
void* __right_value514 = (void*)0;
struct list_item$1sNode$ph* litem_590;
struct sNode* __dec_obj158;
void* __right_value515 = (void*)0;
struct list_item$1sNode$ph* litem_591;
struct sNode* __dec_obj159;
struct list$1sNode$ph* __result_obj__317;
    if(    self->len==0) {
        litem_589=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value513=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1111, "struct list_item$1sNode$ph*"))));
        litem_589->prev=((void*)0);
        litem_589->next=((void*)0);
        __dec_obj157=litem_589->item,
        litem_589->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj157 ? __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_589;
        self->head=litem_589;
    }
    else if(    self->len==1) {
        litem_590=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value514=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1121, "struct list_item$1sNode$ph*"))));
        litem_590->prev=self->head;
        litem_590->next=((void*)0);
        __dec_obj158=litem_590->item,
        litem_590->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_590;
        self->head->next=litem_590;
    }
    else {
        litem_591=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value515=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1131, "struct list_item$1sNode$ph*"))));
        litem_591->prev=self->tail;
        litem_591->next=((void*)0);
        __dec_obj159=litem_591->item,
        litem_591->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj159 ? __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_591;
        self->tail=litem_591;
    }
    self->len++;
    __result_obj__317 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__317;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
struct sLoadRangeArrayNode* __result_obj__318;
void* __right_value519 = (void*)0;
struct sLoadRangeArrayNode* result_593;
void* __right_value520 = (void*)0;
char* __dec_obj160;
void* __right_value521 = (void*)0;
struct list$1sNode$ph* __dec_obj161;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj162;
struct sLoadRangeArrayNode* __result_obj__319;
    if(    self==(void*)0) {
        __result_obj__318 = (void*)0;
        return __result_obj__318;
    }
    result_593=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc_v2(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "struct sLoadRangeArrayNode*"));
    if(    self!=((void*)0)) {
        result_593->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj160=result_593->sname,
        result_593->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadRangeArrayNode_clone", 5, "char*"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_593->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj161=result_593->mArrayNum,
        result_593->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj161,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj162=result_593->mLeft,
        result_593->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj162 ? __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_593->mQuote=self->mQuote;
    }
    __result_obj__319 = result_593;
    /*c*/ come_call_finalizer3(result_593,sLoadRangeArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__319;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
struct sStoreArrayNode* __result_obj__320;
void* __right_value532 = (void*)0;
struct sStoreArrayNode* result_609;
void* __right_value533 = (void*)0;
char* __dec_obj164;
void* __right_value534 = (void*)0;
struct sNode* __dec_obj165;
void* __right_value535 = (void*)0;
struct sNode* __dec_obj166;
void* __right_value536 = (void*)0;
struct list$1sNode$ph* __dec_obj167;
struct sStoreArrayNode* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__320 = (void*)0;
        return __result_obj__320;
    }
    result_609=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc_v2(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "struct sStoreArrayNode*"));
    if(    self!=((void*)0)) {
        result_609->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj164=result_609->sname,
        result_609->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStoreArrayNode_clone", 5, "char*"));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_609->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj165=result_609->mLeft,
        result_609->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj165 ? __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj166=result_609->mRight,
        result_609->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        (__dec_obj166 ? __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj167=result_609->mArrayNum,
        result_609->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj167,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_609->mQuote=self->mQuote;
    }
    __result_obj__321 = result_609;
    /*c*/ come_call_finalizer3(result_609,sStoreArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
struct sLoadArrayNode* __result_obj__322;
void* __right_value540 = (void*)0;
struct sLoadArrayNode* result_610;
void* __right_value541 = (void*)0;
char* __dec_obj169;
void* __right_value542 = (void*)0;
struct list$1sNode$ph* __dec_obj170;
void* __right_value543 = (void*)0;
struct sNode* __dec_obj171;
struct sLoadArrayNode* __result_obj__323;
    if(    self==(void*)0) {
        __result_obj__322 = (void*)0;
        return __result_obj__322;
    }
    result_610=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc_v2(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "struct sLoadArrayNode*"));
    if(    self!=((void*)0)) {
        result_610->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj169=result_610->sname,
        result_610->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLoadArrayNode_clone", 5, "char*"));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_610->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj170=result_610->mArrayNum,
        result_610->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj170,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_610->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj171=result_610->mLeft,
        result_610->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_610->mQuote=self->mQuote;
    }
    __result_obj__323 = result_610;
    /*c*/ come_call_finalizer3(result_610,sLoadArrayNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__323;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
struct sNullCheckNode* __result_obj__324;
void* __right_value547 = (void*)0;
struct sNullCheckNode* result_611;
void* __right_value548 = (void*)0;
char* __dec_obj173;
void* __right_value549 = (void*)0;
struct sNode* __dec_obj174;
struct sNullCheckNode* __result_obj__325;
    if(    self==(void*)0) {
        __result_obj__324 = (void*)0;
        return __result_obj__324;
    }
    result_611=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc_v2(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "struct sNullCheckNode*"));
    if(    self!=((void*)0)) {
        result_611->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_611->sname,
        result_611->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNullCheckNode_clone", 5, "char*"));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_611->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj174=result_611->mLeft,
        result_611->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        (__dec_obj174 ? __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)) {
        result_611->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result_obj__325 = result_611;
    /*c*/ come_call_finalizer3(result_611,sNullCheckNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__325;
}

