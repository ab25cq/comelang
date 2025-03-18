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

struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct tuple2$2char$phvoid$p
{
    char* v1;
    void* v2;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2char$phsNode$ph$ph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sType$ph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
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
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);
char* sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
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
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self);
static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self);
static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right);
static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2);
static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self);
static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self);
static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value231 = (void*)0;
struct sCurrentNode* __result_obj__197;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value231,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value232 = (void*)0;
char* __result_obj__198;
    __result_obj__198 = come_increment_ref_count(((char*)(__right_value232=__builtin_string(self->sname))));
    (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__198 = come_decrement_ref_count(__result_obj__198, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__198;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value233 = (void*)0;
char* __result_obj__199;
    __result_obj__199 = come_increment_ref_count(((char*)(__right_value233=__builtin_string("sCurrentNode"))));
    (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__199 = come_decrement_ref_count(__result_obj__199, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__199;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value234 = (void*)0;
char* class_name_274;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sClass* current_stack_275;
struct sVarTable* vtable_276;
struct map$2char$phsVar$ph* o2_saved_277;
char* it_280;
char* key_283;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sVar* value_284;
void* __right_value277 = (void*)0;
struct sType* type2_292;
void* __right_value278 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct tuple2$2char$phsType$ph* item_316;
void* __right_value284 = (void*)0;
struct sType* type3_327;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
struct tuple2$2char$phsType$ph* item2_330;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_379;
char* it_380;
char* key_381;
void* __right_value298 = (void*)0;
struct sVar* value_382;
void* __right_value299 = (void*)0;
struct sType* type2_383;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct tuple2$2char$phsType$ph* item_384;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct CVALUE* come_value_385;
void* __right_value304 = (void*)0;
char* __dec_obj54;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__252;
    info->current_stack_num++;
    class_name_274=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_275=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 427, "struct sClass*")),(char*)come_increment_ref_count(class_name_274),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_276=info->lv_table;
    while(vtable_276) {
        for(        o2_saved_277=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_276->mVars)),it_280=map$2char$phsVar$ph_begin((o2_saved_277));        !map$2char$phsVar$ph_end((o2_saved_277));        it_280=map$2char$phsVar$ph_next((o2_saved_277))        ){
            key_283=it_280;
            value_284=((struct sVar*)(__right_value238=map$2char$phsVar$ph$p_operator_load_element(vtable_276->mVars,((char*)(__right_value237=__builtin_string(key_283))))));
            (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value238,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_292=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_284->mType));
            type2_292->mPointerNum++;
            item_316=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 440, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_284->mCValueName)),(struct sType*)come_increment_ref_count(type2_292)));
            if(            value_284->mCValueName!=((void*)0)) {
                if(                strcmp(value_284->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_284->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_284->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_284->mType->mClass->mName,"va_list")||string_operator_equals(value_284->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_292->mArrayNum)==1) {
                    type3_327=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_292));
                    list$1sNode$ph_reset(type3_327->mArrayNum);
                    type3_327->mPointerNum=1;
                    type3_327->mOriginIsArray=(_Bool)1;
                    item2_330=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 460, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_284->mCValueName)),(struct sType*)come_increment_ref_count(type3_327)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_275->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_330)));
                    value_284->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_330,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_275->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_316)));
                }
            }
            /*c*/ come_call_finalizer3(type2_292,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_316,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_277,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_276=vtable_276->mParent;
    }
    output_struct(current_stack_275,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_274),(struct sClass*)come_increment_ref_count(current_stack_275));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_274,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_274);
    vtable_276=info->lv_table;
    while(vtable_276) {
        for(        o2_saved_379=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_276->mVars)),it_380=map$2char$phsVar$ph_begin((o2_saved_379));        !map$2char$phsVar$ph_end((o2_saved_379));        it_380=map$2char$phsVar$ph_next((o2_saved_379))        ){
            key_381=it_380;
            value_382=((struct sVar*)(__right_value298=map$2char$phsVar$ph$p_operator_load_element(vtable_276->mVars,key_381)));
            /*c*/ come_call_finalizer3(__right_value298,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_383=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_382->mType));
            item_384=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 489, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_382->mCValueName),(struct sType*)come_increment_ref_count(type2_383)));
            if(            value_382->mCValueName!=((void*)0)) {
                if(                strcmp(value_382->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_382->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_382->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_382->mType->mClass->mName,"va_list")||string_operator_equals(value_382->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_383->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_382->mCValueName,value_382->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_382->mCValueName,value_382->mCValueName);
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_383,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_384,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_379,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_276=vtable_276->mParent;
    }
    come_value_385=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 518, "struct CVALUE*"))));
    __dec_obj54=come_value_385->c_value,
    come_value_385->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj55=come_value_385->type,
    come_value_385->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 521, "struct sType*")),(char*)come_increment_ref_count(class_name_274),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_385->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_385->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_385));
    __result_obj__252 = (_Bool)1;
    (class_name_274 = come_decrement_ref_count(class_name_274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_275,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_385,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_278;
char* __result_obj__200;
char* __result_obj__201;
char* result_279;
char* __result_obj__202;
result_278 = (void*)0;
result_279 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_278,0,sizeof(char*));
        __result_obj__200 = result_278;
        return __result_obj__200;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__201 = self->key_list->it->item;
        return __result_obj__201;
    }
    memset(&result_279,0,sizeof(char*));
    __result_obj__202 = result_279;
    return __result_obj__202;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_281;
char* __result_obj__203;
char* __result_obj__204;
char* result_282;
char* __result_obj__205;
result_281 = (void*)0;
result_282 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_281,0,sizeof(char*));
        __result_obj__203 = result_281;
        return __result_obj__203;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__204 = self->key_list->it->item;
        return __result_obj__204;
    }
    memset(&result_282,0,sizeof(char*));
    __result_obj__205 = result_282;
    return __result_obj__205;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_285;
