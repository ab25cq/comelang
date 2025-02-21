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
long  long __lldata;
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

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
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
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    struct list$1voidph* mFields;
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

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct sType* mChannelType;
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
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
    char* mAttribute;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2voidphvoidph* mHeader;
    struct map$2voidphvoidph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
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
    struct map$2voidphvoidph* module_params;
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
    struct list$1voidph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2voidphvoidph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

typedef unsigned long  int nfds_t;

struct pollfd
{
    int fd;
    short events;
    short revents;
};

typedef long time_t;

struct timespec
{
    long tv_sec;
    int :8*(sizeof(long)-sizeof(long))*(1234==4321);
    long tv_nsec;
    int :8*(sizeof(long)-sizeof(long))*(1234!=4321);
};

struct __sigset_t
{
    unsigned long  int __bits[128/sizeof(long)];
};

typedef struct __sigset_t sigset_t;

struct sReturnNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    char* value_source;
};

struct sOutputNode
{
    int sline;
    char* sname;
    int sline_real;
    char* contents;
};

struct sInlineAssembler
{
    int sline;
    char* sname;
    int sline_real;
    char* source;
    struct list$1sNodeph* exps;
};

struct sCurrentNode2
{
    int sline;
    char* sname;
    int sline_real;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct sLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sWildCard
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerFuncNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerLineNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sCallerSNameNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sFunCallNode
{
    int sline;
    char* sname;
    int sline_real;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    _Bool guard_break;
    struct list$1voidph* method_generics_types;
    struct buffer* method_block;
    int method_block_sline;
};

struct sComeCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* come_block;
    int come_block_sline;
};

struct sComeJoinNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
};

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sComePollNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* vars;
    struct list$1sBlockph* blocks;
    struct sBlock* else_block;
    int time_out;
};

struct sLambdaCall
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* node;
    struct list$1tuple2$2charphsNodephph* params;
};

struct sVarArgTypeName
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
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
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
void arrange_stack(struct sInfo* info, int top);
struct sNode* parse_function(struct sInfo* info);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
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
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
int poll(struct pollfd* anonymous_var_nameX1202, unsigned long  int anonymous_var_nameX1203, int anonymous_var_nameX1204);
int ppoll(struct pollfd* anonymous_var_nameX1205, unsigned long  int anonymous_var_nameX1206, const struct timespec* anonymous_var_nameX1207, const struct __sigset_t* anonymous_var_nameX1208);
struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info);
char* sReturnNode_kind(struct sReturnNode* self);
_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sReturnNode_finalize(struct sReturnNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info);
char* sOutputNode_kind(struct sOutputNode* self);
_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info);
static void sOutputNode_finalize(struct sOutputNode* self);
struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info);
char* sInlineAssembler_kind(struct sInlineAssembler* self);
_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info);
static void sInlineAssembler_finalize(struct sInlineAssembler* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info);
int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info);
char* sCurrentNode2_kind(struct sCurrentNode2* self);
_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info);
static void sCurrentNode2_finalize(struct sCurrentNode2* self);
static void sClass_finalize(struct sClass* self);
static struct sClass* sClass_clone(struct sClass* self);
static unsigned int sClass_get_hash_key(struct sClass* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info);
char* sLineNode_kind(struct sLineNode* self);
_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info);
static void sLineNode_finalize(struct sLineNode* self);
struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info);
char* sSNameNode_kind(struct sSNameNode* self);
_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info);
static void sSNameNode_finalize(struct sSNameNode* self);
struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info);
char* sFuncNode_kind(struct sFuncNode* self);
_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info);
static void sFuncNode_finalize(struct sFuncNode* self);
struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info);
char* sWildCard_kind(struct sWildCard* self);
_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info);
static void sWildCard_finalize(struct sWildCard* self);
struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info);
char* sCallerFuncNode_kind(struct sCallerFuncNode* self);
_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info);
static void sCallerFuncNode_finalize(struct sCallerFuncNode* self);
struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info);
_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info);
char* sCallerLineNode_kind(struct sCallerLineNode* self);
static void sCallerLineNode_finalize(struct sCallerLineNode* self);
struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info);
_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info);
char* sCallerSNameNode_kind(struct sCallerSNameNode* self);
static void sCallerSNameNode_finalize(struct sCallerSNameNode* self);
struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* sFunCallNode_kind(struct sFunCallNode* self);
_Bool sFunCallNode_terminated(struct sFunCallNode* self);
_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sFunCallNode_finalize(struct sFunCallNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static int list$1voidphp_length(struct list$1voidph* self);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static int list$1charphp_length(struct list$1charph* self);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item);
static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self);
struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info);
char* sComeCallNode_kind(struct sComeCallNode* self);
_Bool sComeCallNode_terminated(struct sComeCallNode* self);
_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info);
static void sComeCallNode_finalize(struct sComeCallNode* self);
struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info);
char* sComeJoinNode_kind(struct sComeJoinNode* self);
_Bool sComeJoinNode_terminated(struct sComeJoinNode* self);
_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info);
static void sComeJoinNode_finalize(struct sComeJoinNode* self);
struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info);
char* sComePollNode_kind(struct sComePollNode* self);
_Bool sComePollNode_terminated(struct sComePollNode* self);
_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static void sBlock_finalize(struct sBlock* self);
static void sComePollNode_finalize(struct sComePollNode* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self);
struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info);
char* sLambdaCall_kind(struct sLambdaCall* self);
_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info);
static void sLambdaCall_finalize(struct sLambdaCall* self);
struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info);
char* sVarArgTypeName_kind(struct sVarArgTypeName* self);
_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info);
static void sVarArgTypeName_finalize(struct sVarArgTypeName* self);
struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self);
struct sNode* expression_node_v97(struct sInfo* info);
static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self);
static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self);
static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self);
static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item);
static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static void* list$1voidpp_item(struct list$1voidp* self, int position, void* default_value);
static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self);
static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self);
static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self);
static void list$1voidp_finalize(struct list$1voidp* self);
static struct list$1voidp* list$1voidp_clone(struct list$1voidp* self);
static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self);
static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item);
static struct sVar* sVar_clone(struct sVar* self);
static void sVar_finalize(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self);
static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self);
static struct sWildCard* sWildCard_clone(struct sWildCard* self);
static struct sLineNode* sLineNode_clone(struct sLineNode* self);
static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self);
static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self);
static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self);
static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self);
static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self);
static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self);
struct sNode* expression_v5(struct sInfo* info);
static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info);
struct sNode* statment(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self);
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

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
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

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct sReturnNode* sReturnNode_initialize(struct sReturnNode* self, struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value253 = (void*)0;
char* __dec_obj33;
struct sReturnNode* __result230__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj33=self->value_source;
    self->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, value_source));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* sReturnNode_kind(struct sReturnNode* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("sReturnNode")));
    __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

_Bool sReturnNode_compile(struct sReturnNode* self, struct sInfo* info){
struct sFun* come_fun_317;
void* __right_value290 = (void*)0;
struct sType* result_type_318;
void* __right_value291 = (void*)0;
struct sType* result_type2_354;
struct sType* result_type3_355;
void* __right_value292 = (void*)0;
_Bool _if_conditional1;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj78;
_Bool Value_356;
_Bool __result247__;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_357;
void* __right_value295 = (void*)0;
struct sType* come_value_type_358;
void* __right_value296 = (void*)0;
struct sType* __dec_obj79;
void* __right_value297 = (void*)0;
char* var_name_360;
int num_result_stack_361;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __if_result__0_362 = (void*)0;
struct list$1voidph* o2_saved_363;
struct sVar* it_366;
struct list$1voidph* __dec_obj80;
void* __right_value300 = (void*)0;
struct sFun* come_fun_369;
void* __if_result__1_370 = (void*)0;
struct list$1voidph* o2_saved_371;
struct sVar* it_372;
struct list$1voidph* __dec_obj85;
void* __right_value301 = (void*)0;
    if(    self->value) {
        come_fun_317=info->come_fun;
        result_type_318=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_fun_317->mResultType));
        result_type2_354=(struct sType*)come_increment_ref_count(solve_generics(result_type_318,info->generics_type,info));
        result_type3_355=result_type2_354->mNoSolvedGenericsType;
        if(        result_type2_354->mNoSolvedGenericsType) {
            result_type3_355=result_type2_354->mNoSolvedGenericsType;
        }
        else {
            result_type3_355=result_type2_354;
        }
        if(        result_type_318->mException) {
            if(            (_if_conditional1=(string_operator_equals(((char*)(__right_value292=self->value->kind(self->value->_protocol_obj))),"sNoneNode"))),            (__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
            _if_conditional1) {
            }
            else {
                __dec_obj78=self->value;
                self->value=(struct sNode*)come_increment_ref_count(create_some((struct sNode*)come_increment_ref_count(self->value),info));
                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
            }
        }
        Value_356=node_compile(self->value,info);
        if(        !Value_356) {
            __result247__ = (_Bool)0;
            come_call_finalizer3(result_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result247__;
        }
        else {
        }
        come_value_357=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        come_value_type_358=(struct sType*)come_increment_ref_count(solve_generics(come_value_357->type,info->generics_type,info));
        __dec_obj79=info->function_result_type;
        info->function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_357->type));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(        gComeC) {
            add_come_code(info,"return %s;\n",come_value_357->c_value);
        }
        else if(        string_operator_not_equals(info->come_fun->mName,"main")&&info->come_fun->mNoResultType&&!existance_free_objects_on_return(come_fun_317->mBlock,info,come_value_357->var,(_Bool)0)&&!existance_free_right_value_objects(info)) {
            add_come_code(info,"return %s;\n",come_value_357->c_value);
        }
        else {
            static int num_result_359=0;
            var_name_360=(char*)come_increment_ref_count(xsprintf("__result%d__",++num_result_359));
            num_result_stack_361=num_result_359;
            if(            !info->come_fun->mNoResultType) {
                if(                !gComeC||!(strlen(result_type2_354->mClass->mName)>strlen("tuple")&&memcmp(result_type2_354->mClass->mName,"tuple",strlen("tuple"))==0)) {
                    check_assign_type("result type",result_type2_354,come_value_type_358,come_value_357,(_Bool)0,(_Bool)1,(_Bool)0,info);
                }
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value298=make_define_var(result_type2_354,var_name_360,(_Bool)0,info))));
                __right_value298 = come_decrement_ref_count2(__right_value298, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = gComeFunResultObject = __result_obj__ = %s;\n",var_name_360,come_value_357->c_value);
            }
            else {
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value299=make_define_var(result_type2_354,var_name_360,(_Bool)0,info))));
                __right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code(info,"%s = %s;\n",var_name_360,come_value_357->c_value);
            }
            add_last_code_to_source(info);
            free_objects_on_return(come_fun_317->mBlock,info,come_value_357->var,(_Bool)0);
            free_right_value_objects(info,(_Bool)0);
            if(            info->block_level==1) {
                info->inhibits_output_code=(_Bool)1;
                if(                info->match_it_var) {
                    for(                    o2_saved_363=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_366=((struct sVar*)list$1voidphp_begin((o2_saved_363)));                    !list$1voidphp_end((o2_saved_363));                    it_366=((struct sVar*)list$1voidphp_next((o2_saved_363)))                    ){
                        free_object(it_366->mType,it_366->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    }
                    come_call_finalizer3(o2_saved_363,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    __dec_obj80=info->match_it_var;
                    __if_result__0_362=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                    come_call_finalizer3(__dec_obj80,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(__if_result__0_362,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
                free_objects(info->gv_table,((void*)0),info);
                add_come_code(info,((char*)(__right_value300=xsprintf("come_heap_final();\n"))));
                __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(            !info->come_fun->mNoResultType) {
                add_come_code(info,"gComeFunResultObject = (void*)0;\n");
            }
            add_come_code(info,"return __result%d__;\n",num_result_stack_361);
            var_name_360 = come_decrement_ref_count2(var_name_360, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_318,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_354,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_357,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_type_358,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_fun_369=info->come_fun;
        add_last_code_to_source(info);
        free_objects_on_return(come_fun_369->mBlock,info,((void*)0),(_Bool)0);
        free_right_value_objects(info,(_Bool)0);
        if(        info->block_level==1) {
            info->inhibits_output_code=(_Bool)1;
            if(            info->match_it_var) {
                for(                o2_saved_371=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_372=((struct sVar*)list$1voidphp_begin((o2_saved_371)));                !list$1voidphp_end((o2_saved_371));                it_372=((struct sVar*)list$1voidphp_next((o2_saved_371)))                ){
                    free_object(it_372->mType,it_372->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                }
                come_call_finalizer3(o2_saved_371,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj85=info->match_it_var;
                __if_result__1_370=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
                come_call_finalizer3(__dec_obj85,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(__if_result__1_370,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value301=xsprintf("come_heap_final();\n"))));
            __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        add_come_code(info,"return;\n");
    }
    info->last_statment_is_return=(_Bool)1;
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sReturnNode_finalize(struct sReturnNode* self){
char* __dec_obj34;
struct sNode* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj34=self->sname;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj35=self->value;
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        if(        self->value_source==gComeFunResultObject) {
            __dec_obj36=self->value_source;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->value_source = come_decrement_ref_count2(self->value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result232__;
void* __right_value255 = (void*)0;
struct sType* result_336;
void* __right_value256 = (void*)0;
struct sType* __dec_obj54;
void* __right_value257 = (void*)0;
struct sType* __dec_obj55;
void* __right_value258 = (void*)0;
struct sType* __dec_obj56;
void* __right_value265 = (void*)0;
struct list$1voidph* __dec_obj60;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value274 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value282 = (void*)0;
struct sType* __dec_obj70;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value284 = (void*)0;
struct sType* __dec_obj72;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value286 = (void*)0;
char* __dec_obj74;
void* __right_value287 = (void*)0;
char* __dec_obj75;
void* __right_value288 = (void*)0;
char* __dec_obj76;
void* __right_value289 = (void*)0;
char* __dec_obj77;
struct sType* __result246__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_336=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_336->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=result_336->mNoSolvedGenericsType;
        result_336->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_336->mOriginalLoadVarType;
        result_336->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj56=result_336->mAnyOriginalType;
        result_336->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_336->mGenericsTypes;
        result_336->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_336->mArrayNum;
        result_336->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_336->mParamTypes;
        result_336->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_336->mParamNames;
        result_336->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_336->mResultType;
        result_336->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_336->mAlignas;
        result_336->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_336->mChannelType;
        result_336->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_336->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_336->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_336->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_336->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_336->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_336->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_336->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_336->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_336->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_336->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_336->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_336->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_336->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_336->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_336->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_336->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_336->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_336->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_336->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_336->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_336->mSizeNum;
        result_336->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_336->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_336->mOriginalTypeName;
        result_336->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_336->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_336->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_336->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_336->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_336->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_336->mAsmName;
        result_336->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_336->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_336->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_336->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_336->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_336->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_336->mTupleName;
        result_336->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj77=result_336->mAttribute;
        result_336->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_336->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_336->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_336->mDynamic=self->mDynamic;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_336;
    come_call_finalizer3(result_336,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
struct list$1voidph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1voidph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj38=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj47=self->mAlignas;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj48=self->mChannelType;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj49=self->mSizeNum;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj50=self->mOriginalTypeName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj51=self->mAsmName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj52=self->mTupleName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj53=self->mAttribute;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_319;
struct list_item$1voidph* prev_it_320;
    it_319=self->head;
    while(it_319!=((void*)0)) {
        prev_it_320=it_319;
        it_319=it_319->next;
        come_call_finalizer3(prev_it_320,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_321;
struct list_item$1voidph* prev_it_322;
    it_321=self->head;
    while(it_321!=((void*)0)) {
        prev_it_322=it_321;
        it_321=it_321->next;
        come_call_finalizer3(prev_it_322,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_323;
struct list_item$1sNodeph* prev_it_324;
    it_323=self->head;
    while(it_323!=((void*)0)) {
        prev_it_324=it_323;
        it_323=it_323->next;
        come_call_finalizer3(prev_it_324,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_325;
struct list_item$1sNodeph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        come_call_finalizer3(prev_it_326,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_327;
struct list_item$1charph* prev_it_328;
    it_327=self->head;
    while(it_327!=((void*)0)) {
        prev_it_328=it_327;
        it_327=it_327->next;
        come_call_finalizer3(prev_it_328,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_329;
    result_329=0;
    result_329+=int_get_hash_key(((int)self->mClass));
    result_329+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_329+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_329+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_329+=int_get_hash_key(((int)self->mAnyClass));
    result_329+=int_get_hash_key(((int)self->mGenericsTypes));
    result_329+=int_get_hash_key(((int)self->mArrayNum));
    result_329+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_329+=int_get_hash_key(((int)self->mParamTypes));
    result_329+=int_get_hash_key(((int)self->mParamNames));
    result_329+=int_get_hash_key(((int)self->mResultType));
    result_329+=int_get_hash_key(((int)self->mVarArgs));
    result_329+=int_get_hash_key(((int)self->mAlignas));
    result_329+=int_get_hash_key(((int)self->mChannelType));
    result_329+=int_get_hash_key(((int)self->mUnsigned));
    result_329+=int_get_hash_key(((int)self->mShort));
    result_329+=int_get_hash_key(((int)self->mLong));
    result_329+=int_get_hash_key(((int)self->mLongLong));
    result_329+=int_get_hash_key(((int)self->mConstant));
    result_329+=int_get_hash_key(((int)self->mAtomic));
    result_329+=int_get_hash_key(((int)self->mRegister));
    result_329+=int_get_hash_key(((int)self->mVolatile));
    result_329+=int_get_hash_key(((int)self->mStatic));
    result_329+=int_get_hash_key(((int)self->mUniq));
    result_329+=int_get_hash_key(((int)self->mRecord));
    result_329+=int_get_hash_key(((int)self->mExtern));
    result_329+=int_get_hash_key(((int)self->mRestrict));
    result_329+=int_get_hash_key(((int)self->mImmutable));
    result_329+=int_get_hash_key(((int)self->mHeap));
    result_329+=int_get_hash_key(((int)self->mChannel));
    result_329+=int_get_hash_key(((int)self->mNoHeap));
    result_329+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_329+=int_get_hash_key(((int)self->mException));
    result_329+=int_get_hash_key(((int)self->mPointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_329+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_329+=int_get_hash_key(((int)self->mSizeNum));
    result_329+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_329+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_329+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_329+=int_get_hash_key(((int)self->mFunctionParam));
    result_329+=int_get_hash_key(((int)self->mAllocaValue));
    result_329+=int_get_hash_key(((int)self->mInline));
    result_329+=int_get_hash_key(((int)self->mNullValue));
    result_329+=int_get_hash_key(((int)self->mGuardValue));
    result_329+=int_get_hash_key(((int)self->mAsmName));
    result_329+=int_get_hash_key(((int)self->mArrayPointerType));
    result_329+=int_get_hash_key(((int)self->mLambdaArray));
    result_329+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_329+=int_get_hash_key(((int)self->mTypedef));
    result_329+=int_get_hash_key(((int)self->mMultipleTypes));
    result_329+=int_get_hash_key(((int)self->mOriginIsArray));
    result_329+=int_get_hash_key(((int)self->mTupleName));
    result_329+=int_get_hash_key(((int)self->mAttribute));
    result_329+=int_get_hash_key(((int)self->mGenerate));
    result_329+=int_get_hash_key(((int)self->mCreateVTable));
    result_329+=int_get_hash_key(((int)self->mDynamic));
    return result_329;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
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
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
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
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
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
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
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

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_330;
struct list_item$1voidph* it2_331;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_330=left->head;
    it2_331=right->head;
    while(it_330!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_330->item, it2_331->item)) {
            return (_Bool)0;
        }
        it_330=it_330->next;
        it2_331=it2_331->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_332;
struct list_item$1sNodeph* it2_333;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_332=left->head;
    it2_333=right->head;
    while(it_332!=((void*)0)) {
        if(        !sNode_equals(it_332->item,it2_333->item)) {
            return (_Bool)0;
        }
        it_332=it_332->next;
        it2_333=it2_333->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_334;
struct list_item$1charph* it2_335;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_334=left->head;
    it2_335=right->head;
    while(it_334!=((void*)0)) {
        if(        !string_equals(it_334->item,it2_335->item)) {
            return (_Bool)0;
        }
        it_334=it_334->next;
        it2_335=it2_335->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result233__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1voidph* result_338;
struct list_item$1voidph* it_339;
void* __right_value264 = (void*)0;
struct list$1voidph* __result236__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_338=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_339=self->head;
    while(it_339!=((void*)0)) {
        list$1voidphp_add(result_338,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_339->item)));
        it_339=it_339->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_337;
    result_337=0;
    result_337+=int_get_hash_key(((int)self->head));
    result_337+=int_get_hash_key(((int)self->tail));
    result_337+=int_get_hash_key(((int)self->len));
    result_337+=int_get_hash_key(((int)self->it));
    return result_337;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj57;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj58;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_342;
void* __dec_obj59;
struct list$1voidph* __result235__;
    if(    self->len==0) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=((void*)0);
        litem_340->next=((void*)0);
        __dec_obj57=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head=litem_340;
    }
    else if(    self->len==1) {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->head;
        litem_341->next=((void*)0);
        __dec_obj58=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_341;
        self->head->next=litem_341;
    }
    else {
        litem_342=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=self->tail;
        litem_342->next=((void*)0);
        __dec_obj59=litem_342->item;
        litem_342->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_342;
        self->tail=litem_342;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_343;
struct list_item$1sNodeph* it_344;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result242__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_343=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_344=self->head;
    while(it_344!=((void*)0)) {
        list$1sNodephp_add(result_343,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_344->item)));
        it_344=it_344->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_343;
    come_call_finalizer3(result_343,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj61;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj62;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result239__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj61=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj62=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj63=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_347;
        self->tail=litem_347;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result240__;
void* __right_value271 = (void*)0;
struct sNode* result_348;
struct sNode* __result241__;
    if(    self==(void*)0) {
        __result240__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_348=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_348->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_348->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_348->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_348->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_348->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_348->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_348->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_348->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_348->kind=self->kind;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_348;
    if(result_348) { result_348 = come_decrement_ref_count2(result_348, ((struct sNode*)result_348)->finalize, ((struct sNode*)result_348)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result243__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_349;
struct list_item$1charph* it_350;
void* __right_value280 = (void*)0;
struct list$1charph* __result245__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_349=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_350=self->head;
    while(it_350!=((void*)0)) {
        list$1charphp_add(result_349,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_350->item)));
        it_350=it_350->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_349;
    come_call_finalizer3(result_349,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj66;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj67;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_353;
char* __dec_obj68;
struct list$1charph* __result244__;
    if(    self->len==0) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=((void*)0);
        litem_351->next=((void*)0);
        __dec_obj66=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head=litem_351;
    }
    else if(    self->len==1) {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->head;
        litem_352->next=((void*)0);
        __dec_obj67=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_352;
        self->head->next=litem_352;
    }
    else {
        litem_353=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=self->tail;
        litem_353->next=((void*)0);
        __dec_obj68=litem_353->item;
        litem_353->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_353;
        self->tail=litem_353;
    }
    self->len++;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_364;
void* __result248__;
void* __result249__;
void* result_365;
void* __result250__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_364,0,sizeof(void*));
        __result248__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    self->it=self->head;
    if(    self->it) {
        __result249__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    memset(&result_365,0,sizeof(void*));
    __result250__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_367;
void* __result251__;
void* __result252__;
void* result_368;
void* __result253__;
result_367 = (void*)0;
result_368 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_367,0,sizeof(void*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_367;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_368,0,sizeof(void*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_368;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj81;
struct sType* __dec_obj82;
char* __dec_obj83;
char* __dec_obj84;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj81=self->c_value;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj82=self->type;
            come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj83=self->c_value_without_right_value_objects;
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj84=self->c_value_without_cast_object_value;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOutputNode* sOutputNode_initialize(struct sOutputNode* self, char* contents, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __dec_obj86;
struct sOutputNode* __result254__;
    ((struct sNodeBase*)(__right_value302=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value302,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=self->contents;
    self->contents=(char*)come_increment_ref_count(contents);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    contents = come_decrement_ref_count2(contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

char* sOutputNode_kind(struct sOutputNode* self){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
char* __result255__;
    __result255__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value303=__builtin_string("sOutputNode")));
    __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

_Bool sOutputNode_compile(struct sOutputNode* self, struct sInfo* info){
    add_come_last_code(info,"%s",self->contents);
    return (_Bool)1;
}

static void sOutputNode_finalize(struct sOutputNode* self){
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj87=self->sname;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        if(        self->contents==gComeFunResultObject) {
            __dec_obj88=self->contents;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->contents = come_decrement_ref_count2(self->contents, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sInlineAssembler* sInlineAssembler_initialize(struct sInlineAssembler* self, char* source, struct list$1sNodeph* exps, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj89;
struct list$1sNodeph* __dec_obj90;
struct sInlineAssembler* __result256__;
    ((struct sNodeBase*)(__right_value304=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value304,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=self->source;
    self->source=(char*)come_increment_ref_count(source);
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj90=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(exps);
    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    source = come_decrement_ref_count2(source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* sInlineAssembler_kind(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
char* __result257__;
    __result257__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value305=__builtin_string("sInlineAssembler")));
    __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

_Bool sInlineAssembler_compile(struct sInlineAssembler* self, struct sInfo* info){
char* source_373;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_374;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct buffer* buf_375;
char* p_376;
_Bool dquort_377;
int num_exp_378;
void* __right_value310 = (void*)0;
struct sNode* node_379;
_Bool Value_383;
_Bool __result260__;
void* __right_value311 = (void*)0;
struct CVALUE* come_value_384;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* __dec_obj94;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj95;
_Bool __result262__;
    source_373=(char*)come_increment_ref_count(self->source);
    come_value_374=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 192, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_375=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 194, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    p_376=source_373;
    while(*p_376!=40) {
        buffer_append_char(buf_375,*p_376);
        p_376++;
    }
    if(    *p_376==40) {
        buffer_append_char(buf_375,*p_376);
        p_376++;
        while(*p_376==32||*p_376==9||*p_376==10) {
            buffer_append_char(buf_375,*p_376);
            p_376++;
        }
    }
    dquort_377=(_Bool)0;
    num_exp_378=0;
    while(*p_376) {
        if(        *p_376==34) {
            buffer_append_char(buf_375,*p_376);
            p_376++;
            dquort_377=!dquort_377;
        }
        else if(        dquort_377) {
            buffer_append_char(buf_375,*p_376);
            p_376++;
        }
        else if(        *p_376==40) {
            buffer_append_char(buf_375,*p_376);
            p_376++;
            node_379=(struct sNode*)come_increment_ref_count(list$1sNodephp_operator_load_element(self->exps,num_exp_378++));
            Value_383=node_compile(node_379,info);
            if(            !Value_383) {
                __result260__ = (_Bool)0;
                if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                source_373 = come_decrement_ref_count2(source_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_375,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result260__;
            }
            else {
            }
            come_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_375,come_value_384->c_value);
            if(            *p_376==41) {
                buffer_append_char(buf_375,*p_376);
                p_376++;
            }
            if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_char(buf_375,*p_376);
            p_376++;
        }
    }
    __dec_obj94=come_value_374->c_value;
    come_value_374->c_value=(char*)come_increment_ref_count(charp_operator_add("__asm ",((char*)(__right_value312=buffer_to_string(buf_375)))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj95=come_value_374->type;
    come_value_374->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 252, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_374->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_374));
    add_come_last_code(info,"%s",come_value_374->c_value);
    __result262__ = (_Bool)1;
    source_373 = come_decrement_ref_count2(source_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_374,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_375,buffer_finalize, 0, 0, 0, 0, (void*)0);
    return __result262__;
}

static void sInlineAssembler_finalize(struct sInlineAssembler* self){
char* __dec_obj91;
char* __dec_obj92;
struct list$1sNodeph* __dec_obj93;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj91=self->sname;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        if(        self->source==gComeFunResultObject) {
            __dec_obj92=self->source;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->source = come_decrement_ref_count2(self->source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj93=self->exps;
            come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_380;
int i_381;
struct sNode* __result258__;
struct sNode* default_value_382;
struct sNode* __result259__;
default_value_382 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_380=self->head;
    i_381=0;
    while(it_380!=((void*)0)) {
        if(        position==i_381) {
            __result258__ = gComeFunResultObject = __result_obj__ = it_380->item;
            gComeFunResultObject = (void*)0;
            return __result258__;
        }
        it_380=it_380->next;
        i_381++;
    }
    memset(&default_value_382,0,sizeof(struct sNode*));
    __result259__ = gComeFunResultObject = __result_obj__ = default_value_382;
    if(default_value_382) { default_value_382 = come_decrement_ref_count2(default_value_382, ((struct sNode*)default_value_382)->finalize, ((struct sNode*)default_value_382)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
struct list_item$1CVALUEph* litem_385;
struct CVALUE* __dec_obj96;
void* __right_value317 = (void*)0;
struct list_item$1CVALUEph* litem_386;
struct CVALUE* __dec_obj97;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_387;
struct CVALUE* __dec_obj98;
struct list$1CVALUEph* __result261__;
    if(    self->len==0) {
        litem_385=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value316=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=((void*)0);
        litem_385->next=((void*)0);
        __dec_obj96=litem_385->item;
        litem_385->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_385;
        self->head=litem_385;
    }
    else if(    self->len==1) {
        litem_386=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value317=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=self->head;
        litem_386->next=((void*)0);
        __dec_obj97=litem_386->item;
        litem_386->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_386;
        self->head->next=litem_386;
    }
    else {
        litem_387=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_387->prev=self->tail;
        litem_387->next=((void*)0);
        __dec_obj98=litem_387->item;
        litem_387->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_387;
        self->tail=litem_387;
    }
    self->len++;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct sCurrentNode2* sCurrentNode2_initialize(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
struct sCurrentNode2* __result263__;
    ((struct sNodeBase*)(__right_value319=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value319,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

int sCurrentNode2_sline(struct sCurrentNode2* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode2_sname(struct sCurrentNode2* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
char* __result264__;
    __result264__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value320=__builtin_string(self->sname)));
    __right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

char* sCurrentNode2_kind(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
char* __result265__;
    __result265__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value321=__builtin_string("sCurrentNode")));
    __right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

_Bool sCurrentNode2_compile(struct sCurrentNode2* self, struct sInfo* info){
void* __right_value322 = (void*)0;
char* class_name_388;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sClass* current_stack_389;
struct sVarTable* vtable_392;
struct map$2voidphvoidph* o2_saved_393;
char* it_396;
char* key_399;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sVar* value_400;
void* __right_value332 = (void*)0;
struct sType* type2_404;
void* __right_value333 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct tuple2$2charphsTypeph* item_405;
void* __right_value339 = (void*)0;
struct sType* type3_408;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2charphsTypeph* item2_411;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct map$2voidphvoidph* o2_saved_459;
char* it_460;
char* key_461;
void* __right_value356 = (void*)0;
struct sVar* value_462;
void* __right_value357 = (void*)0;
struct sType* type2_463;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2charphsTypeph* item_464;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_465;
void* __right_value362 = (void*)0;
char* __dec_obj119;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* __dec_obj120;
_Bool __result299__;
    info->current_stack_num++;
    class_name_388=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_389=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 438, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals)),class_name_388,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_392=info->lv_table;
    while(vtable_392) {
        for(        o2_saved_393=(struct map$2voidphvoidph*)come_increment_ref_count((vtable_392->mVars)),it_396=((char*)map$2voidphvoidphp_begin((o2_saved_393)));        !map$2voidphvoidphp_end((o2_saved_393));        it_396=((char*)map$2voidphvoidphp_next((o2_saved_393)))        ){
            key_399=it_396;
            value_400=((struct sVar*)((void*)(__right_value331=map$2voidphvoidphp_operator_load_element(vtable_392->mVars,((char*)(__right_value330=__builtin_string(key_399)))))));
            __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value331,(void*)0, 0, 1, 0, 0, (void*)0);
            type2_404=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_400->mType));
            type2_404->mPointerNum++;
            item_405=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 451, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string(value_400->mCValueName)),(struct sType*)come_increment_ref_count(type2_404)));
            if(            value_400->mCValueName!=((void*)0)) {
                if(                strcmp(value_400->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_400->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_400->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_400->mType->mClass->mName,"va_list")||string_operator_equals(value_400->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodephp_length(type2_404->mArrayNum)==1) {
                    type3_408=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_404));
                    list$1sNodephp_reset(type3_408->mArrayNum);
                    type3_408->mPointerNum=1;
                    type3_408->mOriginIsArray=(_Bool)1;
                    item2_411=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 471, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(__builtin_string(value_400->mCValueName)),(struct sType*)come_increment_ref_count(type3_408)));
                    list$1voidphp_push_back(current_stack_389->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item2_411)));
                    value_400->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_411,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1voidphp_push_back(current_stack_389->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item_405)));
                }
            }
            come_call_finalizer3(type2_404,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_405,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_393,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_392=vtable_392->mParent;
    }
    output_struct(current_stack_389,info);
    map$2voidphvoidphp_insert(info->classes,(char*)come_increment_ref_count(class_name_388),(struct sClass*)come_increment_ref_count(current_stack_389));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_388,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_388);
    vtable_392=info->lv_table;
    while(vtable_392) {
        for(        o2_saved_459=(struct map$2voidphvoidph*)come_increment_ref_count((vtable_392->mVars)),it_460=((char*)map$2voidphvoidphp_begin((o2_saved_459)));        !map$2voidphvoidphp_end((o2_saved_459));        it_460=((char*)map$2voidphvoidphp_next((o2_saved_459)))        ){
            key_461=it_460;
            value_462=((struct sVar*)((void*)(__right_value356=map$2voidphvoidphp_operator_load_element(vtable_392->mVars,key_461))));
            come_call_finalizer3(__right_value356,(void*)0, 0, 1, 0, 0, (void*)0);
            type2_463=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_462->mType));
            item_464=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 500, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone, tuple2$2charphsTypeph_get_hash_key, tuple2$2charphsTypeph_equals)),(char*)come_increment_ref_count(value_462->mCValueName),(struct sType*)come_increment_ref_count(type2_463)));
            if(            value_462->mCValueName!=((void*)0)) {
                if(                strcmp(value_462->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_462->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_462->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_462->mType->mClass->mName,"va_list")||string_operator_equals(value_462->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_463->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_462->mCValueName,value_462->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_462->mCValueName,value_462->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_463,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_464,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_459,map$2voidphvoidphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_392=vtable_392->mParent;
    }
    come_value_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 529, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj119=come_value_465->c_value;
    come_value_465->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj120=come_value_465->type;
    come_value_465->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 532, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),class_name_388,(_Bool)0,info));
    come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_465->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_465->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_465));
    __result299__ = (_Bool)1;
    class_name_388 = come_decrement_ref_count2(class_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_389,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

static void sCurrentNode2_finalize(struct sCurrentNode2* self){
char* __dec_obj99;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj99=self->sname;
            __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj100;
struct list$1voidph* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj100=self->mName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj101=self->mFields;
            come_call_finalizer3(__dec_obj101,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj102=self->mParentClassName;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj103=self->mAttribute;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result266__;
void* __right_value323 = (void*)0;
struct sClass* result_391;
void* __right_value324 = (void*)0;
char* __dec_obj104;
void* __right_value325 = (void*)0;
struct list$1voidph* __dec_obj105;
void* __right_value326 = (void*)0;
char* __dec_obj106;
void* __right_value327 = (void*)0;
char* __dec_obj107;
struct sClass* __result267__;
    if(    self==(void*)0) {
        __result266__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_391=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass", sClass_finalize, sClass_clone, sClass_get_hash_key, sClass_equals));
    if(    self!=((void*)0)) {
        result_391->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_391->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_391->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_391->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_391->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_391->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_391->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_391->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj104=result_391->mName;
        result_391->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_391->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_391->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj105=result_391->mFields;
        result_391->mFields=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mFields));
        come_call_finalizer3(__dec_obj105,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj106=result_391->mParentClassName;
        result_391->mParentClassName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mParentClassName));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj107=result_391->mAttribute;
        result_391->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_391->mDynamic=self->mDynamic;
    }
    __result267__ = gComeFunResultObject = __result_obj__ = result_391;
    come_call_finalizer3(result_391,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static unsigned int sClass_get_hash_key(struct sClass* self){
unsigned int result_390;
    result_390=0;
    result_390+=int_get_hash_key(((int)self->mStruct));
    result_390+=int_get_hash_key(((int)self->mFloat));
    result_390+=int_get_hash_key(((int)self->mUnion));
    result_390+=int_get_hash_key(((int)self->mGenerics));
    result_390+=int_get_hash_key(((int)self->mMethodGenerics));
    result_390+=int_get_hash_key(((int)self->mEnum));
    result_390+=int_get_hash_key(((int)self->mProtocol));
    result_390+=int_get_hash_key(((int)self->mNumber));
    result_390+=int_get_hash_key(((int)self->mName));
    result_390+=int_get_hash_key(((int)self->mGenericsNum));
    result_390+=int_get_hash_key(((int)self->mMethodGenericsNum));
    result_390+=int_get_hash_key(((int)self->mFields));
    result_390+=int_get_hash_key(((int)self->mParentClassName));
    result_390+=int_get_hash_key(((int)self->mAttribute));
    result_390+=int_get_hash_key(((int)self->mDynamic));
    return result_390;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_394;
void* __result268__;
void* __result269__;
void* result_395;
void* __result270__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_394,0,sizeof(void*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_395,0,sizeof(void*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_397;
void* __result271__;
void* __result272__;
void* result_398;
void* __result273__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_397,0,sizeof(void*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_398,0,sizeof(void*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void* map$2voidphvoidphp_operator_load_element(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
void* default_value_401;
unsigned int hash_402;
unsigned int it_403;
void* __result274__;
void* __result275__;
void* __result276__;
void* __result277__;
default_value_401 = (void*)0;
    memset(&default_value_401,0,sizeof(void*));
    hash_402=come_call_get_hash_key((void*)0, ((void*)((char*)key)))%self->size;
    it_403=hash_402;
    while((_Bool)1) {
        if(        self->item_existance[it_403]) {
            if(            come_call_equals((void*)0, self->keys[it_403], ((char*)key))) {
                __result274__ = gComeFunResultObject = __result_obj__ = self->items[it_403];
                come_call_finalizer3(default_value_401, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
            it_403++;
            if(            it_403>=self->size) {
                it_403=0;
            }
            else if(            it_403==hash_402) {
                __result275__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_401);
                come_call_finalizer3(default_value_401, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
        }
        else {
            __result276__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_401);
            come_call_finalizer3(default_value_401, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)default_value_401);
    come_call_finalizer3(default_value_401, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj108;
struct sType* __dec_obj109;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj108=self->v1;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj109=self->v2;
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result278__;
void* __right_value334 = (void*)0;
struct tuple2$2charphsTypeph* result_406;
void* __right_value335 = (void*)0;
char* __dec_obj110;
void* __right_value336 = (void*)0;
struct sType* __dec_obj111;
struct tuple2$2charphsTypeph* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_406=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj110=result_406->v1;
        result_406->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj111=result_406->v2;
        result_406->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_406;
    come_call_finalizer3(result_406,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static unsigned int tuple2$2charphsTypeph_get_hash_key(struct tuple2$2charphsTypeph* self){
unsigned int result_407;
    result_407=0;
    result_407+=int_get_hash_key(((int)self->v1));
    result_407+=int_get_hash_key(((int)self->v2));
    return result_407;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* left, struct tuple2$2charphsTypeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj112;
struct sType* __dec_obj113;
struct tuple2$2charphsTypeph* __result280__;
    __dec_obj112=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj113=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj114;
struct sType* __dec_obj115;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj114=self->v1;
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj115=self->v2;
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_409;
struct list_item$1sNodeph* prev_it_410;
struct list$1sNodeph* __result281__;
    it_409=self->head;
    while(it_409!=((void*)0)) {
        prev_it_410=it_409;
        it_409=it_409->next;
        come_call_finalizer3(prev_it_410,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
struct list_item$1voidph* litem_412;
void* __dec_obj116;
void* __right_value344 = (void*)0;
struct list_item$1voidph* litem_413;
void* __dec_obj117;
void* __right_value345 = (void*)0;
struct list_item$1voidph* litem_414;
void* __dec_obj118;
struct list$1voidph* __result282__;
    if(    self->len==0) {
        litem_412=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value343=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_412->prev=((void*)0);
        litem_412->next=((void*)0);
        __dec_obj116=litem_412->item;
        litem_412->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_412;
        self->head=litem_412;
    }
    else if(    self->len==1) {
        litem_413=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value344=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=self->head;
        litem_413->next=((void*)0);
        __dec_obj117=litem_413->item;
        litem_413->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_413;
        self->head->next=litem_413;
    }
    else {
        litem_414=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value345=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->tail;
        litem_414->next=((void*)0);
        __dec_obj118=litem_414->item;
        litem_414->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj118,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_414;
        self->tail=litem_414;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_415;
int i_416;
    for(    i_415=0;    i_415<self->size;    i_415++    ){
        if(        self->item_existance[i_415]) {
            if(            1) {
                come_call_finalizer3(self->items[i_415], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_416=0;    i_416<self->size;    i_416++    ){
        if(        self->item_existance[i_416]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_416], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_417;
struct list_item$1voidp* prev_it_418;
    it_417=self->head;
    while(it_417!=((void*)0)) {
        prev_it_418=it_417;
        it_417=it_417->next;
        come_call_finalizer3(prev_it_418,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static struct map$2voidphvoidph* map$2voidphvoidphp_insert(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_432;
unsigned int it_433;
_Bool same_key_exist_450;
char* it2_453;
struct map$2voidphvoidph* __result298__;
    if(    self->len*10>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_432=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_433=hash_432;
    while((_Bool)1) {
        if(        self->item_existance[it_433]) {
            if(            come_call_equals((void*)0, self->keys[it_433], key)) {
                if(                1) {
                    list$1voidpp_remove(self->key_list,self->keys[it_433]);
                    come_call_finalizer3(self->keys[it_433], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->keys[it_433]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_433]);
                    self->keys[it_433]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_433], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_433]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_433]=item;
                }
                break;
            }
            it_433++;
            if(            it_433>=self->size) {
                it_433=0;
            }
            else if(            it_433==hash_432) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_433]=(_Bool)1;
            if(            1) {
                self->keys[it_433]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_433]=key;
            }
            if(            1) {
                self->items[it_433]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_433]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_450=(_Bool)0;
    for(    it2_453=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_453=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_453, key)) {
            same_key_exist_450=(_Bool)1;
        }
    }
    if(    !same_key_exist_450) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_419;
void* __right_value348 = (void*)0;
void** keys_420;
void* __right_value349 = (void*)0;
void** items_421;
void* __right_value350 = (void*)0;
_Bool* item_existance_422;
int len_423;
void* it_424;
void* default_value_425;
void* __right_value351 = (void*)0;
void* it2_426;
unsigned int hash_429;
int n_430;
void* default_value_431;
void* __right_value352 = (void*)0;
default_value_425 = (void*)0;
default_value_431 = (void*)0;
    size_419=self->size*10;
    keys_420=(void**)come_increment_ref_count(((void**)(__right_value348=(void**)come_calloc(1, sizeof(void*)*(1*(size_419)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_421=(void**)come_increment_ref_count(((void**)(__right_value349=(void**)come_calloc(1, sizeof(void*)*(1*(size_419)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_422=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value350=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_419)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_423=0;
    for(    it_424=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_424=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_425,0,sizeof(void*));
        it2_426=((void*)(__right_value351=map$2voidphvoidphp_at(self,it_424,default_value_425)));
        come_call_finalizer3(__right_value351,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_429=come_call_get_hash_key((void*)0, ((void*)it_424))%size_419;
        n_430=hash_429;
        while((_Bool)1) {
            if(            item_existance_422[n_430]) {
                n_430++;
                if(                n_430>=size_419) {
                    n_430=0;
                }
                else if(                n_430==hash_429) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_422[n_430]=(_Bool)1;
                keys_420[n_430]=it_424;
                items_421[n_430]=((void*)(__right_value352=map$2voidphvoidphp_at(self,it_424,default_value_431)));
                come_call_finalizer3(__right_value352,(void*)0, 0, 1, 0, 0, (void*)0);
                len_423++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_420;
    self->items=items_421;
    self->item_existance=item_existance_422;
    self->size=size_419;
    self->len=len_423;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_427;
unsigned int it_428;
void* __result283__;
void* __result284__;
void* __result285__;
void* __result286__;
    hash_427=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_428=hash_427;
    while((_Bool)1) {
        if(        self->item_existance[it_428]) {
            if(            come_call_equals((void*)0, self->keys[it_428], key)) {
                __result283__ = gComeFunResultObject = __result_obj__ = self->items[it_428];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
            it_428++;
            if(            it_428>=self->size) {
                it_428=0;
            }
            else if(            it_428==hash_427) {
                __result284__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result284__;
            }
        }
        else {
            __result285__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
    }
    __result286__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_434;
struct list_item$1voidp* it_435;
struct list$1voidp* __result290__;
    it2_434=0;
    it_435=self->head;
    while(it_435!=((void*)0)) {
        if(        come_call_equals((void*)0, it_435->item, item)) {
            list$1voidpp_delete(self,it2_434,it2_434+1);
            break;
        }
        it2_434++;
        it_435=it_435->next;
    }
    __result290__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_436;
struct list$1voidp* __result287__;
struct list_item$1voidp* it_439;
int i_440;
struct list_item$1voidp* prev_it_441;
struct list_item$1voidp* it_442;
int i_443;
struct list_item$1voidp* prev_it_444;
struct list_item$1voidp* it_445;
struct list_item$1voidp* head_prev_it_446;
struct list_item$1voidp* tail_it_447;
int i_448;
struct list_item$1voidp* prev_it_449;
struct list$1voidp* __result289__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_436=tail;
        tail=head;
        head=tmp_436;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result287__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result287__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_439=self->head;
        i_440=0;
        while(it_439!=((void*)0)) {
            if(            i_440<tail) {
                prev_it_441=it_439;
                it_439=it_439->next;
                i_440++;
                come_call_finalizer3(prev_it_441,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_440==tail) {
                self->head=it_439;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_439=it_439->next;
                i_440++;
            }
        }
    }
    else if(    tail==self->len) {
        it_442=self->head;
        i_443=0;
        while(it_442!=((void*)0)) {
            if(            i_443==head) {
                self->tail=it_442->prev;
                self->tail->next=((void*)0);
            }
            if(            i_443>=head) {
                prev_it_444=it_442;
                it_442=it_442->next;
                i_443++;
                come_call_finalizer3(prev_it_444,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_442=it_442->next;
                i_443++;
            }
        }
    }
    else {
        it_445=self->head;
        head_prev_it_446=((void*)0);
        tail_it_447=((void*)0);
        i_448=0;
        while(it_445!=((void*)0)) {
            if(            i_448==head) {
                head_prev_it_446=it_445->prev;
            }
            if(            i_448==tail) {
                tail_it_447=it_445;
            }
            if(            i_448>=head&&i_448<tail) {
                prev_it_449=it_445;
                it_445=it_445->next;
                i_448++;
                come_call_finalizer3(prev_it_449,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_445=it_445->next;
                i_448++;
            }
        }
        if(        head_prev_it_446!=((void*)0)) {
            head_prev_it_446->next=tail_it_447;
        }
        if(        tail_it_447!=((void*)0)) {
            tail_it_447->prev=head_prev_it_446;
        }
    }
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_437;
struct list_item$1voidp* prev_it_438;
struct list$1voidp* __result288__;
    it_437=self->head;
    while(it_437!=((void*)0)) {
        prev_it_438=it_437;
        it_437=it_437->next;
        come_call_finalizer3(prev_it_438,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_451;
void* __result291__;
void* __result292__;
void* result_452;
void* __result293__;
result_451 = (void*)0;
result_452 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_451,0,sizeof(void*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_451;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->head;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_452,0,sizeof(void*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_452;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_454;
void* __result294__;
void* __result295__;
void* result_455;
void* __result296__;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_454,0,sizeof(void*));
        __result294__ = gComeFunResultObject = __result_obj__ = result_454;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result295__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    memset(&result_455,0,sizeof(void*));
    __result296__ = gComeFunResultObject = __result_obj__ = result_455;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
struct list_item$1voidp* litem_456;
void* __right_value354 = (void*)0;
struct list_item$1voidp* litem_457;
void* __right_value355 = (void*)0;
struct list_item$1voidp* litem_458;
struct list$1voidp* __result297__;
    if(    self->len==0) {
        litem_456=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value353=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_456->prev=((void*)0);
        litem_456->next=((void*)0);
        litem_456->item=item;
        self->tail=litem_456;
        self->head=litem_456;
    }
    else if(    self->len==1) {
        litem_457=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value354=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_457->prev=self->head;
        litem_457->next=((void*)0);
        litem_457->item=item;
        self->tail=litem_457;
        self->head->next=litem_457;
    }
    else {
        litem_458=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value355=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_458->prev=self->tail;
        litem_458->next=((void*)0);
        litem_458->item=item;
        self->tail->next=litem_458;
        self->tail=litem_458;
    }
    self->len++;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result297__;
}

struct sLineNode* sLineNode_initialize(struct sLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
struct sLineNode* __result300__;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value365,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

char* sLineNode_kind(struct sLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
char* __result301__;
    __result301__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value366=__builtin_string("sLineNode")));
    __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool sLineNode_compile(struct sLineNode* self, struct sInfo* info){
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct CVALUE* come_value_466;
void* __right_value369 = (void*)0;
char* __dec_obj122;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sType* __dec_obj123;
_Bool __result302__;
    come_value_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 282, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj122=come_value_466->c_value;
    come_value_466->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->sline));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=come_value_466->type;
    come_value_466->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 285, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_466->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_466));
    add_come_last_code(info,"%s",come_value_466->c_value);
    __result302__ = (_Bool)1;
    come_call_finalizer3(come_value_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result302__;
}

static void sLineNode_finalize(struct sLineNode* self){
char* __dec_obj121;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj121=self->sname;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sSNameNode* sSNameNode_initialize(struct sSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value372 = (void*)0;
struct sSNameNode* __result303__;
    ((struct sNodeBase*)(__right_value372=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value372,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sSNameNode_kind(struct sSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value373=__builtin_string("sSNameNode")));
    __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sSNameNode_compile(struct sSNameNode* self, struct sInfo* info){
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_467;
void* __right_value376 = (void*)0;
char* __dec_obj125;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct sType* __dec_obj126;
_Bool __result305__;
    come_value_467=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 310, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj125=come_value_467->c_value;
    come_value_467->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->sname));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj126=come_value_467->type;
    come_value_467->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 313, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_467->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_467));
    add_come_last_code(info,"%s",come_value_467->c_value);
    __result305__ = (_Bool)1;
    come_call_finalizer3(come_value_467,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

static void sSNameNode_finalize(struct sSNameNode* self){
char* __dec_obj124;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj124=self->sname;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFuncNode* sFuncNode_initialize(struct sFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
struct sFuncNode* __result306__;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value379,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sFuncNode_kind(struct sFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value380=__builtin_string("sFuncNode")));
    __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sFuncNode_compile(struct sFuncNode* self, struct sInfo* info){
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_468;
void* __right_value383 = (void*)0;
char* __dec_obj128;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct sType* __dec_obj129;
_Bool __result308__;
    come_value_468=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 338, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj128=come_value_468->c_value;
    come_value_468->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->come_fun->mName));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj129=come_value_468->type;
    come_value_468->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 341, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_468->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_468));
    add_come_last_code(info,"%s",come_value_468->c_value);
    __result308__ = (_Bool)1;
    come_call_finalizer3(come_value_468,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result308__;
}

static void sFuncNode_finalize(struct sFuncNode* self){
char* __dec_obj127;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj127=self->sname;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sWildCard* sWildCard_initialize(struct sWildCard* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value386 = (void*)0;
struct sWildCard* __result309__;
    ((struct sNodeBase*)(__right_value386=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value386,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sWildCard_kind(struct sWildCard* self){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value387=__builtin_string("sWildCard")));
    __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sWildCard_compile(struct sWildCard* self, struct sInfo* info){
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sNode* value_node_469;
_Bool Value_470;
_Bool __result311__;
_Bool __result312__;
    value_node_469=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value388=xsprintf("Value"))),info));
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    Value_470=node_compile(value_node_469,info);
    if(    !Value_470) {
        __result311__ = (_Bool)0;
        if(value_node_469) { value_node_469 = come_decrement_ref_count2(value_node_469, ((struct sNode*)value_node_469)->finalize, ((struct sNode*)value_node_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result311__;
    }
    else {
    }
    __result312__ = (_Bool)1;
    if(value_node_469) { value_node_469 = come_decrement_ref_count2(value_node_469, ((struct sNode*)value_node_469)->finalize, ((struct sNode*)value_node_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result312__;
}

static void sWildCard_finalize(struct sWildCard* self){
char* __dec_obj130;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj130=self->sname;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerFuncNode* sCallerFuncNode_initialize(struct sCallerFuncNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct sCallerFuncNode* __result313__;
    ((struct sNodeBase*)(__right_value390=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value390,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

char* sCallerFuncNode_kind(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value391=__builtin_string("sCallerFuncNode")));
    __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sCallerFuncNode_compile(struct sCallerFuncNode* self, struct sInfo* info){
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_471;
void* __right_value394 = (void*)0;
char* __dec_obj132;
void* __right_value395 = (void*)0;
char* __dec_obj133;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sType* __dec_obj134;
_Bool __result315__;
    come_value_471=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 390, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    info->caller_fun) {
        __dec_obj132=come_value_471->c_value;
        come_value_471->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_fun->mName));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj133=come_value_471->c_value;
        come_value_471->c_value=(char*)come_increment_ref_count(xsprintf("\"\""));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj134=come_value_471->type;
    come_value_471->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 398, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_471->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_471));
    add_come_last_code(info,"%s",come_value_471->c_value);
    __result315__ = (_Bool)1;
    come_call_finalizer3(come_value_471,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sCallerFuncNode_finalize(struct sCallerFuncNode* self){
char* __dec_obj131;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj131=self->sname;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerLineNode* sCallerLineNode_initialize(struct sCallerLineNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value398 = (void*)0;
struct sCallerLineNode* __result316__;
    ((struct sNodeBase*)(__right_value398=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value398,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sCallerLineNode_compile(struct sCallerLineNode* self, struct sInfo* info){
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value_472;
void* __right_value401 = (void*)0;
char* __dec_obj136;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* __dec_obj137;
_Bool __result317__;
    come_value_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 419, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj136=come_value_472->c_value;
    come_value_472->c_value=(char*)come_increment_ref_count(xsprintf("%d",info->caller_line));
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj137=come_value_472->type;
    come_value_472->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 422, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_472->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_472));
    add_come_last_code(info,"%s",come_value_472->c_value);
    __result317__ = (_Bool)1;
    come_call_finalizer3(come_value_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result317__;
}

char* sCallerLineNode_kind(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
void* __right_value404 = (void*)0;
char* __result318__;
    __result318__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value404=__builtin_string("sCallerLineNode")));
    __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void sCallerLineNode_finalize(struct sCallerLineNode* self){
char* __dec_obj135;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj135=self->sname;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sCallerSNameNode* sCallerSNameNode_initialize(struct sCallerSNameNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value405 = (void*)0;
struct sCallerSNameNode* __result319__;
    ((struct sNodeBase*)(__right_value405=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value405,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result319__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

_Bool sCallerSNameNode_compile(struct sCallerSNameNode* self, struct sInfo* info){
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct CVALUE* come_value_473;
void* __right_value408 = (void*)0;
char* __dec_obj139;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct sType* __dec_obj140;
_Bool __result320__;
    come_value_473=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 447, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj139=come_value_473->c_value;
    come_value_473->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",info->caller_sname));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj140=come_value_473->type;
    come_value_473->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 450, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_473->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_473));
    add_come_last_code(info,"%s",come_value_473->c_value);
    __result320__ = (_Bool)1;
    come_call_finalizer3(come_value_473,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result320__;
}

char* sCallerSNameNode_kind(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sCallerSNameNode")));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void sCallerSNameNode_finalize(struct sCallerSNameNode* self){
char* __dec_obj138;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj138=self->sname;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunCallNode* sFunCallNode_initialize(struct sFunCallNode* self, char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
char* __dec_obj141;
void* __right_value423 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj152;
struct list$1voidph* __dec_obj153;
struct buffer* __dec_obj154;
struct sFunCallNode* __result328__;
    ((struct sNodeBase*)(__right_value412=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value412,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj141=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj152,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    self->guard_break=guard_break;
    __dec_obj153=self->method_generics_types;
    self->method_generics_types=(struct list$1voidph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj153,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj154=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(method_block);
    come_call_finalizer3(__dec_obj154,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

char* sFunCallNode_kind(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value424=__builtin_string("sFunCallNode")));
    __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sFunCallNode_terminated(struct sFunCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

_Bool sFunCallNode_compile(struct sFunCallNode* self, struct sInfo* info){
char* fun_name_484;
struct list$1tuple2$2charphsNodephph* params_485;
struct buffer* method_block_486;
int method_block_sline_487;
struct sVar* var__488;
struct sType* lambda_type_489;
_Bool __result330__;
void* __right_value425 = (void*)0;
struct sType* result_type_490;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1CVALUEph* come_params_491;
_Bool __result332__;
int i_494;
struct list$1tuple2$2charphsNodephph* o2_saved_495;
struct tuple2$2charphsNodeph* it_498;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_501=0;
struct sNode* node_502=0;
_Bool Value_503;
_Bool __result339__;
void* __right_value428 = (void*)0;
struct CVALUE* come_value_504;
void* __right_value429 = (void*)0;
_Bool _if_conditional2;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
_Bool _if_conditional3;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct buffer* buf_508;
int j_509;
struct list$1CVALUEph* o2_saved_510;
struct CVALUE* it_513;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct CVALUE* come_value_516;
void* __right_value440 = (void*)0;
char* __dec_obj161;
void* __right_value441 = (void*)0;
struct sType* __dec_obj162;
_Bool __result348__;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sGenericsFun* generics_fun_517;
_Bool method_generics_518;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct list$1voidph* method_generics_types_519;
void* __right_value446 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var2 = (void*)0;
char* name_520=0;
struct sGenericsFun* gfun_521=0;
char* generics_fun_name_522;
void* __right_value447 = (void*)0;
struct sFun* fun_523;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1CVALUEph* come_params_524;
void* __right_value450 = (void*)0;
struct sFun* fun_525;
_Bool no_output_come_code_526;
_Bool __result349__;
void* __right_value451 = (void*)0;
struct CVALUE* method_block_node_527;
void* __right_value452 = (void*)0;
struct sType* method_block_lambda_type_531;
void* __right_value453 = (void*)0;
struct sType* method_block_result_type_532;
void* __right_value454 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_533;
struct sType* generics_fun_method_block_result_type_534;
int method_generics_num_535;
void* __right_value455 = (void*)0;
int n_541;
struct list$1voidph* o2_saved_542;
struct sType* it_543;
int method_generics_num_544;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct list$1CVALUEph* come_params_545;
int i_546;
struct sType* result_type_547;
struct list$1tuple2$2charphsNodephph* o2_saved_548;
struct tuple2$2charphsNodeph* it_549;
struct tuple2$2charphsNodeph* multiple_assign_var3 = (void*)0;
char* label_550=0;
struct sNode* node_551=0;
_Bool Value_552;
_Bool __result354__;
void* __right_value460 = (void*)0;
struct CVALUE* come_value_553;
int method_generics_num_557;
void* __right_value464 = (void*)0;
int n_558;
struct list$1voidph* o2_saved_559;
struct sType* it_560;
int method_generics_num_561;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var4 = (void*)0;
char* name_564=0;
struct sGenericsFun* gfun_565=0;
char* __dec_obj168;
void* __right_value468 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var5 = (void*)0;
char* name_566=0;
struct sGenericsFun* gfun_567=0;
char* __dec_obj169;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1CVALUEph* come_params_568;
struct list$1tuple2$2charphsNodephph* o2_saved_569;
struct tuple2$2charphsNodeph* it_570;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* label_571=0;
struct sNode* node_572=0;
_Bool Value_573;
_Bool __result357__;
void* __right_value471 = (void*)0;
struct CVALUE* come_value_574;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct buffer* buf_575;
int j_576;
struct list$1CVALUEph* o2_saved_577;
struct CVALUE* it_578;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_579;
void* __right_value476 = (void*)0;
char* __dec_obj170;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sType* __dec_obj171;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __dec_obj172;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct sType* __dec_obj173;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* __dec_obj174;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sType* __dec_obj175;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __dec_obj176;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __dec_obj177;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sType* __dec_obj178;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sType* __dec_obj179;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct sType* __dec_obj180;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* __dec_obj181;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sType* __dec_obj182;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __dec_obj183;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sType* __dec_obj184;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj185;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* __dec_obj186;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct sType* __dec_obj187;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* __dec_obj188;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sType* __dec_obj189;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* __dec_obj190;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* __dec_obj191;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj192;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj193;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj194;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj195;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __dec_obj196;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj197;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj198;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj199;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj200;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj201;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj202;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj203;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj204;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj205;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __dec_obj206;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* __dec_obj207;
_Bool __result358__;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1CVALUEph* come_params_580;
int i_581;
struct sType* result_type_582;
struct list$1tuple2$2charphsNodephph* o2_saved_583;
struct tuple2$2charphsNodeph* it_584;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_585=0;
struct sNode* node_586=0;
_Bool Value_587;
_Bool __result359__;
void* __right_value553 = (void*)0;
struct CVALUE* come_value_588;
struct sType* __dec_obj208;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct buffer* buf_589;
int j_590;
struct list$1CVALUEph* o2_saved_591;
struct CVALUE* it_592;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct CVALUE* come_value_593;
void* __right_value558 = (void*)0;
char* __dec_obj209;
struct sType* __dec_obj210;
_Bool __result360__;
void* __right_value559 = (void*)0;
char* __dec_obj211;
void* __right_value560 = (void*)0;
char* __dec_obj212;
char* p_594;
int version_595;
char* p2_596;
int i_598;
void* __right_value561 = (void*)0;
char* new_fun_name_599;
void* __right_value562 = (void*)0;
_Bool _if_conditional4;
void* __right_value563 = (void*)0;
char* __dec_obj213;
void* __right_value564 = (void*)0;
char* new_fun_name_600;
void* __right_value565 = (void*)0;
_Bool _if_conditional5;
void* __right_value566 = (void*)0;
char* __dec_obj214;
_Bool __result361__;
int i_601;
void* __right_value567 = (void*)0;
char* new_fun_name_602;
void* __right_value568 = (void*)0;
_Bool _if_conditional6;
void* __right_value569 = (void*)0;
char* __dec_obj215;
void* __right_value570 = (void*)0;
struct sFun* fun_603;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct list$1CVALUEph* come_params_604;
int i_605;
struct sType* result_type_606;
struct list$1tuple2$2charphsNodephph* o2_saved_607;
struct tuple2$2charphsNodeph* it_608;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_609=0;
struct sNode* node_610=0;
_Bool Value_611;
_Bool __result362__;
void* __right_value573 = (void*)0;
struct CVALUE* come_value_612;
struct sType* __dec_obj216;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct buffer* buf_613;
int j_614;
struct list$1CVALUEph* o2_saved_615;
struct CVALUE* it_616;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_617;
void* __right_value578 = (void*)0;
char* __dec_obj217;
struct sType* __dec_obj218;
_Bool __result363__;
void* __right_value579 = (void*)0;
struct sType* result_type_618;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1voidph* param_types_619;
struct list$1voidph* o2_saved_620;
struct sType* it_621;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* it2_622;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* __dec_obj219;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1CVALUEph* come_params_623;
int i_624;
struct list$1tuple2$2charphsNodephph* o2_saved_625;
struct tuple2$2charphsNodeph* it_626;
struct tuple2$2charphsNodeph* multiple_assign_var9 = (void*)0;
char* label_627=0;
struct sNode* node_628=0;
_Bool Value_629;
_Bool __result364__;
void* __right_value588 = (void*)0;
struct CVALUE* come_value_630;
int n_631;
struct list$1charph* o2_saved_632;
char* it_635;
void* __right_value589 = (void*)0;
_Bool _if_conditional7;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
_Bool _if_conditional8;
void* __right_value596 = (void*)0;
int i_643;
struct list$1tuple2$2charphsNodephph* o2_saved_644;
struct tuple2$2charphsNodeph* it_645;
struct tuple2$2charphsNodeph* multiple_assign_var10 = (void*)0;
char* label_646=0;
struct sNode* node_647=0;
_Bool Value_648;
_Bool __result373__;
void* __right_value597 = (void*)0;
struct CVALUE* come_value_649;
void* __right_value598 = (void*)0;
_Bool _if_conditional9;
_Bool Value_650;
_Bool __result374__;
void* __right_value599 = (void*)0;
struct CVALUE* come_value_651;
void* __right_value600 = (void*)0;
_Bool _if_conditional10;
void* __right_value601 = (void*)0;
_Bool _if_conditional11;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
_Bool _if_conditional12;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
_Bool _if_conditional13;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
char* default_param_652;
void* __right_value612 = (void*)0;
char* param_name_656;
void* __right_value613 = (void*)0;
_Bool _if_conditional14;
struct buffer* source_657;
char* p_658;
char* head_659;
int sline_660;
void* __right_value614 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value615 = (void*)0;
struct sNode* node_661;
_Bool Value_662;
_Bool __result377__;
struct buffer* __dec_obj222;
void* __right_value616 = (void*)0;
struct CVALUE* come_value_663;
void* __right_value617 = (void*)0;
_Bool _if_conditional15;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
_Bool _if_conditional16;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
_Bool _if_conditional17;
_Bool __result378__;
_Bool __result379__;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode2* _inf_obj_value1;
void* __right_value630 = (void*)0;
struct sNode* current_stack_frame_node_664;
_Bool Value_666;
_Bool __result382__;
void* __right_value631 = (void*)0;
struct CVALUE* come_value_667;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct buffer* method_block2_668;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* method_block_type_669;
void* __right_value636 = (void*)0;
char* class_name_670;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sClass* current_stack_frame_struct_671;
void* __right_value639 = (void*)0;
_Bool __result383__;
void* __right_value640 = (void*)0;
struct sType* result_type_672;
void* __right_value641 = (void*)0;
struct list$1voidph* param_types_673;
struct list$1charph* param_names_674;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct buffer* all_alhabet_sname_675;
char* p_676;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1voidph* o2_saved_677;
struct sType* it_678;
struct sType* param_type_679;
void* __right_value646 = (void*)0;
char* param_name_680;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
char* param_name_681;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
char* param_name_682;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct buffer* source3_683;
char* p_684;
char* head_685;
int sline_686;
struct buffer* __dec_obj224;
void* __right_value653 = (void*)0;
struct sNode* node_687;
_Bool Value_688;
_Bool __result384__;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
char* method_block_name_689;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct CVALUE* come_value2_690;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sFun* fun2_691;
_Bool __result385__;
struct sType* method_block_type2_692;
void* __right_value660 = (void*)0;
char* __dec_obj225;
void* __right_value661 = (void*)0;
struct sType* __dec_obj226;
struct buffer* __dec_obj227;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct buffer* buf_693;
int j_694;
struct list$1CVALUEph* o2_saved_695;
struct CVALUE* it_696;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct CVALUE* come_value_697;
void* __right_value666 = (void*)0;
char* __dec_obj228;
void* __right_value667 = (void*)0;
struct sType* __dec_obj229;
void* __right_value668 = (void*)0;
char* __dec_obj230;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
char* __dec_obj231;
void* __right_value671 = (void*)0;
struct CVALUE* __dec_obj232;
_Bool __result386__;
memset(&i_598, 0, sizeof(int));
    fun_name_484=(char*)come_increment_ref_count(self->fun_name);
    params_485=self->params;
    method_block_486=self->method_block;
    method_block_sline_487=self->method_block_sline;
    var__488=get_variable_from_table(info->lv_table,fun_name_484);
    if(    var__488==((void*)0)) {
        var__488=get_variable_from_table(info->gv_table,fun_name_484);
    }
    if(    var__488) {
        lambda_type_489=var__488->mType;
        if(        string_operator_not_equals(lambda_type_489->mClass->mName,"lambda")) {
            err_msg(info,"%s is not lambda, can't call",fun_name_484);
            __result330__ = (_Bool)0;
            fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        result_type_490=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_489->mResultType));
        result_type_490->mStatic=(_Bool)0;
        come_params_491=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 521, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        list$1voidphp_length(lambda_type_489->mParamTypes)!=list$1tuple2$2charphsNodephphp_length(params_485)&&!lambda_type_489->mVarArgs) {
            err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_484,list$1voidphp_length(lambda_type_489->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_485));
            __result332__ = (_Bool)0;
            come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result332__;
        }
        i_494=0;
        for(        o2_saved_495=(params_485),it_498=list$1tuple2$2charphsNodephphp_begin((o2_saved_495));        !list$1tuple2$2charphsNodephphp_end((o2_saved_495));        it_498=list$1tuple2$2charphsNodephphp_next((o2_saved_495))        ){
            multiple_assign_var1=it_498;
            label_501=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            node_502=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            Value_503=node_compile(node_502,info);
            if(            !Value_503) {
                __result339__ = (_Bool)0;
                label_501 = come_decrement_ref_count2(label_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_502) { node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result339__;
            }
            else {
            }
            come_value_504=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            if(            (_if_conditional2=(lambda_type_489->mVarArgs&&((struct sType*)((void*)(__right_value429=list$1voidphp_operator_load_element(lambda_type_489->mParamTypes,i_494))))==((void*)0))),            come_call_finalizer3(__right_value429,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
            }
            else {
                check_assign_type(((char*)(__right_value432=xsprintf("\%s calling param #\%s",((char*)(__right_value430=string_to_string(fun_name_484))),((char*)(__right_value431=int_to_string(i_494)))))),((struct sType*)((void*)(__right_value433=list$1voidphp_operator_load_element(lambda_type_489->mParamTypes,i_494)))),come_value_504->type,come_value_504,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value433,(void*)0, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional3=(((struct sType*)((void*)(__right_value434=list$1voidphp_operator_load_element(lambda_type_489->mParamTypes,i_494))))->mHeap&&come_value_504->type->mHeap)),                come_call_finalizer3(__right_value434,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)((void*)(__right_value435=list$1voidphp_operator_load_element(lambda_type_489->mParamTypes,i_494)))),come_value_504->type,come_value_504,info,(_Bool)1);
                    come_call_finalizer3(__right_value435,(void*)0, 0, 1, 0, 0, (void*)0);
                }
            }
            list$1CVALUEphp_push_back(come_params_491,(struct CVALUE*)come_increment_ref_count(come_value_504));
            dec_stack_ptr(1,info);
            i_494++;
            label_501 = come_decrement_ref_count2(label_501, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_502) { node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_508=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 553, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_508,var__488->mCValueName);
        buffer_append_str(buf_508,"(");
        j_509=0;
        for(        o2_saved_510=(struct list$1CVALUEph*)come_increment_ref_count((come_params_491)),it_513=list$1CVALUEphp_begin((o2_saved_510));        !list$1CVALUEphp_end((o2_saved_510));        it_513=list$1CVALUEphp_next((o2_saved_510))        ){
            buffer_append_str(buf_508,it_513->c_value);
            if(            j_509!=list$1CVALUEphp_length(come_params_491)-1) {
                buffer_append_str(buf_508,",");
            }
            j_509++;
        }
        come_call_finalizer3(o2_saved_510,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_508,")");
        come_value_516=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 570, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj161=come_value_516->c_value;
        come_value_516->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_508));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj162=come_value_516->type;
        come_value_516->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_490));
        come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_516->type->mStatic=(_Bool)0;
        come_value_516->var=((void*)0);
        if(        lambda_type_489->mResultType->mHeap) {
            append_object_to_right_values2(come_value_516,(struct sType*)come_increment_ref_count(lambda_type_489->mResultType),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value_516->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_516));
        info->calling_fun=((void*)0);
        __result348__ = (_Bool)1;
        come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_508,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result348__;
        come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_491,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_508,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_516,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    generics_fun_517=((struct sGenericsFun*)((void*)(__right_value443=map$2voidphvoidphp_at(info->generics_funcs,((char*)(__right_value442=__builtin_string(fun_name_484))),((void*)0)))));
    __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value443,(void*)0, 0, 1, 0, 0, (void*)0);
    method_generics_518=(_Bool)0;
    if(    generics_fun_517) {
        method_generics_518=list$1charphp_length(generics_fun_517->mMethodGenericsTypeNames)>0;
    }
    if(    list$1voidphp_length(self->method_generics_types)>0||method_generics_518) {
        if(        list$1voidphp_length(self->method_generics_types)==0) {
            method_generics_types_519=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05call.c", 595, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            multiple_assign_var2=((struct tuple2$2charphsGenericsFunp*)(__right_value446=make_method_generics_function((char*)come_increment_ref_count(fun_name_484),(struct list$1voidph*)come_increment_ref_count(method_generics_types_519),info)));
            name_520=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            gfun_521=multiple_assign_var2->v2;
            come_call_finalizer3(__right_value446,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
            generics_fun_name_522=(char*)come_increment_ref_count(name_520);
            fun_523=((struct sFun*)((void*)(__right_value447=map$2voidphvoidphp_at(info->funcs,generics_fun_name_522,((void*)0)))));
            come_call_finalizer3(__right_value447,(void*)0, 0, 1, 0, 0, (void*)0);
            if(            method_block_486) {
                come_params_524=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 602, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_525=((struct sFun*)((void*)(__right_value450=map$2voidphvoidphp_at(info->funcs,generics_fun_name_522,((void*)0)))));
                come_call_finalizer3(__right_value450,(void*)0, 0, 1, 0, 0, (void*)0);
                no_output_come_code_526=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                if(                !compile_method_block(method_block_486,(struct list$1CVALUEph*)come_increment_ref_count(come_params_524),fun_525,fun_name_484,method_block_sline_487,info,(_Bool)1)) {
                    __result349__ = (_Bool)0;
                    come_call_finalizer3(come_params_524,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_522 = come_decrement_ref_count2(generics_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result349__;
                }
                info->no_output_come_code=no_output_come_code_526;
                method_block_node_527=((struct CVALUE*)(__right_value451=list$1CVALUEphp_operator_load_element(come_params_524,-1)));
                come_call_finalizer3(__right_value451,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                method_block_lambda_type_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_527->type));
                method_block_result_type_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                generics_fun_method_block_lambda_type_533=((struct sType*)((void*)(__right_value454=list$1voidphp_operator_load_element(generics_fun_517->mParamTypes,-1))));
                come_call_finalizer3(__right_value454,(void*)0, 0, 1, 0, 0, (void*)0);
                generics_fun_method_block_result_type_534=generics_fun_method_block_lambda_type_533->mResultType;
                if(                generics_fun_method_block_result_type_534->mClass->mMethodGenerics) {
                    method_generics_num_535=generics_fun_method_block_result_type_534->mClass->mMethodGenericsNum;
                    list$1voidphp_operator_store_element(method_generics_types_519,method_generics_num_535,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_532)));
                }
                n_541=0;
                for(                o2_saved_542=(struct list$1voidph*)come_increment_ref_count((generics_fun_method_block_lambda_type_533->mParamTypes)),it_543=((struct sType*)list$1voidphp_begin((o2_saved_542)));                !list$1voidphp_end((o2_saved_542));                it_543=((struct sType*)list$1voidphp_next((o2_saved_542)))                ){
                    if(                    it_543->mClass->mMethodGenerics) {
                        method_generics_num_544=it_543->mClass->mMethodGenericsNum;
                        list$1voidphp_operator_store_element(method_generics_types_519,method_generics_num_544,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value456=list$1voidphp_operator_load_element(method_block_lambda_type_531->mParamTypes,n_541)))))));
                        come_call_finalizer3(__right_value456,(void*)0, 0, 1, 0, 0, (void*)0);
                    }
                    n_541++;
                }
                come_call_finalizer3(o2_saved_542,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_524,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_lambda_type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_block_result_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_params_545=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 634, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            i_546=0;
            result_type_547=((void*)0);
            for(            o2_saved_548=(params_485),it_549=list$1tuple2$2charphsNodephphp_begin((o2_saved_548));            !list$1tuple2$2charphsNodephphp_end((o2_saved_548));            it_549=list$1tuple2$2charphsNodephphp_next((o2_saved_548))            ){
                multiple_assign_var3=it_549;
                label_550=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                node_551=(struct sNode*)come_increment_ref_count(multiple_assign_var3->v2);
                Value_552=node_compile(node_551,info);
                if(                !Value_552) {
                    __result354__ = (_Bool)0;
                    label_550 = come_decrement_ref_count2(label_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_generics_types_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_522 = come_decrement_ref_count2(generics_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    return __result354__;
                }
                else {
                }
                come_value_553=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                list$1CVALUEphp_add(come_params_545,(struct CVALUE*)come_increment_ref_count(come_value_553));
                label_550 = come_decrement_ref_count2(label_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_551) { node_551 = come_decrement_ref_count2(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            generics_fun_517->mResultType->mClass->mMethodGenerics) {
                method_generics_num_557=generics_fun_517->mResultType->mClass->mMethodGenericsNum;
                if(                info->function_result_type) {
                    list$1voidphp_operator_store_element(method_generics_types_519,method_generics_num_557,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                }
            }
            n_558=0;
            for(            o2_saved_559=(struct list$1voidph*)come_increment_ref_count((generics_fun_517->mParamTypes)),it_560=((struct sType*)list$1voidphp_begin((o2_saved_559)));            !list$1voidphp_end((o2_saved_559));            it_560=((struct sType*)list$1voidphp_next((o2_saved_559)))            ){
                if(                it_560->mClass->mMethodGenerics) {
                    method_generics_num_561=it_560->mClass->mMethodGenericsNum;
                    if(                    n_558<list$1CVALUEphp_length(come_params_545)) {
                        list$1voidphp_operator_store_element(method_generics_types_519,method_generics_num_561,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value465=list$1CVALUEphp_operator_load_element(come_params_545,n_558)))->type)));
                        come_call_finalizer3(__right_value465,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    }
                }
                n_558++;
            }
            come_call_finalizer3(o2_saved_559,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            map$2voidphvoidphp_remove(info->funcs,generics_fun_name_522);
            name_520 = come_decrement_ref_count2(name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            multiple_assign_var4=((struct tuple2$2charphsGenericsFunp*)(__right_value467=make_method_generics_function((char*)come_increment_ref_count(fun_name_484),(struct list$1voidph*)come_increment_ref_count(method_generics_types_519),info)));
            name_564=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            gfun_565=multiple_assign_var4->v2;
            come_call_finalizer3(__right_value467,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj168=fun_name_484;
            fun_name_484=(char*)come_increment_ref_count(name_564);
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(method_generics_types_519,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            generics_fun_name_522 = come_decrement_ref_count2(generics_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_545,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_564 = come_decrement_ref_count2(name_564, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var5=((struct tuple2$2charphsGenericsFunp*)(__right_value468=make_method_generics_function((char*)come_increment_ref_count(fun_name_484),(struct list$1voidph*)come_increment_ref_count(self->method_generics_types),info)));
            name_566=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            gfun_567=multiple_assign_var5->v2;
            come_call_finalizer3(__right_value468,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj169=fun_name_484;
            fun_name_484=(char*)come_increment_ref_count(name_566);
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
            name_566 = come_decrement_ref_count2(name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    string_operator_equals(fun_name_484,"__builtin_memmove")||string_operator_equals(fun_name_484,"__builtin_memset")||string_operator_equals(fun_name_484,"__builtin_ffs")||string_operator_equals(fun_name_484,"__builtin_ffsl")||string_operator_equals(fun_name_484,"__builtin_ffsll")||string_operator_equals(fun_name_484,"__builtin_bswap16")||string_operator_equals(fun_name_484,"__builtin_bswap32")||string_operator_equals(fun_name_484,"__builtin_bswap64")||string_operator_equals(fun_name_484,"__builtin_constant_p")||string_operator_equals(fun_name_484,"__builtin_expect")||string_operator_equals(fun_name_484,"__builtin___memset_chk")||string_operator_equals(fun_name_484,"__builtin_object_size")||string_operator_equals(fun_name_484,"__builtin___memcpy_chk")||string_operator_equals(fun_name_484,"__builtin___strncpy_chk")||string_operator_equals(fun_name_484,"__builtin___strncat_chk")||string_operator_equals(fun_name_484,"__builtin___vsnprintf_chk")||string_operator_equals(fun_name_484,"__builtin_strrchr")||string_operator_equals(fun_name_484,"__builtin_clz")||string_operator_equals(fun_name_484,"__dsb")||string_operator_equals(fun_name_484,"__isb")||string_operator_equals(fun_name_484,"__dmb")||(strlen(fun_name_484)==strlen("__builtin_arm_")&&memcmp(fun_name_484,"__builtin_arm_",strlen("__builtin_arm_"))==0)||string_operator_equals(fun_name_484,"__c11_atomic_thread_fence")||string_operator_equals(fun_name_484,"__c11_atomic_signal_fence")||string_operator_equals(fun_name_484,"__c11_atomic_store")||string_operator_equals(fun_name_484,"__c11_atomic_load")||string_operator_equals(fun_name_484,"__c11_atomic_exchange")||string_operator_equals(fun_name_484,"__c11_atomic_exchange_strong")||string_operator_equals(fun_name_484,"__c11_atomic_exchange_weak")||string_operator_equals(fun_name_484,"__c11_atomic_fetch_add")||string_operator_equals(fun_name_484,"__c11_atomic_fetch_sub")||string_operator_equals(fun_name_484,"__c11_atomic_fetch_and")||string_operator_equals(fun_name_484,"__c11_atomic_fetch_or")||string_operator_equals(fun_name_484,"__c11_atomic_fetch_xor")) {
        come_params_568=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 708, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        for(        o2_saved_569=(params_485),it_570=list$1tuple2$2charphsNodephphp_begin((o2_saved_569));        !list$1tuple2$2charphsNodephphp_end((o2_saved_569));        it_570=list$1tuple2$2charphsNodephphp_next((o2_saved_569))        ){
            multiple_assign_var6=it_570;
            label_571=(char*)come_increment_ref_count(multiple_assign_var6->v1);
            node_572=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
            Value_573=node_compile(node_572,info);
            if(            !Value_573) {
                __result357__ = (_Bool)0;
                label_571 = come_decrement_ref_count2(label_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_572) { node_572 = come_decrement_ref_count2(node_572, ((struct sNode*)node_572)->finalize, ((struct sNode*)node_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_568,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result357__;
            }
            else {
            }
            come_value_574=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(come_params_568,(struct CVALUE*)come_increment_ref_count(come_value_574));
            label_571 = come_decrement_ref_count2(label_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_572) { node_572 = come_decrement_ref_count2(node_572, ((struct sNode*)node_572)->finalize, ((struct sNode*)node_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_574,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 722, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_575,fun_name_484);
        buffer_append_str(buf_575,"(");
        j_576=0;
        for(        o2_saved_577=(struct list$1CVALUEph*)come_increment_ref_count((come_params_568)),it_578=list$1CVALUEphp_begin((o2_saved_577));        !list$1CVALUEphp_end((o2_saved_577));        it_578=list$1CVALUEphp_next((o2_saved_577))        ){
            buffer_append_str(buf_575,it_578->c_value);
            if(            j_576!=list$1CVALUEphp_length(come_params_568)-1) {
                buffer_append_str(buf_575,",");
            }
            j_576++;
        }
        come_call_finalizer3(o2_saved_577,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_575,")");
        come_value_579=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 739, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj170=come_value_579->c_value;
        come_value_579->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_575));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        string_operator_equals(fun_name_484,"__builtin_memmove")||string_operator_equals(fun_name_484,"__builtin_memset")) {
            __dec_obj171=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_ffs")) {
            __dec_obj172=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 746, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_ffsl")) {
            __dec_obj173=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 749, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_ffsll")) {
            __dec_obj174=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 752, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_bswap16")) {
            __dec_obj175=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 755, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"short",(_Bool)0,info));
            come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_bswap32")) {
            __dec_obj176=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 758, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_bswap64")) {
            __dec_obj177=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 761, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_constant_p")) {
            __dec_obj178=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 764, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_expect")) {
            __dec_obj179=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 767, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin___memset_chk")) {
            __dec_obj180=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 770, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_579->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_object_size")) {
            __dec_obj181=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 774, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info));
            come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin___memcpy_chk")) {
            __dec_obj182=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 777, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_579->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_484,"__builtin___strncpy_chk")) {
            __dec_obj183=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 781, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_579->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_484,"__builtin___strncat_chk")) {
            __dec_obj184=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 785, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_579->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_strrchr")) {
            __dec_obj185=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 789, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
            come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_579->type->mPointerNum=1;
        }
        else if(        string_operator_equals(fun_name_484,"__builtin___vsnprintf_chk")) {
            __dec_obj186=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 793, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_clz")) {
            __dec_obj187=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 796, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
            come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_thread_fence")) {
            __dec_obj188=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 799, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_signal_fence")) {
            __dec_obj189=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 802, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_exchange")) {
            __dec_obj190=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value515=list$1CVALUEphp_operator_load_element(come_params_568,1)))->type));
            come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value515,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_exchange_strong")) {
            __dec_obj191=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value517=list$1CVALUEphp_operator_load_element(come_params_568,2)))->type));
            come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value517,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_exchange_weak")) {
            __dec_obj192=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value519=list$1CVALUEphp_operator_load_element(come_params_568,2)))->type));
            come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value519,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_store")) {
            __dec_obj193=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 814, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_load")) {
            __dec_obj194=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value523=list$1CVALUEphp_operator_load_element(come_params_568,0)))->type));
            come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value523,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_value_579->type->mPointerNum--;
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_fetch_add")) {
            __dec_obj195=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value525=list$1CVALUEphp_operator_load_element(come_params_568,1)))->type));
            come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value525,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_fetch_sub")) {
            __dec_obj196=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value527=list$1CVALUEphp_operator_load_element(come_params_568,1)))->type));
            come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value527,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_fetch_and")) {
            __dec_obj197=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value529=list$1CVALUEphp_operator_load_element(come_params_568,1)))->type));
            come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value529,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_fetch_or")) {
            __dec_obj198=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value531=list$1CVALUEphp_operator_load_element(come_params_568,1)))->type));
            come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value531,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__c11_atomic_fetch_xor")) {
            __dec_obj199=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value533=list$1CVALUEphp_operator_load_element(come_params_568,1)))->type));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value533,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__dsb")) {
            __dec_obj200=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 836, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__isb")) {
            __dec_obj201=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 839, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__dmb")) {
            __dec_obj202=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 842, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_arm_cdp")) {
            __dec_obj203=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 845, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_arm_ldc")) {
            __dec_obj204=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 848, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_arm_stc")) {
            __dec_obj205=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 851, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_arm_stcl")) {
            __dec_obj206=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 854, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(fun_name_484,"__builtin_arm_ldcl")) {
            __dec_obj207=come_value_579->type;
            come_value_579->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 857, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_579->var=((void*)0);
        add_come_last_code(info,"%s",come_value_579->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_579));
        __result358__ = (_Bool)1;
        come_call_finalizer3(come_params_568,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result358__;
        come_call_finalizer3(come_params_568,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_579,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_484,"__builtin_va_arg")) {
        come_params_580=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 869, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_581=0;
        result_type_582=((void*)0);
        for(        o2_saved_583=(params_485),it_584=list$1tuple2$2charphsNodephphp_begin((o2_saved_583));        !list$1tuple2$2charphsNodephphp_end((o2_saved_583));        it_584=list$1tuple2$2charphsNodephphp_next((o2_saved_583))        ){
            multiple_assign_var7=it_584;
            label_585=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_586=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            Value_587=node_compile(node_586,info);
            if(            !Value_587) {
                __result359__ = (_Bool)0;
                label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_580,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result359__;
            }
            else {
            }
            come_value_588=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_add(come_params_580,(struct CVALUE*)come_increment_ref_count(come_value_588));
            __dec_obj208=result_type_582;
            result_type_582=(struct sType*)come_increment_ref_count(come_value_588->type);
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_585 = come_decrement_ref_count2(label_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_586) { node_586 = come_decrement_ref_count2(node_586, ((struct sNode*)node_586)->finalize, ((struct sNode*)node_586)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_589=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 888, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_589,fun_name_484);
        buffer_append_str(buf_589,"(");
        j_590=0;
        for(        o2_saved_591=(struct list$1CVALUEph*)come_increment_ref_count((come_params_580)),it_592=list$1CVALUEphp_begin((o2_saved_591));        !list$1CVALUEphp_end((o2_saved_591));        it_592=list$1CVALUEphp_next((o2_saved_591))        ){
            buffer_append_str(buf_589,it_592->c_value);
            if(            j_590!=list$1CVALUEphp_length(come_params_580)-1) {
                buffer_append_str(buf_589,",");
            }
            j_590++;
        }
        come_call_finalizer3(o2_saved_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_589,")");
        come_value_593=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 905, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj209=come_value_593->c_value;
        come_value_593->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_589));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj210=come_value_593->type;
        come_value_593->type=(struct sType*)come_increment_ref_count(result_type_582);
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_593->var=((void*)0);
        add_come_last_code(info,"%s",come_value_593->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_593));
        __result360__ = (_Bool)1;
        come_call_finalizer3(come_params_580,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result360__;
        come_call_finalizer3(come_params_580,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_582,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_589,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_equals(fun_name_484,"string")) {
        __dec_obj211=fun_name_484;
        fun_name_484=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_484,"wstring")) {
        __dec_obj212=fun_name_484;
        fun_name_484=(char*)come_increment_ref_count(__builtin_string("__builtin_wstring"));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    string_operator_equals(fun_name_484,"inherit")) {
        p_594=info->come_fun->mName;
        version_595=0;
        while(*p_594) {
            if(            *p_594==95&&*(p_594+1)==118&&xisdigit(*(p_594+2))) {
                p2_596=p_594+2;
                version_595=0;
                while(xisdigit(*p2_596)) {
                    version_595=version_595*10+(*p2_596-48);
                    p2_596++;
                }
                break;
            }
            else {
                p_594++;
            }
        }
        char real_fun_name_597[2048];
        memset(&real_fun_name_597, 0, sizeof(char)        *(2048)        );
        memcpy(real_fun_name_597,info->come_fun->mName,p_594-info->come_fun->mName);
        real_fun_name_597[p_594-info->come_fun->mName]=0;
        for(        i_598=version_595-1;        i_598>=1;        i_598--        ){
            new_fun_name_599=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_597,i_598));
            if(            (_if_conditional4=(((struct sFun*)((void*)(__right_value562=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_599)))))),            come_call_finalizer3(__right_value562,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional4) {
                __dec_obj213=fun_name_484;
                fun_name_484=(char*)come_increment_ref_count(__builtin_string(new_fun_name_599));
                __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_599 = come_decrement_ref_count2(new_fun_name_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_599 = come_decrement_ref_count2(new_fun_name_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_598==0) {
            new_fun_name_600=(char*)come_increment_ref_count(xsprintf("%s",real_fun_name_597));
            if(            (_if_conditional5=(((struct sFun*)((void*)(__right_value565=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_600)))))),            come_call_finalizer3(__right_value565,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional5) {
                __dec_obj214=fun_name_484;
                fun_name_484=(char*)come_increment_ref_count(__builtin_string(new_fun_name_600));
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            string_operator_equals(fun_name_484,info->come_fun->mName)) {
                err_msg(info,"invalid inherit");
                __result361__ = (_Bool)0;
                new_fun_name_600 = come_decrement_ref_count2(new_fun_name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result361__;
            }
            new_fun_name_600 = come_decrement_ref_count2(new_fun_name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_601=128;        i_601>=1;        i_601--        ){
            new_fun_name_602=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_484,i_601));
            if(            (_if_conditional6=(((struct sFun*)((void*)(__right_value568=map$2voidphvoidphp_operator_load_element(info->funcs,new_fun_name_602)))))),            come_call_finalizer3(__right_value568,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __dec_obj215=fun_name_484;
                fun_name_484=(char*)come_increment_ref_count(__builtin_string(new_fun_name_602));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_602 = come_decrement_ref_count2(new_fun_name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_602 = come_decrement_ref_count2(new_fun_name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    fun_603=((struct sFun*)((void*)(__right_value570=map$2voidphvoidphp_at(info->funcs,fun_name_484,((void*)0)))));
    come_call_finalizer3(__right_value570,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    fun_603==((void*)0)) {
        printf("function not found(%s) at function call(1), so no check types and no heap management\n",fun_name_484);
        come_params_604=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 986, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        i_605=0;
        result_type_606=((void*)0);
        for(        o2_saved_607=(params_485),it_608=list$1tuple2$2charphsNodephphp_begin((o2_saved_607));        !list$1tuple2$2charphsNodephphp_end((o2_saved_607));        it_608=list$1tuple2$2charphsNodephphp_next((o2_saved_607))        ){
            multiple_assign_var8=it_608;
            label_609=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_610=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            Value_611=node_compile(node_610,info);
            if(            !Value_611) {
                __result362__ = (_Bool)0;
                label_609 = come_decrement_ref_count2(label_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result362__;
            }
            else {
            }
            come_value_612=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_add(come_params_604,(struct CVALUE*)come_increment_ref_count(come_value_612));
            __dec_obj216=result_type_606;
            result_type_606=(struct sType*)come_increment_ref_count(come_value_612->type);
            come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
            label_609 = come_decrement_ref_count2(label_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_610) { node_610 = come_decrement_ref_count2(node_610, ((struct sNode*)node_610)->finalize, ((struct sNode*)node_610)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_612,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        buf_613=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1005, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(buf_613,fun_name_484);
        buffer_append_str(buf_613,"(");
        j_614=0;
        for(        o2_saved_615=(struct list$1CVALUEph*)come_increment_ref_count((come_params_604)),it_616=list$1CVALUEphp_begin((o2_saved_615));        !list$1CVALUEphp_end((o2_saved_615));        it_616=list$1CVALUEphp_next((o2_saved_615))        ){
            buffer_append_str(buf_613,it_616->c_value);
            if(            j_614!=list$1CVALUEphp_length(come_params_604)-1) {
                buffer_append_str(buf_613,",");
            }
            j_614++;
        }
        come_call_finalizer3(o2_saved_615,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_613,")");
        come_value_617=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1022, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj217=come_value_617->c_value;
        come_value_617->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_613));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj218=come_value_617->type;
        come_value_617->type=(struct sType*)come_increment_ref_count(result_type_606);
        come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_617->var=((void*)0);
        add_come_last_code(info,"%s",come_value_617->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_617));
        __result363__ = (_Bool)1;
        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result363__;
        come_call_finalizer3(come_params_604,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_613,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    result_type_618=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_603->mResultType));
    result_type_618->mStatic=(_Bool)0;
    param_types_619=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05call.c", 1037, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_620=(struct list$1voidph*)come_increment_ref_count((fun_603->mParamTypes)),it_621=((struct sType*)list$1voidphp_begin((o2_saved_620)));    !list$1voidphp_end((o2_saved_620));    it_621=((struct sType*)list$1voidphp_next((o2_saved_620)))    ){
        it2_622=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value582=come_call_cloner(sType_clone, it_621))),info->generics_type,info));
        come_call_finalizer3(__right_value582,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1voidphp_push_back(param_types_619,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_622)));
        come_call_finalizer3(it2_622,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_620,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj219=result_type_618;
    result_type_618=(struct sType*)come_increment_ref_count(solve_generics(result_type_618,info->generics_type,info));
    come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_params_623=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1045, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_624=0;    i_624<list$1voidphp_length(fun_603->mParamTypes)-(((method_block_486)?(2):(0)));    i_624++    ){
        list$1CVALUEphp_add(come_params_623,((void*)0));
    }
    for(    o2_saved_625=(params_485),it_626=list$1tuple2$2charphsNodephphp_begin((o2_saved_625));    !list$1tuple2$2charphsNodephphp_end((o2_saved_625));    it_626=list$1tuple2$2charphsNodephphp_next((o2_saved_625))    ){
        multiple_assign_var9=it_626;
        label_627=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        node_628=(struct sNode*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        fun_603->mVarArgs||string_operator_equals(fun_name_484,"__builtin_va_start")) {
        }
        else if(        label_627) {
            Value_629=node_compile(node_628,info);
            if(            !Value_629) {
                __result364__ = (_Bool)0;
                label_627 = come_decrement_ref_count2(label_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result364__;
            }
            else {
            }
            come_value_630=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            n_631=0;
            for(            o2_saved_632=(struct list$1charph*)come_increment_ref_count((fun_603->mParamNames)),it_635=list$1charphp_begin((o2_saved_632));            !list$1charphp_end((o2_saved_632));            it_635=list$1charphp_next((o2_saved_632))            ){
                if(                string_operator_equals(label_627,it_635)) {
                    break;
                }
                n_631++;
            }
            come_call_finalizer3(o2_saved_632,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            (_if_conditional7=(((struct sType*)((void*)(__right_value589=list$1voidphp_operator_load_element(param_types_619,n_631)))))),            come_call_finalizer3(__right_value589,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional7) {
                check_assign_type(((char*)(__right_value592=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value590=string_to_string(fun_name_484))),((char*)(__right_value591=int_to_string(n_631)))))),((struct sType*)((void*)(__right_value593=list$1voidphp_operator_load_element(param_types_619,n_631)))),come_value_630->type,come_value_630,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value593,(void*)0, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional8=(((struct sType*)((void*)(__right_value594=list$1voidphp_operator_load_element(param_types_619,n_631))))&&((struct sType*)((void*)(__right_value595=list$1voidphp_operator_load_element(param_types_619,n_631))))->mHeap&&come_value_630->type->mHeap)),            come_call_finalizer3(__right_value594,(void*)0, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value595,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional8) {
                std_move(((struct sType*)((void*)(__right_value596=list$1voidphp_operator_load_element(param_types_619,n_631)))),come_value_630->type,come_value_630,info,(_Bool)1);
                come_call_finalizer3(__right_value596,(void*)0, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_replace(come_params_623,n_631,(struct CVALUE*)come_increment_ref_count(come_value_630));
            come_call_finalizer3(come_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_627 = come_decrement_ref_count2(label_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_628) { node_628 = come_decrement_ref_count2(node_628, ((struct sNode*)node_628)->finalize, ((struct sNode*)node_628)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    i_643=0;
    for(    o2_saved_644=(params_485),it_645=list$1tuple2$2charphsNodephphp_begin((o2_saved_644));    !list$1tuple2$2charphsNodephphp_end((o2_saved_644));    it_645=list$1tuple2$2charphsNodephphp_next((o2_saved_644))    ){
        multiple_assign_var10=it_645;
        label_646=(char*)come_increment_ref_count(multiple_assign_var10->v1);
        node_647=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
        if(        fun_603->mVarArgs||string_operator_equals(fun_name_484,"__builtin_va_start")) {
            Value_648=node_compile(node_647,info);
            if(            !Value_648) {
                __result373__ = (_Bool)0;
                label_646 = come_decrement_ref_count2(label_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result373__;
            }
            else {
            }
            come_value_649=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional9=(((struct CVALUE*)(__right_value598=list$1CVALUEphp_operator_load_element(come_params_623,i_643)))==((void*)0))),                come_call_finalizer3(__right_value598,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional9) {
                    break;
                }
                else {
                    i_643++;
                }
            }
            list$1CVALUEphp_replace(come_params_623,i_643,(struct CVALUE*)come_increment_ref_count(come_value_649));
            i_643++;
            come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        label_646) {
        }
        else {
            Value_650=node_compile(node_647,info);
            if(            !Value_650) {
                __result374__ = (_Bool)0;
                label_646 = come_decrement_ref_count2(label_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result374__;
            }
            else {
            }
            come_value_651=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            while((_Bool)1) {
                if(                (_if_conditional10=(((struct CVALUE*)(__right_value600=list$1CVALUEphp_operator_load_element(come_params_623,i_643)))==((void*)0))),                come_call_finalizer3(__right_value600,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    break;
                }
                else {
                    i_643++;
                }
            }
            if(            (_if_conditional11=(((struct sType*)((void*)(__right_value601=list$1voidphp_operator_load_element(param_types_619,i_643)))))),            come_call_finalizer3(__right_value601,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional11) {
                check_assign_type(((char*)(__right_value604=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value602=string_to_string(fun_name_484))),((char*)(__right_value603=int_to_string(i_643)))))),((struct sType*)((void*)(__right_value605=list$1voidphp_operator_load_element(param_types_619,i_643)))),come_value_651->type,come_value_651,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value605,(void*)0, 0, 1, 0, 0, (void*)0);
            }
            if(            (_if_conditional12=(((struct sType*)((void*)(__right_value606=list$1voidphp_operator_load_element(param_types_619,i_643))))&&((struct sType*)((void*)(__right_value607=list$1voidphp_operator_load_element(param_types_619,i_643))))->mHeap&&come_value_651->type->mHeap)),            come_call_finalizer3(__right_value606,(void*)0, 0, 1, 0, 0, (void*)0),
            come_call_finalizer3(__right_value607,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                std_move(((struct sType*)((void*)(__right_value608=list$1voidphp_operator_load_element(param_types_619,i_643)))),come_value_651->type,come_value_651,info,(_Bool)1);
                come_call_finalizer3(__right_value608,(void*)0, 0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEphp_replace(come_params_623,i_643,(struct CVALUE*)come_increment_ref_count(come_value_651));
            i_643++;
            come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        label_646 = come_decrement_ref_count2(label_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_647) { node_647 = come_decrement_ref_count2(node_647, ((struct sNode*)node_647)->finalize, ((struct sNode*)node_647)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while((_Bool)1) {
        if(        (_if_conditional13=(((struct CVALUE*)(__right_value609=list$1CVALUEphp_operator_load_element(come_params_623,i_643)))==((void*)0))),        come_call_finalizer3(__right_value609,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional13) {
            break;
        }
        else {
            i_643++;
        }
    }
    if(    list$1tuple2$2charphsNodephphp_length(params_485)<list$1voidphp_length(fun_603->mParamTypes)) {
        for(        ;        i_643<list$1voidphp_length(fun_603->mParamTypes)-(((method_block_486)?(2):(0)));        i_643++        ){
            default_param_652=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value610=list$1charphp_operator_load_element(fun_603->mParamDefaultParametors,i_643)))));
            __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_656=((char*)(__right_value612=list$1charphp_operator_load_element(fun_603->mParamNames,i_643)));
            __right_value612 = come_decrement_ref_count2(__right_value612, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(            (_if_conditional14=(default_param_652&&string_operator_not_equals(default_param_652,"")&&((struct CVALUE*)(__right_value613=list$1CVALUEphp_operator_load_element(come_params_623,i_643)))==((void*)0))),            come_call_finalizer3(__right_value613,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                source_657=(struct buffer*)come_increment_ref_count(info->source);
                p_658=info->p;
                head_659=info->head;
                sline_660=info->sline;
                __dec_obj221=info->source;
                info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_652));
                come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=info->source->buf;
                info->head=info->source->buf;
                node_661=(struct sNode*)come_increment_ref_count(expression_v13(info));
                Value_662=node_compile(node_661,info);
                if(                !Value_662) {
                    __result377__ = (_Bool)0;
                    come_call_finalizer3(source_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    default_param_652 = come_decrement_ref_count2(default_param_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result377__;
                }
                else {
                }
                __dec_obj222=info->source;
                info->source=(struct buffer*)come_increment_ref_count(source_657);
                come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
                info->p=p_658;
                info->head=head_659;
                info->sline=sline_660;
                come_value_663=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional15=(((struct sType*)((void*)(__right_value617=list$1voidphp_operator_load_element(param_types_619,i_643)))))),                come_call_finalizer3(__right_value617,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional15) {
                    check_assign_type(((char*)(__right_value620=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value618=string_to_string(fun_name_484))),((char*)(__right_value619=int_to_string(i_643)))))),((struct sType*)((void*)(__right_value621=list$1voidphp_operator_load_element(param_types_619,i_643)))),come_value_663->type,come_value_663,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value618 = come_decrement_ref_count2(__right_value618, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value620 = come_decrement_ref_count2(__right_value620, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value621,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional16=(((struct sType*)((void*)(__right_value622=list$1voidphp_operator_load_element(param_types_619,i_643))))&&((struct sType*)((void*)(__right_value623=list$1voidphp_operator_load_element(param_types_619,i_643))))->mHeap&&come_value_663->type->mHeap)),                come_call_finalizer3(__right_value622,(void*)0, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value623,(void*)0, 0, 1, 0, 0, (void*)0),
                _if_conditional16) {
                    std_move(((struct sType*)((void*)(__right_value624=list$1voidphp_operator_load_element(param_types_619,i_643)))),come_value_663->type,come_value_663,info,(_Bool)1);
                    come_call_finalizer3(__right_value624,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_623,i_643,(struct CVALUE*)come_increment_ref_count(come_value_663));
                dec_stack_ptr(1,info);
                come_call_finalizer3(source_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
                if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(come_value_663,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                (_if_conditional17=(((struct CVALUE*)(__right_value625=list$1CVALUEphp_operator_load_element(come_params_623,i_643)))==((void*)0))),                come_call_finalizer3(__right_value625,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional17) {
                    err_msg(info,"require parametor(%s)(1) %d",fun_603->mName,i_643);
                    __result378__ = (_Bool)0;
                    default_param_652 = come_decrement_ref_count2(default_param_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result378__;
                }
            }
            default_param_652 = come_decrement_ref_count2(default_param_652, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    list$1voidphp_length(fun_603->mParamTypes)-(((method_block_486)?(2):(0)))!=list$1CVALUEphp_length(come_params_623)&&!fun_603->mVarArgs&&string_operator_not_equals(fun_name_484,"__builtin_va_start")&&string_operator_not_equals(fun_name_484,"__builtin_va_end")) {
        err_msg(info,"invalid param number(%s). function param number is %d. caller param number is %d",fun_name_484,list$1voidphp_length(fun_603->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_485));
        __result379__ = (_Bool)0;
        fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result379__;
    }
    if(    method_block_486) {
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1201, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value1=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value627=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1201, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sCurrentNode2_finalize;
        _inf_value1->clone=(void*)sCurrentNode2_clone;
        _inf_value1->compile=(void*)sCurrentNode2_compile;
        _inf_value1->sline=(void*)sCurrentNode2_sline;
        _inf_value1->sline_real=(void*)sNodeBase_sline_real;
        _inf_value1->sname=(void*)sCurrentNode2_sname;
        _inf_value1->terminated=(void*)sNodeBase_terminated;
        _inf_value1->kind=(void*)sCurrentNode2_kind;
        current_stack_frame_node_664=(struct sNode*)come_increment_ref_count(_inf_value1);
        come_call_finalizer3(__right_value627,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
        Value_666=node_compile(current_stack_frame_node_664,info);
        if(        !Value_666) {
            __result382__ = (_Bool)0;
            if(current_stack_frame_node_664) { current_stack_frame_node_664 = come_decrement_ref_count2(current_stack_frame_node_664, ((struct sNode*)current_stack_frame_node_664)->finalize, ((struct sNode*)current_stack_frame_node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result382__;
        }
        else {
        }
        come_value_667=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        list$1CVALUEphp_push_back(come_params_623,(struct CVALUE*)come_increment_ref_count(come_value_667));
        dec_stack_ptr(1,info);
        method_block2_668=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1211, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        method_block_type_669=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value634=list$1voidphp_operator_load_element(fun_603->mParamTypes,-1))))));
        come_call_finalizer3(__right_value634,(void*)0, 0, 1, 0, 0, (void*)0);
        class_name_670=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
        ((struct sType*)((void*)(__right_value637=list$1voidphp_operator_load_element(method_block_type_669->mParamTypes,0))))->mClass=((struct sClass*)((void*)(__right_value638=map$2voidphvoidphp_operator_load_element(info->classes,class_name_670))));
        come_call_finalizer3(__right_value637,(void*)0, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value638,(void*)0, 0, 1, 0, 0, (void*)0);
        current_stack_frame_struct_671=info->current_stack_frame_struct;
        info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value639=map$2voidphvoidphp_operator_load_element(info->classes,class_name_670))));
        come_call_finalizer3(__right_value639,(void*)0, 0, 1, 0, 0, (void*)0);
        info->num_method_block++;
        if(        string_operator_not_equals(method_block_type_669->mClass->mName,"lambda")) {
            err_msg(info,"This function does not have method block(%s)",fun_name_484);
            __result383__ = (_Bool)0;
            if(current_stack_frame_node_664) { current_stack_frame_node_664 = come_decrement_ref_count2(current_stack_frame_node_664, ((struct sNode*)current_stack_frame_node_664)->finalize, ((struct sNode*)current_stack_frame_node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_667,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_669,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_670 = come_decrement_ref_count2(class_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result383__;
        }
        result_type_672=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_669->mResultType));
        result_type_672->mStatic=(_Bool)0;
        param_types_673=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, method_block_type_669->mParamTypes));
        param_names_674=method_block_type_669->mParamNames;
        all_alhabet_sname_675=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1232, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        {
            p_676=info->sname;
            while(*p_676) {
                if(                xisalnum(*p_676)) {
                    buffer_append_char(all_alhabet_sname_675,*p_676++);
                }
                else {
                    p_676++;
                }
            }
        }
        buffer_append_format(method_block2_668,"%s fun_block%d_%s(",((char*)(__right_value644=make_type_name_string(result_type_672,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value645=buffer_to_string(all_alhabet_sname_675))));
        __right_value644 = come_decrement_ref_count2(__right_value644, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value645 = come_decrement_ref_count2(__right_value645, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        i_643=0;
        for(        o2_saved_677=(struct list$1voidph*)come_increment_ref_count((param_types_673)),it_678=((struct sType*)list$1voidphp_begin((o2_saved_677)));        !list$1voidphp_end((o2_saved_677));        it_678=((struct sType*)list$1voidphp_next((o2_saved_677)))        ){
            param_type_679=it_678;
            if(            i_643==0) {
                param_name_680=(char*)come_increment_ref_count(xsprintf("parent"));
                buffer_append_format(method_block2_668,"%s",((char*)(__right_value647=make_define_var(param_type_679,param_name_680,(_Bool)0,info))));
                __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_680 = come_decrement_ref_count2(param_name_680, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            i_643==1) {
                param_name_681=(char*)come_increment_ref_count(xsprintf("it"));
                buffer_append_format(method_block2_668,"%s",((char*)(__right_value649=make_define_var_no_solved(param_type_679,param_name_681,(_Bool)0,(_Bool)1,info))));
                __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_681 = come_decrement_ref_count2(param_name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                param_name_682=(char*)come_increment_ref_count(xsprintf("it%d",i_643));
                buffer_append_format(method_block2_668,"%s",((char*)(__right_value651=make_define_var_no_solved(param_type_679,param_name_682,(_Bool)0,(_Bool)1,info))));
                __right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_682 = come_decrement_ref_count2(param_name_682, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            i_643!=list$1voidphp_length(param_types_673)-1) {
                buffer_append_str(method_block2_668,",");
            }
            i_643++;
        }
        come_call_finalizer3(o2_saved_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(method_block2_668,")\n");
        buffer_append_str(method_block2_668,((char*)(__right_value652=buffer_to_string(method_block_486))));
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        source3_683=(struct buffer*)come_increment_ref_count(info->source);
        p_684=info->p;
        head_685=info->head;
        sline_686=info->sline;
        __dec_obj224=info->source;
        info->source=(struct buffer*)come_increment_ref_count(method_block2_668);
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        info->sline=method_block_sline_487;
        node_687=(struct sNode*)come_increment_ref_count(parse_function(info));
        Value_688=node_compile(node_687,info);
        if(        !Value_688) {
            __result384__ = (_Bool)0;
            if(current_stack_frame_node_664) { current_stack_frame_node_664 = come_decrement_ref_count2(current_stack_frame_node_664, ((struct sNode*)current_stack_frame_node_664)->finalize, ((struct sNode*)current_stack_frame_node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_667,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_669,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_670 = come_decrement_ref_count2(class_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_673,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_675,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_687) { node_687 = come_decrement_ref_count2(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result384__;
        }
        else {
        }
        method_block_name_689=(char*)come_increment_ref_count(xsprintf("fun_block%d_%s",info->num_method_block,((char*)(__right_value654=buffer_to_string(all_alhabet_sname_675)))));
        __right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_690=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1297, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun2_691=((struct sFun*)((void*)(__right_value659=map$2voidphvoidphp_at(info->funcs,((char*)(__right_value658=__builtin_string(method_block_name_689))),((void*)0)))));
        __right_value658 = come_decrement_ref_count2(__right_value658, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value659,(void*)0, 0, 1, 0, 0, (void*)0);
        if(        fun2_691==((void*)0)) {
            err_msg(info,"method block function not found(%s)",method_block_name_689);
            __result385__ = (_Bool)1;
            if(current_stack_frame_node_664) { current_stack_frame_node_664 = come_decrement_ref_count2(current_stack_frame_node_664, ((struct sNode*)current_stack_frame_node_664)->finalize, ((struct sNode*)current_stack_frame_node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_667,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block2_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_block_type_669,sType_finalize, 0, 0, 0, 0, (void*)0);
            class_name_670 = come_decrement_ref_count2(class_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_673,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(all_alhabet_sname_675,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_687) { node_687 = come_decrement_ref_count2(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
            method_block_name_689 = come_decrement_ref_count2(method_block_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value2_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result385__;
        }
        method_block_type2_692=fun2_691->mLambdaType;
        __dec_obj225=come_value2_690->c_value;
        come_value2_690->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_689));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj226=come_value2_690->type;
        come_value2_690->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_692));
        come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_690->var=((void*)0);
        list$1CVALUEphp_push_back(come_params_623,(struct CVALUE*)come_increment_ref_count(come_value2_690));
        __dec_obj227=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_683);
        come_call_finalizer3(__dec_obj227,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_684;
        info->head=head_685;
        info->sline=sline_686;
        info->current_stack_frame_struct=current_stack_frame_struct_671;
        if(current_stack_frame_node_664) { current_stack_frame_node_664 = come_decrement_ref_count2(current_stack_frame_node_664, ((struct sNode*)current_stack_frame_node_664)->finalize, ((struct sNode*)current_stack_frame_node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_667,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_668,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_669,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_670 = come_decrement_ref_count2(class_name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_673,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_675,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_683,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_687) { node_687 = come_decrement_ref_count2(node_687, ((struct sNode*)node_687)->finalize, ((struct sNode*)node_687)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_689 = come_decrement_ref_count2(method_block_name_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_690,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1322, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_693,fun_name_484);
    buffer_append_str(buf_693,"(");
    j_694=0;
    for(    o2_saved_695=(struct list$1CVALUEph*)come_increment_ref_count((come_params_623)),it_696=list$1CVALUEphp_begin((o2_saved_695));    !list$1CVALUEphp_end((o2_saved_695));    it_696=list$1CVALUEphp_next((o2_saved_695))    ){
        buffer_append_str(buf_693,it_696->c_value);
        if(        j_694!=list$1CVALUEphp_length(come_params_623)-1) {
            buffer_append_str(buf_693,",");
        }
        j_694++;
    }
    come_call_finalizer3(o2_saved_695,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_693,")");
    come_value_697=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1339, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj228=come_value_697->c_value;
    come_value_697->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_693));
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj229=come_value_697->type;
    come_value_697->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_618));
    come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_697->type->mStatic=(_Bool)0;
    come_value_697->var=((void*)0);
    if(    fun_603->mResultType->mHeap) {
        append_object_to_right_values2(come_value_697,(struct sType*)come_increment_ref_count(result_type_618),info,(_Bool)0);
    }
    if(    string_operator_not_equals(info->come_fun->mName,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_calloc")&&string_operator_not_equals(info->come_fun->mName,"come_free_mem_of_heap_pool")&&string_operator_not_equals(info->come_fun->mName,"come_free")) {
        if(        string_operator_not_equals(fun_name_484,"come_alloc_mem_from_heap_pool")&&string_operator_not_equals(fun_name_484,"null_check")&&string_operator_not_equals(fun_name_484,"come_push_stackframe")&&string_operator_not_equals(fun_name_484,"come_pop_stackframe")) {
            __dec_obj230=come_value_697->c_value;
            come_value_697->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_697->c_value,come_value_697->type,info));
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    if(    !self->guard_break&&result_type_618->mGuardValue&&result_type_618->mPointerNum>0) {
        __dec_obj231=come_value_697->c_value;
        come_value_697->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value669=make_type_name_string(result_type_618,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),come_value_697->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value669 = come_decrement_ref_count2(__right_value669, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj232=come_value_697;
    come_value_697=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value_697),info));
    come_call_finalizer3(__dec_obj232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    add_come_last_code(info,"%s",come_value_697->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_697));
    info->calling_fun=fun_603;
    __result386__ = (_Bool)1;
    fun_name_484 = come_decrement_ref_count2(fun_name_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_618,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_619,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_693,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_697,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result386__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result322__;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_476;
struct list_item$1tuple2$2charphsNodephph* it_477;
void* __right_value422 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result327__;
    if(    self==((void*)0)) {
        __result322__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_476=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_477=self->head;
    while(it_477!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_476,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_477->item)));
        it_477=it_477->next;
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_476;
    come_call_finalizer3(result_476,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result323__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_474;
struct list_item$1tuple2$2charphsNodephph* prev_it_475;
    it_474=self->head;
    while(it_474!=((void*)0)) {
        prev_it_475=it_474;
        it_474=it_474->next;
        come_call_finalizer3(prev_it_475,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj142;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj142=self->item;
            come_call_finalizer3(__dec_obj142,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj143;
struct sNode* __dec_obj144;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj143=self->v1;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj144=self->v2;
            if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value416 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_478;
struct tuple2$2charphsNodeph* __dec_obj145;
void* __right_value417 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_479;
struct tuple2$2charphsNodeph* __dec_obj146;
void* __right_value418 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_480;
struct tuple2$2charphsNodeph* __dec_obj147;
struct list$1tuple2$2charphsNodephph* __result324__;
    if(    self->len==0) {
        litem_478=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value416=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_478->prev=((void*)0);
        litem_478->next=((void*)0);
        __dec_obj145=litem_478->item;
        litem_478->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj145,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_478;
        self->head=litem_478;
    }
    else if(    self->len==1) {
        litem_479=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value417=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_479->prev=self->head;
        litem_479->next=((void*)0);
        __dec_obj146=litem_479->item;
        litem_479->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj146,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_479;
        self->head->next=litem_479;
    }
    else {
        litem_480=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value418=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_480->prev=self->tail;
        litem_480->next=((void*)0);
        __dec_obj147=litem_480->item;
        litem_480->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj147,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_480;
        self->tail=litem_480;
    }
    self->len++;
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result325__;
void* __right_value419 = (void*)0;
struct tuple2$2charphsNodeph* result_481;
void* __right_value420 = (void*)0;
char* __dec_obj148;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj149;
struct tuple2$2charphsNodeph* __result326__;
    if(    self==(void*)0) {
        __result325__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    result_481=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj148=result_481->v1;
        result_481->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj149=result_481->v2;
        result_481->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result326__ = gComeFunResultObject = __result_obj__ = result_481;
    come_call_finalizer3(result_481,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj150;
struct sNode* __dec_obj151;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj150=self->v1;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj151=self->v2;
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_482;
struct list_item$1tuple2$2charphsNodephph* prev_it_483;
    it_482=self->head;
    while(it_482!=((void*)0)) {
        prev_it_483=it_482;
        it_482=it_482->next;
        come_call_finalizer3(prev_it_483,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunCallNode_finalize(struct sFunCallNode* self){
char* __dec_obj155;
char* __dec_obj156;
struct list$1tuple2$2charphsNodephph* __dec_obj157;
struct list$1voidph* __dec_obj158;
struct buffer* __dec_obj159;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj155=self->sname;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj156=self->fun_name;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj157=self->params;
            come_call_finalizer3(__dec_obj157,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj158=self->method_generics_types;
            come_call_finalizer3(__dec_obj158,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj159=self->method_block;
            come_call_finalizer3(__dec_obj159,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result331__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_492;
struct list_item$1CVALUEph* prev_it_493;
    it_492=self->head;
    while(it_492!=((void*)0)) {
        prev_it_493=it_492;
        it_492=it_492->next;
        come_call_finalizer3(prev_it_493,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj160;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj160=self->item;
            come_call_finalizer3(__dec_obj160,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_496;
struct tuple2$2charphsNodeph* __result333__;
struct tuple2$2charphsNodeph* __result334__;
struct tuple2$2charphsNodeph* result_497;
struct tuple2$2charphsNodeph* __result335__;
result_496 = (void*)0;
result_497 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_496,0,sizeof(struct tuple2$2charphsNodeph*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_496;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->head;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_497,0,sizeof(struct tuple2$2charphsNodeph*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_497;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_499;
struct tuple2$2charphsNodeph* __result336__;
struct tuple2$2charphsNodeph* __result337__;
struct tuple2$2charphsNodeph* result_500;
struct tuple2$2charphsNodeph* __result338__;
result_499 = (void*)0;
result_500 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_499,0,sizeof(struct tuple2$2charphsNodeph*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_499;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_500,0,sizeof(struct tuple2$2charphsNodeph*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_500;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_505;
int i_506;
void* __result340__;
void* default_value_507;
void* __result341__;
default_value_507 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_505=self->head;
    i_506=0;
    while(it_505!=((void*)0)) {
        if(        position==i_506) {
            __result340__ = gComeFunResultObject = __result_obj__ = it_505->item;
            gComeFunResultObject = (void*)0;
            return __result340__;
        }
        it_505=it_505->next;
        i_506++;
    }
    memset(&default_value_507,0,sizeof(void*));
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_507);
    come_call_finalizer3(default_value_507, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_511;
struct CVALUE* __result342__;
struct CVALUE* __result343__;
struct CVALUE* result_512;
struct CVALUE* __result344__;
result_511 = (void*)0;
result_512 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_511,0,sizeof(struct CVALUE*));
        __result342__ = gComeFunResultObject = __result_obj__ = result_511;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    self->it=self->head;
    if(    self->it) {
        __result343__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    memset(&result_512,0,sizeof(struct CVALUE*));
    __result344__ = gComeFunResultObject = __result_obj__ = result_512;
    gComeFunResultObject = (void*)0;
    return __result344__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_514;
struct CVALUE* __result345__;
struct CVALUE* __result346__;
struct CVALUE* result_515;
struct CVALUE* __result347__;
result_514 = (void*)0;
result_515 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_514,0,sizeof(struct CVALUE*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_514;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_515,0,sizeof(struct CVALUE*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_515;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj163;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj163=self->v1;
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_528;
int i_529;
struct CVALUE* __result350__;
struct CVALUE* default_value_530;
struct CVALUE* __result351__;
default_value_530 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_528=self->head;
    i_529=0;
    while(it_528!=((void*)0)) {
        if(        position==i_529) {
            __result350__ = gComeFunResultObject = __result_obj__ = it_528->item;
            gComeFunResultObject = (void*)0;
            return __result350__;
        }
        it_528=it_528->next;
        i_529++;
    }
    memset(&default_value_530,0,sizeof(struct CVALUE*));
    __result351__ = gComeFunResultObject = __result_obj__ = default_value_530;
    come_call_finalizer3(default_value_530,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_536;
int i_537;
void* default_value_538;
struct list$1voidph* __result352__;
struct list_item$1voidph* it_539;
int i_540;
void* __dec_obj164;
struct list$1voidph* __result353__;
default_value_538 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_536=self->len;
        for(        i_537=0;        i_537<position-len_536;        i_537++        ){
            memset(&default_value_538,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_538));
            come_call_finalizer3(default_value_538, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result352__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result352__;
    }
    it_539=self->head;
    i_540=0;
    while(it_539!=((void*)0)) {
        if(        position==i_540) {
            __dec_obj164=it_539->item;
            it_539->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj164,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_539=it_539->next;
        i_540++;
    }
    __result353__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value461 = (void*)0;
struct list_item$1CVALUEph* litem_554;
struct CVALUE* __dec_obj165;
void* __right_value462 = (void*)0;
struct list_item$1CVALUEph* litem_555;
struct CVALUE* __dec_obj166;
void* __right_value463 = (void*)0;
struct list_item$1CVALUEph* litem_556;
struct CVALUE* __dec_obj167;
struct list$1CVALUEph* __result355__;
    if(    self->len==0) {
        litem_554=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value461=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1382, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_554->prev=((void*)0);
        litem_554->next=((void*)0);
        __dec_obj165=litem_554->item;
        litem_554->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_554;
        self->head=litem_554;
    }
    else if(    self->len==1) {
        litem_555=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value462=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1392, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_555->prev=self->head;
        litem_555->next=((void*)0);
        __dec_obj166=litem_555->item;
        litem_555->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_555;
        self->head->next=litem_555;
    }
    else {
        litem_556=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value463=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1402, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_556->prev=self->tail;
        litem_556->next=((void*)0);
        __dec_obj167=litem_556->item;
        litem_556->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_556;
        self->tail=litem_556;
    }
    self->len++;
    __result355__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_remove(struct map$2voidphvoidph* self, void* key){
void* __result_obj__=(void*)0;
unsigned int hash_562;
unsigned int it_563;
struct map$2voidphvoidph* __result356__;
    hash_562=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_563=hash_562;
    while((_Bool)1) {
        if(        self->item_existance[it_563]) {
            if(            come_call_equals((void*)0, self->keys[it_563], key)) {
                list$1voidpp_remove(self->key_list,self->keys[it_563]);
                self->item_existance[it_563]=(_Bool)0;
                if(                1) {
                    come_call_finalizer3(self->keys[it_563], (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->keys[it_563]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_563], (void*)0, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_563]=((void*)0);
                self->len--;
                break;
            }
            it_563++;
            if(            it_563>=self->size) {
                it_563=0;
            }
            else if(            it_563==hash_562) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result356__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_633;
char* __result365__;
char* __result366__;
char* result_634;
char* __result367__;
result_633 = (void*)0;
result_634 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_633,0,sizeof(char*));
        __result365__ = gComeFunResultObject = __result_obj__ = result_633;
        gComeFunResultObject = (void*)0;
        return __result365__;
    }
    self->it=self->head;
    if(    self->it) {
        __result366__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    memset(&result_634,0,sizeof(char*));
    __result367__ = gComeFunResultObject = __result_obj__ = result_634;
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_636;
char* __result368__;
char* __result369__;
char* result_637;
char* __result370__;
result_636 = (void*)0;
result_637 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_636,0,sizeof(char*));
        __result368__ = gComeFunResultObject = __result_obj__ = result_636;
        gComeFunResultObject = (void*)0;
        return __result368__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result369__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    memset(&result_637,0,sizeof(char*));
    __result370__ = gComeFunResultObject = __result_obj__ = result_637;
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_638;
int i_639;
struct CVALUE* default_value_640;
struct list$1CVALUEph* __result371__;
struct list_item$1CVALUEph* it_641;
int i_642;
struct CVALUE* __dec_obj220;
struct list$1CVALUEph* __result372__;
default_value_640 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_638=self->len;
        for(        i_639=0;        i_639<position-len_638;        i_639++        ){
            memset(&default_value_640,0,sizeof(struct CVALUE*));
            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_640));
            come_call_finalizer3(default_value_640,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result371__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    it_641=self->head;
    i_642=0;
    while(it_641!=((void*)0)) {
        if(        position==i_642) {
            __dec_obj220=it_641->item;
            it_641->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj220,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_641=it_641->next;
        i_642++;
    }
    __result372__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_653;
int i_654;
char* __result375__;
char* default_value_655;
char* __result376__;
default_value_655 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_653=self->head;
    i_654=0;
    while(it_653!=((void*)0)) {
        if(        position==i_654) {
            __result375__ = gComeFunResultObject = __result_obj__ = it_653->item;
            gComeFunResultObject = (void*)0;
            return __result375__;
        }
        it_653=it_653->next;
        i_654++;
    }
    memset(&default_value_655,0,sizeof(char*));
    __result376__ = gComeFunResultObject = __result_obj__ = default_value_655;
    default_value_655 = come_decrement_ref_count2(default_value_655, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result376__;
}

static struct sCurrentNode2* sCurrentNode2_clone(struct sCurrentNode2* self){
void* __result_obj__=(void*)0;
struct sCurrentNode2* __result380__;
void* __right_value628 = (void*)0;
struct sCurrentNode2* result_665;
void* __right_value629 = (void*)0;
char* __dec_obj223;
struct sCurrentNode2* __result381__;
    if(    self==(void*)0) {
        __result380__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    result_665=(struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "sCurrentNode2_clone", 3, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_665->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj223=result_665->sname;
        result_665->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_665->sline_real=self->sline_real;
    }
    __result381__ = gComeFunResultObject = __result_obj__ = result_665;
    come_call_finalizer3(result_665,sCurrentNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

struct sComeCallNode* sComeCallNode_initialize(struct sComeCallNode* self, struct buffer* come_block, int come_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value672 = (void*)0;
struct buffer* __dec_obj233;
struct sComeCallNode* __result387__;
    ((struct sNodeBase*)(__right_value672=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value672,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj233=self->come_block;
    self->come_block=(struct buffer*)come_increment_ref_count(come_block);
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->come_block_sline=come_block_sline;
    __result387__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

char* sComeCallNode_kind(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
void* __right_value673 = (void*)0;
char* __result388__;
    __result388__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value673=__builtin_string("sComeCallNode")));
    __right_value673 = come_decrement_ref_count2(__right_value673, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

_Bool sComeCallNode_terminated(struct sComeCallNode* self){
    return (_Bool)1;
}

_Bool sComeCallNode_compile(struct sComeCallNode* self, struct sInfo* info){
int come_block_sline_698;
struct buffer* come_block_699;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct list$1CVALUEph* come_params_700;
void* __right_value676 = (void*)0;
char* var_name_702;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* type__703;
_Bool __result389__;
void* __right_value680 = (void*)0;
struct sNode* var_node_704;
_Bool Value_705;
_Bool __result390__;
void* __right_value681 = (void*)0;
struct CVALUE* thread_var_value_706;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct CVALUE* come_value_707;
void* __right_value684 = (void*)0;
char* __dec_obj236;
struct sType* __dec_obj237;
void* __right_value685 = (void*)0;
struct sNode* null_node_708;
_Bool Value_709;
_Bool __result391__;
void* __right_value686 = (void*)0;
struct CVALUE* __dec_obj238;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct sNode* _inf_value2;
struct sCurrentNode2* _inf_obj_value2;
void* __right_value689 = (void*)0;
struct sNode* current_stack_frame_node_710;
_Bool Value_711;
_Bool __result392__;
void* __right_value690 = (void*)0;
struct CVALUE* current_stack_frame_value_712;
void* __right_value691 = (void*)0;
char* fun_name_713;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct buffer* come_block2_714;
void* __right_value694 = (void*)0;
char* class_name_715;
void* __right_value695 = (void*)0;
struct sClass* current_stack_frame_struct_716;
void* __right_value696 = (void*)0;
struct buffer* source3_717;
char* p_718;
char* head_719;
int sline_720;
struct buffer* __dec_obj239;
void* __right_value697 = (void*)0;
struct sNode* node_721;
_Bool Value_722;
_Bool __result393__;
struct buffer* __dec_obj240;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct CVALUE* fun_value_723;
void* __right_value700 = (void*)0;
char* __dec_obj241;
struct sType* __dec_obj242;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct buffer* buf_724;
void* __right_value703 = (void*)0;
char* fun_name_725;
int j_726;
struct list$1CVALUEph* o2_saved_727;
struct CVALUE* it_728;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct CVALUE* come_value_729;
void* __right_value706 = (void*)0;
char* __dec_obj243;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sType* type_730;
_Bool __result394__;
struct sType* __dec_obj244;
_Bool __result395__;
    come_block_sline_698=self->come_block_sline;
    come_block_699=(struct buffer*)come_increment_ref_count(self->come_block);
    come_params_700=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1396, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    static int thread_num_701=0;
    thread_num_701++;
    var_name_702=(char*)come_increment_ref_count(xsprintf("__thread_info%d",thread_num_701));
    type__703=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value678=map$2voidphvoidphp_at(info->types,((char*)(__right_value677=xsprintf("pthread_t"))),((void*)0)))))));
    __right_value677 = come_decrement_ref_count2(__right_value677, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value678,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    type__703==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result389__ = (_Bool)0;
        come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result389__;
    }
    var_node_704=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(var_name_702),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type__703),(_Bool)1,((void*)0),info));
    Value_705=node_compile(var_node_704,info);
    if(    !Value_705) {
        __result390__ = (_Bool)0;
        come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_704) { var_node_704 = come_decrement_ref_count2(var_node_704, ((struct sNode*)var_node_704)->finalize, ((struct sNode*)var_node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result390__;
    }
    else {
    }
    thread_var_value_706=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_707=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1419, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj236=come_value_707->c_value;
    come_value_707->c_value=(char*)come_increment_ref_count(xsprintf("&%s",thread_var_value_706->c_value));
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=come_value_707->type;
    come_value_707->type=(struct sType*)come_increment_ref_count(thread_var_value_706->type);
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_707->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_700,(struct CVALUE*)come_increment_ref_count(come_value_707));
    null_node_708=(struct sNode*)come_increment_ref_count(create_null_node(info));
    Value_709=node_compile(null_node_708,info);
    if(    !Value_709) {
        __result391__ = (_Bool)0;
        come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_704) { var_node_704 = come_decrement_ref_count2(var_node_704, ((struct sNode*)var_node_704)->finalize, ((struct sNode*)var_node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_706,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_708) { null_node_708 = come_decrement_ref_count2(null_node_708, ((struct sNode*)null_node_708)->finalize, ((struct sNode*)null_node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result391__;
    }
    else {
    }
    __dec_obj238=come_value_707;
    come_value_707=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    come_call_finalizer3(__dec_obj238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    dec_stack_ptr(1,info);
    list$1CVALUEphp_push_back(come_params_700,(struct CVALUE*)come_increment_ref_count(come_value_707));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1437, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sCurrentNode2*)come_increment_ref_count(((struct sCurrentNode2*)(__right_value688=sCurrentNode2_initialize((struct sCurrentNode2*)come_increment_ref_count((struct sCurrentNode2*)come_calloc(1, sizeof(struct sCurrentNode2)*(1), "05call.c", 1437, "struct sCurrentNode2*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sCurrentNode2_finalize;
    _inf_value2->clone=(void*)sCurrentNode2_clone;
    _inf_value2->compile=(void*)sCurrentNode2_compile;
    _inf_value2->sline=(void*)sCurrentNode2_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sCurrentNode2_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sCurrentNode2_kind;
    current_stack_frame_node_710=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value688,sCurrentNode2_finalize, 0, 1, 0, 0, (void*)0);
    Value_711=node_compile(current_stack_frame_node_710,info);
    if(    !Value_711) {
        __result392__ = (_Bool)0;
        come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_704) { var_node_704 = come_decrement_ref_count2(var_node_704, ((struct sNode*)var_node_704)->finalize, ((struct sNode*)var_node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_706,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_708) { null_node_708 = come_decrement_ref_count2(null_node_708, ((struct sNode*)null_node_708)->finalize, ((struct sNode*)null_node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_710) { current_stack_frame_node_710 = come_decrement_ref_count2(current_stack_frame_node_710, ((struct sNode*)current_stack_frame_node_710)->finalize, ((struct sNode*)current_stack_frame_node_710)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result392__;
    }
    else {
    }
    current_stack_frame_value_712=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    fun_name_713=(char*)come_increment_ref_count(xsprintf("__thread_fun%d",thread_num_701));
    come_block2_714=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1448, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    class_name_715=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    buffer_append_format(come_block2_714,"void* %s(%s* parent)\n",fun_name_713,class_name_715);
    buffer_append_str(come_block2_714,((char*)(__right_value695=buffer_to_string(come_block_699))));
    __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_716=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)((void*)(__right_value696=map$2voidphvoidphp_operator_load_element(info->classes,class_name_715))));
    come_call_finalizer3(__right_value696,(void*)0, 0, 1, 0, 0, (void*)0);
    source3_717=(struct buffer*)come_increment_ref_count(info->source);
    p_718=info->p;
    head_719=info->head;
    sline_720=info->sline;
    __dec_obj239=info->source;
    info->source=(struct buffer*)come_increment_ref_count(come_block2_714);
    come_call_finalizer3(__dec_obj239,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=come_block_sline_698;
    node_721=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_722=node_compile(node_721,info);
    if(    !Value_722) {
        __result393__ = (_Bool)0;
        come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_704) { var_node_704 = come_decrement_ref_count2(var_node_704, ((struct sNode*)var_node_704)->finalize, ((struct sNode*)var_node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_706,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_708) { null_node_708 = come_decrement_ref_count2(null_node_708, ((struct sNode*)null_node_708)->finalize, ((struct sNode*)null_node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_710) { current_stack_frame_node_710 = come_decrement_ref_count2(current_stack_frame_node_710, ((struct sNode*)current_stack_frame_node_710)->finalize, ((struct sNode*)current_stack_frame_node_710)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_713 = come_decrement_ref_count2(fun_name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_715 = come_decrement_ref_count2(class_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_721) { node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result393__;
    }
    else {
    }
    __dec_obj240=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_717);
    come_call_finalizer3(__dec_obj240,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_718;
    info->head=head_719;
    info->sline=sline_720;
    info->current_stack_frame_struct=current_stack_frame_struct_716;
    fun_value_723=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1482, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj241=fun_value_723->c_value;
    fun_value_723->c_value=(char*)come_increment_ref_count(xsprintf("(((void* (*)(void*))(%s)))",fun_name_713));
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj242=come_value_707->type;
    come_value_707->type=((void*)0);
    come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_707->var=((void*)0);
    list$1CVALUEphp_add(come_params_700,(struct CVALUE*)come_increment_ref_count(fun_value_723));
    list$1CVALUEphp_add(come_params_700,(struct CVALUE*)come_increment_ref_count(current_stack_frame_value_712));
    buf_724=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1492, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    fun_name_713 = come_decrement_ref_count2(fun_name_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_725=(char*)come_increment_ref_count(xsprintf("pthread_create"));
    buffer_append_str(buf_724,"(");
    buffer_append_str(buf_724,fun_name_725);
    buffer_append_str(buf_724,"(");
    j_726=0;
    for(    o2_saved_727=(struct list$1CVALUEph*)come_increment_ref_count((come_params_700)),it_728=list$1CVALUEphp_begin((o2_saved_727));    !list$1CVALUEphp_end((o2_saved_727));    it_728=list$1CVALUEphp_next((o2_saved_727))    ){
        buffer_append_str(buf_724,it_728->c_value);
        if(        j_726!=list$1CVALUEphp_length(come_params_700)-1) {
            buffer_append_str(buf_724,",");
        }
        j_726++;
    }
    come_call_finalizer3(o2_saved_727,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_724,")");
    buffer_append_str(buf_724,", ");
    buffer_append_str(buf_724,thread_var_value_706->c_value);
    buffer_append_str(buf_724,")");
    come_call_finalizer3(come_value_707,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_729=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1515, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj243=come_value_729->c_value;
    come_value_729->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_724));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    type_730=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value708=map$2voidphvoidphp_at(info->types,((char*)(__right_value707=xsprintf("pthread_t"))),((void*)0)))))));
    __right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value708,(void*)0, 0, 1, 0, 0, (void*)0);
    if(    type_730==((void*)0)) {
        err_msg(info,"pthread_t is not defined");
        __result394__ = (_Bool)0;
        come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(var_node_704) { var_node_704 = come_decrement_ref_count2(var_node_704, ((struct sNode*)var_node_704)->finalize, ((struct sNode*)var_node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(thread_var_value_706,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        if(null_node_708) { null_node_708 = come_decrement_ref_count2(null_node_708, ((struct sNode*)null_node_708)->finalize, ((struct sNode*)null_node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(current_stack_frame_node_710) { current_stack_frame_node_710 = come_decrement_ref_count2(current_stack_frame_node_710, ((struct sNode*)current_stack_frame_node_710)->finalize, ((struct sNode*)current_stack_frame_node_710)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(current_stack_frame_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_block2_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
        class_name_715 = come_decrement_ref_count2(class_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_721) { node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(fun_value_723,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_724,buffer_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_725 = come_decrement_ref_count2(fun_name_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value_729,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result394__;
    }
    __dec_obj244=come_value_729->type;
    come_value_729->type=(struct sType*)come_increment_ref_count(type_730);
    come_call_finalizer3(__dec_obj244,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_729->var=((void*)0);
    add_come_last_code(info,"%s",come_value_729->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_729));
    __result395__ = (_Bool)1;
    come_call_finalizer3(come_block_699,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_700,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    var_name_702 = come_decrement_ref_count2(var_name_702, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type__703,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(var_node_704) { var_node_704 = come_decrement_ref_count2(var_node_704, ((struct sNode*)var_node_704)->finalize, ((struct sNode*)var_node_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(thread_var_value_706,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    if(null_node_708) { null_node_708 = come_decrement_ref_count2(null_node_708, ((struct sNode*)null_node_708)->finalize, ((struct sNode*)null_node_708)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(current_stack_frame_node_710) { current_stack_frame_node_710 = come_decrement_ref_count2(current_stack_frame_node_710, ((struct sNode*)current_stack_frame_node_710)->finalize, ((struct sNode*)current_stack_frame_node_710)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(current_stack_frame_value_712,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_block2_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
    class_name_715 = come_decrement_ref_count2(class_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_721) { node_721 = come_decrement_ref_count2(node_721, ((struct sNode*)node_721)->finalize, ((struct sNode*)node_721)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(fun_value_723,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_724,buffer_finalize, 0, 0, 0, 0, (void*)0);
    fun_name_725 = come_decrement_ref_count2(fun_name_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_729,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_730,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result395__;
}

static void sComeCallNode_finalize(struct sComeCallNode* self){
char* __dec_obj234;
struct buffer* __dec_obj235;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj234=self->sname;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        if(        self->come_block==gComeFunResultObject) {
            __dec_obj235=self->come_block;
            come_call_finalizer3(__dec_obj235,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->come_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sComeJoinNode* sComeJoinNode_initialize(struct sComeJoinNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value710 = (void*)0;
struct sNode* __dec_obj245;
struct sComeJoinNode* __result396__;
    ((struct sNodeBase*)(__right_value710=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value710,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj245=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
    __result396__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result396__;
}

char* sComeJoinNode_kind(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
void* __right_value711 = (void*)0;
char* __result397__;
    __result397__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value711=__builtin_string("sComeJoinNode")));
    __right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

_Bool sComeJoinNode_terminated(struct sComeJoinNode* self){
    return (_Bool)0;
}

_Bool sComeJoinNode_compile(struct sComeJoinNode* self, struct sInfo* info){
struct sNode* node_731;
_Bool Value_732;
_Bool __result398__;
void* __right_value712 = (void*)0;
struct CVALUE* come_value_733;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct buffer* buf_734;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct CVALUE* come_value_735;
void* __right_value717 = (void*)0;
char* __dec_obj248;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sType* __dec_obj249;
_Bool __result399__;
    node_731=(struct sNode*)come_increment_ref_count(self->node);
    Value_732=node_compile(node_731,info);
    if(    !Value_732) {
        __result398__ = (_Bool)0;
        if(node_731) { node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result398__;
    }
    else {
    }
    come_value_733=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    buf_734=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1563, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_734,"pthread_join(");
    buffer_append_str(buf_734,come_value_733->c_value);
    buffer_append_str(buf_734,", 0)");
    come_call_finalizer3(come_value_733,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_value_735=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1568, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj248=come_value_735->c_value;
    come_value_735->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_734));
    __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj249=come_value_735->type;
    come_value_735->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 1570, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",info,info));
    come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_735->var=((void*)0);
    add_come_last_code(info,"%s",come_value_735->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_735));
    __result399__ = (_Bool)1;
    if(node_731) { node_731 = come_decrement_ref_count2(node_731, ((struct sNode*)node_731)->finalize, ((struct sNode*)node_731)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(buf_734,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_735,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result399__;
}

static void sComeJoinNode_finalize(struct sComeJoinNode* self){
char* __dec_obj246;
struct sNode* __dec_obj247;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj246=self->sname;
            __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj247=self->node;
            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sComePollNode* sComePollNode_initialize(struct sComePollNode* self, struct list$1sNodeph* vars, struct list$1sBlockph* blocks, struct sBlock* else_block, int time_out, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value720 = (void*)0;
struct list$1sNodeph* __dec_obj250;
struct list$1sBlockph* __dec_obj251;
struct sBlock* __dec_obj255;
struct sComePollNode* __result400__;
    ((struct sNodeBase*)(__right_value720=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value720,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj250=self->vars;
    self->vars=(struct list$1sNodeph*)come_increment_ref_count(vars);
    come_call_finalizer3(__dec_obj250,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj251=self->blocks;
    self->blocks=(struct list$1sBlockph*)come_increment_ref_count(blocks);
    come_call_finalizer3(__dec_obj251,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj255=self->else_block;
    self->else_block=(struct sBlock*)come_increment_ref_count(else_block);
    come_call_finalizer3(__dec_obj255,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->time_out=time_out;
    __result400__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

char* sComePollNode_kind(struct sComePollNode* self){
void* __result_obj__=(void*)0;
void* __right_value721 = (void*)0;
char* __result401__;
    __result401__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value721=__builtin_string("sComePollNode")));
    __right_value721 = come_decrement_ref_count2(__right_value721, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

_Bool sComePollNode_terminated(struct sComePollNode* self){
    return (_Bool)1;
}

_Bool sComePollNode_compile(struct sComePollNode* self, struct sInfo* info){
struct list$1sNodeph* vars_740;
struct list$1sBlockph* blocks_741;
int time_out_742;
int n_744;
struct list$1sNodeph* o2_saved_745;
struct sNode* it_748;
_Bool Value_751;
_Bool __result408__;
void* __right_value722 = (void*)0;
struct CVALUE* come_value_752;
int n_753;
struct list$1sNodeph* o2_saved_754;
struct sNode* it_755;
void* __right_value723 = (void*)0;
_Bool __result411__;
    vars_740=(struct list$1sNodeph*)come_increment_ref_count(self->vars);
    blocks_741=(struct list$1sBlockph*)come_increment_ref_count(self->blocks);
    time_out_742=self->time_out;
    static int var_num_743=0;
    var_num_743++;
    add_come_code(info,"struct pollfd fds%d[%d];\n",var_num_743,list$1sNodephp_length(vars_740));
    n_744=0;
    for(    o2_saved_745=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_748=list$1sNodephp_begin((o2_saved_745));    !list$1sNodephp_end((o2_saved_745));    it_748=list$1sNodephp_next((o2_saved_745))    ){
        Value_751=node_compile(it_748,info);
        if(        !Value_751) {
            __result408__ = (_Bool)0;
            come_call_finalizer3(o2_saved_745,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(vars_740,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_741,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result408__;
        }
        else {
        }
        come_value_752=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        add_come_code(info,"fds%d[%d].fd = %s[0];\n",var_num_743,n_744,come_value_752->c_value);
        add_come_code(info,"fds%d[%d].events = %d;\n",var_num_743,n_744,1);
        n_744++;
        come_call_finalizer3(come_value_752,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_745,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"int poll_ret%d = poll(fds%d, %d, %d);\n",var_num_743,var_num_743,list$1sNodephp_length(vars_740),time_out_742);
    add_come_code(info,"if(poll_ret%d > 0) {\n",var_num_743);
    n_753=0;
    for(    o2_saved_754=(struct list$1sNodeph*)come_increment_ref_count((self->vars)),it_755=list$1sNodephp_begin((o2_saved_754));    !list$1sNodephp_end((o2_saved_754));    it_755=list$1sNodephp_next((o2_saved_754))    ){
        add_come_code(info,"if(fds%d[%d].revents & %d) {\n",var_num_743,n_753,1);
        transpile_block(((struct sBlock*)(__right_value723=list$1sBlockphp_operator_load_element(blocks_741,n_753))),((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        come_call_finalizer3(__right_value723,sBlock_finalize, 0, 1, 0, 0, (void*)0);
        add_come_code(info,"}\n");
        n_753++;
    }
    come_call_finalizer3(o2_saved_754,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    add_come_code(info,"}\n");
    add_come_code(info,"else {\n",var_num_743);
    transpile_block(self->else_block,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    __result411__ = (_Bool)1;
    come_call_finalizer3(vars_740,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(blocks_741,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    return __result411__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_736;
struct list_item$1sBlockph* prev_it_737;
    it_736=self->head;
    while(it_736!=((void*)0)) {
        prev_it_737=it_736;
        it_736=it_736->next;
        come_call_finalizer3(prev_it_737,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj252;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj252=self->item;
            come_call_finalizer3(__dec_obj252,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj253;
struct sVarTable* __dec_obj254;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj253=self->mNodes;
            come_call_finalizer3(__dec_obj253,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj254=self->mVarTable;
            come_call_finalizer3(__dec_obj254,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sComePollNode_finalize(struct sComePollNode* self){
char* __dec_obj256;
struct list$1sNodeph* __dec_obj257;
struct list$1sBlockph* __dec_obj258;
struct sBlock* __dec_obj259;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj256=self->sname;
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        if(        self->vars==gComeFunResultObject) {
            __dec_obj257=self->vars;
            come_call_finalizer3(__dec_obj257,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->vars,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        if(        self->blocks==gComeFunResultObject) {
            __dec_obj258=self->blocks;
            come_call_finalizer3(__dec_obj258,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->blocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        if(        self->else_block==gComeFunResultObject) {
            __dec_obj259=self->else_block;
            come_call_finalizer3(__dec_obj259,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->else_block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_738;
struct list_item$1sBlockph* prev_it_739;
    it_738=self->head;
    while(it_738!=((void*)0)) {
        prev_it_739=it_738;
        it_738=it_738->next;
        come_call_finalizer3(prev_it_739,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_746;
struct sNode* __result402__;
struct sNode* __result403__;
struct sNode* result_747;
struct sNode* __result404__;
result_746 = (void*)0;
result_747 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_746,0,sizeof(struct sNode*));
        __result402__ = gComeFunResultObject = __result_obj__ = result_746;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    self->it=self->head;
    if(    self->it) {
        __result403__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    memset(&result_747,0,sizeof(struct sNode*));
    __result404__ = gComeFunResultObject = __result_obj__ = result_747;
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_749;
struct sNode* __result405__;
struct sNode* __result406__;
struct sNode* result_750;
struct sNode* __result407__;
result_749 = (void*)0;
result_750 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_749,0,sizeof(struct sNode*));
        __result405__ = gComeFunResultObject = __result_obj__ = result_749;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result406__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    memset(&result_750,0,sizeof(struct sNode*));
    __result407__ = gComeFunResultObject = __result_obj__ = result_750;
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_756;
int i_757;
struct sBlock* __result409__;
struct sBlock* default_value_758;
struct sBlock* __result410__;
default_value_758 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_756=self->head;
    i_757=0;
    while(it_756!=((void*)0)) {
        if(        position==i_757) {
            __result409__ = gComeFunResultObject = __result_obj__ = it_756->item;
            gComeFunResultObject = (void*)0;
            return __result409__;
        }
        it_756=it_756->next;
        i_757++;
    }
    memset(&default_value_758,0,sizeof(struct sBlock*));
    __result410__ = gComeFunResultObject = __result_obj__ = default_value_758;
    come_call_finalizer3(default_value_758,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value3;
struct sFunCallNode* _inf_obj_value3;
void* __right_value732 = (void*)0;
struct sNode* node_759;
void* __right_value733 = (void*)0;
struct sNode* __dec_obj265;
struct sNode* __result414__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1654, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value725=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1654, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params,guard_break,(struct list$1voidph*)come_increment_ref_count(method_generics_types),(struct buffer*)come_increment_ref_count(method_block),method_block_sline,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunCallNode_finalize;
    _inf_value3->clone=(void*)sFunCallNode_clone;
    _inf_value3->compile=(void*)sFunCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sFunCallNode_terminated;
    _inf_value3->kind=(void*)sFunCallNode_kind;
    node_759=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value725,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj265=node_759;
    node_759=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_759),info));
    if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
    __result414__ = gComeFunResultObject = __result_obj__ = node_759;
    come_call_finalizer3(method_generics_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_759) { node_759 = come_decrement_ref_count2(node_759, ((struct sNode*)node_759)->finalize, ((struct sNode*)node_759)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static struct sFunCallNode* sFunCallNode_clone(struct sFunCallNode* self){
void* __result_obj__=(void*)0;
struct sFunCallNode* __result412__;
void* __right_value726 = (void*)0;
struct sFunCallNode* result_760;
void* __right_value727 = (void*)0;
char* __dec_obj260;
void* __right_value728 = (void*)0;
char* __dec_obj261;
void* __right_value729 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj262;
void* __right_value730 = (void*)0;
struct list$1voidph* __dec_obj263;
void* __right_value731 = (void*)0;
struct buffer* __dec_obj264;
struct sFunCallNode* __result413__;
    if(    self==(void*)0) {
        __result412__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result412__;
    }
    result_760=(struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "sFunCallNode_clone", 3, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_760->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj260=result_760->sname;
        result_760->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj261=result_760->fun_name;
        result_760->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj262=result_760->params;
        result_760->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj262,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->guard_break=self->guard_break;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj263=result_760->method_generics_types;
        result_760->method_generics_types=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj263,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj264=result_760->method_block;
        result_760->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj264,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->method_block_sline=self->method_block_sline;
    }
    __result413__ = gComeFunResultObject = __result_obj__ = result_760;
    come_call_finalizer3(result_760,sFunCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

struct sLambdaCall* sLambdaCall_initialize(struct sLambdaCall* self, struct sNode* node, struct list$1tuple2$2charphsNodephph* params, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value734 = (void*)0;
struct sNode* __dec_obj266;
void* __right_value735 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj267;
struct sLambdaCall* __result415__;
    ((struct sNodeBase*)(__right_value734=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value734,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj266=self->node;
    self->node=(struct sNode*)come_increment_ref_count(node);
    if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj267=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj267,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result415__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result415__;
}

char* sLambdaCall_kind(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
void* __right_value736 = (void*)0;
char* __result416__;
    __result416__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value736=__builtin_string("sLambdaCall")));
    __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

_Bool sLambdaCall_compile(struct sLambdaCall* self, struct sInfo* info){
struct sNode* node_761;
struct list$1tuple2$2charphsNodephph* params_762;
_Bool Value_763;
_Bool __result417__;
void* __right_value737 = (void*)0;
struct CVALUE* come_value_764;
struct sType* lambda_type_765;
_Bool __result418__;
void* __right_value738 = (void*)0;
struct sType* result_type_766;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct list$1CVALUEph* come_params_767;
_Bool __result419__;
int i_768;
struct list$1tuple2$2charphsNodephph* o2_saved_769;
struct tuple2$2charphsNodeph* it_770;
struct tuple2$2charphsNodeph* multiple_assign_var11 = (void*)0;
char* label_771=0;
struct sNode* node_772=0;
_Bool Value_773;
_Bool __result420__;
void* __right_value741 = (void*)0;
struct CVALUE* come_value_774;
void* __right_value742 = (void*)0;
_Bool _if_conditional18;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
_Bool _if_conditional19;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct buffer* buf_775;
int j_776;
struct list$1CVALUEph* o2_saved_777;
struct CVALUE* it_778;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct CVALUE* come_value2_779;
void* __right_value752 = (void*)0;
char* __dec_obj271;
void* __right_value753 = (void*)0;
struct sType* __dec_obj272;
_Bool __result421__;
    node_761=(struct sNode*)come_increment_ref_count(self->node);
    params_762=self->params;
    Value_763=node_compile(node_761,info);
    if(    !Value_763) {
        __result417__ = (_Bool)0;
        if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result417__;
    }
    else {
    }
    come_value_764=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    lambda_type_765=come_value_764->type;
    if(    lambda_type_765->mResultType==((void*)0)) {
        err_msg(info,"invalid lambda type");
        __result418__ = (_Bool)0;
        if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_764,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result418__;
    }
    result_type_766=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_765->mResultType));
    result_type_766->mStatic=(_Bool)0;
    come_params_767=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "05call.c", 1698, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    list$1voidphp_length(lambda_type_765->mParamTypes)!=list$1tuple2$2charphsNodephphp_length(params_762)&&!lambda_type_765->mVarArgs) {
        err_msg(info,"invalid param number. function param number is %d. caller param number is %d",list$1voidphp_length(lambda_type_765->mParamTypes),list$1tuple2$2charphsNodephphp_length(params_762));
        __result419__ = (_Bool)0;
        if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_764,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_767,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result419__;
    }
    i_768=0;
    for(    o2_saved_769=(params_762),it_770=list$1tuple2$2charphsNodephphp_begin((o2_saved_769));    !list$1tuple2$2charphsNodephphp_end((o2_saved_769));    it_770=list$1tuple2$2charphsNodephphp_next((o2_saved_769))    ){
        multiple_assign_var11=it_770;
        label_771=(char*)come_increment_ref_count(multiple_assign_var11->v1);
        node_772=(struct sNode*)come_increment_ref_count(multiple_assign_var11->v2);
        Value_773=node_compile(node_772,info);
        if(        !Value_773) {
            __result420__ = (_Bool)0;
            label_771 = come_decrement_ref_count2(label_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(come_value_764,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_params_767,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result420__;
        }
        else {
        }
        come_value_774=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        if(        (_if_conditional18=(lambda_type_765->mVarArgs&&((struct sType*)((void*)(__right_value742=list$1voidphp_operator_load_element(lambda_type_765->mParamTypes,i_768))))==((void*)0))),        come_call_finalizer3(__right_value742,(void*)0, 0, 1, 0, 0, (void*)0),
        _if_conditional18) {
        }
        else {
            check_assign_type(((char*)(__right_value744=xsprintf("calling param #\%s",((char*)(__right_value743=int_to_string(i_768)))))),((struct sType*)((void*)(__right_value745=list$1voidphp_operator_load_element(lambda_type_765->mParamTypes,i_768)))),come_value_774->type,come_value_774,(_Bool)0,(_Bool)1,(_Bool)0,info);
            __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value745,(void*)0, 0, 1, 0, 0, (void*)0);
            if(            (_if_conditional19=(((struct sType*)((void*)(__right_value746=list$1voidphp_operator_load_element(lambda_type_765->mParamTypes,i_768))))->mHeap&&come_value_774->type->mHeap)),            come_call_finalizer3(__right_value746,(void*)0, 0, 1, 0, 0, (void*)0),
            _if_conditional19) {
                std_move(((struct sType*)((void*)(__right_value747=list$1voidphp_operator_load_element(lambda_type_765->mParamTypes,i_768)))),come_value_774->type,come_value_774,info,(_Bool)1);
                come_call_finalizer3(__right_value747,(void*)0, 0, 1, 0, 0, (void*)0);
            }
        }
        list$1CVALUEphp_push_back(come_params_767,(struct CVALUE*)come_increment_ref_count(come_value_774));
        dec_stack_ptr(1,info);
        i_768++;
        label_771 = come_decrement_ref_count2(label_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_772) { node_772 = come_decrement_ref_count2(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_774,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    buf_775=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1729, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_775,"(");
    buffer_append_str(buf_775,come_value_764->c_value);
    buffer_append_str(buf_775,")");
    buffer_append_str(buf_775,"(");
    j_776=0;
    for(    o2_saved_777=(struct list$1CVALUEph*)come_increment_ref_count((come_params_767)),it_778=list$1CVALUEphp_begin((o2_saved_777));    !list$1CVALUEphp_end((o2_saved_777));    it_778=list$1CVALUEphp_next((o2_saved_777))    ){
        buffer_append_str(buf_775,it_778->c_value);
        if(        j_776!=list$1CVALUEphp_length(come_params_767)-1) {
            buffer_append_str(buf_775,",");
        }
        j_776++;
    }
    come_call_finalizer3(o2_saved_777,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_775,")");
    come_value2_779=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1748, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj271=come_value2_779->c_value;
    come_value2_779->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_775));
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    lambda_type_765->mResultType->mHeap) {
        append_object_to_right_values2(come_value2_779,(struct sType*)come_increment_ref_count(lambda_type_765->mResultType),info,(_Bool)0);
    }
    __dec_obj272=come_value2_779->type;
    come_value2_779->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_766));
    come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_779->type->mStatic=(_Bool)0;
    come_value2_779->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_779->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_779));
    __result421__ = (_Bool)1;
    if(node_761) { node_761 = come_decrement_ref_count2(node_761, ((struct sNode*)node_761)->finalize, ((struct sNode*)node_761)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_764,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_767,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_775,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_779,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result421__;
}

static void sLambdaCall_finalize(struct sLambdaCall* self){
char* __dec_obj268;
struct sNode* __dec_obj269;
struct list$1tuple2$2charphsNodephph* __dec_obj270;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj268=self->sname;
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj269=self->node;
            if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj270=self->params;
            come_call_finalizer3(__dec_obj270,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarArgTypeName* sVarArgTypeName_initialize(struct sVarArgTypeName* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value754 = (void*)0;
struct sType* __dec_obj273;
struct sVarArgTypeName* __result422__;
    ((struct sNodeBase*)(__right_value754=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value754,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj273=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result422__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result422__;
}

char* sVarArgTypeName_kind(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
void* __right_value755 = (void*)0;
char* __result423__;
    __result423__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value755=__builtin_string("sVarArgTypeName")));
    __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

_Bool sVarArgTypeName_compile(struct sVarArgTypeName* self, struct sInfo* info){
struct sType* type_780;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct CVALUE* come_value_781;
void* __right_value758 = (void*)0;
char* __dec_obj276;
struct sType* __dec_obj277;
_Bool __result424__;
    type_780=(struct sType*)come_increment_ref_count(self->type);
    come_value_781=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05call.c", 1785, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj276=come_value_781->c_value;
    come_value_781->c_value=(char*)come_increment_ref_count(make_type_name_string(type_780,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj277=come_value_781->type;
    come_value_781->type=(struct sType*)come_increment_ref_count(type_780);
    come_call_finalizer3(__dec_obj277,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_781->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_781));
    __result424__ = (_Bool)1;
    come_call_finalizer3(type_780,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_781,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result424__;
}

static void sVarArgTypeName_finalize(struct sVarArgTypeName* self){
char* __dec_obj274;
struct sType* __dec_obj275;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj274=self->sname;
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj275=self->type;
            come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_function_call(char* fun_name, struct sInfo* info, _Bool come_){
void* __result_obj__=(void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct list$1voidph* method_generics_types_782;
void* __right_value761 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12 = (void*)0;
struct sType* type_783=0;
char* name_784=0;
_Bool err_785=0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_786;
_Bool _va_arg_787;
char* p_788;
int sline_789;
_Bool err_flag_790;
void* __right_value765 = (void*)0;
char* label_791;
void* __right_value766 = (void*)0;
char* __dec_obj280;
char* __dec_obj281;
_Bool no_comma_792;
_Bool in_fun_param_793;
void* __right_value767 = (void*)0;
struct sNode* node_794;
void* __right_value768 = (void*)0;
struct sNode* __dec_obj282;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
_Bool guard_break_799;
struct buffer* method_block_800;
int method_block_sline_801;
char* head_802;
void* __right_value774 = (void*)0;
char* tail_803;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct buffer* __dec_obj288;
int len_804;
void* __right_value777 = (void*)0;
char* mem_805;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct sNode* _inf_value4;
struct sFunCallNode* _inf_obj_value4;
void* __right_value780 = (void*)0;
struct sNode* node_806;
void* __right_value781 = (void*)0;
struct sNode* __dec_obj289;
struct sNode* __result427__;
    method_generics_types_782=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05call.c", 1799, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    if(    *info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
            }
            else if(            *info->p==62) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value761=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_783=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                name_784=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                err_785=multiple_assign_var12->v3;
                come_call_finalizer3(__right_value761,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_785) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1voidphp_push_back(method_generics_types_782,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_783)));
                come_call_finalizer3(type_783,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_784 = come_decrement_ref_count2(name_784, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    parse_sharp_v5(info);
    expected_next_character(40,info);
    parse_sharp_v5(info);
    params_786=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 1837, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    _va_arg_787=info->va_arg;
    if(    charp_operator_equals(fun_name,"__builtin_va_arg")) {
        info->va_arg=(_Bool)1;
    }
    while((_Bool)1) {
        if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        p_788=info->p;
        sline_789=info->sline;
        err_flag_790=(_Bool)0;
        label_791=(char*)come_increment_ref_count(__builtin_string(""));
        if(        xisalpha(*info->p)||*info->p==95) {
            __dec_obj280=label_791;
            label_791=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            err_flag_790=(_Bool)1;
        }
        if(        err_flag_790==(_Bool)1&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            __dec_obj281=label_791;
            label_791=((void*)0);
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->p=p_788;
            info->sline=sline_789;
        }
        no_comma_792=info->no_comma;
        info->no_comma=(_Bool)1;
        in_fun_param_793=info->in_fun_param;
        info->in_fun_param=(_Bool)1;
        node_794=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj282=node_794;
        node_794=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_794),info));
        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_792;
        info->in_fun_param=in_fun_param_793;
        list$1tuple2$2charphsNodephphp_push_back(params_786,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 1885, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(label_791),(struct sNode*)come_increment_ref_count(node_794))));
        parse_sharp_v5(info);
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            label_791 = come_decrement_ref_count2(label_791, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        label_791 = come_decrement_ref_count2(label_791, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_794) { node_794 = come_decrement_ref_count2(node_794, ((struct sNode*)node_794)->finalize, ((struct sNode*)node_794)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->va_arg=_va_arg_787;
    guard_break_799=(_Bool)0;
    if(    *info->p==63&&*(info->p+1)==63) {
        info->p+=2;
        skip_spaces_and_lf(info);
        guard_break_799=(_Bool)1;
    }
    parse_sharp_v5(info);
    method_block_800=((void*)0);
    method_block_sline_801=0;
    if(    *info->p==123) {
        head_802=info->p;
        method_block_sline_801=info->sline;
        ((char*)(__right_value774=skip_block(info)));
        __right_value774 = come_decrement_ref_count2(__right_value774, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_803=info->p;
        __dec_obj288=method_block_800;
        method_block_800=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 1922, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_804=tail_803-head_802;
        mem_805=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_804+1)), "05call.c", 1925, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
        memcpy(mem_805,head_802,len_804);
        mem_805[len_804]=0;
        buffer_append_str(method_block_800,mem_805);
        buffer_append_str(method_block_800,"\n");
        mem_805 = come_decrement_ref_count2(mem_805, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1935, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunCallNode*)come_increment_ref_count(((struct sFunCallNode*)(__right_value779=sFunCallNode_initialize((struct sFunCallNode*)come_increment_ref_count((struct sFunCallNode*)come_calloc(1, sizeof(struct sFunCallNode)*(1), "05call.c", 1935, "struct sFunCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_name,params_786,guard_break_799,(struct list$1voidph*)come_increment_ref_count(method_generics_types_782),(struct buffer*)come_increment_ref_count(method_block_800),method_block_sline_801,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunCallNode_finalize;
    _inf_value4->clone=(void*)sFunCallNode_clone;
    _inf_value4->compile=(void*)sFunCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sFunCallNode_terminated;
    _inf_value4->kind=(void*)sFunCallNode_kind;
    node_806=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value779,sFunCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj289=node_806;
    node_806=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_806),info));
    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    __result427__ = gComeFunResultObject = __result_obj__ = node_806;
    come_call_finalizer3(method_generics_types_782,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_786,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_800,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_806) { node_806 = come_decrement_ref_count2(node_806, ((struct sNode*)node_806)->finalize, ((struct sNode*)node_806)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result427__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj278;
char* __dec_obj279;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj278=self->v1;
            come_call_finalizer3(__dec_obj278,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj279=self->v2;
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value769 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_795;
struct tuple2$2charphsNodeph* __dec_obj283;
void* __right_value770 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_796;
struct tuple2$2charphsNodeph* __dec_obj284;
void* __right_value771 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_797;
struct tuple2$2charphsNodeph* __dec_obj285;
struct list$1tuple2$2charphsNodephph* __result425__;
    if(    self->len==0) {
        litem_795=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value769=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1452, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_795->prev=((void*)0);
        litem_795->next=((void*)0);
        __dec_obj283=litem_795->item;
        litem_795->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj283,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_795;
        self->head=litem_795;
    }
    else if(    self->len==1) {
        litem_796=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value770=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1462, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_796->prev=self->head;
        litem_796->next=((void*)0);
        __dec_obj284=litem_796->item;
        litem_796->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj284,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_796;
        self->head->next=litem_796;
    }
    else {
        litem_797=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value771=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1472, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_797->prev=self->tail;
        litem_797->next=((void*)0);
        __dec_obj285=litem_797->item;
        litem_797->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj285,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_797;
        self->tail=litem_797;
    }
    self->len++;
    __result425__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result425__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_798;
    result_798=0;
    result_798+=int_get_hash_key(((int)self->v1));
    result_798+=int_get_hash_key(((int)self->v2));
    return result_798;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj286;
struct sNode* __dec_obj287;
struct tuple2$2charphsNodeph* __result426__;
    __dec_obj286=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj287=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
    __result426__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result426__;
}

struct sNode* expression_node_v1(struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result428__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    info->no_output_err=(_Bool)0;
    err_msg(info,"invalid character(1)(%d)(%c)\n",*info->p,*info->p);
    stackframe();
    exit(3);
    __result428__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sNode* _inf_value5;
struct sReturnNode* _inf_obj_value5;
void* __right_value788 = (void*)0;
struct sNode* __result431__;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1956, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value783=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1956, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value),(char*)come_increment_ref_count(value_source),info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sReturnNode_finalize;
    _inf_value5->clone=(void*)sReturnNode_clone;
    _inf_value5->compile=(void*)sReturnNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sNodeBase_terminated;
    _inf_value5->kind=(void*)sReturnNode_kind;
    __result431__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value788=_inf_value5));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    value_source = come_decrement_ref_count2(value_source, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value783,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value788) { __right_value788 = come_decrement_ref_count2(__right_value788, ((struct sNode*)__right_value788)->finalize, ((struct sNode*)__right_value788)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result431__;
}

static struct sReturnNode* sReturnNode_clone(struct sReturnNode* self){
void* __result_obj__=(void*)0;
struct sReturnNode* __result429__;
void* __right_value784 = (void*)0;
struct sReturnNode* result_807;
void* __right_value785 = (void*)0;
char* __dec_obj290;
void* __right_value786 = (void*)0;
struct sNode* __dec_obj291;
void* __right_value787 = (void*)0;
char* __dec_obj292;
struct sReturnNode* __result430__;
    if(    self==(void*)0) {
        __result429__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result429__;
    }
    result_807=(struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "sReturnNode_clone", 3, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_807->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj290=result_807->sname;
        result_807->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_807->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj291=result_807->value;
        result_807->value=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->value));
        if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->value_source!=((void*)0)) {
        __dec_obj292=result_807->value_source;
        result_807->value_source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value_source));
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result430__ = gComeFunResultObject = __result_obj__ = result_807;
    come_call_finalizer3(result_807,sReturnNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result430__;
}

struct sNode* expression_node_v97(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value6;
struct sReturnNode* _inf_obj_value6;
void* __right_value792 = (void*)0;
struct sNode* __result432__;
char* head_808;
void* __right_value793 = (void*)0;
struct sNode* value_809;
char* tail_810;
void* __right_value794 = (void*)0;
struct sNode* __dec_obj293;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sNode* _inf_value7;
struct sReturnNode* _inf_obj_value7;
void* __right_value798 = (void*)0;
struct sNode* __result433__;
int nest_812;
char* head_813;
int head_sline_814;
int sline_real_815;
void* __right_value799 = (void*)0;
char* buf_816;
_Bool is_type_name__817;
_Bool is_special_word_819;
_Bool define_function_pointer_flag_820;
void* __right_value800 = (void*)0;
_Bool lambda_flag_821;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
char* word2_822;
_Bool fun_name_with_type_name_823;
void* __right_value803 = (void*)0;
char* word2_824;
_Bool call_method_generics_fun_call_825;
void* __right_value804 = (void*)0;
char* __dec_obj294;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
_Bool _if_conditional20;
int nest_826;
_Bool inline_asm_827;
void* __right_value809 = (void*)0;
char* __dec_obj295;
void* __right_value810 = (void*)0;
char* __dec_obj296;
void* __right_value811 = (void*)0;
char* __dec_obj297;
void* __right_value812 = (void*)0;
struct sNode* node_828;
struct sNode* __result434__;
_Bool no_comma_829;
void* __right_value813 = (void*)0;
struct sNode* exp_830;
void* __right_value814 = (void*)0;
struct sNode* exp2_831;
void* __right_value815 = (void*)0;
struct sNode* __result435__;
void* __right_value816 = (void*)0;
char* block_text_832;
char* contents_833;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct sNode* _inf_value8;
struct sOutputNode* _inf_obj_value8;
void* __right_value822 = (void*)0;
struct sNode* __result438__;
void* __right_value823 = (void*)0;
struct sNode* node_835;
struct sNode* __result439__;
void* __right_value824 = (void*)0;
struct sNode* node_836;
struct sNode* __result440__;
struct buffer* come_block_837;
int come_block_sline_838;
char* head_839;
void* __right_value825 = (void*)0;
char* tail_840;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct buffer* __dec_obj300;
int len_841;
void* __right_value828 = (void*)0;
char* mem_842;
char* head_843;
_Bool no_output_come_code_844;
void* __right_value829 = (void*)0;
char* tail_845;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct buffer* __dec_obj301;
int len_846;
void* __right_value832 = (void*)0;
char* mem_847;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct sNode* _inf_value9;
struct sComeCallNode* _inf_obj_value9;
void* __right_value838 = (void*)0;
struct sNode* node_848;
struct sNode* __result443__;
struct buffer* come_block_850;
int come_block_sline_851;
void* __right_value839 = (void*)0;
struct sNode* node_852;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sNode* _inf_value10;
struct sComeJoinNode* _inf_obj_value10;
void* __right_value845 = (void*)0;
struct sNode* __result446__;
int time_out_854;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1sNodeph* vars_855;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1sBlockph* blocks_856;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct sBlock* else_block_857;
void* __right_value852 = (void*)0;
struct sBlock* __dec_obj306;
void* __right_value853 = (void*)0;
struct sNode* var_name_858;
void* __right_value854 = (void*)0;
struct sBlock* block_859;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sNode* _inf_value11;
struct sComePollNode* _inf_obj_value11;
void* __right_value895 = (void*)0;
struct sNode* __result471__;
void* __right_value896 = (void*)0;
struct sNode* node_899;
struct sNode* __result472__;
void* __right_value897 = (void*)0;
struct sNode* node_900;
struct sNode* __result473__;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct sNode* _inf_value12;
struct sFuncNode* _inf_obj_value12;
void* __right_value902 = (void*)0;
struct sNode* __result476__;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sNode* _inf_value13;
struct sWildCard* _inf_obj_value13;
void* __right_value907 = (void*)0;
struct sNode* __result479__;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
struct sNode* _inf_value14;
struct sLineNode* _inf_obj_value14;
void* __right_value912 = (void*)0;
struct sNode* __result482__;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value15;
struct sSNameNode* _inf_obj_value15;
void* __right_value917 = (void*)0;
struct sNode* __result485__;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sNode* _inf_value16;
struct sCallerFuncNode* _inf_obj_value16;
void* __right_value922 = (void*)0;
struct sNode* __result488__;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value17;
struct sCallerLineNode* _inf_obj_value17;
void* __right_value927 = (void*)0;
struct sNode* __result491__;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sNode* _inf_value18;
struct sCallerSNameNode* _inf_obj_value18;
void* __right_value932 = (void*)0;
struct sNode* __result494__;
void* __right_value933 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type_908=0;
char* name_909=0;
_Bool err_910=0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct sNode* _inf_value19;
struct sVarArgTypeName* _inf_obj_value19;
void* __right_value939 = (void*)0;
struct sNode* __result497__;
void* __right_value940 = (void*)0;
struct sNode* node_912;
struct sNode* __result498__;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct buffer* buf2_913;
void* __right_value943 = (void*)0;
char* word_914;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct list$1sNodeph* exps_915;
void* __right_value946 = (void*)0;
struct sNode* exp_916;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value20;
struct sInlineAssembler* _inf_obj_value20;
void* __right_value954 = (void*)0;
struct sNode* __result501__;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct buffer* fun_name_918;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sType* type_919;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sClass* klass_920;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct sType* __dec_obj339;
void* __right_value964 = (void*)0;
char* buf2_921;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* node_922;
struct sNode* __result502__;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct buffer* fun_name_923;
void* __right_value969 = (void*)0;
char* buf2_924;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct sNode* node_925;
struct sNode* __result503__;
void* __right_value972 = (void*)0;
struct sNode* node_926;
struct sNode* __result504__;
void* __right_value973 = (void*)0;
struct sNode* node_927;
struct sNode* __result505__;
void* __right_value974 = (void*)0;
struct sNode* node_928;
struct sNode* __result506__;
void* __right_value975 = (void*)0;
struct sNode* node_929;
struct sNode* __result507__;
struct sNode* __result508__;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    parsecmp("return",info)) {
        info->p+=strlen("return");
        skip_spaces_and_lf(info);
        if(        *info->p==59) {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1969, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value6=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value791=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1969, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),((void*)0),(char*)come_increment_ref_count(__builtin_string("0")),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sReturnNode_finalize;
            _inf_value6->clone=(void*)sReturnNode_clone;
            _inf_value6->compile=(void*)sReturnNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sReturnNode_kind;
            __result432__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value792=_inf_value6));
            come_call_finalizer3(__right_value791,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value792) { __right_value792 = come_decrement_ref_count2(__right_value792, ((struct sNode*)__right_value792)->finalize, ((struct sNode*)__right_value792)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result432__;
        }
        else {
            head_808=info->p;
            value_809=(struct sNode*)come_increment_ref_count(expression_v13(info));
            tail_810=info->p;
            __dec_obj293=value_809;
            value_809=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_809),info));
            if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
            char buf_811[tail_810-head_808+1];
            memset(&buf_811, 0, sizeof(char)            *(tail_810-head_808+1)            );
            memcpy(buf_811,head_808,tail_810-head_808);
            buf_811[tail_810-head_808]=0;
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 1981, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sReturnNode*)come_increment_ref_count(((struct sReturnNode*)(__right_value797=sReturnNode_initialize((struct sReturnNode*)come_increment_ref_count((struct sReturnNode*)come_calloc(1, sizeof(struct sReturnNode)*(1), "05call.c", 1981, "struct sReturnNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(value_809),(char*)come_increment_ref_count(__builtin_string(buf_811)),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sReturnNode_finalize;
            _inf_value7->clone=(void*)sReturnNode_clone;
            _inf_value7->compile=(void*)sReturnNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sReturnNode_kind;
            __result433__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value798=_inf_value7));
            if(value_809) { value_809 = come_decrement_ref_count2(value_809, ((struct sNode*)value_809)->finalize, ((struct sNode*)value_809)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value797,sReturnNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value798) { __right_value798 = come_decrement_ref_count2(__right_value798, ((struct sNode*)__right_value798)->finalize, ((struct sNode*)__right_value798)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result433__;
            if(value_809) { value_809 = come_decrement_ref_count2(value_809, ((struct sNode*)value_809)->finalize, ((struct sNode*)value_809)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    *info->p==47&&*(info->p+1)==42) {
        nest_812=0;
        while(1) {
            if(            *info->p==47&&*(info->p+1)==42) {
                info->p+=2;
                nest_812++;
            }
            else if(            *info->p==42&&*(info->p+1)==47) {
                info->p+=2;
                nest_812--;
                if(                nest_812==0) {
                    break;
                }
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    *info->p==47&&*(info->p+1)==47) {
        info->p+=2;
        while(1) {
            if(            *info->p==10) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==0) {
                break;
            }
            else {
                info->p++;
            }
        }
    }
    else if(    (xisalpha(*info->p)||*info->p==95)&&!((*info->p==76||*info->p==108||*info->p==115||*info->p==83||*info->p==114||*info->p==82||*info->p==98||*info->p==66||*info->p==104||*info->p==72)&&*(info->p+1)==34||(*info->p==76&&*(info->p+1)==39))) {
        head_813=info->p;
        head_sline_814=info->sline;
        sline_real_815=info->sline_real;
        info->sline_real=info->sline;
        buf_816=(char*)come_increment_ref_count(backtrace_parse_word(info));
        is_type_name__817=is_type_name(buf_816,info);
        static char* is_special_word_array_818[19]={"if","while","for","switch","return","sizeof","isheap","ispointer","__typeof__","dynamic_typeof","typeof","gc_inc","gc_dec","gc_dec_nofree","case","_Alignof","_Alignas","__alignof__","_Atomic"};
        is_special_word_819=charppa_contained(is_special_word_array_818,19,buf_816);
        define_function_pointer_flag_820=(_Bool)0;
        if(        !is_special_word_819&&*info->p==40&&*(info->p+1)!=42) {
            ((struct tuple3$3sTypephcharphbool*)(__right_value800=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value800,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    define_function_pointer_flag_820=(_Bool)1;
                }
            }
            info->p=head_813;
            info->sline=head_sline_814;
        }
        lambda_flag_821=(_Bool)0;
        if(        !is_special_word_819&&is_type_name__817) {
            info->p=head_813;
            info->sline=head_sline_814;
            ((struct tuple3$3sTypephcharphbool*)(__right_value801=backtrace_parse_type((_Bool)0,info)));
            come_call_finalizer3(__right_value801,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            word2_822=(char*)come_increment_ref_count(backtrace_parse_word(info));
            if(            string_operator_equals(word2_822,"lambda")) {
                lambda_flag_821=(_Bool)1;
            }
            info->p=head_813;
            info->sline=head_sline_814;
            word2_822 = come_decrement_ref_count2(word2_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_name_with_type_name_823=(_Bool)0;
        if(        !is_special_word_819) {
            info->p=head_813;
            info->sline=head_sline_814;
            info->no_output_err=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                word2_824=(char*)come_increment_ref_count(parse_word(info));
                word2_824 = come_decrement_ref_count2(word2_824, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58&&*(info->p+1)==58) {
                info->p+=2;
                skip_spaces_and_lf(info);
                if(                xisalpha(*info->p)||*info->p==95) {
                    fun_name_with_type_name_823=(_Bool)1;
                }
            }
            info->no_output_err=(_Bool)0;
            info->p=head_813;
            info->sline=head_sline_814;
        }
        call_method_generics_fun_call_825=(_Bool)0;
        {
            info->p=head_813;
            info->sline=head_sline_814;
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj294=buf_816;
                buf_816=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            (_if_conditional20=(!is_type_name(buf_816,info)&&((struct sVar*)((void*)(__right_value806=map$2voidphvoidphp_operator_load_element(info->lv_table->mVars,((char*)(__right_value805=__builtin_string(buf_816)))))))==((void*)0)&&((struct sVar*)((void*)(__right_value808=map$2voidphvoidphp_operator_load_element(info->gv_table->mVars,((char*)(__right_value807=__builtin_string(buf_816)))))))==((void*)0)&&*info->p==60)),            (__right_value805 = come_decrement_ref_count2(__right_value805, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
            come_call_finalizer3(__right_value806,(void*)0, 0, 1, 0, 0, __result_obj__),
            (__right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
            come_call_finalizer3(__right_value808,(void*)0, 0, 1, 0, 0, __result_obj__),
            _if_conditional20) {
                nest_826=0;
                while(*info->p) {
                    if(                    *info->p==60) {
                        info->p++;
                        nest_826++;
                    }
                    else if(                    *info->p==62) {
                        info->p++;
                        if(                        nest_826==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==10||*info->p==59) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
                if(                *info->p==40) {
                    call_method_generics_fun_call_825=(_Bool)1;
                }
            }
            info->p=head_813;
            info->sline=head_sline_814;
        }
        inline_asm_827=(_Bool)0;
        {
            info->p=head_813;
            info->sline=head_sline_814;
            __dec_obj295=buf_816;
            buf_816=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            string_operator_equals(buf_816,"asm")||string_operator_equals(buf_816,"__asm")||string_operator_equals(buf_816,"__asm__")) {
                if(                *info->p==40) {
                    inline_asm_827=(_Bool)1;
                }
                else {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj296=buf_816;
                        buf_816=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        *info->p==40) {
                            inline_asm_827=(_Bool)1;
                        }
                    }
                }
            }
            info->p=head_813;
            info->sline=head_sline_814;
        }
        parse_sharp_v5(info);
        __dec_obj297=buf_816;
        buf_816=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        if(        lambda_flag_821) {
            info->p=head_813;
            info->sline=head_sline_814;
            node_828=(struct sNode*)come_increment_ref_count(parse_function(info));
            info->sline_real=sline_real_815;
            __result434__ = gComeFunResultObject = __result_obj__ = node_828;
            if(node_828) { node_828 = come_decrement_ref_count2(node_828, ((struct sNode*)node_828)->finalize, ((struct sNode*)node_828)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result434__;
            if(node_828) { node_828 = come_decrement_ref_count2(node_828, ((struct sNode*)node_828)->finalize, ((struct sNode*)node_828)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        (string_operator_equals(buf_816,"_Static_assert")||string_operator_equals(buf_816,"static_assert"))&&*info->p==40) {
            expected_next_character(40,info);
            no_comma_829=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_830=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_829;
            expected_next_character(44,info);
            exp2_831=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            __result435__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value815=static_assert_node((struct sNode*)come_increment_ref_count(exp_830),(struct sNode*)come_increment_ref_count(exp2_831),info)));
            if(exp_830) { exp_830 = come_decrement_ref_count2(exp_830, ((struct sNode*)exp_830)->finalize, ((struct sNode*)exp_830)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_831) { exp2_831 = come_decrement_ref_count2(exp2_831, ((struct sNode*)exp2_831)->finalize, ((struct sNode*)exp2_831)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result435__;
            if(exp_830) { exp_830 = come_decrement_ref_count2(exp_830, ((struct sNode*)exp_830)->finalize, ((struct sNode*)exp_830)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_831) { exp2_831 = come_decrement_ref_count2(exp2_831, ((struct sNode*)exp2_831)->finalize, ((struct sNode*)exp2_831)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_816,"output")&&*info->p==123) {
            block_text_832=(char*)come_increment_ref_count(skip_block(info));
            contents_833=(char*)come_increment_ref_count(block_text_832);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2219, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sOutputNode*)come_increment_ref_count(((struct sOutputNode*)(__right_value818=sOutputNode_initialize((struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "05call.c", 2219, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(contents_833),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sOutputNode_finalize;
            _inf_value8->clone=(void*)sOutputNode_clone;
            _inf_value8->compile=(void*)sOutputNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sOutputNode_kind;
            __result438__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value822=_inf_value8));
            block_text_832 = come_decrement_ref_count2(block_text_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_833 = come_decrement_ref_count2(contents_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value818,sOutputNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value822) { __right_value822 = come_decrement_ref_count2(__right_value822, ((struct sNode*)__right_value822)->finalize, ((struct sNode*)__right_value822)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result438__;
            block_text_832 = come_decrement_ref_count2(block_text_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            contents_833 = come_decrement_ref_count2(contents_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_816,"extern")) {
            node_835=(struct sNode*)come_increment_ref_count(parse_function(info));
            __result439__ = gComeFunResultObject = __result_obj__ = node_835;
            if(node_835) { node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result439__;
            if(node_835) { node_835 = come_decrement_ref_count2(node_835, ((struct sNode*)node_835)->finalize, ((struct sNode*)node_835)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&(string_operator_equals(buf_816,"string")||string_operator_equals(buf_816,"wstring"))&&*info->p==40) {
            node_836=(struct sNode*)come_increment_ref_count(parse_function_call(buf_816,info,(_Bool)0));
            info->sline_real=sline_real_815;
            __result440__ = gComeFunResultObject = __result_obj__ = node_836;
            if(node_836) { node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result440__;
            if(node_836) { node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_816,"come")) {
            come_block_837=((void*)0);
            come_block_sline_838=0;
            if(            *info->p==123) {
                head_839=info->p;
                come_block_sline_838=info->sline;
                ((char*)(__right_value825=skip_block(info)));
                __right_value825 = come_decrement_ref_count2(__right_value825, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                tail_840=info->p;
                __dec_obj300=come_block_837;
                come_block_837=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2244, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_841=tail_840-head_839;
                mem_842=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_841+1)), "05call.c", 2247, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_842,head_839,len_841);
                mem_842[len_841]=0;
                buffer_append_str(come_block_837,mem_842);
                buffer_append_str(come_block_837,"\n");
                mem_842 = come_decrement_ref_count2(mem_842, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                head_843=info->p;
                come_block_sline_838=info->sline;
                no_output_come_code_844=info->no_output_come_code;
                info->no_output_come_code=(_Bool)1;
                ((struct sNode*)(__right_value829=expression_v13(info)));
                if(__right_value829) { __right_value829 = come_decrement_ref_count2(__right_value829, ((struct sNode*)__right_value829)->finalize, ((struct sNode*)__right_value829)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                info->no_output_come_code=no_output_come_code_844;
                tail_845=info->p;
                __dec_obj301=come_block_837;
                come_block_837=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2265, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
                come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
                len_846=tail_845-head_843;
                mem_847=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_846+1)), "05call.c", 2268, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
                memcpy(mem_847,head_843,len_846);
                mem_847[len_846]=0;
                buffer_append_str(come_block_837,"{");
                buffer_append_str(come_block_837,mem_847);
                buffer_append_str(come_block_837,"; }");
                buffer_append_str(come_block_837,"}");
                buffer_append_str(come_block_837,"\n");
                mem_847 = come_decrement_ref_count2(mem_847, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2279, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value9=(struct sComeCallNode*)come_increment_ref_count(((struct sComeCallNode*)(__right_value834=sComeCallNode_initialize((struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "05call.c", 2279, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_block_837),come_block_sline_838,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sComeCallNode_finalize;
            _inf_value9->clone=(void*)sComeCallNode_clone;
            _inf_value9->compile=(void*)sComeCallNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sline_real=(void*)sNodeBase_sline_real;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sComeCallNode_terminated;
            _inf_value9->kind=(void*)sComeCallNode_kind;
            node_848=(struct sNode*)come_increment_ref_count(_inf_value9);
            come_call_finalizer3(__right_value834,sComeCallNode_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_815;
            __result443__ = gComeFunResultObject = __result_obj__ = node_848;
            come_call_finalizer3(come_block_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_848) { node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result443__;
            come_call_finalizer3(come_block_837,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_848) { node_848 = come_decrement_ref_count2(node_848, ((struct sNode*)node_848)->finalize, ((struct sNode*)node_848)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_816,"come_join")&&*info->p==40) {
            come_block_850=((void*)0);
            come_block_sline_851=0;
            expected_next_character(40,info);
            node_852=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            info->sline_real=sline_real_815;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2293, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sComeJoinNode*)come_increment_ref_count(((struct sComeJoinNode*)(__right_value841=sComeJoinNode_initialize((struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "05call.c", 2293, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node_852),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sComeJoinNode_finalize;
            _inf_value10->clone=(void*)sComeJoinNode_clone;
            _inf_value10->compile=(void*)sComeJoinNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sComeJoinNode_terminated;
            _inf_value10->kind=(void*)sComeJoinNode_kind;
            __result446__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value845=_inf_value10));
            come_call_finalizer3(come_block_850,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value841,sComeJoinNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value845) { __right_value845 = come_decrement_ref_count2(__right_value845, ((struct sNode*)__right_value845)->finalize, ((struct sNode*)__right_value845)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result446__;
            come_call_finalizer3(come_block_850,buffer_finalize, 0, 0, 0, 0, (void*)0);
            if(node_852) { node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        gComePthread&&string_operator_equals(buf_816,"come_poll")&&(*info->p==40||*info->p==123)) {
            time_out_854=1;
            if(            *info->p==40) {
                info->p++;
                while(xisdigit(*info->p)) {
                    time_out_854=time_out_854*10+(*info->p-48);
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                expected_next_character(41,info);
            }
            expected_next_character(123,info);
            vars_855=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2311, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            blocks_856=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "05call.c", 2312, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            else_block_857=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05call.c", 2313, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
            while(1) {
                if(                memcmp(info->p,"else",strlen("else"))==0) {
                    info->p+=strlen("else");
                    skip_spaces_and_lf(info);
                    __dec_obj306=else_block_857;
                    else_block_857=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj306,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    *info->p==125) {
                        break;
                    }
                }
                else {
                    var_name_858=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    block_859=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sNodephp_add(vars_855,(struct sNode*)come_increment_ref_count(var_name_858));
                    list$1sBlockphp_add(blocks_856,(struct sBlock*)come_increment_ref_count(block_859));
                    if(                    *info->p==125) {
                        if(var_name_858) { var_name_858 = come_decrement_ref_count2(var_name_858, ((struct sNode*)var_name_858)->finalize, ((struct sNode*)var_name_858)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(block_859,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                        break;
                    }
                    if(var_name_858) { var_name_858 = come_decrement_ref_count2(var_name_858, ((struct sNode*)var_name_858)->finalize, ((struct sNode*)var_name_858)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(block_859,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(125,info);
            info->sline_real=sline_real_815;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2343, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sComePollNode*)come_increment_ref_count(((struct sComePollNode*)(__right_value859=sComePollNode_initialize((struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "05call.c", 2343, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(vars_855),(struct list$1sBlockph*)come_increment_ref_count(blocks_856),(struct sBlock*)come_increment_ref_count(else_block_857),time_out_854,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sComePollNode_finalize;
            _inf_value11->clone=(void*)sComePollNode_clone;
            _inf_value11->compile=(void*)sComePollNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sComePollNode_terminated;
            _inf_value11->kind=(void*)sComePollNode_kind;
            __result471__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value895=_inf_value11));
            come_call_finalizer3(vars_855,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_856,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_857,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value859,sComePollNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value895) { __right_value895 = come_decrement_ref_count2(__right_value895, ((struct sNode*)__right_value895)->finalize, ((struct sNode*)__right_value895)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result471__;
            come_call_finalizer3(vars_855,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(blocks_856,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(else_block_857,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        !gComeC&&string_operator_equals(buf_816,"none")&&*info->p==40) {
            node_899=(struct sNode*)come_increment_ref_count(parse_none(info));
            info->sline_real=sline_real_815;
            __result472__ = gComeFunResultObject = __result_obj__ = node_899;
            if(node_899) { node_899 = come_decrement_ref_count2(node_899, ((struct sNode*)node_899)->finalize, ((struct sNode*)node_899)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result472__;
            if(node_899) { node_899 = come_decrement_ref_count2(node_899, ((struct sNode*)node_899)->finalize, ((struct sNode*)node_899)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&string_operator_equals(buf_816,"some")&&*info->p==40) {
            node_900=(struct sNode*)come_increment_ref_count(parse_some(info));
            info->sline_real=sline_real_815;
            __result473__ = gComeFunResultObject = __result_obj__ = node_900;
            if(node_900) { node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result473__;
            if(node_900) { node_900 = come_decrement_ref_count2(node_900, ((struct sNode*)node_900)->finalize, ((struct sNode*)node_900)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(buf_816,"__func__")||string_operator_equals(buf_816,"__FUNCTION__")) {
            info->sline_real=sline_real_815;
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2360, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFuncNode*)come_increment_ref_count(((struct sFuncNode*)(__right_value899=sFuncNode_initialize((struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "05call.c", 2360, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFuncNode_finalize;
            _inf_value12->clone=(void*)sFuncNode_clone;
            _inf_value12->compile=(void*)sFuncNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFuncNode_kind;
            __result476__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value902=_inf_value12));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value899,sFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value902) { __right_value902 = come_decrement_ref_count2(__right_value902, ((struct sNode*)__right_value902)->finalize, ((struct sNode*)__right_value902)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result476__;
        }
        else if(        !gComeC&&string_operator_equals(buf_816,"wildcard")) {
            info->sline_real=sline_real_815;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2364, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sWildCard*)come_increment_ref_count(((struct sWildCard*)(__right_value904=sWildCard_initialize((struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "05call.c", 2364, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sWildCard_finalize;
            _inf_value13->clone=(void*)sWildCard_clone;
            _inf_value13->compile=(void*)sWildCard_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sWildCard_kind;
            __result479__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value907=_inf_value13));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value904,sWildCard_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value907) { __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result479__;
        }
        else if(        string_operator_equals(buf_816,"__line__")||string_operator_equals(buf_816,"__LINE__")) {
            info->sline_real=sline_real_815;
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2368, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sLineNode*)come_increment_ref_count(((struct sLineNode*)(__right_value909=sLineNode_initialize((struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "05call.c", 2368, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sLineNode_finalize;
            _inf_value14->clone=(void*)sLineNode_clone;
            _inf_value14->compile=(void*)sLineNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sLineNode_kind;
            __result482__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value912=_inf_value14));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value909,sLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value912) { __right_value912 = come_decrement_ref_count2(__right_value912, ((struct sNode*)__right_value912)->finalize, ((struct sNode*)__right_value912)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result482__;
        }
        else if(        string_operator_equals(buf_816,"__sname__")) {
            info->sline_real=sline_real_815;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2372, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sSNameNode*)come_increment_ref_count(((struct sSNameNode*)(__right_value914=sSNameNode_initialize((struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "05call.c", 2372, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sSNameNode_finalize;
            _inf_value15->clone=(void*)sSNameNode_clone;
            _inf_value15->compile=(void*)sSNameNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sSNameNode_kind;
            __result485__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value917=_inf_value15));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value914,sSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value917) { __right_value917 = come_decrement_ref_count2(__right_value917, ((struct sNode*)__right_value917)->finalize, ((struct sNode*)__right_value917)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result485__;
        }
        else if(        string_operator_equals(buf_816,"__caller_func__")) {
            info->sline_real=sline_real_815;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2376, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sCallerFuncNode*)come_increment_ref_count(((struct sCallerFuncNode*)(__right_value919=sCallerFuncNode_initialize((struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "05call.c", 2376, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sCallerFuncNode_finalize;
            _inf_value16->clone=(void*)sCallerFuncNode_clone;
            _inf_value16->compile=(void*)sCallerFuncNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sCallerFuncNode_kind;
            __result488__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value922=_inf_value16));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value919,sCallerFuncNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value922) { __right_value922 = come_decrement_ref_count2(__right_value922, ((struct sNode*)__right_value922)->finalize, ((struct sNode*)__right_value922)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result488__;
        }
        else if(        string_operator_equals(buf_816,"__caller_line__")) {
            info->sline_real=sline_real_815;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2380, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sCallerLineNode*)come_increment_ref_count(((struct sCallerLineNode*)(__right_value924=sCallerLineNode_initialize((struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "05call.c", 2380, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sCallerLineNode_finalize;
            _inf_value17->clone=(void*)sCallerLineNode_clone;
            _inf_value17->compile=(void*)sCallerLineNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sCallerLineNode_kind;
            __result491__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value927=_inf_value17));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value924,sCallerLineNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value927) { __right_value927 = come_decrement_ref_count2(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result491__;
        }
        else if(        string_operator_equals(buf_816,"__caller_sname__")) {
            info->sline_real=sline_real_815;
            _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2384, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value18=(struct sCallerSNameNode*)come_increment_ref_count(((struct sCallerSNameNode*)(__right_value929=sCallerSNameNode_initialize((struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "05call.c", 2384, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value18->_protocol_obj=_inf_obj_value18;
            _inf_value18->finalize=(void*)sCallerSNameNode_finalize;
            _inf_value18->clone=(void*)sCallerSNameNode_clone;
            _inf_value18->compile=(void*)sCallerSNameNode_compile;
            _inf_value18->sline=(void*)sNodeBase_sline;
            _inf_value18->sline_real=(void*)sNodeBase_sline_real;
            _inf_value18->sname=(void*)sNodeBase_sname;
            _inf_value18->terminated=(void*)sNodeBase_terminated;
            _inf_value18->kind=(void*)sCallerSNameNode_kind;
            __result494__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value932=_inf_value18));
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value929,sCallerSNameNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value932) { __right_value932 = come_decrement_ref_count2(__right_value932, ((struct sNode*)__right_value932)->finalize, ((struct sNode*)__right_value932)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result494__;
        }
        else if(        info->va_arg&&is_type_name(buf_816,info)) {
            info->p=head_813;
            info->sline=head_sline_814;
            multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value933=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
            type_908=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_909=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_910=multiple_assign_var13->v3;
            come_call_finalizer3(__right_value933,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_815;
            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2393, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value19=(struct sVarArgTypeName*)come_increment_ref_count(((struct sVarArgTypeName*)(__right_value935=sVarArgTypeName_initialize((struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "05call.c", 2393, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_908),info))));
            _inf_value19->_protocol_obj=_inf_obj_value19;
            _inf_value19->finalize=(void*)sVarArgTypeName_finalize;
            _inf_value19->clone=(void*)sVarArgTypeName_clone;
            _inf_value19->compile=(void*)sVarArgTypeName_compile;
            _inf_value19->sline=(void*)sNodeBase_sline;
            _inf_value19->sline_real=(void*)sNodeBase_sline_real;
            _inf_value19->sname=(void*)sNodeBase_sname;
            _inf_value19->terminated=(void*)sNodeBase_terminated;
            _inf_value19->kind=(void*)sVarArgTypeName_kind;
            __result497__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value939=_inf_value19));
            come_call_finalizer3(type_908,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_909 = come_decrement_ref_count2(name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value935,sVarArgTypeName_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value939) { __right_value939 = come_decrement_ref_count2(__right_value939, ((struct sNode*)__right_value939)->finalize, ((struct sNode*)__right_value939)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result497__;
            come_call_finalizer3(type_908,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_909 = come_decrement_ref_count2(name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        string_operator_equals(buf_816,"sizeof")||string_operator_equals(buf_816,"_Alignof")||string_operator_equals(buf_816,"_Alignas")||string_operator_equals(buf_816,"__alignof__")) {
            node_912=(struct sNode*)come_increment_ref_count(string_node_v21(buf_816,head_813,head_sline_814,info));
            info->sline_real=sline_real_815;
            __result498__ = gComeFunResultObject = __result_obj__ = node_912;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result498__;
            if(node_912) { node_912 = come_decrement_ref_count2(node_912, ((struct sNode*)node_912)->finalize, ((struct sNode*)node_912)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        inline_asm_827) {
            buf2_913=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2402, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p!=40) {
                word_914=(char*)come_increment_ref_count(parse_word(info));
                buffer_append_str(buf2_913,word_914);
                word_914 = come_decrement_ref_count2(word_914, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            expected_next_character(40,info);
            buffer_append_char(buf2_913,40);
            exps_915=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05call.c", 2413, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            while((_Bool)1) {
                if(                *info->p==40) {
                    buffer_append_char(buf2_913,40);
                    info->p++;
                    exp_916=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_915,(struct sNode*)come_increment_ref_count(exp_916));
                    expected_next_character(41,info);
                    buffer_append_char(buf2_913,41);
                    if(exp_916) { exp_916 = come_decrement_ref_count2(exp_916, ((struct sNode*)exp_916)->finalize, ((struct sNode*)exp_916)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==41) {
                    buffer_append_char(buf2_913,41);
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==10) {
                    info->sline++;
                    buffer_append_char(buf2_913,*info->p);
                    info->p++;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end at inline assembler");
                    exit(2);
                }
                else {
                    buffer_append_char(buf2_913,*info->p);
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            info->sline_real=sline_real_815;
            _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2450, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value20=(struct sInlineAssembler*)come_increment_ref_count(((struct sInlineAssembler*)(__right_value949=sInlineAssembler_initialize((struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "05call.c", 2450, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf2_913)),(struct list$1sNodeph*)come_increment_ref_count(exps_915),info))));
            _inf_value20->_protocol_obj=_inf_obj_value20;
            _inf_value20->finalize=(void*)sInlineAssembler_finalize;
            _inf_value20->clone=(void*)sInlineAssembler_clone;
            _inf_value20->compile=(void*)sInlineAssembler_compile;
            _inf_value20->sline=(void*)sNodeBase_sline;
            _inf_value20->sline_real=(void*)sNodeBase_sline_real;
            _inf_value20->sname=(void*)sNodeBase_sname;
            _inf_value20->terminated=(void*)sNodeBase_terminated;
            _inf_value20->kind=(void*)sInlineAssembler_kind;
            __result501__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value954=_inf_value20));
            come_call_finalizer3(buf2_913,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_915,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value949,sInlineAssembler_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value954) { __right_value954 = come_decrement_ref_count2(__right_value954, ((struct sNode*)__right_value954)->finalize, ((struct sNode*)__right_value954)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result501__;
            come_call_finalizer3(buf2_913,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(exps_915,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        fun_name_with_type_name_823) {
            fun_name_918=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2453, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_918,buf_816);
            type_919=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value958=map$2voidphvoidphp_operator_load_element(info->types,((char*)(__right_value957=buffer_to_string(fun_name_918)))))))));
            __right_value957 = come_decrement_ref_count2(__right_value957, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(__right_value958,(void*)0, 0, 1, 0, 0, __result_obj__);
            if(            type_919==((void*)0)) {
                klass_920=((struct sClass*)((void*)(__right_value961=map$2voidphvoidphp_operator_load_element(info->classes,((char*)(__right_value960=buffer_to_string(fun_name_918)))))));
                __right_value960 = come_decrement_ref_count2(__right_value960, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(__right_value961,(void*)0, 0, 1, 0, 0, __result_obj__);
                if(                klass_920) {
                    __dec_obj339=type_919;
                    type_919=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05call.c", 2463, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),buf_816,(_Bool)0,info));
                    come_call_finalizer3(__dec_obj339,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    err_msg(info,"null type(%s)",buf_816);
                    exit(2);
                }
            }
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                type_919->mClass->mStruct==(_Bool)0) {
                    buffer_append_str(fun_name_918,"p");
                }
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            buffer_append_str(fun_name_918,"_");
            buf2_921=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_918,buf2_921);
            node_922=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value965=buffer_to_string(fun_name_918))),info,(_Bool)0));
            __right_value965 = come_decrement_ref_count2(__right_value965, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_815;
            __result502__ = gComeFunResultObject = __result_obj__ = node_922;
            come_call_finalizer3(fun_name_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_919,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_921 = come_decrement_ref_count2(buf2_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_922) { node_922 = come_decrement_ref_count2(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result502__;
            come_call_finalizer3(fun_name_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_919,sType_finalize, 0, 0, 0, 0, (void*)0);
            buf2_921 = come_decrement_ref_count2(buf2_921, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_922) { node_922 = come_decrement_ref_count2(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==58&&*(info->p+1)==58) {
            info->p+=2;
            skip_spaces_and_lf(info);
            fun_name_923=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2498, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_str(fun_name_923,buf_816);
            buffer_append_str(fun_name_923,"_");
            buf2_924=(char*)come_increment_ref_count(parse_word(info));
            buffer_append_str(fun_name_923,buf2_924);
            node_925=(struct sNode*)come_increment_ref_count(parse_function_call(((char*)(__right_value970=buffer_to_string(fun_name_923))),info,(_Bool)0));
            __right_value970 = come_decrement_ref_count2(__right_value970, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            info->sline_real=sline_real_815;
            __result503__ = gComeFunResultObject = __result_obj__ = node_925;
            come_call_finalizer3(fun_name_923,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_924 = come_decrement_ref_count2(buf2_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_925) { node_925 = come_decrement_ref_count2(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result503__;
            come_call_finalizer3(fun_name_923,buffer_finalize, 0, 0, 0, 0, (void*)0);
            buf2_924 = come_decrement_ref_count2(buf2_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_925) { node_925 = come_decrement_ref_count2(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        call_method_generics_fun_call_825) {
            node_926=(struct sNode*)come_increment_ref_count(parse_function_call(buf_816,info,(_Bool)0));
            info->sline_real=sline_real_815;
            __result504__ = gComeFunResultObject = __result_obj__ = node_926;
            if(node_926) { node_926 = come_decrement_ref_count2(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result504__;
            if(node_926) { node_926 = come_decrement_ref_count2(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !is_special_word_819&&*info->p==40&&!(*(info->p+1)==42&&is_type_name__817)) {
            node_927=(struct sNode*)come_increment_ref_count(parse_function_call(buf_816,info,(_Bool)0));
            info->sline_real=sline_real_815;
            __result505__ = gComeFunResultObject = __result_obj__ = node_927;
            if(node_927) { node_927 = come_decrement_ref_count2(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result505__;
            if(node_927) { node_927 = come_decrement_ref_count2(node_927, ((struct sNode*)node_927)->finalize, ((struct sNode*)node_927)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            node_928=(struct sNode*)come_increment_ref_count(string_node_v21(buf_816,head_813,head_sline_814,info));
            info->sline_real=sline_real_815;
            __result506__ = gComeFunResultObject = __result_obj__ = node_928;
            if(node_928) { node_928 = come_decrement_ref_count2(node_928, ((struct sNode*)node_928)->finalize, ((struct sNode*)node_928)->_protocol_obj, 0, 1, 0, (void*)0); } 
            buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result506__;
            if(node_928) { node_928 = come_decrement_ref_count2(node_928, ((struct sNode*)node_928)->finalize, ((struct sNode*)node_928)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        buf_816 = come_decrement_ref_count2(buf_816, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        node_929=(struct sNode*)come_increment_ref_count(expression_node_v96(info));
        __result507__ = gComeFunResultObject = __result_obj__ = node_929;
        if(node_929) { node_929 = come_decrement_ref_count2(node_929, ((struct sNode*)node_929)->finalize, ((struct sNode*)node_929)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result507__;
        if(node_929) { node_929 = come_decrement_ref_count2(node_929, ((struct sNode*)node_929)->finalize, ((struct sNode*)node_929)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    err_msg(info,"unexpected operator(%c)\n",*info->p);
    exit(2);
    __result508__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result508__;
}

static struct sOutputNode* sOutputNode_clone(struct sOutputNode* self){
void* __result_obj__=(void*)0;
struct sOutputNode* __result436__;
void* __right_value819 = (void*)0;
struct sOutputNode* result_834;
void* __right_value820 = (void*)0;
char* __dec_obj298;
void* __right_value821 = (void*)0;
char* __dec_obj299;
struct sOutputNode* __result437__;
    if(    self==(void*)0) {
        __result436__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result436__;
    }
    result_834=(struct sOutputNode*)come_increment_ref_count((struct sOutputNode*)come_calloc(1, sizeof(struct sOutputNode)*(1), "sOutputNode_clone", 3, "struct sOutputNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_834->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj298=result_834->sname;
        result_834->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_834->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->contents!=((void*)0)) {
        __dec_obj299=result_834->contents;
        result_834->contents=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->contents));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result437__ = gComeFunResultObject = __result_obj__ = result_834;
    come_call_finalizer3(result_834,sOutputNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result437__;
}

static struct sComeCallNode* sComeCallNode_clone(struct sComeCallNode* self){
void* __result_obj__=(void*)0;
struct sComeCallNode* __result441__;
void* __right_value835 = (void*)0;
struct sComeCallNode* result_849;
void* __right_value836 = (void*)0;
char* __dec_obj302;
void* __right_value837 = (void*)0;
struct buffer* __dec_obj303;
struct sComeCallNode* __result442__;
    if(    self==(void*)0) {
        __result441__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result441__;
    }
    result_849=(struct sComeCallNode*)come_increment_ref_count((struct sComeCallNode*)come_calloc(1, sizeof(struct sComeCallNode)*(1), "sComeCallNode_clone", 3, "struct sComeCallNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_849->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj302=result_849->sname;
        result_849->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->come_block!=((void*)0)) {
        __dec_obj303=result_849->come_block;
        result_849->come_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->come_block));
        come_call_finalizer3(__dec_obj303,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_849->come_block_sline=self->come_block_sline;
    }
    __result442__ = gComeFunResultObject = __result_obj__ = result_849;
    come_call_finalizer3(result_849,sComeCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result442__;
}

static struct sComeJoinNode* sComeJoinNode_clone(struct sComeJoinNode* self){
void* __result_obj__=(void*)0;
struct sComeJoinNode* __result444__;
void* __right_value842 = (void*)0;
struct sComeJoinNode* result_853;
void* __right_value843 = (void*)0;
char* __dec_obj304;
void* __right_value844 = (void*)0;
struct sNode* __dec_obj305;
struct sComeJoinNode* __result445__;
    if(    self==(void*)0) {
        __result444__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result444__;
    }
    result_853=(struct sComeJoinNode*)come_increment_ref_count((struct sComeJoinNode*)come_calloc(1, sizeof(struct sComeJoinNode)*(1), "sComeJoinNode_clone", 3, "struct sComeJoinNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_853->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_853->sname;
        result_853->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_853->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj305=result_853->node;
        result_853->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result445__ = gComeFunResultObject = __result_obj__ = result_853;
    come_call_finalizer3(result_853,sComeJoinNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result445__;
}

static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result447__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result447__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result447__;
}

static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value855 = (void*)0;
struct list_item$1sBlockph* litem_860;
struct sBlock* __dec_obj307;
void* __right_value856 = (void*)0;
struct list_item$1sBlockph* litem_861;
struct sBlock* __dec_obj308;
void* __right_value857 = (void*)0;
struct list_item$1sBlockph* litem_862;
struct sBlock* __dec_obj309;
struct list$1sBlockph* __result448__;
    if(    self->len==0) {
        litem_860=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value855=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1382, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_860->prev=((void*)0);
        litem_860->next=((void*)0);
        __dec_obj307=litem_860->item;
        litem_860->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj307,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_860;
        self->head=litem_860;
    }
    else if(    self->len==1) {
        litem_861=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value856=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1392, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_861->prev=self->head;
        litem_861->next=((void*)0);
        __dec_obj308=litem_861->item;
        litem_861->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj308,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_861;
        self->head->next=litem_861;
    }
    else {
        litem_862=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value857=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1402, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_862->prev=self->tail;
        litem_862->next=((void*)0);
        __dec_obj309=litem_862->item;
        litem_862->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj309,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_862;
        self->tail=litem_862;
    }
    self->len++;
    __result448__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result448__;
}

static struct sComePollNode* sComePollNode_clone(struct sComePollNode* self){
void* __result_obj__=(void*)0;
struct sComePollNode* __result449__;
void* __right_value860 = (void*)0;
struct sComePollNode* result_863;
void* __right_value861 = (void*)0;
char* __dec_obj310;
void* __right_value862 = (void*)0;
struct list$1sNodeph* __dec_obj311;
void* __right_value893 = (void*)0;
struct list$1sBlockph* __dec_obj325;
void* __right_value894 = (void*)0;
struct sBlock* __dec_obj326;
struct sComePollNode* __result470__;
    if(    self==(void*)0) {
        __result449__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result449__;
    }
    result_863=(struct sComePollNode*)come_increment_ref_count((struct sComePollNode*)come_calloc(1, sizeof(struct sComePollNode)*(1), "sComePollNode_clone", 3, "struct sComePollNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_863->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj310=result_863->sname;
        result_863->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_863->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->vars!=((void*)0)) {
        __dec_obj311=result_863->vars;
        result_863->vars=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->vars));
        come_call_finalizer3(__dec_obj311,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->blocks!=((void*)0)) {
        __dec_obj325=result_863->blocks;
        result_863->blocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->blocks));
        come_call_finalizer3(__dec_obj325,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->else_block!=((void*)0)) {
        __dec_obj326=result_863->else_block;
        result_863->else_block=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->else_block));
        come_call_finalizer3(__dec_obj326,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_863->time_out=self->time_out;
    }
    __result470__ = gComeFunResultObject = __result_obj__ = result_863;
    come_call_finalizer3(result_863,sComePollNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result470__;
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result450__;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1sBlockph* result_864;
struct list_item$1sBlockph* it_865;
void* __right_value892 = (void*)0;
struct list$1sBlockph* __result469__;
    if(    self==((void*)0)) {
        __result450__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result450__;
    }
    result_864=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1368, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_865=self->head;
    while(it_865!=((void*)0)) {
        list$1sBlockphp_add(result_864,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_865->item)));
        it_865=it_865->next;
    }
    __result469__ = gComeFunResultObject = __result_obj__ = result_864;
    come_call_finalizer3(result_864,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result469__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result451__;
void* __right_value865 = (void*)0;
struct sBlock* result_866;
void* __right_value869 = (void*)0;
struct list$1sNodeph* __dec_obj312;
void* __right_value891 = (void*)0;
struct sVarTable* __dec_obj324;
struct sBlock* __result468__;
    if(    self==(void*)0) {
        __result451__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result451__;
    }
    result_866=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj312=result_866->mNodes;
        result_866->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mNodes));
        come_call_finalizer3(__dec_obj312,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj324=result_866->mVarTable;
        result_866->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj324,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_866->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result468__ = gComeFunResultObject = __result_obj__ = result_866;
    come_call_finalizer3(result_866,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result468__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result452__;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1sNodeph* result_867;
struct list_item$1sNodeph* it_868;
void* __right_value868 = (void*)0;
struct list$1sNodeph* __result453__;
    if(    self==((void*)0)) {
        __result452__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result452__;
    }
    result_867=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_868=self->head;
    while(it_868!=((void*)0)) {
        list$1sNodephp_add(result_867,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_868->item)));
        it_868=it_868->next;
    }
    __result453__ = gComeFunResultObject = __result_obj__ = result_867;
    come_call_finalizer3(result_867,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result453__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result454__;
void* __right_value872 = (void*)0;
struct sVarTable* result_880;
void* __right_value890 = (void*)0;
struct map$2voidphvoidph* __dec_obj323;
struct sVarTable* __result467__;
    if(    self==(void*)0) {
        __result454__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result454__;
    }
    result_880=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj323=result_880->mVars;
        result_880->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(come_call_cloner(map$2voidphvoidph_clone, self->mVars));
        come_call_finalizer3(__dec_obj323,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_880->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_880->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_880->mID=self->mID;
    }
    __result467__ = gComeFunResultObject = __result_obj__ = result_880;
    come_call_finalizer3(result_880,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result467__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_869;
    result_869=0;
    result_869+=int_get_hash_key(((int)self->mVars));
    result_869+=int_get_hash_key(((int)self->mGlobal));
    result_869+=int_get_hash_key(((int)self->mParent));
    result_869+=int_get_hash_key(((int)self->mID));
    return result_869;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2voidphvoidphp_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
int n_870;
_Bool result_871;
char* it_872;
void* default_value_873;
void* it2_874;
void* default_value2_877;
void* __right_value870 = (void*)0;
void* item_878;
void* __right_value871 = (void*)0;
void* item2_879;
default_value_873 = (void*)0;
default_value2_877 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_870=0;
    result_871=(_Bool)1;
    for(    it_872=((char*)list$1voidpp_begin(left->key_list));    !list$1voidpp_end(left->key_list);    it_872=((char*)list$1voidpp_next(left->key_list))    ){
        memset(&default_value_873,0,sizeof(void*));
        it2_874=((char*)list$1voidpp_item(right->key_list,n_870,default_value_873));
        if(        come_call_equals((void*)0, it_872, it2_874)) {
            memset(&default_value2_877,0,sizeof(void*));
            item_878=((void*)(__right_value870=map$2voidphvoidphp_at(left,it_872,default_value2_877)));
            come_call_finalizer3(__right_value870,(void*)0, 0, 1, 0, 0, (void*)0);
            item2_879=((void*)(__right_value871=map$2voidphvoidphp_at(right,it2_874,default_value2_877)));
            come_call_finalizer3(__right_value871,(void*)0, 0, 1, 0, 0, (void*)0);
            if(            !come_call_equals((void*)0, item_878, item2_879)) {
                result_871=(_Bool)0;
            }
        }
        else {
            result_871=(_Bool)0;
        }
        n_870++;
    }
    return result_871;
}

static void* list$1voidpp_item(struct list$1voidp* self, int position, void* default_value){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_875;
int i_876;
void* __result455__;
void* __result456__;
    if(    position<0) {
        position+=self->len;
    }
    it_875=self->head;
    i_876=0;
    while(it_875!=((void*)0)) {
        if(        position==i_876) {
            __result455__ = gComeFunResultObject = __result_obj__ = it_875->item;
            gComeFunResultObject = (void*)0;
            return __result455__;
        }
        it_875=it_875->next;
        i_876++;
    }
    __result456__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result456__;
}

static struct map$2voidphvoidph* map$2voidphvoidph_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result457__;
void* __right_value873 = (void*)0;
void* __right_value879 = (void*)0;
struct map$2voidphvoidph* result_885;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct list$1voidp* __dec_obj314;
char* it_888;
void* default_value_889;
void* __right_value883 = (void*)0;
struct sVar* it2_890;
void* __right_value889 = (void*)0;
struct map$2voidphvoidph* __result466__;
default_value_889 = (void*)0;
    if(    self==((void*)0)) {
        __result457__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result457__;
    }
    result_885=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "./comelang.h", 2698, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidph_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    __dec_obj314=result_885->key_list;
    result_885->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2700, "struct list$1voidp*", list$1voidpp_finalize, list$1voidp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    come_call_finalizer3(__dec_obj314,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_888=((char*)map$2voidphvoidphp_begin(self));    !map$2voidphvoidphp_end(self);    it_888=((char*)map$2voidphvoidphp_next(self))    ){
        memset(&default_value_889,0,sizeof(void*));
        it2_890=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_at(self,it_888,((struct sVar*)default_value_889)));
        map$2voidphvoidphp_put(result_885,it_888,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_890)));
        come_call_finalizer3(it2_890,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result466__ = gComeFunResultObject = __result_obj__ = result_885;
    come_call_finalizer3(result_885,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result466__;
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_881;
    result_881=0;
    result_881+=int_get_hash_key(((int)self->keys));
    result_881+=int_get_hash_key(((int)self->item_existance));
    result_881+=int_get_hash_key(((int)self->items));
    result_881+=int_get_hash_key(((int)self->size));
    result_881+=int_get_hash_key(((int)self->len));
    result_881+=int_get_hash_key(((int)self->key_list));
    result_881+=int_get_hash_key(((int)self->it));
    return result_881;
}

static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
int i_882;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1voidp* __dec_obj313;
struct map$2voidphvoidph* __result459__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value874=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value875=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value876=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_882=0;    i_882<128;    i_882++    ){
        self->item_existance[i_882]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj313=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj313,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result459__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result459__;
}

static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result458__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result458__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result458__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_883;
struct list_item$1voidp* prev_it_884;
    it_883=self->head;
    while(it_883!=((void*)0)) {
        prev_it_884=it_883;
        it_883=it_883->next;
        come_call_finalizer3(prev_it_884,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1voidp* list$1voidp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result460__;
void* __right_value880 = (void*)0;
struct list$1voidp* result_886;
struct list$1voidp* __result461__;
    if(    self==(void*)0) {
        __result460__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result460__;
    }
    result_886=(struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "list$1voidp_clone", 3, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_886->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_886->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_886->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_886->it=self->it;
    }
    __result461__ = gComeFunResultObject = __result_obj__ = result_886;
    come_call_finalizer3(result_886,list$1voidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result461__;
}

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_887;
    result_887=0;
    result_887+=int_get_hash_key(((int)self->head));
    result_887+=int_get_hash_key(((int)self->tail));
    result_887+=int_get_hash_key(((int)self->len));
    result_887+=int_get_hash_key(((int)self->it));
    return result_887;
}

static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right){
    if(    !list_item$1voidph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result462__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result462__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result462__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_891;
int it_892;
_Bool same_key_exist_893;
char* it2_894;
struct map$2voidphvoidph* __result463__;
    if(    self->len*2>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_891=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_892=hash_891;
    while((_Bool)1) {
        if(        self->item_existance[it_892]) {
            if(            come_call_equals((void*)0, self->keys[it_892], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_892], (void*)0, 0, 0, 0, 0, (void*)0);
                    list$1voidpp_remove(self->key_list,self->keys[it_892]);
                    self->keys[it_892]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_892]);
                    self->keys[it_892]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_892], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_892]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_892]=item;
                }
                break;
            }
            it_892++;
            if(            it_892>=self->size) {
                it_892=0;
            }
            else if(            it_892==hash_891) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_892]=(_Bool)1;
            if(            1) {
                self->keys[it_892]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_892]=key;
            }
            if(            1) {
                self->items[it_892]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_892]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_893=(_Bool)0;
    for(    it2_894=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_894=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_894, key)) {
            same_key_exist_893=(_Bool)1;
        }
    }
    if(    !same_key_exist_893) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result463__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result463__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result464__;
void* __right_value884 = (void*)0;
struct sVar* result_896;
void* __right_value885 = (void*)0;
char* __dec_obj319;
void* __right_value886 = (void*)0;
char* __dec_obj320;
void* __right_value887 = (void*)0;
struct sType* __dec_obj321;
void* __right_value888 = (void*)0;
char* __dec_obj322;
struct sVar* __result465__;
    if(    self==(void*)0) {
        __result464__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result464__;
    }
    result_896=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj319=result_896->mName;
        result_896->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj320=result_896->mCValueName;
        result_896->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj321=result_896->mType;
        result_896->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_896->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_896->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_896->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_896->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_896->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj322=result_896->mFunName;
        result_896->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result465__ = gComeFunResultObject = __result_obj__ = result_896;
    come_call_finalizer3(result_896,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result465__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj315;
char* __dec_obj316;
struct sType* __dec_obj317;
char* __dec_obj318;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj315=self->mName;
            __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj316=self->mCValueName;
            __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj317=self->mType;
            come_call_finalizer3(__dec_obj317,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj318=self->mFunName;
            __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_895;
    result_895=0;
    result_895+=int_get_hash_key(((int)self->mName));
    result_895+=int_get_hash_key(((int)self->mCValueName));
    result_895+=int_get_hash_key(((int)self->mType));
    result_895+=int_get_hash_key(((int)self->mBlockLevel));
    result_895+=int_get_hash_key(((int)self->mGlobal));
    result_895+=int_get_hash_key(((int)self->mAllocaValue));
    result_895+=int_get_hash_key(((int)self->mFunctionParam));
    result_895+=int_get_hash_key(((int)self->mNoFree));
    result_895+=int_get_hash_key(((int)self->mFunName));
    return result_895;
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
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
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

static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self){
int i_897;
int i_898;
    for(    i_897=0;    i_897<self->size;    i_897++    ){
        if(        self->item_existance[i_897]) {
            if(            1) {
                come_call_finalizer3(self->items[i_897], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_898=0;    i_898<self->size;    i_898++    ){
        if(        self->item_existance[i_898]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_898], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFuncNode* sFuncNode_clone(struct sFuncNode* self){
void* __result_obj__=(void*)0;
struct sFuncNode* __result474__;
void* __right_value900 = (void*)0;
struct sFuncNode* result_901;
void* __right_value901 = (void*)0;
char* __dec_obj327;
struct sFuncNode* __result475__;
    if(    self==(void*)0) {
        __result474__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result474__;
    }
    result_901=(struct sFuncNode*)come_increment_ref_count((struct sFuncNode*)come_calloc(1, sizeof(struct sFuncNode)*(1), "sFuncNode_clone", 3, "struct sFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_901->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj327=result_901->sname;
        result_901->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_901->sline_real=self->sline_real;
    }
    __result475__ = gComeFunResultObject = __result_obj__ = result_901;
    come_call_finalizer3(result_901,sFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result475__;
}

static struct sWildCard* sWildCard_clone(struct sWildCard* self){
void* __result_obj__=(void*)0;
struct sWildCard* __result477__;
void* __right_value905 = (void*)0;
struct sWildCard* result_902;
void* __right_value906 = (void*)0;
char* __dec_obj328;
struct sWildCard* __result478__;
    if(    self==(void*)0) {
        __result477__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result477__;
    }
    result_902=(struct sWildCard*)come_increment_ref_count((struct sWildCard*)come_calloc(1, sizeof(struct sWildCard)*(1), "sWildCard_clone", 3, "struct sWildCard*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_902->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_902->sname;
        result_902->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_902->sline_real=self->sline_real;
    }
    __result478__ = gComeFunResultObject = __result_obj__ = result_902;
    come_call_finalizer3(result_902,sWildCard_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result478__;
}

static struct sLineNode* sLineNode_clone(struct sLineNode* self){
void* __result_obj__=(void*)0;
struct sLineNode* __result480__;
void* __right_value910 = (void*)0;
struct sLineNode* result_903;
void* __right_value911 = (void*)0;
char* __dec_obj329;
struct sLineNode* __result481__;
    if(    self==(void*)0) {
        __result480__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result480__;
    }
    result_903=(struct sLineNode*)come_increment_ref_count((struct sLineNode*)come_calloc(1, sizeof(struct sLineNode)*(1), "sLineNode_clone", 3, "struct sLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_903->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj329=result_903->sname;
        result_903->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_903->sline_real=self->sline_real;
    }
    __result481__ = gComeFunResultObject = __result_obj__ = result_903;
    come_call_finalizer3(result_903,sLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result481__;
}

static struct sSNameNode* sSNameNode_clone(struct sSNameNode* self){
void* __result_obj__=(void*)0;
struct sSNameNode* __result483__;
void* __right_value915 = (void*)0;
struct sSNameNode* result_904;
void* __right_value916 = (void*)0;
char* __dec_obj330;
struct sSNameNode* __result484__;
    if(    self==(void*)0) {
        __result483__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result483__;
    }
    result_904=(struct sSNameNode*)come_increment_ref_count((struct sSNameNode*)come_calloc(1, sizeof(struct sSNameNode)*(1), "sSNameNode_clone", 3, "struct sSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_904->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj330=result_904->sname;
        result_904->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_904->sline_real=self->sline_real;
    }
    __result484__ = gComeFunResultObject = __result_obj__ = result_904;
    come_call_finalizer3(result_904,sSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result484__;
}

static struct sCallerFuncNode* sCallerFuncNode_clone(struct sCallerFuncNode* self){
void* __result_obj__=(void*)0;
struct sCallerFuncNode* __result486__;
void* __right_value920 = (void*)0;
struct sCallerFuncNode* result_905;
void* __right_value921 = (void*)0;
char* __dec_obj331;
struct sCallerFuncNode* __result487__;
    if(    self==(void*)0) {
        __result486__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result486__;
    }
    result_905=(struct sCallerFuncNode*)come_increment_ref_count((struct sCallerFuncNode*)come_calloc(1, sizeof(struct sCallerFuncNode)*(1), "sCallerFuncNode_clone", 3, "struct sCallerFuncNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_905->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj331=result_905->sname;
        result_905->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_905->sline_real=self->sline_real;
    }
    __result487__ = gComeFunResultObject = __result_obj__ = result_905;
    come_call_finalizer3(result_905,sCallerFuncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result487__;
}

static struct sCallerLineNode* sCallerLineNode_clone(struct sCallerLineNode* self){
void* __result_obj__=(void*)0;
struct sCallerLineNode* __result489__;
void* __right_value925 = (void*)0;
struct sCallerLineNode* result_906;
void* __right_value926 = (void*)0;
char* __dec_obj332;
struct sCallerLineNode* __result490__;
    if(    self==(void*)0) {
        __result489__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result489__;
    }
    result_906=(struct sCallerLineNode*)come_increment_ref_count((struct sCallerLineNode*)come_calloc(1, sizeof(struct sCallerLineNode)*(1), "sCallerLineNode_clone", 3, "struct sCallerLineNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_906->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj332=result_906->sname;
        result_906->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_906->sline_real=self->sline_real;
    }
    __result490__ = gComeFunResultObject = __result_obj__ = result_906;
    come_call_finalizer3(result_906,sCallerLineNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result490__;
}

static struct sCallerSNameNode* sCallerSNameNode_clone(struct sCallerSNameNode* self){
void* __result_obj__=(void*)0;
struct sCallerSNameNode* __result492__;
void* __right_value930 = (void*)0;
struct sCallerSNameNode* result_907;
void* __right_value931 = (void*)0;
char* __dec_obj333;
struct sCallerSNameNode* __result493__;
    if(    self==(void*)0) {
        __result492__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result492__;
    }
    result_907=(struct sCallerSNameNode*)come_increment_ref_count((struct sCallerSNameNode*)come_calloc(1, sizeof(struct sCallerSNameNode)*(1), "sCallerSNameNode_clone", 3, "struct sCallerSNameNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_907->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj333=result_907->sname;
        result_907->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_907->sline_real=self->sline_real;
    }
    __result493__ = gComeFunResultObject = __result_obj__ = result_907;
    come_call_finalizer3(result_907,sCallerSNameNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result493__;
}

static struct sVarArgTypeName* sVarArgTypeName_clone(struct sVarArgTypeName* self){
void* __result_obj__=(void*)0;
struct sVarArgTypeName* __result495__;
void* __right_value936 = (void*)0;
struct sVarArgTypeName* result_911;
void* __right_value937 = (void*)0;
char* __dec_obj334;
void* __right_value938 = (void*)0;
struct sType* __dec_obj335;
struct sVarArgTypeName* __result496__;
    if(    self==(void*)0) {
        __result495__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result495__;
    }
    result_911=(struct sVarArgTypeName*)come_increment_ref_count((struct sVarArgTypeName*)come_calloc(1, sizeof(struct sVarArgTypeName)*(1), "sVarArgTypeName_clone", 3, "struct sVarArgTypeName*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_911->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj334=result_911->sname;
        result_911->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_911->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj335=result_911->type;
        result_911->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj335,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result496__ = gComeFunResultObject = __result_obj__ = result_911;
    come_call_finalizer3(result_911,sVarArgTypeName_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result496__;
}

static struct sInlineAssembler* sInlineAssembler_clone(struct sInlineAssembler* self){
void* __result_obj__=(void*)0;
struct sInlineAssembler* __result499__;
void* __right_value950 = (void*)0;
struct sInlineAssembler* result_917;
void* __right_value951 = (void*)0;
char* __dec_obj336;
void* __right_value952 = (void*)0;
char* __dec_obj337;
void* __right_value953 = (void*)0;
struct list$1sNodeph* __dec_obj338;
struct sInlineAssembler* __result500__;
    if(    self==(void*)0) {
        __result499__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result499__;
    }
    result_917=(struct sInlineAssembler*)come_increment_ref_count((struct sInlineAssembler*)come_calloc(1, sizeof(struct sInlineAssembler)*(1), "sInlineAssembler_clone", 3, "struct sInlineAssembler*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_917->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj336=result_917->sname;
        result_917->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_917->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->source!=((void*)0)) {
        __dec_obj337=result_917->source;
        result_917->source=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->source));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj338=result_917->exps;
        result_917->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj338,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result500__ = gComeFunResultObject = __result_obj__ = result_917;
    come_call_finalizer3(result_917,sInlineAssembler_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result500__;
}

struct sNode* expression_v5(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value976 = (void*)0;
struct sNode* __result509__;
    __result509__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value976=expression_node_v99(info)));
    if(__right_value976) { __right_value976 = come_decrement_ref_count2(__right_value976, ((struct sNode*)__right_value976)->finalize, ((struct sNode*)__right_value976)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result509__;
}

static struct sNode* post_position_operator_of_statment(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
struct sNode* __dec_obj340;
struct sNode* __result510__;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct sNode* __dec_obj341;
struct sNode* __result511__;
struct sNode* __result512__;
    if(    parsecmp("or",info)) {
        info->p+=strlen("or");
        skip_spaces_and_lf(info);
        __dec_obj340=node;
        node=(struct sNode*)come_increment_ref_count(parse_or_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
        __result510__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result510__;
    }
    else if(    parsecmp("and",info)) {
        info->p+=strlen("and");
        skip_spaces_and_lf(info);
        __dec_obj341=node;
        node=(struct sNode*)come_increment_ref_count(parse_and_statment((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node)),info));
        if(__dec_obj341) { __dec_obj341 = come_decrement_ref_count2(__dec_obj341, ((struct sNode*)__dec_obj341)->finalize, ((struct sNode*)__dec_obj341)->_protocol_obj, 0,0,0, (void*)0); };
        __result511__ = gComeFunResultObject = __result_obj__ = node;
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result511__;
    }
    __result512__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result512__;
}

struct sNode* statment(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value981 = (void*)0;
struct sNode* node_930;
void* __right_value982 = (void*)0;
struct sNode* __dec_obj342;
struct sNode* __result513__;
    node_930=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj342=node_930;
    node_930=(struct sNode*)come_increment_ref_count(post_position_operator_of_statment((struct sNode*)come_increment_ref_count(node_930),info));
    if(__dec_obj342) { __dec_obj342 = come_decrement_ref_count2(__dec_obj342, ((struct sNode*)__dec_obj342)->finalize, ((struct sNode*)__dec_obj342)->_protocol_obj, 0,0,0, (void*)0); };
    __result513__ = gComeFunResultObject = __result_obj__ = node_930;
    if(node_930) { node_930 = come_decrement_ref_count2(node_930, ((struct sNode*)node_930)->finalize, ((struct sNode*)node_930)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result513__;
}

char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_931;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct buffer* buf_932;
void* __right_value985 = (void*)0;
char* __dec_obj343;
int i_933;
void* __right_value986 = (void*)0;
char* __dec_obj344;
void* __right_value987 = (void*)0;
char* __dec_obj345;
int i_934;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
char* __result514__;
struct_name_931 = (void*)0;
    buf_932=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2584, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj343=struct_name_931;
        struct_name_931=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_933=0;            i_933<obj_type->mOriginalTypeNamePointerNum;            i_933++            ){
                buffer_append_str(buf_932,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj344=struct_name_931;
        struct_name_931=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj345=struct_name_931;
        struct_name_931=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_934=0;        i_934<obj_type->mPointerNum;        i_934++        ){
            buffer_append_str(buf_932,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_932,"a");
    }
    if(    !array_equal_pointer&&list$1sNodephp_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_932,"pa");
    }
    __result514__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value989=xsprintf("%s%s_%s",struct_name_931,((char*)(__right_value988=buffer_to_string(buf_932))),fun_name)));
    struct_name_931 = come_decrement_ref_count2(struct_name_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_932,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value989 = come_decrement_ref_count2(__right_value989, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result514__;
}

char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_935;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct buffer* buf_936;
void* __right_value992 = (void*)0;
char* __dec_obj346;
void* __right_value993 = (void*)0;
char* __dec_obj347;
int i_937;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
char* __result515__;
struct_name_935 = (void*)0;
    buf_936=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2619, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    obj_type->mClass->mStruct) {
        __dec_obj346=struct_name_935;
        struct_name_935=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj347=struct_name_935;
        struct_name_935=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_937=0;        i_937<obj_type->mPointerNum;        i_937++        ){
            buffer_append_str(buf_936,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_936,"a");
    }
    if(    !array_equal_pointer&&list$1sNodephp_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_936,"pa");
    }
    __result515__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value995=xsprintf("%s%s_%s",struct_name_935,((char*)(__right_value994=buffer_to_string(buf_936))),fun_name)));
    struct_name_935 = come_decrement_ref_count2(struct_name_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_936,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value994 = come_decrement_ref_count2(__right_value994, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value995 = come_decrement_ref_count2(__right_value995, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result515__;
}

char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
char* struct_name_938;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct buffer* buf_939;
void* __right_value998 = (void*)0;
char* __dec_obj348;
int i_940;
void* __right_value999 = (void*)0;
char* __dec_obj349;
void* __right_value1000 = (void*)0;
char* __dec_obj350;
int i_941;
void* __right_value1001 = (void*)0;
int len_943;
void* __right_value1002 = (void*)0;
char* __result516__;
struct_name_938 = (void*)0;
    buf_939=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05call.c", 2645, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    if(    string_operator_not_equals(obj_type->mOriginalTypeName,"")) {
        __dec_obj348=struct_name_938;
        struct_name_938=(char*)come_increment_ref_count(__builtin_string(obj_type->mOriginalTypeName));
        __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        !obj_type->mClass->mStruct) {
            for(            i_940=0;            i_940<obj_type->mOriginalTypeNamePointerNum;            i_940++            ){
                buffer_append_str(buf_939,"p");
            }
        }
    }
    else if(    obj_type->mClass->mStruct) {
        __dec_obj349=struct_name_938;
        struct_name_938=(char*)come_increment_ref_count(__builtin_string(obj_type->mClass->mName));
        __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj350=struct_name_938;
        struct_name_938=(char*)come_increment_ref_count(create_generics_name(obj_type,info));
        __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_941=0;        i_941<obj_type->mPointerNum;        i_941++        ){
            buffer_append_str(buf_939,"p");
        }
    }
    if(    obj_type->mArrayPointerType) {
        buffer_append_str(buf_939,"a");
    }
    if(    !array_equal_pointer&&list$1sNodephp_length(obj_type->mArrayNum)>0) {
        buffer_append_str(buf_939,"pa");
    }
    char none_method_name_942[charp_length(fun_name)+1];
    memset(&none_method_name_942, 0, sizeof(char)    *(charp_length(fun_name)+1)    );
    len_943=string_length(struct_name_938)+string_length(((char*)(__right_value1001=buffer_to_string(buf_939))));
    __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    memcpy(none_method_name_942,fun_name+len_943+1,charp_length(fun_name)-len_943-1);
    none_method_name_942[charp_length(fun_name)-len_943-1]=0;
    __result516__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1002=__builtin_string(none_method_name_942)));
    struct_name_938 = come_decrement_ref_count2(struct_name_938, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_939,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value1002 = come_decrement_ref_count2(__right_value1002, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result516__;
}

char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value1003 = (void*)0;
char* struct_name_944;
void* __right_value1004 = (void*)0;
char* __result517__;
    struct_name_944=(char*)come_increment_ref_count(__builtin_string(obj_class->mName));
    __result517__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value1004=xsprintf("%s_%s",struct_name_944,fun_name)));
    struct_name_944 = come_decrement_ref_count2(struct_name_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value1004 = come_decrement_ref_count2(__right_value1004, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result517__;
}

struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result518__;
    err_msg(info,"unexpected word(%s)(2)\n",buf);
    exit(2);
    __result518__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result518__;
}

struct sNode* post_position_operator(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_945;
char* p_946;
int sline_947;
_Bool err_flag_948;
void* __right_value1007 = (void*)0;
char* label_949;
void* __right_value1008 = (void*)0;
char* __dec_obj351;
char* __dec_obj352;
_Bool no_comma_950;
_Bool in_fun_param_951;
void* __right_value1009 = (void*)0;
struct sNode* node_952;
void* __right_value1010 = (void*)0;
struct sNode* __dec_obj353;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sNode* _inf_value21;
struct sLambdaCall* _inf_obj_value21;
void* __right_value1019 = (void*)0;
struct sNode* __result521__;
struct sNode* __result522__;
    parse_sharp_v5(info);
    if(    !node->terminated(node->_protocol_obj)&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        params_945=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "05call.c", 2708, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_946=info->p;
            sline_947=info->sline;
            err_flag_948=(_Bool)0;
            label_949=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj351=label_949;
                label_949=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_948=(_Bool)1;
            }
            if(            err_flag_948==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj352=label_949;
                label_949=((void*)0);
                __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_946;
                info->sline=sline_947;
            }
            no_comma_950=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_951=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_952=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj353=node_952;
            node_952=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_952),info));
            if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
            info->no_comma=no_comma_950;
            info->in_fun_param=in_fun_param_951;
            list$1tuple2$2charphsNodephphp_push_back(params_945,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "05call.c", 2751, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(label_949),(struct sNode*)come_increment_ref_count(node_952))));
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_949 = come_decrement_ref_count2(label_949, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_952) { node_952 = come_decrement_ref_count2(node_952, ((struct sNode*)node_952)->finalize, ((struct sNode*)node_952)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_949 = come_decrement_ref_count2(label_949, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_952) { node_952 = come_decrement_ref_count2(node_952, ((struct sNode*)node_952)->finalize, ((struct sNode*)node_952)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        parse_sharp_v5(info);
        _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05call.c", 2769, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value21=(struct sLambdaCall*)come_increment_ref_count(((struct sLambdaCall*)(__right_value1014=sLambdaCall_initialize((struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "05call.c", 2769, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(node),params_945,info))));
        _inf_value21->_protocol_obj=_inf_obj_value21;
        _inf_value21->finalize=(void*)sLambdaCall_finalize;
        _inf_value21->clone=(void*)sLambdaCall_clone;
        _inf_value21->compile=(void*)sLambdaCall_compile;
        _inf_value21->sline=(void*)sNodeBase_sline;
        _inf_value21->sline_real=(void*)sNodeBase_sline_real;
        _inf_value21->sname=(void*)sNodeBase_sname;
        _inf_value21->terminated=(void*)sNodeBase_terminated;
        _inf_value21->kind=(void*)sLambdaCall_kind;
        __result521__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1019=_inf_value21));
        come_call_finalizer3(params_945,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value1014,sLambdaCall_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1019) { __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result521__;
        come_call_finalizer3(params_945,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __result522__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result522__;
    }
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static struct sLambdaCall* sLambdaCall_clone(struct sLambdaCall* self){
void* __result_obj__=(void*)0;
struct sLambdaCall* __result519__;
void* __right_value1015 = (void*)0;
struct sLambdaCall* result_953;
void* __right_value1016 = (void*)0;
char* __dec_obj354;
void* __right_value1017 = (void*)0;
struct sNode* __dec_obj355;
void* __right_value1018 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj356;
struct sLambdaCall* __result520__;
    if(    self==(void*)0) {
        __result519__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result519__;
    }
    result_953=(struct sLambdaCall*)come_increment_ref_count((struct sLambdaCall*)come_calloc(1, sizeof(struct sLambdaCall)*(1), "sLambdaCall_clone", 3, "struct sLambdaCall*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_953->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj354=result_953->sname;
        result_953->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_953->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj355=result_953->node;
        result_953->node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->node));
        if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj356=result_953->params;
        result_953->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj356,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result520__ = gComeFunResultObject = __result_obj__ = result_953;
    come_call_finalizer3(result_953,sLambdaCall_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result520__;
}