unsigned int hash_286;
unsigned int it_287;
struct sVar* __result_obj__206;
struct sVar* __result_obj__207;
struct sVar* __result_obj__208;
struct sVar* __result_obj__209;
default_value_285 = (void*)0;
    memset(&default_value_285,0,sizeof(struct sVar*));
    hash_286=string_get_hash_key(((char*)key))%self->size;
    it_287=hash_286;
    while((_Bool)1) {
        if(        self->item_existance[it_287]) {
            if(            string_equals(self->keys[it_287],key)) {
                __result_obj__206 = come_increment_ref_count(self->items[it_287]);
                /*c*/ come_call_finalizer3(default_value_285,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__206,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__206;
            }
            it_287++;
            if(            it_287>=self->size) {
                it_287=0;
            }
            else if(            it_287==hash_286) {
                __result_obj__207 = come_increment_ref_count(default_value_285);
                /*c*/ come_call_finalizer3(default_value_285,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__207,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__207;
            }
        }
        else {
            __result_obj__208 = come_increment_ref_count(default_value_285);
            /*c*/ come_call_finalizer3(default_value_285,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__208,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__208;
        }
    }
    __result_obj__209 = come_increment_ref_count(default_value_285);
    /*c*/ come_call_finalizer3(default_value_285,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
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
struct list_item$1sType$ph* it_288;
struct list_item$1sType$ph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        /*c*/ come_call_finalizer3(prev_it_289,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_290;
struct list_item$1sNode$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        /*c*/ come_call_finalizer3(prev_it_291,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__210;
void* __right_value239 = (void*)0;
struct sType* result_293;
void* __right_value240 = (void*)0;
struct sType* __dec_obj23;
void* __right_value241 = (void*)0;
struct sType* __dec_obj24;
void* __right_value249 = (void*)0;
struct list$1sType$ph* __dec_obj28;
void* __right_value250 = (void*)0;
struct sType* __dec_obj29;
void* __right_value251 = (void*)0;
struct sType* __dec_obj30;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value254 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value255 = (void*)0;
char* __dec_obj33;
void* __right_value256 = (void*)0;
char* __dec_obj34;
void* __right_value257 = (void*)0;
char* __dec_obj35;
void* __right_value265 = (void*)0;
struct list$1sNode$ph* __dec_obj39;
void* __right_value266 = (void*)0;
char* __dec_obj40;
void* __right_value267 = (void*)0;
struct list$1sType$ph* __dec_obj41;
void* __right_value275 = (void*)0;
struct list$1char$ph* __dec_obj45;
void* __right_value276 = (void*)0;
struct sType* __dec_obj46;
struct sType* __result_obj__224;
    if(    self==(void*)0) {
        __result_obj__210 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__210,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__210;
    }
    result_293=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_293->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj23=result_293->mOriginalLoadVarType,
        result_293->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj24=result_293->mChannelType,
        result_293->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj28=result_293->mGenericsTypes,
        result_293->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj28,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj29=result_293->mNoSolvedGenericsType,
        result_293->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_293->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj30=result_293->mAnyOriginalType,
        result_293->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj31=result_293->mSizeNum,
        result_293->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj32=result_293->mAlignas,
        result_293->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj33=result_293->mTupleName,
        result_293->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj34=result_293->mAttribute,
        result_293->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_293->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_293->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_293->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_293->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_293->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_293->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_293->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_293->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_293->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_293->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_293->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_293->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_293->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_293->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_293->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_293->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_293->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_293->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_293->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_293->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_293->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_293->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_293->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_293->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_293->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_293->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj35=result_293->mAsmName,
        result_293->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_293->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_293->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_293->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj39=result_293->mArrayNum,
        result_293->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_293->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_293->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_293->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_293->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_293->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj40=result_293->mOriginalTypeName,
        result_293->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_293->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_293->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_293->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_293->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj41=result_293->mParamTypes,
        result_293->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj45=result_293->mParamNames,
        result_293->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj46=result_293->mResultType,
        result_293->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_293->mVarArgs=self->mVarArgs;
    }
    __result_obj__224 = come_increment_ref_count(result_293);
    /*c*/ come_call_finalizer3(result_293,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__224,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__224;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__211;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1sType$ph* result_294;
struct list_item$1sType$ph* it_295;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct list$1sType$ph* __result_obj__214;
    if(    self==((void*)0)) {
        __result_obj__211 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__211,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__211;
    }
    result_294=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_295=self->head;
    while(it_295!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_294,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_295->item)));
        }
        else {
            list$1sType$ph_add(result_294,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_295->item)));
        }
        it_295=it_295->next;
    }
    __result_obj__214 = come_increment_ref_count(result_294);
    /*c*/ come_call_finalizer3(result_294,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__214,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__212;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__212 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__212,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__212;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value244 = (void*)0;
struct list_item$1sType$ph* litem_296;
struct sType* __dec_obj25;
void* __right_value245 = (void*)0;
struct list_item$1sType$ph* litem_297;
struct sType* __dec_obj26;
void* __right_value246 = (void*)0;
struct list_item$1sType$ph* litem_298;
struct sType* __dec_obj27;
struct list$1sType$ph* __result_obj__213;
    if(    self->len==0) {
        litem_296=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value244=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_296->prev=((void*)0);
        litem_296->next=((void*)0);
        __dec_obj25=litem_296->item,
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_296;
        self->head=litem_296;
    }
    else if(    self->len==1) {
        litem_297=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value245=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_297->prev=self->head;
        litem_297->next=((void*)0);
        __dec_obj26=litem_297->item,
        litem_297->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_297;
        self->head->next=litem_297;
    }
    else {
        litem_298=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value246=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_298->prev=self->tail;
        litem_298->next=((void*)0);
        __dec_obj27=litem_298->item,
        litem_298->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_298;
        self->tail=litem_298;
    }
    self->len++;
    __result_obj__213 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__213;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_299;
struct list_item$1sType$ph* prev_it_300;
    it_299=self->head;
    while(it_299!=((void*)0)) {
        prev_it_300=it_299;
        it_299=it_299->next;
        /*c*/ come_call_finalizer3(prev_it_300,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__215;
void* __right_value252 = (void*)0;
struct sNode* result_301;
struct sNode* __result_obj__216;
    if(    self==(void*)0) {
        __result_obj__215 = come_increment_ref_count((void*)0);
        ((__result_obj__215) ? __result_obj__215 = come_decrement_ref_count(__result_obj__215, ((struct sNode*)__result_obj__215)->finalize, ((struct sNode*)__result_obj__215)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__215;
    }
    result_301=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_301->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_301->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_301->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_301->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_301->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_301->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_301->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_301->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_301->kind=self->kind;
    }
    __result_obj__216 = come_increment_ref_count(result_301);
    ((result_301) ? result_301 = come_decrement_ref_count(result_301, ((struct sNode*)result_301)->finalize, ((struct sNode*)result_301)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__216;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__217;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sNode$ph* result_302;
struct list_item$1sNode$ph* it_303;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1sNode$ph* __result_obj__220;
    if(    self==((void*)0)) {
        __result_obj__217 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__217,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__217;
    }
    result_302=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_303=self->head;
    while(it_303!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_302,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_303->item)));
        }
        else {
            list$1sNode$ph_add(result_302,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_303->item)));
        }
        it_303=it_303->next;
    }
    __result_obj__220 = come_increment_ref_count(result_302);
    /*c*/ come_call_finalizer3(result_302,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__220,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__218;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value260 = (void*)0;
struct list_item$1sNode$ph* litem_304;
struct sNode* __dec_obj36;
void* __right_value261 = (void*)0;
struct list_item$1sNode$ph* litem_305;
struct sNode* __dec_obj37;
void* __right_value262 = (void*)0;
struct list_item$1sNode$ph* litem_306;
struct sNode* __dec_obj38;
struct list$1sNode$ph* __result_obj__219;
    if(    self->len==0) {
        litem_304=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value260=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_304->prev=((void*)0);
        litem_304->next=((void*)0);
        __dec_obj36=litem_304->item,
        litem_304->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_304;
        self->head=litem_304;
    }
    else if(    self->len==1) {
        litem_305=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value261=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_305->prev=self->head;
        litem_305->next=((void*)0);
        __dec_obj37=litem_305->item,
        litem_305->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_305;
        self->head->next=litem_305;
    }
    else {
        litem_306=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value262=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_306->prev=self->tail;
        litem_306->next=((void*)0);
        __dec_obj38=litem_306->item,
        litem_306->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_306;
        self->tail=litem_306;
    }
    self->len++;
    __result_obj__219 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__219;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_307;
struct list_item$1sNode$ph* prev_it_308;
    it_307=self->head;
    while(it_307!=((void*)0)) {
        prev_it_308=it_307;
        it_307=it_307->next;
        /*c*/ come_call_finalizer3(prev_it_308,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__221;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1char$ph* result_309;
struct list_item$1char$ph* it_310;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1char$ph* __result_obj__223;
    if(    self==((void*)0)) {
        __result_obj__221 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__221,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__221;
    }
    result_309=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_310=self->head;
    while(it_310!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_309,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_310->item)));
        }
        else {
            list$1char$ph_add(result_309,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_310->item)));
        }
        it_310=it_310->next;
    }
    __result_obj__223 = come_increment_ref_count(result_309);
    /*c*/ come_call_finalizer3(result_309,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value270 = (void*)0;
struct list_item$1char$ph* litem_311;
char* __dec_obj42;
void* __right_value271 = (void*)0;
struct list_item$1char$ph* litem_312;
char* __dec_obj43;
void* __right_value272 = (void*)0;
struct list_item$1char$ph* litem_313;
char* __dec_obj44;
struct list$1char$ph* __result_obj__222;
    if(    self->len==0) {
        litem_311=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value270=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_311->prev=((void*)0);
        litem_311->next=((void*)0);
        __dec_obj42=litem_311->item,
        litem_311->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_311;
        self->head=litem_311;
    }
    else if(    self->len==1) {
        litem_312=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value271=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_312->prev=self->head;
        litem_312->next=((void*)0);
        __dec_obj43=litem_312->item,
        litem_312->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_312;
        self->head->next=litem_312;
    }
    else {
        litem_313=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value272=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_313->prev=self->tail;
        litem_313->next=((void*)0);
        __dec_obj44=litem_313->item,
        litem_313->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_313;
        self->tail=litem_313;
    }
    self->len++;
    __result_obj__222 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__222;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_314;
struct list_item$1char$ph* prev_it_315;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        prev_it_315=it_314;
        it_314=it_314->next;
        /*c*/ come_call_finalizer3(prev_it_315,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsType$ph* __result_obj__225;
void* __right_value279 = (void*)0;
struct tuple2$2char$phsType$ph* result_317;
void* __right_value280 = (void*)0;
char* __dec_obj47;
void* __right_value281 = (void*)0;
struct sType* __dec_obj48;
struct tuple2$2char$phsType$ph* __result_obj__226;
    if(    self==(void*)0) {
        __result_obj__225 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__225,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__225;
    }
    result_317=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj47=result_317->v1,
        result_317->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj48=result_317->v2,
        result_317->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__226 = come_increment_ref_count(result_317);
    /*c*/ come_call_finalizer3(result_317,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_318;
    result_318=0;
    result_318+=int_get_hash_key(((int)self->v1));
    result_318+=int_get_hash_key(((int)self->v2));
    return result_318;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_319;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_320;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_319=left->head;
    it2_320=right->head;
    while(it_319!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_319->item,it2_320->item)) {
            return (_Bool)0;
        }
        it_319=it_319->next;
        it2_320=it2_320->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_321;
struct list_item$1sType$ph* it2_322;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_321=left->head;
    it2_322=right->head;
    while(it_321!=((void*)0)) {
        if(        !sType_equals(it_321->item,it2_322->item)) {
            return (_Bool)0;
        }
        it_321=it_321->next;
        it2_322=it2_322->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_323;
struct list_item$1sNode$ph* it2_324;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_323=left->head;
    it2_324=right->head;
    while(it_323!=((void*)0)) {
        if(        !sNode_equals(it_323->item,it2_324->item)) {
            return (_Bool)0;
        }
        it_323=it_323->next;
        it2_324=it2_324->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_325;
struct list_item$1char$ph* it2_326;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_325=left->head;
    it2_326=right->head;
    while(it_325!=((void*)0)) {
        if(        !string_equals(it_325->item,it2_326->item)) {
            return (_Bool)0;
        }
        it_325=it_325->next;
        it2_326=it2_326->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj49;
struct sType* __dec_obj50;
struct tuple2$2char$phsType$ph* __result_obj__227;
    __dec_obj49=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj50=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__227 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_328;
struct list_item$1sNode$ph* prev_it_329;
struct list$1sNode$ph* __result_obj__228;
    it_328=self->head;
    while(it_328!=((void*)0)) {
        prev_it_329=it_328;
        it_328=it_328->next;
        /*c*/ come_call_finalizer3(prev_it_329,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__228 = self;
    return __result_obj__228;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value288 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_331;
struct tuple2$2char$phsType$ph* __dec_obj51;
void* __right_value289 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_332;
struct tuple2$2char$phsType$ph* __dec_obj52;
void* __right_value290 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_333;
struct tuple2$2char$phsType$ph* __dec_obj53;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__229;
    if(    self->len==0) {
        litem_331=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value288=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1274, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj51=litem_331->item,
        litem_331->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value289=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1284, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj52=litem_332->item,
        litem_332->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value290=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1294, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj53=litem_333->item,
        litem_333->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result_obj__229 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_334;
int i_335;
    for(    i_334=0;    i_334<self->size;    i_334++    ){
        if(        self->item_existance[i_334]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_334],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_335=0;    i_335<self->size;    i_335++    ){
        if(        self->item_existance[i_335]) {
            if(            1) {
                (self->keys[i_335] = come_decrement_ref_count(self->keys[i_335], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_355;
unsigned int it_356;
_Bool same_key_exist_373;
char* it2_376;
struct map$2char$phsClass$ph* __result_obj__250;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_355=string_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            string_equals(self->keys[it_356],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_356]);
                    (self->keys[it_356] = come_decrement_ref_count(self->keys[it_356], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_356]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_356]);
                    self->keys[it_356]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_356],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_356]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_356]=item;
                }
                break;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_356]=(_Bool)1;
            if(            1) {
                self->keys[it_356]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_356]=key;
            }
            if(            1) {
                self->items[it_356]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_356]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_373=(_Bool)0;
    for(    it2_376=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_376=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_376,key)) {
            same_key_exist_373=(_Bool)1;
        }
    }
    if(    !same_key_exist_373) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__250 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_336;
void* __right_value293 = (void*)0;
char** keys_337;
void* __right_value294 = (void*)0;
struct sClass** items_338;
void* __right_value295 = (void*)0;
_Bool* item_existance_339;
int len_340;
char* it_343;
struct sClass* default_value_346;
void* __right_value296 = (void*)0;
struct sClass* it2_347;
unsigned int hash_352;
int n_353;
struct sClass* default_value_354;
void* __right_value297 = (void*)0;
default_value_346 = (void*)0;
default_value_354 = (void*)0;
    size_336=self->size*10;
    keys_337=(char**)come_increment_ref_count(((char**)(__right_value293=(char**)come_calloc(1, sizeof(char*)*(1*(size_336)), "./comelang.h", 2328, "char**"))));
    items_338=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value294=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_336)), "./comelang.h", 2329, "struct sClass**"))));
    item_existance_339=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value295=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_336)), "./comelang.h", 2330, "_Bool*"))));
    len_340=0;
    for(    it_343=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_343=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_346,0,sizeof(struct sClass*));
        it2_347=((struct sClass*)(__right_value296=map$2char$phsClass$ph_at(self,it_343,(struct sClass*)come_increment_ref_count(default_value_346))));
        /*c*/ come_call_finalizer3(__right_value296,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_352=string_get_hash_key(((char*)it_343))%size_336;
        n_353=hash_352;
        while((_Bool)1) {
            if(            item_existance_339[n_353]) {
                n_353++;
                if(                n_353>=size_336) {
                    n_353=0;
                }
                else if(                n_353==hash_352) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_339[n_353]=(_Bool)1;
                keys_337[n_353]=it_343;
                items_338[n_353]=((struct sClass*)(__right_value297=map$2char$phsClass$ph_at(self,it_343,(struct sClass*)come_increment_ref_count(default_value_354))));
                /*c*/ come_call_finalizer3(__right_value297,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_340++;
                /*c*/ come_call_finalizer3(default_value_354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_346,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_337;
    self->items=items_338;
    self->item_existance=item_existance_339;
    self->size=size_336;
    self->len=len_340;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_341;
char* __result_obj__230;
char* __result_obj__231;
char* result_342;
char* __result_obj__232;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result_obj__230 = result_341;
        return __result_obj__230;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__231 = self->key_list->it->item;
        return __result_obj__231;
    }
    memset(&result_342,0,sizeof(char*));
    __result_obj__232 = result_342;
    return __result_obj__232;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_344;
char* __result_obj__233;
char* __result_obj__234;
char* result_345;
char* __result_obj__235;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result_obj__233 = result_344;
        return __result_obj__233;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__234 = self->key_list->it->item;
        return __result_obj__234;
    }
    memset(&result_345,0,sizeof(char*));
    __result_obj__235 = result_345;
    return __result_obj__235;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_348;
unsigned int it_349;
struct sClass* __result_obj__236;
struct sClass* __result_obj__237;
struct sClass* __result_obj__238;
struct sClass* __result_obj__239;
    hash_348=string_get_hash_key(((char*)key))%self->size;
    it_349=hash_348;
    while((_Bool)1) {
        if(        self->item_existance[it_349]) {
            if(            string_equals(self->keys[it_349],key)) {
                __result_obj__236 = come_increment_ref_count(self->items[it_349]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__236,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__236;
            }
            it_349++;
            if(            it_349>=self->size) {
                it_349=0;
            }
            else if(            it_349==hash_348) {
                __result_obj__237 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__237,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__237;
            }
        }
        else {
            __result_obj__238 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__238,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__238;
        }
    }
    __result_obj__239 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_350;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_351;
    it_350=self->head;
    while(it_350!=((void*)0)) {
        prev_it_351=it_350;
        it_350=it_350->next;
        /*c*/ come_call_finalizer3(prev_it_351,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_357;
struct list_item$1char$ph* it_358;
struct list$1char$ph* __result_obj__243;
    it2_357=0;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        if(        string_equals(it_358->item,item)) {
            list$1char$ph_delete(self,it2_357,it2_357+1);
            break;
        }
        it2_357++;
        it_358=it_358->next;
    }
    __result_obj__243 = self;
    return __result_obj__243;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_359;
struct list$1char$ph* __result_obj__240;
struct list_item$1char$ph* it_362;
int i_363;
struct list_item$1char$ph* prev_it_364;
struct list_item$1char$ph* it_365;
int i_366;
struct list_item$1char$ph* prev_it_367;
struct list_item$1char$ph* it_368;
struct list_item$1char$ph* head_prev_it_369;
struct list_item$1char$ph* tail_it_370;
int i_371;
struct list_item$1char$ph* prev_it_372;
struct list$1char$ph* __result_obj__242;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_359=tail;
        tail=head;
        head=tmp_359;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__240 = self;
        return __result_obj__240;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_362=self->head;
        i_363=0;
        while(it_362!=((void*)0)) {
            if(            i_363<tail) {
                prev_it_364=it_362;
                it_362=it_362->next;
                i_363++;
                /*c*/ come_call_finalizer3(prev_it_364,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_363==tail) {
                self->head=it_362;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_362=it_362->next;
                i_363++;
            }
        }
    }
    else if(    tail==self->len) {
        it_365=self->head;
        i_366=0;
        while(it_365!=((void*)0)) {
            if(            i_366==head) {
                self->tail=it_365->prev;
                self->tail->next=((void*)0);
            }
            if(            i_366>=head) {
                prev_it_367=it_365;
                it_365=it_365->next;
                i_366++;
                /*c*/ come_call_finalizer3(prev_it_367,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_365=it_365->next;
                i_366++;
            }
        }
    }
    else {
        it_368=self->head;
        head_prev_it_369=((void*)0);
        tail_it_370=((void*)0);
        i_371=0;
        while(it_368!=((void*)0)) {
            if(            i_371==head) {
                head_prev_it_369=it_368->prev;
            }
            if(            i_371==tail) {
                tail_it_370=it_368;
            }
            if(            i_371>=head&&i_371<tail) {
                prev_it_372=it_368;
                it_368=it_368->next;
                i_371++;
                /*c*/ come_call_finalizer3(prev_it_372,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_368=it_368->next;
                i_371++;
            }
        }
        if(        head_prev_it_369!=((void*)0)) {
            head_prev_it_369->next=tail_it_370;
        }
        if(        tail_it_370!=((void*)0)) {
            tail_it_370->prev=head_prev_it_369;
        }
    }
    __result_obj__242 = self;
    return __result_obj__242;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_360;
struct list_item$1char$ph* prev_it_361;
struct list$1char$ph* __result_obj__241;
    it_360=self->head;
    while(it_360!=((void*)0)) {
        prev_it_361=it_360;
        it_360=it_360->next;
        /*c*/ come_call_finalizer3(prev_it_361,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = self;
    return __result_obj__241;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_374;
char* __result_obj__244;
char* __result_obj__245;
char* result_375;
char* __result_obj__246;
result_374 = (void*)0;
result_375 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_374,0,sizeof(char*));
        __result_obj__244 = result_374;
        return __result_obj__244;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__245 = self->it->item;
        return __result_obj__245;
    }
    memset(&result_375,0,sizeof(char*));
    __result_obj__246 = result_375;
    return __result_obj__246;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_377;
char* __result_obj__247;
char* __result_obj__248;
char* result_378;
char* __result_obj__249;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_377,0,sizeof(char*));
        __result_obj__247 = result_377;
        return __result_obj__247;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__248 = self->it->item;
        return __result_obj__248;
    }
    memset(&result_378,0,sizeof(char*));
    __result_obj__249 = result_378;
    return __result_obj__249;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_386;
struct CVALUE* __dec_obj56;
void* __right_value308 = (void*)0;
struct list_item$1CVALUE$ph* litem_387;
struct CVALUE* __dec_obj57;
void* __right_value309 = (void*)0;
struct list_item$1CVALUE$ph* litem_388;
struct CVALUE* __dec_obj58;
struct list$1CVALUE$ph* __result_obj__251;
    if(    self->len==0) {
        litem_386=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1274, "struct list_item$1CVALUE$ph*"))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj56=litem_386->item,
        litem_386->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj56,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value308=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1284, "struct list_item$1CVALUE$ph*"))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj57=litem_387->item,
        litem_387->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj57,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value309=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1294, "struct list_item$1CVALUE$ph*"))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj58=litem_388->item,
        litem_388->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result_obj__251 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
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

struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __right_value310 = (void*)0;
char* none_generics_name_389;
void* __right_value311 = (void*)0;
char* fun_name2_390;
void* __right_value312 = (void*)0;
char* fun_name3_391;
void* __right_value313 = (void*)0;
struct sType* no_solved_type_392;
void* __right_value314 = (void*)0;
struct sGenericsFun* generics_fun_393;
struct sType* type2_396;
void* __right_value315 = (void*)0;
struct sType* type_before_397;
void* __right_value316 = (void*)0;
char* __dec_obj59;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_398=0;
_Bool err_399=0;
void* __right_value319 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_400=0;
char* Err_401=0;
void* __right_value320 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__260;
void* __right_value325 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__264;
    none_generics_name_389=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_390=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_391=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_389,fun_name));
    no_solved_type_392=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    generics_fun_393=((struct sGenericsFun*)(__right_value314=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_391,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value314,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_393) {
        type2_396=(struct sType*)come_increment_ref_count(no_solved_type_392);
        type_before_397=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        __dec_obj59=fun_name2_390,
        fun_name2_390=(char*)come_increment_ref_count(create_method_name(type2_396,(_Bool)0,fun_name,info,array_equal_pointer));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value318=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_390)),generics_fun_393,type2_396,info)));
        name_398=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err_399=multiple_assign_var1->v2;
        /*c*/ come_call_finalizer3(__right_value318,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_399) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value319=err_msg(info,"%s not found",fun_name3_391)));
            come_exception_var_c1_400=multiple_assign_var2->v1;
            Err_401=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            ((Err_401)?(puts(Err_401),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value319,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__260 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value324=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 29, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_401 = come_decrement_ref_count(Err_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_396,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_before_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_398 = come_decrement_ref_count(name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (none_generics_name_389 = come_decrement_ref_count(none_generics_name_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name2_390 = come_decrement_ref_count(fun_name2_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name3_391 = come_decrement_ref_count(fun_name3_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(no_solved_type_392,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value324,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__260,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__260;
            (Err_401 = come_decrement_ref_count(Err_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type=type_before_397;
        /*c*/ come_call_finalizer3(type2_396,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_before_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_398 = come_decrement_ref_count(name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__264 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value329=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 35, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_390)),generics_fun_393))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_389 = come_decrement_ref_count(none_generics_name_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_390 = come_decrement_ref_count(fun_name2_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_391 = come_decrement_ref_count(fun_name3_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(no_solved_type_392,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value329,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_394;
unsigned int it_395;
struct sGenericsFun* __result_obj__253;
struct sGenericsFun* __result_obj__254;
struct sGenericsFun* __result_obj__255;
struct sGenericsFun* __result_obj__256;
    hash_394=string_get_hash_key(((char*)key))%self->size;
    it_395=hash_394;
    while((_Bool)1) {
        if(        self->item_existance[it_395]) {
            if(            string_equals(self->keys[it_395],key)) {
                __result_obj__253 = come_increment_ref_count(self->items[it_395]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__253,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__253;
            }
            it_395++;
            if(            it_395>=self->size) {
                it_395=0;
            }
            else if(            it_395==hash_394) {
                __result_obj__254 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__254,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__254;
            }
        }
        else {
            __result_obj__255 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__255,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__255;
        }
    }
    __result_obj__256 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__256,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__256;
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

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phvoid$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_clone(struct tuple2$2char$phvoid$p* self){
struct tuple2$2char$phvoid$p* __result_obj__257;
void* __right_value321 = (void*)0;
struct tuple2$2char$phvoid$p* result_402;
void* __right_value322 = (void*)0;
char* __dec_obj60;
struct tuple2$2char$phvoid$p* __result_obj__258;
    if(    self==(void*)0) {
        __result_obj__257 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__257,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__257;
    }
    result_402=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj60=result_402->v1,
        result_402->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_402->v2=self->v2;
    }
    __result_obj__258 = come_increment_ref_count(result_402);
    /*c*/ come_call_finalizer3(result_402,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_403;
    result_403=0;
    result_403+=int_get_hash_key(((int)self->v1));
    result_403+=int_get_hash_key(((int)self->v2));
    return result_403;
}

static _Bool tuple2$2char$phvoid$p_equals(struct tuple2$2char$phvoid$p* left, struct tuple2$2char$phvoid$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !voidp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phvoid$p* tuple2$2char$phvoid$p_initialize(struct tuple2$2char$phvoid$p* self, char* v1, void* v2){
char* __dec_obj61;
struct tuple2$2char$phvoid$p* __result_obj__259;
    __dec_obj61=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__259 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__259,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static void tuple2$2char$phvoid$p$p_finalize(struct tuple2$2char$phvoid$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2char$phsGenericsFun$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_clone(struct tuple2$2char$phsGenericsFun$p* self){
struct tuple2$2char$phsGenericsFun$p* __result_obj__261;
void* __right_value326 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_404;
void* __right_value327 = (void*)0;
char* __dec_obj62;
struct tuple2$2char$phsGenericsFun$p* __result_obj__262;
    if(    self==(void*)0) {
        __result_obj__261 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__261,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_404=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj62=result_404->v1,
        result_404->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_404->v2=self->v2;
    }
    __result_obj__262 = come_increment_ref_count(result_404);
    /*c*/ come_call_finalizer3(result_404,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_405;
    result_405=0;
    result_405+=int_get_hash_key(((int)self->v1));
    result_405+=int_get_hash_key(((int)self->v2));
    return result_405;
}

static _Bool tuple2$2char$phsGenericsFun$p_equals(struct tuple2$2char$phsGenericsFun$p* left, struct tuple2$2char$phsGenericsFun$p* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sGenericsFun_equals(left->v2,right->v2)) {
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
    return (_Bool)1;
}

static struct tuple2$2char$phsGenericsFun$p* tuple2$2char$phsGenericsFun$p_initialize(struct tuple2$2char$phsGenericsFun$p* self, char* v1, struct sGenericsFun* v2){
char* __dec_obj63;
struct tuple2$2char$phsGenericsFun$p* __result_obj__263;
    __dec_obj63=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__263 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__263,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value330 = (void*)0;
char* fun_name3_407;
struct list$1sType$ph* method_generics_types_before_408;
struct list$1sType$ph* __dec_obj64;
void* __right_value331 = (void*)0;
struct sGenericsFun* generics_fun_409;
void* __right_value332 = (void*)0;
_Bool _if_conditional1;
void* __right_value333 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c2_410=0;
char* Err_411=0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__265;
struct list$1sType$ph* __dec_obj65;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__266;
    static int num_method_generics_406=0;
    fun_name3_407=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_406++));
    method_generics_types_before_408=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj64=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj64,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_409=((struct sGenericsFun*)(__right_value331=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value331,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_409) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_407)),generics_fun_409,info))),        _if_conditional1) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value333=err_msg(info,"%s not found",fun_name3_407)));
            come_exception_var_c2_410=multiple_assign_var3->v1;
            Err_411=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_411)?(puts(Err_411),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value333,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__265 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value336=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 51, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_411 = come_decrement_ref_count(Err_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name3_407 = come_decrement_ref_count(fun_name3_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types_before_408,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value336,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__265,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__265;
            (Err_411 = come_decrement_ref_count(Err_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj65=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_408);
    /*b*/ come_call_finalizer3(__dec_obj65,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__266 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value339=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 57, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_407)),generics_fun_409))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name3_407 = come_decrement_ref_count(fun_name3_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types_before_408,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value339,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value344 = (void*)0;
struct sNode* current_stack_frame_node_412;
_Bool Value_414;
_Bool __result_obj__269;
void* __right_value345 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct buffer* method_block2_418;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* method_block_type_419;
void* __right_value350 = (void*)0;
char* class_name_423;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sClass* current_stack_frame_struct_427;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c3_428=0;
char* Err_429=0;
_Bool __result_obj__276;
void* __right_value355 = (void*)0;
struct sType* result_type_430;
struct list$1sType$ph* param_types_431;
struct list$1char$ph* param_names_432;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct buffer* all_alhabet_sname_433;
char* p_434;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
int i_435;
struct list$1sType$ph* o2_saved_436;
struct sType* it_439;
struct sType* param_type_442;
void* __right_value360 = (void*)0;
char* param_name_443;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* param_name_444;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* param_name_445;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct buffer* source3_446;
char* p_447;
char* head_448;
int sline_449;
struct buffer* __dec_obj67;
void* __right_value367 = (void*)0;
struct sNode* node_450;
_Bool Value_451;
_Bool __result_obj__283;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* method_block_name_452;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct CVALUE* come_value2_453;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sFun* fun2_454;
void* __right_value374 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c4_457=0;
char* Err_458=0;
_Bool __result_obj__288;
struct sType* method_block_type2_459;
void* __right_value375 = (void*)0;
char* __dec_obj68;
void* __right_value376 = (void*)0;
struct sType* __dec_obj69;
struct buffer* __dec_obj70;
void* __right_value377 = (void*)0;
struct sType* __dec_obj71;
_Bool contained_method_generics_method_block_460;
struct list$1sType$ph* o2_saved_461;
struct sType* it_462;
void* __right_value378 = (void*)0;
_Bool __result_obj__290;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 62, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value341=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 62, "struct sCurrentNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_412=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value341,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_414=node_compile(current_stack_frame_node_412,info);
    if(    !Value_414) {
        __result_obj__269 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_412) ? current_stack_frame_node_412 = come_decrement_ref_count(current_stack_frame_node_412, ((struct sNode*)current_stack_frame_node_412)->finalize, ((struct sNode*)current_stack_frame_node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__269;
    }
    else {
    }
    come_value_417=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_417));
    method_block2_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 71, "struct buffer*"))));
    method_block_type_419=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value348=list$1sType$ph$p_operator_load_element(fun->mParamTypes,-1)))));
    /*c*/ come_call_finalizer3(__right_value348,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    class_name_423=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value351=list$1sType$ph$p_operator_load_element(method_block_type_419->mParamTypes,0)))->mClass=((struct sClass*)(__right_value352=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_423)));
    /*c*/ come_call_finalizer3(__right_value351,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value352,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    current_stack_frame_struct_427=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value353=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_423)));
    /*c*/ come_call_finalizer3(__right_value353,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_419->mClass->mName,"lambda")) {
        multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value354=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c3_428=multiple_assign_var4->v1;
        Err_429=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        ((Err_429)?(puts(Err_429),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value354,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__276 = (_Bool)0;
        (Err_429 = come_decrement_ref_count(Err_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_412) ? current_stack_frame_node_412 = come_decrement_ref_count(current_stack_frame_node_412, ((struct sNode*)current_stack_frame_node_412)->finalize, ((struct sNode*)current_stack_frame_node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_418,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_423 = come_decrement_ref_count(class_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__276;
        (Err_429 = come_decrement_ref_count(Err_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_430=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_419->mResultType));
    result_type_430->mStatic=(_Bool)0;
    param_types_431=method_block_type_419->mParamTypes;
    param_names_432=method_block_type_419->mParamNames;
    all_alhabet_sname_433=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 92, "struct buffer*"))));
    {
        p_434=info->sname;
        while(*p_434) {
            if(            xisalnum(*p_434)) {
                buffer_append_char(all_alhabet_sname_433,*p_434++);
            }
            else {
                p_434++;
            }
        }
    }
    buffer_append_format(method_block2_418,"%s method_block%d_%s(",((char*)(__right_value358=make_type_name_string(result_type_430,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value359=buffer_to_string(all_alhabet_sname_433))));
    (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_435=0;
    for(    o2_saved_436=(param_types_431),it_439=list$1sType$ph_begin((o2_saved_436));    !list$1sType$ph_end((o2_saved_436));    it_439=list$1sType$ph_next((o2_saved_436))    ){
        param_type_442=it_439;
        if(        i_435==0) {
            param_name_443=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_418,"%s",((char*)(__right_value361=make_define_var(param_type_442,param_name_443,(_Bool)0,info))));
            (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_443 = come_decrement_ref_count(param_name_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_435==1) {
            param_name_444=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_418,"%s",((char*)(__right_value363=make_define_var_no_solved(param_type_442,param_name_444,(_Bool)0,(_Bool)0,info))));
            (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_444 = come_decrement_ref_count(param_name_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_445=(char*)come_increment_ref_count(xsprintf("it%d",i_435));
            buffer_append_format(method_block2_418,"%s",((char*)(__right_value365=make_define_var_no_solved(param_type_442,param_name_445,(_Bool)0,(_Bool)0,info))));
            (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_445 = come_decrement_ref_count(param_name_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_435!=list$1sType$ph_length(param_types_431)-1) {
            buffer_append_str(method_block2_418,",");
        }
        i_435++;
    }
    buffer_append_str(method_block2_418,")\n");
    buffer_append_str(method_block2_418,((char*)(__right_value366=buffer_to_string(method_block))));
    (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_446=(struct buffer*)come_increment_ref_count(info->source);
    p_447=info->p;
    head_448=info->head;
    sline_449=info->sline;
    __dec_obj67=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2_418);
    /*b*/ come_call_finalizer3(__dec_obj67,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_450=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_451=node_compile(node_450,info);
    if(    !Value_451) {
        __result_obj__283 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_412) ? current_stack_frame_node_412 = come_decrement_ref_count(current_stack_frame_node_412, ((struct sNode*)current_stack_frame_node_412)->finalize, ((struct sNode*)current_stack_frame_node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_418,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_423 = come_decrement_ref_count(class_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_430,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_433,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_446,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_450) ? node_450 = come_decrement_ref_count(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__283;
    }
    else {
    }
    method_block_name_452=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value368=buffer_to_string(all_alhabet_sname_433)))));
    (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_453=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 157, "struct CVALUE*"))));
    fun2_454=((struct sFun*)(__right_value373=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value372=__builtin_string(method_block_name_452))),((void*)0))));
    (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value373,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun2_454==((void*)0)) {
        multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value374=err_msg(info,"method block function not found(%s)",method_block_name_452)));
        come_exception_var_c4_457=multiple_assign_var5->v1;
        Err_458=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        ((Err_458)?(puts(Err_458),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value374,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__288 = (_Bool)1;
        (Err_458 = come_decrement_ref_count(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_412) ? current_stack_frame_node_412 = come_decrement_ref_count(current_stack_frame_node_412, ((struct sNode*)current_stack_frame_node_412)->finalize, ((struct sNode*)current_stack_frame_node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_418,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_423 = come_decrement_ref_count(class_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_430,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_433,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_446,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_450) ? node_450 = come_decrement_ref_count(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_452 = come_decrement_ref_count(method_block_name_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__288;
        (Err_458 = come_decrement_ref_count(Err_458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_459=fun2_454->mLambdaType;
    __dec_obj68=come_value2_453->c_value,
    come_value2_453->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_452));
    __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj69=come_value2_453->type,
    come_value2_453->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_459));
    /*b*/ come_call_finalizer3(__dec_obj69,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_453->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_453));
    __dec_obj70=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_446);
    /*b*/ come_call_finalizer3(__dec_obj70,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_447;
    info->head=head_448;
    info->sline=sline_449;
    info->current_stack_frame_struct=current_stack_frame_struct_427;
    __dec_obj71=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    /*b*/ come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_460=(_Bool)0;
    for(    o2_saved_461=(param_types_431),it_462=list$1sType$ph_begin((o2_saved_461));    !list$1sType$ph_end((o2_saved_461));    it_462=list$1sType$ph_next((o2_saved_461))    ){
        if(        is_contained_method_generics_types(it_462,info)) {
            contained_method_generics_method_block_460=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_430,info)) {
        contained_method_generics_method_block_460=(_Bool)1;
    }
    if(    contained_method_generics_method_block_460) {
        map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value378=__builtin_string(method_block_name_452))));
        (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__290 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((current_stack_frame_node_412) ? current_stack_frame_node_412 = come_decrement_ref_count(current_stack_frame_node_412, ((struct sNode*)current_stack_frame_node_412)->finalize, ((struct sNode*)current_stack_frame_node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block2_418,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_type_419,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_423 = come_decrement_ref_count(class_name_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_430,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(all_alhabet_sname_433,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(source3_446,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_450) ? node_450 = come_decrement_ref_count(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_452 = come_decrement_ref_count(method_block_name_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value2_453,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__267;
void* __right_value342 = (void*)0;
struct sCurrentNode* result_413;
void* __right_value343 = (void*)0;
char* __dec_obj66;
struct sCurrentNode* __result_obj__268;
    if(    self==(void*)0) {
        __result_obj__267 = (void*)0;
        return __result_obj__267;
    }
    result_413=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)) {
        result_413->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj66=result_413->sname,
        result_413->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->sline_real=self->sline_real;
    }
    __result_obj__268 = result_413;
    /*c*/ come_call_finalizer3(result_413,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__268;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_415;
struct list_item$1CVALUE$ph* prev_it_416;
    it_415=self->head;
    while(it_415!=((void*)0)) {
        prev_it_416=it_415;
        it_415=it_415->next;
        /*c*/ come_call_finalizer3(prev_it_416,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_420;
int i_421;
struct sType* __result_obj__270;
struct sType* default_value_422;
struct sType* __result_obj__271;
default_value_422 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_420=self->head;
    i_421=0;
    while(it_420!=((void*)0)) {
        if(        position==i_421) {
            __result_obj__270 = come_increment_ref_count(it_420->item);
            /*c*/ come_call_finalizer3(__result_obj__270,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__270;
        }
        it_420=it_420->next;
        i_421++;
    }
    memset(&default_value_422,0,sizeof(struct sType*));
    __result_obj__271 = come_increment_ref_count(default_value_422);
    /*c*/ come_call_finalizer3(default_value_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_424;
unsigned int hash_425;
unsigned int it_426;
struct sClass* __result_obj__272;
struct sClass* __result_obj__273;
struct sClass* __result_obj__274;
struct sClass* __result_obj__275;
default_value_424 = (void*)0;
    memset(&default_value_424,0,sizeof(struct sClass*));
    hash_425=string_get_hash_key(((char*)key))%self->size;
    it_426=hash_425;
    while((_Bool)1) {
        if(        self->item_existance[it_426]) {
            if(            string_equals(self->keys[it_426],key)) {
                __result_obj__272 = come_increment_ref_count(self->items[it_426]);
                /*c*/ come_call_finalizer3(default_value_424,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__272,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__272;
            }
            it_426++;
            if(            it_426>=self->size) {
                it_426=0;
            }
            else if(            it_426==hash_425) {
                __result_obj__273 = come_increment_ref_count(default_value_424);
                /*c*/ come_call_finalizer3(default_value_424,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__273,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__273;
            }
        }
        else {
            __result_obj__274 = come_increment_ref_count(default_value_424);
            /*c*/ come_call_finalizer3(default_value_424,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__274,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__274;
        }
    }
    __result_obj__275 = come_increment_ref_count(default_value_424);
    /*c*/ come_call_finalizer3(default_value_424,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_437;
struct sType* __result_obj__277;
struct sType* __result_obj__278;
struct sType* result_438;
struct sType* __result_obj__279;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_437,0,sizeof(struct sType*));
        __result_obj__277 = result_437;
        return __result_obj__277;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__278 = self->it->item;
        return __result_obj__278;
    }
    memset(&result_438,0,sizeof(struct sType*));
    __result_obj__279 = result_438;
    return __result_obj__279;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_440;
struct sType* __result_obj__280;
struct sType* __result_obj__281;
struct sType* result_441;
struct sType* __result_obj__282;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_440,0,sizeof(struct sType*));
        __result_obj__280 = result_440;
        return __result_obj__280;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__281 = self->it->item;
        return __result_obj__281;
    }
    memset(&result_441,0,sizeof(struct sType*));
    __result_obj__282 = result_441;
    return __result_obj__282;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_455;
unsigned int it_456;
struct sFun* __result_obj__284;
struct sFun* __result_obj__285;
struct sFun* __result_obj__286;
struct sFun* __result_obj__287;
    hash_455=string_get_hash_key(((char*)key))%self->size;
    it_456=hash_455;
    while((_Bool)1) {
        if(        self->item_existance[it_456]) {
            if(            string_equals(self->keys[it_456],key)) {
                __result_obj__284 = come_increment_ref_count(self->items[it_456]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__284,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__284;
            }
            it_456++;
            if(            it_456>=self->size) {
                it_456=0;
            }
            else if(            it_456==hash_455) {
                __result_obj__285 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__285,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__285;
            }
        }
        else {
            __result_obj__286 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__286,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__286;
        }
    }
    __result_obj__287 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__287,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__287;
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

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_remove(struct map$2char$phsFun$ph* self, char* key){
unsigned int hash_463;
unsigned int it_464;
struct map$2char$phsFun$ph* __result_obj__289;
    hash_463=string_get_hash_key(((char*)key))%self->size;
    it_464=hash_463;
    while((_Bool)1) {
        if(        self->item_existance[it_464]) {
            if(            string_equals(self->keys[it_464],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_464]);
                self->item_existance[it_464]=(_Bool)0;
                if(                1) {
                    (self->keys[it_464] = come_decrement_ref_count(self->keys[it_464], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_464]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_464],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_464]=((void*)0);
                self->len--;
                break;
            }
            it_464++;
            if(            it_464>=self->size) {
                it_464=0;
            }
            else if(            it_464==hash_463) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__289 = self;
    return __result_obj__289;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value381 = (void*)0;
char* __dec_obj73;
void* __right_value392 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj79;
void* __right_value393 = (void*)0;
struct buffer* __dec_obj80;
void* __right_value394 = (void*)0;
struct list$1sType$ph* __dec_obj81;
struct sMethodCallNode* __result_obj__297;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value379,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj72=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    (__dec_obj72 ? __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj73=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj79=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    /*b*/ come_call_finalizer3(__dec_obj79,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj80=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    /*b*/ come_call_finalizer3(__dec_obj80,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj81=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj81,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result_obj__297 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
    if(    self->method_block) {
        return (_Bool)1;
    }
    else {
        return (_Bool)0;
    }
}

char* sMethodCallNode_kind(struct sMethodCallNode* self){
void* __right_value395 = (void*)0;
char* __result_obj__298;
    __result_obj__298 = come_increment_ref_count(((char*)(__right_value395=__builtin_string("sMethodCallNode"))));
    (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__298 = come_decrement_ref_count(__result_obj__298, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__298;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_475;
struct list$1tuple2$2char$phsNode$ph$ph* params_476;
struct sNode* obj_477;
struct buffer* method_block_478;
int method_block_sline_479;
_Bool no_infference_method_generics_480;
struct list$1sType$ph* method_generics_types_481;
_Bool recursive_482;
struct list$1sType$ph* method_generics_types_before_483;
struct list$1sType$ph* __dec_obj82;
void* __right_value396 = (void*)0;
struct list$1sType$ph* __dec_obj83;
_Bool Value_484;
_Bool __result_obj__299;
void* __right_value397 = (void*)0;
struct CVALUE* obj_value_485;
void* __right_value398 = (void*)0;
struct sType* obj_type_486;
_Bool no_output_come_code_487;
struct sType* type_488;
void* __right_value399 = (void*)0;
char* none_generics_name_489;
void* __right_value400 = (void*)0;
char* fun_name2_490;
void* __right_value401 = (void*)0;
char* fun_name3_491;
void* __right_value402 = (void*)0;
struct sGenericsFun* generics_fun_492;
_Bool method_generics_493;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_494=0;
struct sGenericsFun* gfun_495=0;
char* generics_fun_name_496;
void* __right_value405 = (void*)0;
struct sFun* fun_497;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1CVALUE$ph* come_params_498;
_Bool no_output_come_code_499;
_Bool __result_obj__301;
void* __right_value408 = (void*)0;
struct CVALUE* method_block_node_500;
void* __right_value409 = (void*)0;
struct sType* method_block_lambda_type_504;
void* __right_value410 = (void*)0;
struct sType* method_block_result_type_505;
void* __right_value411 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_506;
struct sType* generics_fun_method_block_result_type_507;
int method_generics_num_508;
void* __right_value415 = (void*)0;
int n_517;
struct list$1sType$ph* o2_saved_518;
struct sType* it_519;
int method_generics_num_520;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1CVALUE$ph* come_params_521;
int i_522;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_523;
struct tuple2$2char$phsNode$ph* it_526;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_529=0;
struct sNode* node_530=0;
_Bool Value_531;
_Bool __result_obj__313;
void* __right_value420 = (void*)0;
struct CVALUE* come_value_532;
int method_generics_num_533;
void* __right_value421 = (void*)0;
struct list$1sType$ph* o2_saved_534;
struct sType* it_535;
int method_generics_num_536;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1CVALUE$ph* come_params_537;
int i_538;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_539;
struct tuple2$2char$phsNode$ph* it_540;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_541=0;
struct sNode* node_542=0;
_Bool Value_543;
_Bool __result_obj__314;
void* __right_value426 = (void*)0;
struct CVALUE* come_value_544;
int method_generics_num_545;
void* __right_value427 = (void*)0;
int n_546;
struct list$1sType$ph* o2_saved_547;
struct sType* it_548;
int method_generics_num_549;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sClass* klass_550;
_Bool calling_dynamic_method_551;
struct sType* lambda_type_552;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_553;
struct tuple2$2char$phsType$ph* it_556;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* field_name_559=0;
struct sType* field_type_560=0;
void* __right_value430 = (void*)0;
struct sType* result_type_561;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1CVALUE$ph* come_params_562;
int i_563;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_564;
struct tuple2$2char$phsNode$ph* it_565;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_566=0;
struct sNode* node_567=0;
_Bool Value_568;
_Bool __result_obj__321;
void* __right_value433 = (void*)0;
struct CVALUE* come_value_569;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_1_570=0;
char* Err_571=0;
_Bool _if_conditional2;
_Bool __result_obj__322;
void* __right_value439 = (void*)0;
_Bool _if_conditional3;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct buffer* buf_572;
int j_573;
struct list$1CVALUE$ph* o2_saved_574;
struct CVALUE* it_577;
void* __right_value443 = (void*)0;
char* __dec_obj88;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct CVALUE* come_value2_580;
void* __right_value446 = (void*)0;
char* __dec_obj89;
void* __right_value447 = (void*)0;
struct sType* result_type2_581;
void* __right_value448 = (void*)0;
struct sType* __dec_obj90;
struct list$1sType$ph* __dec_obj91;
struct sGenericsFun* generics_fun_582;
char* generics_fun_name_583;
struct sFun* fun_584;
void* __right_value449 = (void*)0;
char* __dec_obj92;
struct sClass* klass_585;
void* __right_value450 = (void*)0;
_Bool _while_condtional1;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
char* __dec_obj93;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var12 = (void*)0;
char* name_586=0;
struct sGenericsFun* gfun_587=0;
char* __dec_obj94;
void* __right_value457 = (void*)0;
char* none_generics_name_588;
void* __right_value458 = (void*)0;
char* fun_name3_589;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var13 = (void*)0;
char* name_590=0;
struct sGenericsFun* gfun_591=0;
char* __dec_obj95;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var14 = (void*)0;
char* name_592=0;
struct sGenericsFun* gfun_593=0;
char* __dec_obj96;
int i_594;
void* __right_value463 = (void*)0;
char* new_fun_name_595;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
char* __dec_obj97;
struct sType* obj_array_type_599;
void* __right_value467 = (void*)0;
char* array_method_name_600;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __dec_obj98;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* __dec_obj99;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_2_601=0;
char* Err_602=0;
_Bool _if_conditional4;
_Bool __result_obj__333;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
char* __dec_obj100;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct sClass* klass_603;
void* __right_value484 = (void*)0;
_Bool _while_condtional2;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
char* __dec_obj101;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var16 = (void*)0;
struct sFun* fun2_604=0;
char* real_fun_name_605=0;
char* __dec_obj102;
void* __right_value490 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var17 = (void*)0;
struct sFun* fun2_606=0;
char* real_fun_name_607=0;
char* __dec_obj103;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
char* original_obj_type_fun_name_608;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* __dec_obj104;
void* __right_value495 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var18 = (void*)0;
int come_exception_var_3_609=0;
char* Err_610=0;
_Bool _if_conditional5;
_Bool __result_obj__334;
void* __right_value496 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_4_611=0;
char* Err_612=0;
_Bool _if_conditional6;
_Bool __result_obj__335;
void* __right_value497 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_5_613=0;
char* Err_614=0;
_Bool _if_conditional7;
_Bool __result_obj__336;
void* __right_value498 = (void*)0;
struct sType* result_type_615;
_Bool in_exception_value_616;
void* __right_value506 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* new_node_617;
_Bool Value_619;
_Bool __result_obj__339;
_Bool __result_obj__340;
_Bool in_exception_value_620;
void* __right_value509 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sNode* new_node_621;
_Bool Value_622;
_Bool __result_obj__341;
_Bool __result_obj__342;
void* __right_value512 = (void*)0;
struct sType* result_type2_623;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1sType$ph* param_types_624;
struct list$1sType$ph* o2_saved_625;
struct sType* it_626;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* it2_627;
struct sType* no_solved_obj_type_628;
void* __right_value517 = (void*)0;
struct sType* it3_629;
void* __right_value518 = (void*)0;
struct list$1sType$ph* type_checking_param_types_630;
int n_631;
struct list$1sType$ph* o2_saved_632;
struct sType* it_633;
struct sType* no_solved_obj_type_634;
void* __right_value519 = (void*)0;
struct sType* it3_635;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct list$1CVALUE$ph* come_params_636;
int i_637;
_Bool first_param_641;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_642;
struct tuple2$2char$phsNode$ph* it_643;
struct tuple2$2char$phsNode$ph* multiple_assign_var21 = (void*)0;
char* label_644=0;
struct sNode* node_645=0;
int n_646;
struct list$1char$ph* o2_saved_647;
char* it_648;
_Bool Value_649;
_Bool __result_obj__344;
void* __right_value525 = (void*)0;
struct CVALUE* come_value_650;
void* __right_value526 = (void*)0;
_Bool _if_conditional8;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var22 = (void*)0;
_Bool come_exception_var_6_651=0;
char* Err_652=0;
_Bool _if_conditional9;
_Bool __result_obj__345;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
_Bool _if_conditional10;
void* __right_value534 = (void*)0;
int i_658;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_659;
struct tuple2$2char$phsNode$ph* it_660;
struct tuple2$2char$phsNode$ph* multiple_assign_var23 = (void*)0;
char* label_661=0;
struct sNode* node_662=0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_7_663=0;
char* Err_664=0;
_Bool _if_conditional11;
_Bool __result_obj__348;
void* __right_value540 = (void*)0;
_Bool _if_conditional12;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
_Bool _elif_conditional1;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_8_668=0;
char* Err_669=0;
_Bool _if_conditional13;
_Bool __result_obj__351;
void* __right_value545 = (void*)0;
_Bool _if_conditional14;
_Bool Value_670;
_Bool __result_obj__352;
void* __right_value546 = (void*)0;
struct CVALUE* come_value_671;
void* __right_value547 = (void*)0;
_Bool _if_conditional15;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_9_672=0;
char* Err_673=0;
_Bool _if_conditional16;
_Bool __result_obj__353;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
_Bool _if_conditional17;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
_Bool _if_conditional18;
struct sType* obj_array_type_674;
void* __right_value557 = (void*)0;
char* array_method_name_675;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct buffer* buf_676;
int i_677;
struct list$1sNode$ph* o2_saved_678;
struct sNode* it_681;
_Bool Value_684;
void* __right_value560 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_10_685=0;
char* Err_686=0;
_Bool _if_conditional19;
_Bool __result_obj__360;
void* __right_value561 = (void*)0;
struct CVALUE* come_value_687;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_688;
void* __right_value564 = (void*)0;
char* __dec_obj115;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sType* __dec_obj116;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct buffer* buf_692;
int i_693;
struct list$1sNode$ph* o2_saved_694;
struct sNode* it_695;
_Bool Value_696;
void* __right_value576 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_11_697=0;
char* Err_698=0;
_Bool _if_conditional20;
_Bool __result_obj__362;
void* __right_value577 = (void*)0;
struct CVALUE* come_value_699;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct CVALUE* come_value_700;
void* __right_value580 = (void*)0;
char* __dec_obj120;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj121;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct buffer* buf_701;
int i_702;
struct list$1sNode$ph* o2_saved_703;
struct sNode* it_704;
_Bool Value_705;
void* __right_value589 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_12_706=0;
char* Err_707=0;
_Bool _if_conditional21;
_Bool __result_obj__363;
void* __right_value590 = (void*)0;
struct CVALUE* come_value_708;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct CVALUE* come_value_709;
void* __right_value593 = (void*)0;
char* __dec_obj122;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sType* __dec_obj123;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct buffer* buf_710;
int i_711;
struct list$1sNode$ph* o2_saved_712;
struct sNode* it_713;
_Bool Value_714;
void* __right_value602 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_13_715=0;
char* Err_716=0;
_Bool _if_conditional22;
_Bool __result_obj__364;
void* __right_value603 = (void*)0;
struct CVALUE* come_value_717;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct CVALUE* come_value_718;
void* __right_value606 = (void*)0;
char* __dec_obj124;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sType* __dec_obj125;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
char* default_param_719;
void* __right_value615 = (void*)0;
char* param_name_720;
void* __right_value616 = (void*)0;
_Bool _if_conditional23;
struct buffer* source_721;
char* p_722;
char* head_723;
int sline_724;
void* __right_value617 = (void*)0;
struct buffer* __dec_obj126;
void* __right_value618 = (void*)0;
struct sNode* node_725;
_Bool Value_726;
_Bool __result_obj__365;
struct buffer* __dec_obj127;
void* __right_value619 = (void*)0;
struct CVALUE* come_value_727;
void* __right_value620 = (void*)0;
_Bool _if_conditional24;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var31 = (void*)0;
_Bool come_exception_var_14_728=0;
char* Err_729=0;
_Bool _if_conditional25;
_Bool __result_obj__366;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
_Bool _if_conditional26;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
_Bool _if_conditional27;
void* __right_value630 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_15_730=0;
char* Err_731=0;
_Bool _if_conditional28;
_Bool __result_obj__367;
_Bool __result_obj__368;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct buffer* buf_732;
int j_733;
struct list$1CVALUE$ph* o2_saved_734;
struct CVALUE* it_735;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct CVALUE* come_value2_736;
void* __right_value635 = (void*)0;
char* __dec_obj128;
void* __right_value636 = (void*)0;
struct sType* __dec_obj129;
void* __right_value637 = (void*)0;
char* __dec_obj130;
void* __right_value638 = (void*)0;
struct list$1sType$ph* __dec_obj131;
_Bool __result_obj__369;
    fun_name_475=(char*)come_increment_ref_count(self->fun_name);
    params_476=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_477=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_478=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_479=self->method_block_sline;
    no_infference_method_generics_480=self->no_infference_method_generics;
    method_generics_types_481=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_482=self->recursive;
    method_generics_types_before_483=((void*)0);
    __dec_obj82=method_generics_types_before_483,
    method_generics_types_before_483=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj82,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj83=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj83,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_484=node_compile(obj_477,info);
    if(    !Value_484) {
        __result_obj__299 = (_Bool)0;
        (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__299;
    }
    else {
    }
    obj_value_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_486=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_485->type));
    if(    !no_infference_method_generics_480) {
        no_output_come_code_487=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_488=(struct sType*)come_increment_ref_count(obj_type_486);
        none_generics_name_489=(char*)come_increment_ref_count(get_none_generics_name(type_488->mClass->mName));
        fun_name2_490=(char*)come_increment_ref_count(create_method_name(type_488,(_Bool)0,fun_name_475,info,(_Bool)1));
        fun_name3_491=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_489,fun_name_475));
        generics_fun_492=((struct sGenericsFun*)(__right_value402=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_491,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value402,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_492) {
            method_generics_493=list$1char$ph_length(generics_fun_492->mMethodGenericsTypeNames)>0;
            if(            method_generics_493&&list$1sType$ph_length(info->method_generics_types)==0) {
                multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value404=make_generics_function(obj_type_486,(char*)come_increment_ref_count(__builtin_string(fun_name_475)),info,(_Bool)1)));
                name_494=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                gfun_495=multiple_assign_var6->v2;
                /*c*/ come_call_finalizer3(__right_value404,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_name_496=(char*)come_increment_ref_count(name_494);
                fun_497=((struct sFun*)(__right_value405=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_496,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value405,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_params_498=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 290, "struct list$1CVALUE$ph*"))));
                if(                method_block_478) {
                    no_output_come_code_499=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_478,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_498),fun_497,fun_name3_491,method_block_sline_479,info,(_Bool)1)) {
                        __result_obj__301 = (_Bool)0;
                        (name_494 = come_decrement_ref_count(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_496 = come_decrement_ref_count(generics_fun_name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (none_generics_name_489 = come_decrement_ref_count(none_generics_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_490 = come_decrement_ref_count(fun_name2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_491 = come_decrement_ref_count(fun_name3_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__301;
                    }
                    info->no_output_come_code=no_output_come_code_499;
                    method_block_node_500=((struct CVALUE*)(__right_value408=list$1CVALUE$ph$p_operator_load_element(come_params_498,-1)));
                    /*c*/ come_call_finalizer3(__right_value408,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    method_block_lambda_type_504=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_500->type));
                    method_block_result_type_505=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_506=((struct sType*)(__right_value411=list$1sType$ph$p_operator_load_element(generics_fun_492->mParamTypes,-1)));
                    /*c*/ come_call_finalizer3(__right_value411,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    generics_fun_method_block_result_type_507=generics_fun_method_block_lambda_type_506->mResultType;
                    if(                    generics_fun_method_block_result_type_507->mClass->mMethodGenerics) {
                        method_generics_num_508=generics_fun_method_block_result_type_507->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_508,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_505)));
                    }
                    n_517=0;
                    for(                    o2_saved_518=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_506->mParamTypes)),it_519=list$1sType$ph_begin((o2_saved_518));                    !list$1sType$ph_end((o2_saved_518));                    it_519=list$1sType$ph_next((o2_saved_518))                    ){
                        if(                        it_519->mClass->mMethodGenerics) {
                            method_generics_num_520=it_519->mClass->mMethodGenericsNum;
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_520,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value416=list$1sType$ph$p_operator_load_element(method_block_lambda_type_504->mParamTypes,n_517))))));
                            /*c*/ come_call_finalizer3(__right_value416,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        n_517++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_518,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_params_521=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 319, "struct list$1CVALUE$ph*"))));
                    i_522=0;
                    for(                    o2_saved_523=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_476)),it_526=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_523));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_523));                    it_526=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_523))                    ){
                        multiple_assign_var7=it_526;
                        label_529=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                        node_530=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                        if(                        i_522==0) {
                            list$1CVALUE$ph_push_back(come_params_521,(struct CVALUE*)come_increment_ref_count(obj_value_485));
                            i_522++;
                        }
                        else {
                            Value_531=node_compile(node_530,info);
                            if(                            !Value_531) {
                                __result_obj__313 = (_Bool)0;
                                (label_529 = come_decrement_ref_count(label_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_530) ? node_530 = come_decrement_ref_count(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_523,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_lambda_type_504,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_result_type_505,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_494 = come_decrement_ref_count(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_496 = come_decrement_ref_count(generics_fun_name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_489 = come_decrement_ref_count(none_generics_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_490 = come_decrement_ref_count(fun_name2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_491 = come_decrement_ref_count(fun_name3_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__313;
                            }
                            else {
                            }
                            come_value_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            list$1CVALUE$ph_push_back(come_params_521,(struct CVALUE*)come_increment_ref_count(come_value_532));
                            /*c*/ come_call_finalizer3(come_value_532,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_529 = come_decrement_ref_count(label_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_530) ? node_530 = come_decrement_ref_count(node_530, ((struct sNode*)node_530)->finalize, ((struct sNode*)node_530)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_523,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_492->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_533=generics_fun_492->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_533,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_517=0;
                    for(                    o2_saved_534=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_492->mParamTypes)),it_535=list$1sType$ph_begin((o2_saved_534));                    !list$1sType$ph_end((o2_saved_534));                    it_535=list$1sType$ph_next((o2_saved_534))                    ){
                        if(                        it_535->mClass->mMethodGenerics) {
                            method_generics_num_536=it_535->mClass->mMethodGenericsNum;
                            if(                            n_517<list$1CVALUE$ph_length(come_params_521)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_536,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value422=list$1CVALUE$ph$p_operator_load_element(come_params_521,n_517)))->type)));
                                /*c*/ come_call_finalizer3(__right_value422,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_517++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_534,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_lambda_type_504,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_result_type_505,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_521,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    come_params_537=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 357, "struct list$1CVALUE$ph*"))));
                    i_538=0;
                    for(                    o2_saved_539=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_476)),it_540=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_539));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_539));                    it_540=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_539))                    ){
                        multiple_assign_var8=it_540;
                        label_541=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                        node_542=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
                        if(                        i_538==0) {
                            list$1CVALUE$ph_push_back(come_params_537,(struct CVALUE*)come_increment_ref_count(obj_value_485));
                            i_538++;
                        }
                        else {
                            Value_543=node_compile(node_542,info);
                            if(                            !Value_543) {
                                __result_obj__314 = (_Bool)0;
                                (label_541 = come_decrement_ref_count(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_539,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_494 = come_decrement_ref_count(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_496 = come_decrement_ref_count(generics_fun_name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_489 = come_decrement_ref_count(none_generics_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_490 = come_decrement_ref_count(fun_name2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_491 = come_decrement_ref_count(fun_name3_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__314;
                            }
                            else {
                            }
                            come_value_544=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            list$1CVALUE$ph_push_back(come_params_537,(struct CVALUE*)come_increment_ref_count(come_value_544));
                            /*c*/ come_call_finalizer3(come_value_544,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_541 = come_decrement_ref_count(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_539,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_492->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_545=generics_fun_492->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_545,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_546=0;
                    for(                    o2_saved_547=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_492->mParamTypes)),it_548=list$1sType$ph_begin((o2_saved_547));                    !list$1sType$ph_end((o2_saved_547));                    it_548=list$1sType$ph_next((o2_saved_547))                    ){
                        if(                        it_548->mClass->mMethodGenerics) {
                            method_generics_num_549=it_548->mClass->mMethodGenericsNum;
                            if(                            n_546<list$1CVALUE$ph_length(come_params_537)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_549,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value428=list$1CVALUE$ph$p_operator_load_element(come_params_537,n_546)))->type)));
                                /*c*/ come_call_finalizer3(__right_value428,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_546++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_547,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_496);
                (name_494 = come_decrement_ref_count(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_496 = come_decrement_ref_count(generics_fun_name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_params_498,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_487;
        /*c*/ come_call_finalizer3(type_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (none_generics_name_489 = come_decrement_ref_count(none_generics_name_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_490 = come_decrement_ref_count(fun_name2_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_491 = come_decrement_ref_count(fun_name3_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_550=obj_type_486->mClass;
    calling_dynamic_method_551=(_Bool)0;
    lambda_type_552=((void*)0);
    for(    o2_saved_553=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_550->mFields)),it_556=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_553));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_553));    it_556=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_553))    ){
        multiple_assign_var9=it_556;
        field_name_559=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        field_type_560=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        string_operator_equals(field_name_559,fun_name_475)&&string_operator_equals(field_type_560->mClass->mName,"lambda")) {
            calling_dynamic_method_551=(_Bool)1;
            lambda_type_552=field_type_560;
            (field_name_559 = come_decrement_ref_count(field_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        (field_name_559 = come_decrement_ref_count(field_name_559, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_560,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_553,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    calling_dynamic_method_551) {
        result_type_561=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_552->mResultType));
        result_type_561->mStatic=(_Bool)0;
        come_params_562=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 419, "struct list$1CVALUE$ph*"))));
        i_563=0;
        for(        o2_saved_564=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_476)),it_565=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_564));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_564));        it_565=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_564))        ){
            multiple_assign_var10=it_565;
            label_566=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_567=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            i_563==0) {
                list$1CVALUE$ph_push_back(come_params_562,(struct CVALUE*)come_increment_ref_count(obj_value_485));
                i_563++;
            }
            else {
                Value_568=node_compile(node_567,info);
                if(                !Value_568) {
                    __result_obj__321 = (_Bool)0;
                    (label_566 = come_decrement_ref_count(label_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_564,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_561,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_562,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__321;
                }
                else {
                }
                come_value_569=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value438=check_assign_type(((char*)(__right_value436=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value434=string_to_string(fun_name_475))),((char*)(__right_value435=int_to_string(i_563)))))),((struct sType*)(__right_value437=list$1sType$ph$p_operator_load_element(lambda_type_552->mParamTypes,i_563-1))),come_value_569->type,come_value_569,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_1_570=multiple_assign_var11->v1;
                Err_571=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                if(                (_if_conditional2=(Err_571)),                (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value436 = come_decrement_ref_count(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value437,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value438,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__322 = (_Bool)1;
                    /*c*/ come_call_finalizer3(come_value_569,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (Err_571 = come_decrement_ref_count(Err_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_566 = come_decrement_ref_count(label_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_564,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_561,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_562,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__322;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)(__right_value439=list$1sType$ph$p_operator_load_element(lambda_type_552->mParamTypes,i_563-1)))->mHeap&&come_value_569->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value439,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)(__right_value440=list$1sType$ph$p_operator_load_element(lambda_type_552->mParamTypes,i_563-1))),come_value_569->type,come_value_569,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value440,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_562,(struct CVALUE*)come_increment_ref_count(come_value_569));
                i_563++;
                /*c*/ come_call_finalizer3(come_value_569,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_571 = come_decrement_ref_count(Err_571, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_566 = come_decrement_ref_count(label_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_567) ? node_567 = come_decrement_ref_count(node_567, ((struct sNode*)node_567)->finalize, ((struct sNode*)node_567)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_564,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buf_572=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 450, "struct buffer*"))));
        buffer_append_format(buf_572,"%s->%s",obj_value_485->c_value,fun_name_475);
        buffer_append_str(buf_572,"(");
        j_573=0;
        for(        o2_saved_574=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_562)),it_577=list$1CVALUE$ph_begin((o2_saved_574));        !list$1CVALUE$ph_end((o2_saved_574));        it_577=list$1CVALUE$ph_next((o2_saved_574))        ){
            if(            j_573==0) {
                __dec_obj88=it_577->c_value,
                it_577->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_577->c_value));
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            buffer_append_str(buf_572,it_577->c_value);
            if(            j_573!=list$1CVALUE$ph_length(come_params_562)-1) {
                buffer_append_str(buf_572,",");
            }
            j_573++;
        }
        /*c*/ come_call_finalizer3(o2_saved_574,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_572,")");
        come_value2_580=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 470, "struct CVALUE*"))));
        __dec_obj89=come_value2_580->c_value,
        come_value2_580->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_572));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type2_581=(struct sType*)come_increment_ref_count(solve_generics(result_type_561,info->generics_type,info));
        __dec_obj90=come_value2_580->type,
        come_value2_580->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_581));
        /*b*/ come_call_finalizer3(__dec_obj90,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_580->type->mStatic=(_Bool)0;
        come_value2_580->var=((void*)0);
        if(        result_type2_581->mHeap) {
            append_object_to_right_values2(come_value2_580,(struct sType*)come_increment_ref_count(result_type2_581),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_580->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_580));
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj91=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_483);
        /*b*/ come_call_finalizer3(__dec_obj91,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        /*c*/ come_call_finalizer3(result_type_561,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_562,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_572,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_580,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        generics_fun_582=((void*)0);
        generics_fun_name_583=((void*)0);
        fun_584=((void*)0);
        if(        string_operator_equals(fun_name_475,"super")) {
            __dec_obj92=fun_name_475,
            fun_name_475=(char*)come_increment_ref_count(create_non_method_name(obj_type_486,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            klass_585=obj_type_486->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value450=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_585->mParentClassName))))),            /*c*/ come_call_finalizer3(__right_value450,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _while_condtional1) {
                klass_585=((struct sClass*)(__right_value451=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_585->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value451,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj93=generics_fun_name_583,
                generics_fun_name_583=(char*)come_increment_ref_count(create_method_name_using_class(klass_585,(_Bool)0,fun_name_475,info,(_Bool)1));
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                fun_584=((struct sFun*)(__right_value454=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value453=__builtin_string(generics_fun_name_583))),((void*)0))));
                (__right_value453 = come_decrement_ref_count(__right_value453, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value454,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_584) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_486&&obj_type_486->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type_486->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var12=((struct tuple2$2char$phsGenericsFun$p*)(__right_value456=make_generics_function(obj_type_486,(char*)come_increment_ref_count(__builtin_string(fun_name_475)),info,(_Bool)1)));
                name_586=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                gfun_587=multiple_assign_var12->v2;
                /*c*/ come_call_finalizer3(__right_value456,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj94=generics_fun_name_583,
                generics_fun_name_583=(char*)come_increment_ref_count(name_586);
                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_582=gfun_587;
                (name_586 = come_decrement_ref_count(name_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1sType$ph_length(info->method_generics_types)>0) {
                none_generics_name_588=(char*)come_increment_ref_count(get_none_generics_name(obj_type_486->mClass->mName));
                fun_name3_589=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_588,fun_name_475));
                multiple_assign_var13=((struct tuple2$2char$phsGenericsFun$p*)(__right_value460=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_589)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_590=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                gfun_591=multiple_assign_var13->v2;
                /*c*/ come_call_finalizer3(__right_value460,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj95=generics_fun_name_583,
                generics_fun_name_583=(char*)come_increment_ref_count(name_590);
                __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_582=gfun_591;
                (none_generics_name_588 = come_decrement_ref_count(none_generics_name_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_589 = come_decrement_ref_count(fun_name3_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_590 = come_decrement_ref_count(name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var14=((struct tuple2$2char$phsGenericsFun$p*)(__right_value462=make_generics_function(obj_type_486,(char*)come_increment_ref_count(__builtin_string(fun_name_475)),info,(_Bool)1)));
                name_592=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_593=multiple_assign_var14->v2;
                /*c*/ come_call_finalizer3(__right_value462,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj96=generics_fun_name_583,
                generics_fun_name_583=(char*)come_increment_ref_count(name_592);
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_582=gfun_593;
                (name_592 = come_decrement_ref_count(name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_594=128;            i_594>=1;            i_594--            ){
                new_fun_name_595=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_583,i_594));
                fun_584=((struct sFun*)(__right_value465=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value464=__builtin_string(new_fun_name_595))))));
                (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value465,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_584!=((void*)0)) {
                    __dec_obj97=generics_fun_name_583,
                    generics_fun_name_583=(char*)come_increment_ref_count(__builtin_string(new_fun_name_595));
                    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_595 = come_decrement_ref_count(new_fun_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_595 = come_decrement_ref_count(new_fun_name_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_584==((void*)0)) {
                obj_array_type_599=obj_type_486->mOriginalLoadVarType;
                if(                obj_array_type_599&&list$1sNode$ph_length(obj_array_type_599->mArrayNum)>0) {
                    array_method_name_600=(char*)come_increment_ref_count(create_method_name(obj_array_type_599,(_Bool)0,fun_name_475,info,(_Bool)0));
                    fun_584=((struct sFun*)(__right_value469=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value468=__builtin_string(array_method_name_600))),((void*)0))));
                    (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value469,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_584) {
                        __dec_obj98=generics_fun_name_583,
                        generics_fun_name_583=(char*)come_increment_ref_count(__builtin_string(array_method_name_600));
                        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                    else {
                        fun_584=((struct sFun*)(__right_value472=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value471=__builtin_string(generics_fun_name_583))),((void*)0))));
                        (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value472,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_584==((void*)0)) {
                            __dec_obj99=generics_fun_name_583,
                            generics_fun_name_583=(char*)come_increment_ref_count(create_method_name(obj_type_486,(_Bool)0,((char*)(__right_value473=__builtin_string(fun_name_475))),info,(_Bool)1));
                            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_584=((struct sFun*)(__right_value476=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value475=__builtin_string(generics_fun_name_583))),((void*)0))));
                            (__right_value475 = come_decrement_ref_count(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value476,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_584==((void*)0)) {
                                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value477=err_msg(info,"function not found(%s) at method(%s)(Z1)",generics_fun_name_583,info->come_fun->mName)));
                                come_exception_var_2_601=multiple_assign_var15->v1;
                                Err_602=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                                if(                                (_if_conditional4=(Err_602)),                                /*c*/ come_call_finalizer3(__right_value477,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional4) {
                                    __result_obj__333 = (_Bool)1;
                                    (Err_602 = come_decrement_ref_count(Err_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_600 = come_decrement_ref_count(array_method_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__333;
                                }
                                else {
                                }
                                (Err_602 = come_decrement_ref_count(Err_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_600 = come_decrement_ref_count(array_method_name_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_584=((struct sFun*)(__right_value479=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value478=__builtin_string(generics_fun_name_583))),((void*)0))));
                    (__right_value478 = come_decrement_ref_count(__right_value478, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value479,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_584==((void*)0)) {
                        __dec_obj100=generics_fun_name_583,
                        generics_fun_name_583=(char*)come_increment_ref_count(create_method_name(obj_type_486,(_Bool)0,((char*)(__right_value480=__builtin_string(fun_name_475))),info,(_Bool)1));
                        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        (__right_value480 = come_decrement_ref_count(__right_value480, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_584=((struct sFun*)(__right_value483=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value482=__builtin_string(generics_fun_name_583))),((void*)0))));
                        (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value483,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_584==((void*)0)) {
                            klass_603=obj_type_486->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value484=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_603->mParentClassName))))),                            /*c*/ come_call_finalizer3(__right_value484,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _while_condtional2) {
                                klass_603=((struct sClass*)(__right_value485=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_603->mParentClassName)));
                                /*c*/ come_call_finalizer3(__right_value485,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                __dec_obj101=generics_fun_name_583,
                                generics_fun_name_583=(char*)come_increment_ref_count(create_method_name_using_class(klass_603,(_Bool)0,fun_name_475,info,(_Bool)1));
                                __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                fun_584=((struct sFun*)(__right_value488=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value487=__builtin_string(generics_fun_name_583))),((void*)0))));
                                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(__right_value488,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                if(                                fun_584) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_584==((void*)0)&&string_operator_equals(fun_name_475,"to_string")) {
                            multiple_assign_var16=((struct tuple2$2sFun$pchar$ph*)(__right_value489=create_to_string_automatically(obj_type_486,fun_name_475,info)));
                            fun2_604=multiple_assign_var16->v1;
                            real_fun_name_605=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            /*c*/ come_call_finalizer3(__right_value489,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            fun_584=fun2_604;
                            __dec_obj102=generics_fun_name_583,
                            generics_fun_name_583=(char*)come_increment_ref_count(real_fun_name_605);
                            __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (real_fun_name_605 = come_decrement_ref_count(real_fun_name_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_584==((void*)0)&&string_operator_equals(fun_name_475,"equals")) {
                            multiple_assign_var17=((struct tuple2$2sFun$pchar$ph*)(__right_value490=create_equals_automatically(obj_type_486,fun_name_475,info)));
                            fun2_606=multiple_assign_var17->v1;
                            real_fun_name_607=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            /*c*/ come_call_finalizer3(__right_value490,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            fun_584=fun2_606;
                            __dec_obj103=generics_fun_name_583,
                            generics_fun_name_583=(char*)come_increment_ref_count(real_fun_name_607);
                            __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (real_fun_name_607 = come_decrement_ref_count(real_fun_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_584==((void*)0)) {
                            original_obj_type_fun_name_608=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_486,(_Bool)0,((char*)(__right_value491=__builtin_string(fun_name_475))),info,(_Bool)1));
                            (__right_value491 = come_decrement_ref_count(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_584=((struct sFun*)(__right_value494=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value493=__builtin_string(original_obj_type_fun_name_608))),((void*)0))));
                            (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value494,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_584) {
                                __dec_obj104=generics_fun_name_583,
                                generics_fun_name_583=(char*)come_increment_ref_count(original_obj_type_fun_name_608);
                                __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            (original_obj_type_fun_name_608 = come_decrement_ref_count(original_obj_type_fun_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_584==((void*)0)) {
                            multiple_assign_var18=((struct tuple2$2int$char$ph*)(__right_value495=err_msg(info,"function not found(%s) at method(%s)(Z2n)",generics_fun_name_583,info->come_fun->mName)));
                            come_exception_var_3_609=multiple_assign_var18->v1;
                            Err_610=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            if(                            (_if_conditional5=(Err_610)),                            /*c*/ come_call_finalizer3(__right_value495,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional5) {
                                __result_obj__334 = (_Bool)1;
                                (Err_610 = come_decrement_ref_count(Err_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__334;
                            }
                            else {
                            }
                            (Err_610 = come_decrement_ref_count(Err_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_584==((void*)0)) {
            multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value496=err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_583,info->come_fun->mName)));
            come_exception_var_4_611=multiple_assign_var19->v1;
            Err_612=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional6=(Err_612)),            /*c*/ come_call_finalizer3(__right_value496,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__335 = (_Bool)1;
                (Err_612 = come_decrement_ref_count(Err_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__335;
            }
            else {
            }
            (Err_612 = come_decrement_ref_count(Err_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph_length(fun_584->mParamTypes)==0) {
            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value497=err_msg(info,"Method require function parametor")));
            come_exception_var_5_613=multiple_assign_var20->v1;
            Err_614=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional7=(Err_614)),            /*c*/ come_call_finalizer3(__right_value497,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __result_obj__336 = (_Bool)1;
                (Err_614 = come_decrement_ref_count(Err_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__336;
            }
            else {
            }
            (Err_614 = come_decrement_ref_count(Err_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_615=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_584->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_615->mException&&!info->in_exception_value) {
            in_exception_value_616=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 638, "struct sNode");
            _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value506=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMethodCallNode_finalize;
            _inf_value2->clone=(void*)sMethodCallNode_clone;
            _inf_value2->compile=(void*)sMethodCallNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMethodCallNode_terminated;
            _inf_value2->kind=(void*)sMethodCallNode_kind;
            new_node_617=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            /*c*/ come_call_finalizer3(__right_value506,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_619=node_compile(new_node_617,info);
            if(            !Value_619) {
                __result_obj__339 = (_Bool)0;
                ((new_node_617) ? new_node_617 = come_decrement_ref_count(new_node_617, ((struct sNode*)new_node_617)->finalize, ((struct sNode*)new_node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__339;
            }
            else {
            }
            info->in_exception_value=in_exception_value_616;
            __result_obj__340 = (_Bool)1;
            ((new_node_617) ? new_node_617 = come_decrement_ref_count(new_node_617, ((struct sNode*)new_node_617)->finalize, ((struct sNode*)new_node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__340;
            ((new_node_617) ? new_node_617 = come_decrement_ref_count(new_node_617, ((struct sNode*)new_node_617)->finalize, ((struct sNode*)new_node_617)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        result_type_615->mException&&!info->in_exception_value) {
            in_exception_value_620=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 650, "struct sNode");
            _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value509=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMethodCallNode_finalize;
            _inf_value3->clone=(void*)sMethodCallNode_clone;
            _inf_value3->compile=(void*)sMethodCallNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMethodCallNode_terminated;
            _inf_value3->kind=(void*)sMethodCallNode_kind;
            new_node_621=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            /*c*/ come_call_finalizer3(__right_value509,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_622=node_compile(new_node_621,info);
            if(            !Value_622) {
                __result_obj__341 = (_Bool)0;
                ((new_node_621) ? new_node_621 = come_decrement_ref_count(new_node_621, ((struct sNode*)new_node_621)->finalize, ((struct sNode*)new_node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__341;
            }
            else {
            }
            info->in_exception_value=in_exception_value_620;
            __result_obj__342 = (_Bool)1;
            ((new_node_621) ? new_node_621 = come_decrement_ref_count(new_node_621, ((struct sNode*)new_node_621)->finalize, ((struct sNode*)new_node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__342;
            ((new_node_621) ? new_node_621 = come_decrement_ref_count(new_node_621, ((struct sNode*)new_node_621)->finalize, ((struct sNode*)new_node_621)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        result_type_615->mStatic=(_Bool)0;
        result_type2_623=(struct sType*)come_increment_ref_count(solve_generics(result_type_615,info->generics_type,info));
        param_types_624=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 665, "struct list$1sType$ph*"))));
        for(        o2_saved_625=(struct list$1sType$ph*)come_increment_ref_count((fun_584->mParamTypes)),it_626=list$1sType$ph_begin((o2_saved_625));        !list$1sType$ph_end((o2_saved_625));        it_626=list$1sType$ph_next((o2_saved_625))        ){
            if(            it_626==((void*)0)) {
                list$1sType$ph_push_back(param_types_624,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_626)));
            }
            else {
                it2_627=(struct sType*)come_increment_ref_count(solve_generics(it_626,info->generics_type,info));
                no_solved_obj_type_628=(struct sType*)come_increment_ref_count(obj_type_486->mNoSolvedGenericsType);
                it3_629=(struct sType*)come_increment_ref_count(solve_generics(it_626,no_solved_obj_type_628,info));
                list$1sType$ph_push_back(param_types_624,(struct sType*)come_increment_ref_count(it2_627));
                /*c*/ come_call_finalizer3(it2_627,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(no_solved_obj_type_628,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(it3_629,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(o2_saved_625,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_checking_param_types_630=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_624));
        if(        generics_fun_582) {
            n_631=0;
            for(            o2_saved_632=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_582->mParamTypes)),it_633=list$1sType$ph_begin((o2_saved_632));            !list$1sType$ph_end((o2_saved_632));            it_633=list$1sType$ph_next((o2_saved_632))            ){
                if(                it_633==((void*)0)) {
                }
                else {
                    no_solved_obj_type_634=(struct sType*)come_increment_ref_count(obj_type_486->mNoSolvedGenericsType);
                    it3_635=(struct sType*)come_increment_ref_count(solve_generics(it_633,no_solved_obj_type_634,info));
                    /*c*/ come_call_finalizer3(no_solved_obj_type_634,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(it3_635,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                n_631++;
            }
            /*c*/ come_call_finalizer3(o2_saved_632,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_params_636=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 695, "struct list$1CVALUE$ph*"))));
        for(        i_637=0;        i_637<list$1sType$ph_length(fun_584->mParamTypes)-(((method_block_478)?(2):(0)));        i_637++        ){
            list$1CVALUE$ph_add(come_params_636,((void*)0));
        }
        first_param_641=(_Bool)1;
        for(        o2_saved_642=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_476)),it_643=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_642));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_642));        it_643=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_642))        ){
            multiple_assign_var21=it_643;
            label_644=(char*)come_increment_ref_count(multiple_assign_var21->v1);
            node_645=(struct sNode*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            first_param_641) {
                first_param_641=(_Bool)0;
            }
            else if(            label_644) {
                n_646=0;
                for(                o2_saved_647=(struct list$1char$ph*)come_increment_ref_count((fun_584->mParamNames)),it_648=list$1char$ph_begin((o2_saved_647));                !list$1char$ph_end((o2_saved_647));                it_648=list$1char$ph_next((o2_saved_647))                ){
                    if(                    string_operator_equals(label_644,it_648)) {
                        break;
                    }
                    n_646++;
                }
                /*c*/ come_call_finalizer3(o2_saved_647,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_649=node_compile(node_645,info);
                if(                !Value_649) {
                    __result_obj__344 = (_Bool)0;
                    (label_644 = come_decrement_ref_count(label_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_645) ? node_645 = come_decrement_ref_count(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_642,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__344;
                }
                else {
                }
                come_value_650=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional8=(((struct sType*)(__right_value526=list$1sType$ph$p_operator_load_element(param_types_624,n_646))))),                /*c*/ come_call_finalizer3(__right_value526,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    multiple_assign_var22=((struct tuple2$2bool$char$ph*)(__right_value531=check_assign_type(((char*)(__right_value529=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value527=string_to_string(fun_name_475))),((char*)(__right_value528=int_to_string(n_646)))))),((struct sType*)(__right_value530=list$1sType$ph$p_operator_load_element(type_checking_param_types_630,n_646))),come_value_650->type,come_value_650,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_6_651=multiple_assign_var22->v1;
                    Err_652=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    if(                    (_if_conditional9=(Err_652)),                    (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value528 = come_decrement_ref_count(__right_value528, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value529 = come_decrement_ref_count(__right_value529, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value530,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value531,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional9) {
                        __result_obj__345 = (_Bool)1;
                        (Err_652 = come_decrement_ref_count(Err_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_650,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (label_644 = come_decrement_ref_count(label_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_645) ? node_645 = come_decrement_ref_count(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(o2_saved_642,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__345;
                    }
                    else {
                    }
                    (Err_652 = come_decrement_ref_count(Err_652, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional10=(((struct sType*)(__right_value532=list$1sType$ph$p_operator_load_element(param_types_624,n_646)))&&((struct sType*)(__right_value533=list$1sType$ph$p_operator_load_element(param_types_624,n_646)))->mHeap&&come_value_650->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value532,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value533,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    std_move(((struct sType*)(__right_value534=list$1sType$ph$p_operator_load_element(param_types_624,n_646))),come_value_650->type,come_value_650,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value534,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_636,n_646,(struct CVALUE*)come_increment_ref_count(come_value_650));
                /*c*/ come_call_finalizer3(come_value_650,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_644 = come_decrement_ref_count(label_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_645) ? node_645 = come_decrement_ref_count(node_645, ((struct sNode*)node_645)->finalize, ((struct sNode*)node_645)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_642,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_658=0;
        for(        o2_saved_659=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_476)),it_660=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_659));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_659));        it_660=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_659))        ){
            multiple_assign_var23=it_660;
            label_661=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_662=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            i_658==0) {
                multiple_assign_var24=((struct tuple2$2bool$char$ph*)(__right_value539=check_assign_type(((char*)(__right_value537=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value535=string_to_string(fun_name_475))),((char*)(__right_value536=int_to_string(i_658)))))),((struct sType*)(__right_value538=list$1sType$ph$p_operator_load_element(type_checking_param_types_630,i_658))),obj_value_485->type,obj_value_485,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_663=multiple_assign_var24->v1;
                Err_664=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                if(                (_if_conditional11=(Err_664)),                (__right_value535 = come_decrement_ref_count(__right_value535, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value536 = come_decrement_ref_count(__right_value536, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value538,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value539,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional11) {
                    __result_obj__348 = (_Bool)1;
                    (Err_664 = come_decrement_ref_count(Err_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_661 = come_decrement_ref_count(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__348;
                }
                else {
                }
                if(                (_if_conditional12=(((struct sType*)(__right_value540=list$1sType$ph$p_operator_load_element(param_types_624,i_658)))->mHeap&&obj_value_485->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value540,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional12) {
                    std_move(((struct sType*)(__right_value541=list$1sType$ph$p_operator_load_element(param_types_624,i_658))),obj_value_485->type,obj_value_485,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value541,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value542=list$1sType$ph$p_operator_load_element(param_types_624,i_658)))->mHeap&&!obj_value_485->type->mHeap&&!gComeGC)),                /*c*/ come_call_finalizer3(__right_value542,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _elif_conditional1) {
                    multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value544=err_msg(info,"require heap parametor(%s)",((char*)(__right_value543=list$1char$ph$p_operator_load_element(fun_584->mParamNames,i_658))))));
                    come_exception_var_8_668=multiple_assign_var25->v1;
                    Err_669=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                    if(                    (_if_conditional13=(Err_669)),                    (__right_value543 = come_decrement_ref_count(__right_value543, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value544,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional13) {
                        __result_obj__351 = (_Bool)1;
                        (Err_669 = come_decrement_ref_count(Err_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_664 = come_decrement_ref_count(Err_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_661 = come_decrement_ref_count(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__351;
                    }
                    else {
                    }
                    (Err_669 = come_decrement_ref_count(Err_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph_replace(come_params_636,i_658,(struct CVALUE*)come_increment_ref_count(obj_value_485));
                i_658++;
                (Err_664 = come_decrement_ref_count(Err_664, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_661) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional14=(((struct CVALUE*)(__right_value545=list$1CVALUE$ph$p_operator_load_element(come_params_636,i_658)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value545,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional14) {
                        break;
                    }
                    else {
                        i_658++;
                    }
                }
                Value_670=node_compile(node_662,info);
                if(                !Value_670) {
                    __result_obj__352 = (_Bool)0;
                    (label_661 = come_decrement_ref_count(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__352;
                }
                else {
                }
                come_value_671=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional15=(((struct sType*)(__right_value547=list$1sType$ph$p_operator_load_element(param_types_624,i_658))))),                /*c*/ come_call_finalizer3(__right_value547,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value552=check_assign_type(((char*)(__right_value550=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value548=string_to_string(fun_name_475))),((char*)(__right_value549=int_to_string(i_658)))))),((struct sType*)(__right_value551=list$1sType$ph$p_operator_load_element(type_checking_param_types_630,i_658))),come_value_671->type,come_value_671,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_9_672=multiple_assign_var26->v1;
                    Err_673=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                    if(                    (_if_conditional16=(Err_673)),                    (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value549 = come_decrement_ref_count(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value551,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value552,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional16) {
                        __result_obj__353 = (_Bool)1;
                        (Err_673 = come_decrement_ref_count(Err_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_671,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (label_661 = come_decrement_ref_count(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__353;
                    }
                    else {
                    }
                    (Err_673 = come_decrement_ref_count(Err_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional17=(((struct sType*)(__right_value553=list$1sType$ph$p_operator_load_element(param_types_624,i_658)))&&((struct sType*)(__right_value554=list$1sType$ph$p_operator_load_element(param_types_624,i_658)))->mHeap&&come_value_671->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value553,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value554,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)(__right_value555=list$1sType$ph$p_operator_load_element(param_types_624,i_658))),come_value_671->type,come_value_671,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value555,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_636,i_658,(struct CVALUE*)come_increment_ref_count(come_value_671));
                i_658++;
                /*c*/ come_call_finalizer3(come_value_671,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_661 = come_decrement_ref_count(label_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_662) ? node_662 = come_decrement_ref_count(node_662, ((struct sNode*)node_662)->finalize, ((struct sNode*)node_662)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_659,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional18=(((struct CVALUE*)(__right_value556=list$1CVALUE$ph$p_operator_load_element(come_params_636,i_658)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value556,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                break;
            }
            else {
                i_658++;
            }
        }
        obj_array_type_674=obj_type_486->mOriginalLoadVarType;
        if(        obj_array_type_674&&list$1sNode$ph_length(obj_array_type_674->mArrayNum)>0) {
            array_method_name_675=(char*)come_increment_ref_count(create_method_name(obj_array_type_674,(_Bool)0,fun_name_475,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_583,array_method_name_675)) {
                if(                string_operator_equals(fun_name_475,"to_pointer")) {
                    buf_676=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 806, "struct buffer*"))));
                    i_677=0;
                    for(                    o2_saved_678=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_674->mArrayNum)),it_681=list$1sNode$ph_begin((o2_saved_678));                    !list$1sNode$ph_end((o2_saved_678));                    it_681=list$1sNode$ph_next((o2_saved_678))                    ){
                        Value_684=node_compile(it_681,info);
                        if(                        !Value_684) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value560=err_msg(info,"invalid array num")));
                            come_exception_var_10_685=multiple_assign_var27->v1;
                            Err_686=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            if(                            (_if_conditional19=(Err_686)),                            /*c*/ come_call_finalizer3(__right_value560,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional19) {
                                __result_obj__360 = (_Bool)1;
                                (Err_686 = come_decrement_ref_count(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_678,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_675 = come_decrement_ref_count(array_method_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__360;
                            }
                            else {
                            }
                            (Err_686 = come_decrement_ref_count(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_687=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_676,"%s",come_value_687->c_value);
                        if(                        i_677!=list$1sNode$ph_length(obj_array_type_674->mArrayNum)-1) {
                            buffer_append_str(buf_676,"*");
                        }
                        i_677++;
                        /*c*/ come_call_finalizer3(come_value_687,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_678,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_688=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 826, "struct CVALUE*"))));
                    __dec_obj115=come_value_688->c_value,
                    come_value_688->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_676));
                    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_688->var=((void*)0);
                    __dec_obj116=come_value_688->type,
                    come_value_688->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 830, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_636,1,(struct CVALUE*)come_increment_ref_count(come_value_688));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_476,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 833, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_688,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                string_operator_equals(fun_name_475,"length")) {
                    buf_692=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 836, "struct buffer*"))));
                    i_693=0;
                    for(                    o2_saved_694=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_674->mArrayNum)),it_695=list$1sNode$ph_begin((o2_saved_694));                    !list$1sNode$ph_end((o2_saved_694));                    it_695=list$1sNode$ph_next((o2_saved_694))                    ){
                        Value_696=node_compile(it_695,info);
                        if(                        !Value_696) {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value576=err_msg(info,"invalid array num")));
                            come_exception_var_11_697=multiple_assign_var28->v1;
                            Err_698=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            if(                            (_if_conditional20=(Err_698)),                            /*c*/ come_call_finalizer3(__right_value576,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional20) {
                                __result_obj__362 = (_Bool)1;
                                (Err_698 = come_decrement_ref_count(Err_698, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_694,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_692,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_675 = come_decrement_ref_count(array_method_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__362;
                            }
                            else {
                            }
                            (Err_698 = come_decrement_ref_count(Err_698, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_699=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_692,"%s",come_value_699->c_value);
                        if(                        i_693!=list$1sNode$ph_length(obj_array_type_674->mArrayNum)-1) {
                            buffer_append_str(buf_692,"*");
                        }
                        i_693++;
                        /*c*/ come_call_finalizer3(come_value_699,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_694,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_700=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 855, "struct CVALUE*"))));
                    __dec_obj120=come_value_700->c_value,
                    come_value_700->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_692));
                    __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_700->var=((void*)0);
                    __dec_obj121=come_value_700->type,
                    come_value_700->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 859, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_636,1,(struct CVALUE*)come_increment_ref_count(come_value_700));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_476,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 862, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_692,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_700,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                string_operator_equals(fun_name_475,"to_buffer")) {
                    buf_701=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 865, "struct buffer*"))));
                    i_702=0;
                    for(                    o2_saved_703=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_674->mArrayNum)),it_704=list$1sNode$ph_begin((o2_saved_703));                    !list$1sNode$ph_end((o2_saved_703));                    it_704=list$1sNode$ph_next((o2_saved_703))                    ){
                        Value_705=node_compile(it_704,info);
                        if(                        !Value_705) {
                            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value589=err_msg(info,"invalid array num")));
                            come_exception_var_12_706=multiple_assign_var29->v1;
                            Err_707=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional21=(Err_707)),                            /*c*/ come_call_finalizer3(__right_value589,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional21) {
                                __result_obj__363 = (_Bool)1;
                                (Err_707 = come_decrement_ref_count(Err_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_703,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_675 = come_decrement_ref_count(array_method_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__363;
                            }
                            else {
                            }
                            (Err_707 = come_decrement_ref_count(Err_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_708=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_701,"%s",come_value_708->c_value);
                        if(                        i_702!=list$1sNode$ph_length(obj_array_type_674->mArrayNum)-1) {
                            buffer_append_str(buf_701,"*");
                        }
                        i_702++;
                        /*c*/ come_call_finalizer3(come_value_708,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_703,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_709=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 884, "struct CVALUE*"))));
                    __dec_obj122=come_value_709->c_value,
                    come_value_709->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_701));
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_709->var=((void*)0);
                    __dec_obj123=come_value_709->type,
                    come_value_709->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 888, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_636,1,(struct CVALUE*)come_increment_ref_count(come_value_709));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_476,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 891, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_701,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_709,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                string_operator_equals(fun_name_475,"to_list")) {
                    buf_710=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 894, "struct buffer*"))));
                    i_711=0;
                    for(                    o2_saved_712=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_674->mArrayNum)),it_713=list$1sNode$ph_begin((o2_saved_712));                    !list$1sNode$ph_end((o2_saved_712));                    it_713=list$1sNode$ph_next((o2_saved_712))                    ){
                        Value_714=node_compile(it_713,info);
                        if(                        !Value_714) {
                            multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value602=err_msg(info,"invalid array num")));
                            come_exception_var_13_715=multiple_assign_var30->v1;
                            Err_716=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional22=(Err_716)),                            /*c*/ come_call_finalizer3(__right_value602,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional22) {
                                __result_obj__364 = (_Bool)1;
                                (Err_716 = come_decrement_ref_count(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_712,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_710,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_675 = come_decrement_ref_count(array_method_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__364;
                            }
                            else {
                            }
                            (Err_716 = come_decrement_ref_count(Err_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_717=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_710,"%s",come_value_717->c_value);
                        if(                        i_711!=list$1sNode$ph_length(obj_array_type_674->mArrayNum)-1) {
                            buffer_append_str(buf_710,"*");
                        }
                        i_711++;
                        /*c*/ come_call_finalizer3(come_value_717,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_712,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_718=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 913, "struct CVALUE*"))));
                    __dec_obj124=come_value_718->c_value,
                    come_value_718->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_710));
                    __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_718->var=((void*)0);
                    __dec_obj125=come_value_718->type,
                    come_value_718->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 917, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj125,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_636,1,(struct CVALUE*)come_increment_ref_count(come_value_718));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_476,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 920, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_710,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_718,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            (array_method_name_675 = come_decrement_ref_count(array_method_name_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params_476)<list$1sType$ph_length(fun_584->mParamTypes)+(((method_block_478)?(-2):(0)))) {
            for(            ;            i_658<list$1sType$ph_length(fun_584->mParamTypes)+(((method_block_478)?(-2):(0)));            i_658++            ){
                default_param_719=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value613=list$1char$ph$p_operator_load_element(fun_584->mParamDefaultParametors,i_658)))));
                (__right_value613 = come_decrement_ref_count(__right_value613, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_720=((char*)(__right_value615=list$1char$ph$p_operator_load_element(fun_584->mParamNames,i_658)));
                (__right_value615 = come_decrement_ref_count(__right_value615, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional23=(default_param_719&&string_operator_not_equals(default_param_719,"")&&((struct CVALUE*)(__right_value616=list$1CVALUE$ph$p_operator_load_element(come_params_636,i_658)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value616,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional23) {
                    source_721=(struct buffer*)come_increment_ref_count(info->source);
                    p_722=info->p;
                    head_723=info->head;
                    sline_724=info->sline;
                    __dec_obj126=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_719));
                    /*b*/ come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_725=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_726=node_compile(node_725,info);
                    if(                    !Value_726) {
                        __result_obj__365 = (_Bool)0;
                        /*c*/ come_call_finalizer3(source_721,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_725) ? node_725 = come_decrement_ref_count(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_719 = come_decrement_ref_count(default_param_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__365;
                    }
                    else {
                    }
                    __dec_obj127=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source_721);
                    /*b*/ come_call_finalizer3(__dec_obj127,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_722;
                    info->head=head_723;
                    info->sline=sline_724;
                    come_value_727=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional24=(((struct sType*)(__right_value620=list$1sType$ph$p_operator_load_element(param_types_624,i_658))))),                    /*c*/ come_call_finalizer3(__right_value620,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional24) {
                        multiple_assign_var31=((struct tuple2$2bool$char$ph*)(__right_value625=check_assign_type(((char*)(__right_value623=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value621=string_to_string(fun_name_475))),((char*)(__right_value622=int_to_string(i_658)))))),((struct sType*)(__right_value624=list$1sType$ph$p_operator_load_element(type_checking_param_types_630,i_658))),come_value_727->type,come_value_727,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_14_728=multiple_assign_var31->v1;
                        Err_729=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        if(                        (_if_conditional25=(Err_729)),                        (__right_value621 = come_decrement_ref_count(__right_value621, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value622 = come_decrement_ref_count(__right_value622, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value623 = come_decrement_ref_count(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value624,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        /*c*/ come_call_finalizer3(__right_value625,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional25) {
                            __result_obj__366 = (_Bool)1;
                            (Err_729 = come_decrement_ref_count(Err_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(source_721,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            ((node_725) ? node_725 = come_decrement_ref_count(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(come_value_727,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (default_param_719 = come_decrement_ref_count(default_param_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__366;
                        }
                        else {
                        }
                        (Err_729 = come_decrement_ref_count(Err_729, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional26=(((struct sType*)(__right_value626=list$1sType$ph$p_operator_load_element(param_types_624,i_658)))&&((struct sType*)(__right_value627=list$1sType$ph$p_operator_load_element(param_types_624,i_658)))->mHeap&&come_value_727->type->mHeap)),                    /*c*/ come_call_finalizer3(__right_value626,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value627,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional26) {
                        std_move(((struct sType*)(__right_value628=list$1sType$ph$p_operator_load_element(param_types_624,i_658))),come_value_727->type,come_value_727,info,(_Bool)1);
                        /*c*/ come_call_finalizer3(__right_value628,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_636,i_658,(struct CVALUE*)come_increment_ref_count(come_value_727));
                    /*c*/ come_call_finalizer3(source_721,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_725) ? node_725 = come_decrement_ref_count(node_725, ((struct sNode*)node_725)->finalize, ((struct sNode*)node_725)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_727,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    if(                    (_if_conditional27=(((struct CVALUE*)(__right_value629=list$1CVALUE$ph$p_operator_load_element(come_params_636,i_658)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value629,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional27) {
                        multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value630=err_msg(info,"require parametor(%s) %d",fun_584->mName,i_658)));
                        come_exception_var_15_730=multiple_assign_var32->v1;
                        Err_731=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                        if(                        (_if_conditional28=(Err_731)),                        /*c*/ come_call_finalizer3(__right_value630,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional28) {
                            __result_obj__367 = (_Bool)1;
                            (Err_731 = come_decrement_ref_count(Err_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_719 = come_decrement_ref_count(default_param_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__367;
                        }
                        else {
                        }
                        (Err_731 = come_decrement_ref_count(Err_731, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_719 = come_decrement_ref_count(default_param_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_478) {
            if(            !compile_method_block(method_block_478,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_636),fun_584,fun_name_475,method_block_sline_479,info,(_Bool)0)) {
                __result_obj__368 = (_Bool)0;
                (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__368;
            }
        }
        buf_732=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 979, "struct buffer*"))));
        buffer_append_str(buf_732,generics_fun_name_583);
        buffer_append_str(buf_732,"(");
        j_733=0;
        for(        o2_saved_734=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_636)),it_735=list$1CVALUE$ph_begin((o2_saved_734));        !list$1CVALUE$ph_end((o2_saved_734));        it_735=list$1CVALUE$ph_next((o2_saved_734))        ){
            buffer_append_str(buf_732,it_735->c_value);
            if(            j_733!=list$1CVALUE$ph_length(come_params_636)-1) {
                buffer_append_str(buf_732,",");
            }
            j_733++;
        }
        /*c*/ come_call_finalizer3(o2_saved_734,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_732,")");
        come_value2_736=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 998, "struct CVALUE*"))));
        come_value2_736->var=((void*)0);
        __dec_obj128=come_value2_736->c_value,
        come_value2_736->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_732));
        __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj129=come_value2_736->type,
        come_value2_736->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_623));
        /*b*/ come_call_finalizer3(__dec_obj129,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_736->type->mStatic=(_Bool)0;
        if(        result_type2_623->mHeap) {
            append_object_to_right_values2(come_value2_736,(struct sType*)come_increment_ref_count(result_type2_623),info,(_Bool)0);
        }
        __dec_obj130=come_value2_736->c_value,
        come_value2_736->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_736->c_value,come_value2_736->type,info));
        __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value2_736->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_736));
        if(        is_contained_method_generics_types(obj_type_486,info)&&generics_fun_name_583) {
            map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value638=__builtin_string(generics_fun_name_583))));
            (__right_value638 = come_decrement_ref_count(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj131=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_483);
        /*b*/ come_call_finalizer3(__dec_obj131,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_584;
        (generics_fun_name_583 = come_decrement_ref_count(generics_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_623,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_checking_param_types_630,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_636,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_732,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_736,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__369 = (_Bool)1;
    (fun_name_475 = come_decrement_ref_count(fun_name_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_476,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj_477) ? obj_477 = come_decrement_ref_count(obj_477, ((struct sNode*)obj_477)->finalize, ((struct sNode*)obj_477)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(method_block_478,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_481,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_before_483,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_485,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__369;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__291;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_467;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_468;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__296;
    if(    self==((void*)0)) {
        __result_obj__291 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__291,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__291;
    }
    result_467=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1185, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_468=self->head;
    while(it_468!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_467,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_468->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_467,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_468->item)));
        }
        it_468=it_468->next;
    }
    __result_obj__296 = come_increment_ref_count(result_467);
    /*c*/ come_call_finalizer3(result_467,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__296,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__296;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_465;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_466;
    it_465=self->head;
    while(it_465!=((void*)0)) {
        prev_it_466=it_465;
        it_465=it_465->next;
        /*c*/ come_call_finalizer3(prev_it_466,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__292;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__292 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value384 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_469;
struct tuple2$2char$phsNode$ph* __dec_obj74;
void* __right_value385 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_470;
struct tuple2$2char$phsNode$ph* __dec_obj75;
void* __right_value386 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_471;
struct tuple2$2char$phsNode$ph* __dec_obj76;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__293;
    if(    self->len==0) {
        litem_469=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value384=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1204, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_469->prev=((void*)0);
        litem_469->next=((void*)0);
        __dec_obj74=litem_469->item,
        litem_469->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj74,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_469;
        self->head=litem_469;
    }
    else if(    self->len==1) {
        litem_470=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value385=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1214, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_470->prev=self->head;
        litem_470->next=((void*)0);
        __dec_obj75=litem_470->item,
        litem_470->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj75,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_470;
        self->head->next=litem_470;
    }
    else {
        litem_471=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value386=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1224, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_471->prev=self->tail;
        litem_471->next=((void*)0);
        __dec_obj76=litem_471->item,
        litem_471->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj76,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_471;
        self->tail=litem_471;
    }
    self->len++;
    __result_obj__293 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__294;
void* __right_value387 = (void*)0;
struct tuple2$2char$phsNode$ph* result_472;
void* __right_value388 = (void*)0;
char* __dec_obj77;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj78;
struct tuple2$2char$phsNode$ph* __result_obj__295;
    if(    self==(void*)0) {
        __result_obj__294 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__294,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__294;
    }
    result_472=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj77=result_472->v1,
        result_472->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj78=result_472->v2,
        result_472->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj78 ? __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__295 = come_increment_ref_count(result_472);
    /*c*/ come_call_finalizer3(result_472,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__295,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_473;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_474;
    it_473=self->head;
    while(it_473!=((void*)0)) {
        prev_it_474=it_473;
        it_473=it_473->next;
        /*c*/ come_call_finalizer3(prev_it_474,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        ((self->obj) ? self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        (self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_block,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__300;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__300 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_501;
int i_502;
struct CVALUE* __result_obj__302;
struct CVALUE* default_value_503;
struct CVALUE* __result_obj__303;
default_value_503 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_501=self->head;
    i_502=0;
    while(it_501!=((void*)0)) {
        if(        position==i_502) {
            __result_obj__302 = come_increment_ref_count(it_501->item);
            /*c*/ come_call_finalizer3(__result_obj__302,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__302;
        }
        it_501=it_501->next;
        i_502++;
    }
    memset(&default_value_503,0,sizeof(struct CVALUE*));
    __result_obj__303 = come_increment_ref_count(default_value_503);
    /*c*/ come_call_finalizer3(default_value_503,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_509;
int i_510;
struct sType* default_value_511;
struct list$1sType$ph* __result_obj__305;
struct list_item$1sType$ph* it_515;
int i_516;
struct sType* __dec_obj87;
struct list$1sType$ph* __result_obj__306;
default_value_511 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_509=self->len;
        for(        i_510=0;        i_510<position-len_509;        i_510++        ){
            memset(&default_value_511,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_511));
            /*c*/ come_call_finalizer3(default_value_511,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__305 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__305;
    }
    it_515=self->head;
    i_516=0;
    while(it_515!=((void*)0)) {
        if(        position==i_516) {
            __dec_obj87=it_515->item,
            it_515->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_515=it_515->next;
        i_516++;
    }
    __result_obj__306 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value412 = (void*)0;
struct list_item$1sType$ph* litem_512;
struct sType* __dec_obj84;
void* __right_value413 = (void*)0;
struct list_item$1sType$ph* litem_513;
struct sType* __dec_obj85;
void* __right_value414 = (void*)0;
struct list_item$1sType$ph* litem_514;
struct sType* __dec_obj86;
struct list$1sType$ph* __result_obj__304;
    if(    self->len==0) {
        litem_512=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value412=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1274, "struct list_item$1sType$ph*"))));
        litem_512->prev=((void*)0);
        litem_512->next=((void*)0);
        __dec_obj84=litem_512->item,
        litem_512->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_512;
        self->head=litem_512;
    }
    else if(    self->len==1) {
        litem_513=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value413=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1284, "struct list_item$1sType$ph*"))));
        litem_513->prev=self->head;
        litem_513->next=((void*)0);
        __dec_obj85=litem_513->item,
        litem_513->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_513;
        self->head->next=litem_513;
    }
    else {
        litem_514=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value414=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1294, "struct list_item$1sType$ph*"))));
        litem_514->prev=self->tail;
        litem_514->next=((void*)0);
        __dec_obj86=litem_514->item,
        litem_514->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_514;
        self->tail=litem_514;
    }
    self->len++;
    __result_obj__304 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__304;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_524;
struct tuple2$2char$phsNode$ph* __result_obj__307;
struct tuple2$2char$phsNode$ph* __result_obj__308;
struct tuple2$2char$phsNode$ph* result_525;
struct tuple2$2char$phsNode$ph* __result_obj__309;
result_524 = (void*)0;
result_525 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_524,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__307 = result_524;
        return __result_obj__307;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__308 = self->it->item;
        return __result_obj__308;
    }
    memset(&result_525,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__309 = result_525;
    return __result_obj__309;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_527;
struct tuple2$2char$phsNode$ph* __result_obj__310;
struct tuple2$2char$phsNode$ph* __result_obj__311;
struct tuple2$2char$phsNode$ph* result_528;
struct tuple2$2char$phsNode$ph* __result_obj__312;
result_527 = (void*)0;
result_528 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_527,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__310 = result_527;
        return __result_obj__310;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__311 = self->it->item;
        return __result_obj__311;
    }
    memset(&result_528,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__312 = result_528;
    return __result_obj__312;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_554;
struct tuple2$2char$phsType$ph* __result_obj__315;
struct tuple2$2char$phsType$ph* __result_obj__316;
struct tuple2$2char$phsType$ph* result_555;
struct tuple2$2char$phsType$ph* __result_obj__317;
result_554 = (void*)0;
result_555 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_554,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__315 = result_554;
        return __result_obj__315;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__316 = self->it->item;
        return __result_obj__316;
    }
    memset(&result_555,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__317 = result_555;
    return __result_obj__317;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_557;
struct tuple2$2char$phsType$ph* __result_obj__318;
struct tuple2$2char$phsType$ph* __result_obj__319;
struct tuple2$2char$phsType$ph* result_558;
struct tuple2$2char$phsType$ph* __result_obj__320;
result_557 = (void*)0;
result_558 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_557,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__318 = result_557;
        return __result_obj__318;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__319 = self->it->item;
        return __result_obj__319;
    }
    memset(&result_558,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__320 = result_558;
    return __result_obj__320;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_575;
struct CVALUE* __result_obj__323;
struct CVALUE* __result_obj__324;
struct CVALUE* result_576;
struct CVALUE* __result_obj__325;
result_575 = (void*)0;
result_576 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_575,0,sizeof(struct CVALUE*));
        __result_obj__323 = result_575;
        return __result_obj__323;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__324 = self->it->item;
        return __result_obj__324;
    }
    memset(&result_576,0,sizeof(struct CVALUE*));
    __result_obj__325 = result_576;
    return __result_obj__325;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_578;
struct CVALUE* __result_obj__326;
struct CVALUE* __result_obj__327;
struct CVALUE* result_579;
struct CVALUE* __result_obj__328;
result_578 = (void*)0;
result_579 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_578,0,sizeof(struct CVALUE*));
        __result_obj__326 = result_578;
        return __result_obj__326;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__327 = self->it->item;
        return __result_obj__327;
    }
    memset(&result_579,0,sizeof(struct CVALUE*));
    __result_obj__328 = result_579;
    return __result_obj__328;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_596;
unsigned int hash_597;
unsigned int it_598;
struct sFun* __result_obj__329;
struct sFun* __result_obj__330;
struct sFun* __result_obj__331;
struct sFun* __result_obj__332;
default_value_596 = (void*)0;
    memset(&default_value_596,0,sizeof(struct sFun*));
    hash_597=string_get_hash_key(((char*)key))%self->size;
    it_598=hash_597;
    while((_Bool)1) {
        if(        self->item_existance[it_598]) {
            if(            string_equals(self->keys[it_598],key)) {
                __result_obj__329 = come_increment_ref_count(self->items[it_598]);
                /*c*/ come_call_finalizer3(default_value_596,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__329,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__329;
            }
            it_598++;
            if(            it_598>=self->size) {
                it_598=0;
            }
            else if(            it_598==hash_597) {
                __result_obj__330 = come_increment_ref_count(default_value_596);
                /*c*/ come_call_finalizer3(default_value_596,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__330,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__330;
            }
        }
        else {
            __result_obj__331 = come_increment_ref_count(default_value_596);
            /*c*/ come_call_finalizer3(default_value_596,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__331,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__331;
        }
    }
    __result_obj__332 = come_increment_ref_count(default_value_596);
    /*c*/ come_call_finalizer3(default_value_596,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__332,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__332;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__337;
void* __right_value499 = (void*)0;
struct sMethodCallNode* result_618;
void* __right_value500 = (void*)0;
char* __dec_obj105;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value502 = (void*)0;
char* __dec_obj107;
void* __right_value503 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj108;
void* __right_value504 = (void*)0;
struct buffer* __dec_obj109;
void* __right_value505 = (void*)0;
struct list$1sType$ph* __dec_obj110;
struct sMethodCallNode* __result_obj__338;
    if(    self==(void*)0) {
        __result_obj__337 = (void*)0;
        return __result_obj__337;
    }
    result_618=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)) {
        result_618->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_618->sname,
        result_618->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj106=result_618->obj,
        result_618->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        (__dec_obj106 ? __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj107=result_618->fun_name,
        result_618->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj108=result_618->params,
        result_618->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        /*b*/ come_call_finalizer3(__dec_obj108,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj109=result_618->method_block,
        result_618->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj109,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj110=result_618->method_generics_types,
        result_618->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj110,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_618->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_618->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_618->fun=self->fun;
    }
    __result_obj__338 = result_618;
    /*c*/ come_call_finalizer3(result_618,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value522 = (void*)0;
struct list_item$1CVALUE$ph* litem_638;
struct CVALUE* __dec_obj111;
void* __right_value523 = (void*)0;
struct list_item$1CVALUE$ph* litem_639;
struct CVALUE* __dec_obj112;
void* __right_value524 = (void*)0;
struct list_item$1CVALUE$ph* litem_640;
struct CVALUE* __dec_obj113;
struct list$1CVALUE$ph* __result_obj__343;
    if(    self->len==0) {
        litem_638=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value522=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1204, "struct list_item$1CVALUE$ph*"))));
        litem_638->prev=((void*)0);
        litem_638->next=((void*)0);
        __dec_obj111=litem_638->item,
        litem_638->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj111,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_638;
        self->head=litem_638;
    }
    else if(    self->len==1) {
        litem_639=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value523=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1214, "struct list_item$1CVALUE$ph*"))));
        litem_639->prev=self->head;
        litem_639->next=((void*)0);
        __dec_obj112=litem_639->item,
        litem_639->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_639;
        self->head->next=litem_639;
    }
    else {
        litem_640=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value524=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1224, "struct list_item$1CVALUE$ph*"))));
        litem_640->prev=self->tail;
        litem_640->next=((void*)0);
        __dec_obj113=litem_640->item,
        litem_640->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj113,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_640;
        self->tail=litem_640;
    }
    self->len++;
    __result_obj__343 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_653;
int i_654;
struct CVALUE* default_value_655;
struct list$1CVALUE$ph* __result_obj__346;
struct list_item$1CVALUE$ph* it_656;
int i_657;
struct CVALUE* __dec_obj114;
struct list$1CVALUE$ph* __result_obj__347;
default_value_655 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_653=self->len;
        for(        i_654=0;        i_654<position-len_653;        i_654++        ){
            memset(&default_value_655,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_655));
            /*c*/ come_call_finalizer3(default_value_655,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__346 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__346;
    }
    it_656=self->head;
    i_657=0;
    while(it_656!=((void*)0)) {
        if(        position==i_657) {
            __dec_obj114=it_656->item,
            it_656->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj114,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_656=it_656->next;
        i_657++;
    }
    __result_obj__347 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__347;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_665;
int i_666;
char* __result_obj__349;
char* default_value_667;
char* __result_obj__350;
default_value_667 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_665=self->head;
    i_666=0;
    while(it_665!=((void*)0)) {
        if(        position==i_666) {
            __result_obj__349 = come_increment_ref_count(it_665->item);
            (__result_obj__349 = come_decrement_ref_count(__result_obj__349, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__349;
        }
        it_665=it_665->next;
        i_666++;
    }
    memset(&default_value_667,0,sizeof(char*));
    __result_obj__350 = come_increment_ref_count(default_value_667);
    (default_value_667 = come_decrement_ref_count(default_value_667, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__350 = come_decrement_ref_count(__result_obj__350, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__350;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_679;
struct sNode* __result_obj__354;
struct sNode* __result_obj__355;
struct sNode* result_680;
struct sNode* __result_obj__356;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_679,0,sizeof(struct sNode*));
        __result_obj__354 = result_679;
        return __result_obj__354;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__355 = self->it->item;
        return __result_obj__355;
    }
    memset(&result_680,0,sizeof(struct sNode*));
    __result_obj__356 = result_680;
    return __result_obj__356;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_682;
struct sNode* __result_obj__357;
struct sNode* __result_obj__358;
struct sNode* result_683;
struct sNode* __result_obj__359;
result_682 = (void*)0;
result_683 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_682,0,sizeof(struct sNode*));
        __result_obj__357 = result_682;
        return __result_obj__357;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__358 = self->it->item;
        return __result_obj__358;
    }
    memset(&result_683,0,sizeof(struct sNode*));
    __result_obj__359 = result_683;
    return __result_obj__359;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value568 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_689;
struct tuple2$2char$phsNode$ph* __dec_obj117;
void* __right_value569 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_690;
struct tuple2$2char$phsNode$ph* __dec_obj118;
void* __right_value570 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_691;
struct tuple2$2char$phsNode$ph* __dec_obj119;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__361;
    if(    self->len==0) {
        litem_689=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value568=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1274, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_689->prev=((void*)0);
        litem_689->next=((void*)0);
        __dec_obj117=litem_689->item,
        litem_689->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj117,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_689;
        self->head=litem_689;
    }
    else if(    self->len==1) {
        litem_690=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value569=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1284, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_690->prev=self->head;
        litem_690->next=((void*)0);
        __dec_obj118=litem_690->item,
        litem_690->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj118,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_690;
        self->head->next=litem_690;
    }
    else {
        litem_691=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value570=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1294, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_691->prev=self->tail;
        litem_691->next=((void*)0);
        __dec_obj119=litem_691->item,
        litem_691->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj119,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_691;
        self->tail=litem_691;
    }
    self->len++;
    __result_obj__361 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__361;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value641 = (void*)0;
struct sNode* node_737;
void* __right_value642 = (void*)0;
struct sNode* __dec_obj132;
struct sNode* __result_obj__370;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1032, "struct sNode");
    _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value640=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1032, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMethodCallNode_finalize;
    _inf_value4->clone=(void*)sMethodCallNode_clone;
    _inf_value4->compile=(void*)sMethodCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMethodCallNode_terminated;
    _inf_value4->kind=(void*)sMethodCallNode_kind;
    node_737=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value640,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj132=node_737,
    node_737=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_737),info));
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__370 = come_increment_ref_count(node_737);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_737) ? node_737 = come_decrement_ref_count(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__370) ? __result_obj__370 = come_decrement_ref_count(__result_obj__370, ((struct sNode*)__result_obj__370)->finalize, ((struct sNode*)__result_obj__370)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__370;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_738;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
_Bool parse_method_generics_type_740;
char* p_741;
int sline_742;
void* __right_value648 = (void*)0;
char* word_743;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct list$1sType$ph* method_generics_types_744;
void* __right_value651 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c5_745=0;
char* Err_746=0;
void* __right_value652 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var34 = (void*)0;
struct sType* type_747=0;
char* name_748=0;
_Bool err_749=0;
void* __right_value653 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c6_750=0;
char* Err_751=0;
void* __right_value654 = (void*)0;
char* p_752;
int sline_753;
_Bool err_flag_754;
void* __right_value655 = (void*)0;
char* label_755;
void* __right_value656 = (void*)0;
char* __dec_obj135;
char* __dec_obj136;
_Bool no_comma_756;
_Bool in_fun_param_757;
void* __right_value657 = (void*)0;
struct sNode* node_758;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct buffer* method_block_759;
int method_block_sline_760;
char* head_761;
void* __right_value661 = (void*)0;
char* tail_762;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj138;
int len_763;
void* __right_value664 = (void*)0;
char* mem_764;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value668 = (void*)0;
struct sNode* node_765;
void* __right_value669 = (void*)0;
struct sNode* __dec_obj139;
struct sNode* __result_obj__372;
    params_738=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1041, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_push_back(params_738,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1042, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_740=(_Bool)0;
    {
        p_741=info->p;
        sline_742=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_743=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_743,info)) {
                    parse_method_generics_type_740=(_Bool)1;
                }
                (word_743 = come_decrement_ref_count(word_743, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_741;
        info->sline=sline_742;
    }
    method_generics_types_744=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 1072, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type_740&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value651=err_msg(info,"unexpected source end")));
                come_exception_var_c5_745=multiple_assign_var33->v1;
                Err_746=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_746)?(puts(Err_746),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value651,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_746 = come_decrement_ref_count(Err_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var34=((struct tuple3$3sType$phchar$phbool$*)(__right_value652=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_747=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
                name_748=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                err_749=multiple_assign_var34->v3;
                /*c*/ come_call_finalizer3(__right_value652,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_749) {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value653=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c6_750=multiple_assign_var35->v1;
                    Err_751=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_751)?(puts(Err_751),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value653,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_751 = come_decrement_ref_count(Err_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph_push_back(method_generics_types_744,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_747)));
                /*c*/ come_call_finalizer3(type_747,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_748 = come_decrement_ref_count(name_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    if(    *info->p!=123) {
        expected_next_character(40,info);
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            p_752=info->p;
            sline_753=info->sline;
            err_flag_754=(_Bool)0;
            label_755=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj135=label_755,
                label_755=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_754=(_Bool)1;
            }
            if(            err_flag_754==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj136=label_755,
                label_755=((void*)0);
                __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_752;
                info->sline=sline_753;
            }
            no_comma_756=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_757=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_758=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj137=node_758,
            node_758=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_758),info));
            (__dec_obj137 ? __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->in_fun_param=in_fun_param_757;
            info->no_comma=no_comma_756;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_738,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1148, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_755),(struct sNode*)come_increment_ref_count(node_758))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_755 = come_decrement_ref_count(label_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_758) ? node_758 = come_decrement_ref_count(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_755 = come_decrement_ref_count(label_755, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_758) ? node_758 = come_decrement_ref_count(node_758, ((struct sNode*)node_758)->finalize, ((struct sNode*)node_758)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_759=((void*)0);
    method_block_sline_760=0;
    if(    *info->p==123) {
        head_761=info->p;
        method_block_sline_760=info->sline;
        ((char*)(__right_value661=skip_block(info)));
        (__right_value661 = come_decrement_ref_count(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_762=info->p;
        __dec_obj138=method_block_759,
        method_block_759=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1172, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj138,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_763=tail_762-head_761;
        mem_764=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_763+1)), "20method.c", 1175, "char*"));
        memcpy(mem_764,head_761,len_763);
        mem_764[len_763]=0;
        buffer_append_str(method_block_759,mem_764);
        buffer_append_str(method_block_759,"\n");
        (mem_764 = come_decrement_ref_count(mem_764, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1187, "struct sNode");
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value667=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1187, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_738),method_block_759,method_block_sline_760,method_generics_types_744,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_765=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value667,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj139=node_765,
    node_765=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_765),info));
    (__dec_obj139 ? __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__372 = come_increment_ref_count(node_765);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_738,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_744,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_759,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_765) ? node_765 = come_decrement_ref_count(node_765, ((struct sNode*)node_765)->finalize, ((struct sNode*)node_765)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__372) ? __result_obj__372 = come_decrement_ref_count(__result_obj__372, ((struct sNode*)__result_obj__372)->finalize, ((struct sNode*)__result_obj__372)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__372;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_739;
    result_739=0;
    result_739+=int_get_hash_key(((int)self->v1));
    result_739+=int_get_hash_key(((int)self->v2));
    return result_739;
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
char* __dec_obj133;
struct sNode* __dec_obj134;
struct tuple2$2char$phsNode$ph* __result_obj__371;
    __dec_obj133=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj134=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj134 ? __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__371 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__371,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value672 = (void*)0;
struct sNode* __result_obj__373;
void* __right_value673 = (void*)0;
struct sNode* __result_obj__374;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1197, "struct sNode");
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value671=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1197, "struct sCurrentNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        __result_obj__373 = come_increment_ref_count(((struct sNode*)(__right_value672=_inf_value6)));
        /*c*/ come_call_finalizer3(__right_value671,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value672) ? __right_value672 = come_decrement_ref_count(__right_value672, ((struct sNode*)__right_value672)->finalize, ((struct sNode*)__right_value672)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__373) ? __result_obj__373 = come_decrement_ref_count(__result_obj__373, ((struct sNode*)__result_obj__373)->finalize, ((struct sNode*)__result_obj__373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__373;
    }
    __result_obj__374 = come_increment_ref_count(((struct sNode*)(__right_value673=string_node_v17(buf,head,head_sline,info))));
    ((__right_value673) ? __right_value673 = come_decrement_ref_count(__right_value673, ((struct sNode*)__right_value673)->finalize, ((struct sNode*)__right_value673)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__374) ? __result_obj__374 = come_decrement_ref_count(__result_obj__374, ((struct sNode*)__result_obj__374)->finalize, ((struct sNode*)__result_obj__374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__374;
}

