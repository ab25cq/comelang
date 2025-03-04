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

struct list_item$1void$ph
{
    void* item;
    struct list_item$1void$ph* prev;
    struct list_item$1void$ph* next;
};

struct list$1void$ph
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
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
    struct list$1void$ph* mFields;
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
    struct list$1void$ph* mGenericsTypes;
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
    struct list$1void$ph* mParamTypes;
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
    struct list$1void$ph* mParamTypes;
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
    struct list$1void$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1void$p
{
    struct list_item$1void$ph* head;
    struct list_item$1void$ph* tail;
    int len;
    struct list_item$1void$ph* it;
};

struct map$2void$phvoid$ph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1void$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2void$phvoid$ph* mHeader;
    struct map$2void$phvoid$ph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2void$phvoid$ph* mVars;
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
    struct map$2void$phvoid$ph* funcs;
    struct map$2void$phvoid$ph* generics_funcs;
    struct map$2void$phvoid$ph* classes;
    struct map$2void$phvoid$ph* modules;
    struct map$2void$phvoid$ph* types;
    struct map$2void$phvoid$ph* generics_classes;
    struct map$2void$phvoid$ph* struct_definition;
    struct map$2void$phvoid$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1void$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1void$ph* method_generics_types;
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
    struct map$2void$phvoid$ph* module_params;
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
    struct list$1void$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2void$phvoid$ph* uniq_definition;
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

struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1void$ph* v1;
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

extern struct list$1void$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNode$ph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNode$ph* map_key_elements;
    struct list$1sNode$ph* map_elements;
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
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1void$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1void$ph* method_generics_types, struct sInfo* info);
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
struct tuple4$4list$1void$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
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
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1void$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile_v5(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
char* create_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_original_obj_type(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1void$ph* method_generics_types, struct sInfo* info);
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1void$ph$p_finalize(struct list$1void$ph* self);
static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self);
static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self);
static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item);
static void list$1void$ph_finalize(struct list$1void$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void list_item$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsNode$ph$ph* self);
static void tuple2$2char$phsNode$ph$p_finalize(struct tuple2$2char$phsNode$ph* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self);
static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self);
static _Bool tuple2$2char$phsNode$ph_equals(struct tuple2$2char$phsNode$ph* left, struct tuple2$2char$phsNode$ph* right);
static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_initialize(struct tuple2$2char$phsNode$ph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self);
static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item);
static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self);
static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self);
static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1void$ph$p_length(struct list$1void$ph* self);
static void* list$1void$ph$p_begin(struct list$1void$ph* self);
static _Bool list$1void$ph$p_end(struct list$1void$ph* self);
static void* list$1void$ph$p_next(struct list$1void$ph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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
int i_175;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1char$$p_push_back(self,values[i_175]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_178;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_176=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1457, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1467, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1477, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_179;
struct list_item$1char$* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_181;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1char$p$p_push_back(self,values[i_181]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_184;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_182=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1457, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1467, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1477, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_185;
struct list_item$1char$p* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_187;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1short$$p_push_back(self,values[i_187]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_190;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_188=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1457, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1467, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1477, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_191;
struct list_item$1short$* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_193;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1int$$p_push_back(self,values[i_193]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_196;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_194=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1457, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1467, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1477, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_197;
struct list_item$1int$* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_199;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1long$$p_push_back(self,values[i_199]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_202;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_200=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1457, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1467, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1477, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_203;
struct list_item$1long$* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_205;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1float$$p_push_back(self,values[i_205]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_208;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_206=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1457, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1467, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1477, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_209;
struct list_item$1float$* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_211;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1double$$p_push_back(self,values[i_211]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_214;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_212=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1457, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1467, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1477, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_215;
struct list_item$1double$* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_217;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2274, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_217=0;    i_217<num_value;    i_217++    ){
        vector$1char$$p_add(self,values[i_217]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_218;
char* items_219;
void* __right_value128 = (void*)0;
int i_220;
struct vector$1char$* __result_obj__121;
memset(&i_220, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_218=self->size*2;
        items_219=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_218)), "./comelang.h", 2401, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_220=0;        i_220<self->size;        i_220++        ){
            self->items[i_220]=items_219[i_220];
        }
        self->size=new_size_218;
        come_free(items_219);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_222;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2274, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$p$p_add(self,values[i_222]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_223;
char** items_224;
void* __right_value132 = (void*)0;
int i_225;
struct vector$1char$p* __result_obj__124;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_223)), "./comelang.h", 2401, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
            (self->items[i_226] = come_decrement_ref_count2(self->items[i_226], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_227;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2274, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1short$$p_add(self,values[i_227]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_228;
short* items_229;
void* __right_value136 = (void*)0;
int i_230;
struct vector$1short$* __result_obj__127;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_228)), "./comelang.h", 2401, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_232;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2274, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1int$$p_add(self,values[i_232]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_233;
int* items_234;
void* __right_value140 = (void*)0;
int i_235;
struct vector$1int$* __result_obj__130;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_233)), "./comelang.h", 2401, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_237;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2274, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1long$$p_add(self,values[i_237]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_238;
long* items_239;
void* __right_value144 = (void*)0;
int i_240;
struct vector$1long$* __result_obj__133;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_238)), "./comelang.h", 2401, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_242;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2274, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1float$$p_add(self,values[i_242]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_243;
float* items_244;
void* __right_value148 = (void*)0;
int i_245;
struct vector$1float$* __result_obj__136;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_243)), "./comelang.h", 2401, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_247;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2274, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1double$$p_add(self,values[i_247]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_248;
double* items_249;
void* __right_value152 = (void*)0;
int i_250;
struct vector$1double$* __result_obj__139;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_248)), "./comelang.h", 2401, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
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
struct list_item$1char$ph* it_285;
struct list_item$1char$ph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        come_call_finalizer3(prev_it_286,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_290;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_291;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_292;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_290=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1457, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_290->prev=((void*)0);
        litem_290->next=((void*)0);
        __dec_obj20=litem_290->item;
        litem_290->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_290;
        self->head=litem_290;
    }
    else if(    self->len==1) {
        litem_291=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1467, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_291->prev=self->head;
        litem_291->next=((void*)0);
        __dec_obj21=litem_291->item;
        litem_291->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_291;
        self->head->next=litem_291;
    }
    else {
        litem_292=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1477, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_292->prev=self->tail;
        litem_292->next=((void*)0);
        __dec_obj22=litem_292->item;
        litem_292->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_292;
        self->tail=litem_292;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
char* __dec_obj23;
struct sStrNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj23=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__237,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sStrNode_kind(struct sStrNode* self){
void* __right_value261 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value261=__builtin_string("sStrNode"))));
    (__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct CVALUE* come_value_345;
void* __right_value264 = (void*)0;
char* __dec_obj24;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj49;
_Bool __result_obj__255;
    come_value_345=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj24=come_value_345->c_value;
    come_value_345->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj49=come_value_345->type;
    come_value_345->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_345->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_345));
    add_come_last_code(info,"%s",come_value_345->c_value);
    __result_obj__255 = (_Bool)1;
    come_call_finalizer3(come_value_345,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__255;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sStrNode_finalize(struct sStrNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
        come_call_finalizer3(self->mParamTypes,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1void$ph$p_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_346;
struct list_item$1void$ph* prev_it_347;
    it_346=self->head;
    while(it_346!=((void*)0)) {
        prev_it_347=it_346;
        it_346=it_346->next;
        come_call_finalizer3(prev_it_347,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1void$ph$p_finalize(struct list_item$1void$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_348;
struct list_item$1sNode$ph* prev_it_349;
    it_348=self->head;
    while(it_348!=((void*)0)) {
        prev_it_349=it_348;
        it_348=it_348->next;
        come_call_finalizer3(prev_it_349,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__239;
void* __right_value265 = (void*)0;
struct sType* result_357;
void* __right_value266 = (void*)0;
struct sType* __dec_obj25;
void* __right_value267 = (void*)0;
struct sType* __dec_obj26;
void* __right_value275 = (void*)0;
struct list$1void$ph* __dec_obj30;
void* __right_value276 = (void*)0;
struct sType* __dec_obj31;
void* __right_value277 = (void*)0;
struct sType* __dec_obj32;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj34;
void* __right_value281 = (void*)0;
char* __dec_obj35;
void* __right_value282 = (void*)0;
char* __dec_obj36;
void* __right_value283 = (void*)0;
char* __dec_obj37;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __dec_obj41;
void* __right_value292 = (void*)0;
char* __dec_obj42;
void* __right_value293 = (void*)0;
struct list$1void$ph* __dec_obj43;
void* __right_value301 = (void*)0;
struct list$1char$ph* __dec_obj47;
void* __right_value302 = (void*)0;
struct sType* __dec_obj48;
struct sType* __result_obj__253;
    if(    self==(void*)0) {
        __result_obj__239 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__239,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__239;
    }
    result_357=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_357->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj25=result_357->mOriginalLoadVarType;
        result_357->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj26=result_357->mChannelType;
        result_357->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj30=result_357->mGenericsTypes;
        result_357->mGenericsTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj30,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj31=result_357->mNoSolvedGenericsType;
        result_357->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj32=result_357->mAnyOriginalType;
        result_357->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj33=result_357->mSizeNum;
        result_357->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj34=result_357->mAlignas;
        result_357->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj35=result_357->mTupleName;
        result_357->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj36=result_357->mAttribute;
        result_357->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_357->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_357->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_357->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_357->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_357->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_357->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_357->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_357->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_357->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_357->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_357->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_357->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_357->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_357->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_357->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_357->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_357->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_357->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_357->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_357->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_357->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_357->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_357->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj37=result_357->mAsmName;
        result_357->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_357->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj41=result_357->mArrayNum;
        result_357->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj41,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj42=result_357->mOriginalTypeName;
        result_357->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj43=result_357->mParamTypes;
        result_357->mParamTypes=(struct list$1void$ph*)come_increment_ref_count(come_call_cloner(list$1void$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj43,list$1void$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj47=result_357->mParamNames;
        result_357->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj47,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj48=result_357->mResultType;
        result_357->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mVarArgs=self->mVarArgs;
    }
    __result_obj__253 = come_increment_ref_count(result_357);
    come_call_finalizer3(result_357,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__253,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__253;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_350;
    result_350=0;
    result_350+=int_get_hash_key(((int)self->mClass));
    result_350+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_350+=int_get_hash_key(((int)self->mChannelType));
    result_350+=int_get_hash_key(((int)self->mGenericsTypes));
    result_350+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_350+=int_get_hash_key(((int)self->mAnyClass));
    result_350+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_350+=int_get_hash_key(((int)self->mSizeNum));
    result_350+=int_get_hash_key(((int)self->mAlignas));
    result_350+=int_get_hash_key(((int)self->mTupleName));
    result_350+=int_get_hash_key(((int)self->mAttribute));
    result_350+=int_get_hash_key(((int)self->mAllocaValue));
    result_350+=int_get_hash_key(((int)self->mUnsigned));
    result_350+=int_get_hash_key(((int)self->mShort));
    result_350+=int_get_hash_key(((int)self->mLong));
    result_350+=int_get_hash_key(((int)self->mLongLong));
    result_350+=int_get_hash_key(((int)self->mConstant));
    result_350+=int_get_hash_key(((int)self->mAtomic));
    result_350+=int_get_hash_key(((int)self->mRegister));
    result_350+=int_get_hash_key(((int)self->mVolatile));
    result_350+=int_get_hash_key(((int)self->mStatic));
    result_350+=int_get_hash_key(((int)self->mUniq));
    result_350+=int_get_hash_key(((int)self->mRecord));
    result_350+=int_get_hash_key(((int)self->mExtern));
    result_350+=int_get_hash_key(((int)self->mRestrict));
    result_350+=int_get_hash_key(((int)self->mImmutable));
    result_350+=int_get_hash_key(((int)self->mHeap));
    result_350+=int_get_hash_key(((int)self->mChannel));
    result_350+=int_get_hash_key(((int)self->mNoHeap));
    result_350+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_350+=int_get_hash_key(((int)self->mException));
    result_350+=int_get_hash_key(((int)self->mGenerate));
    result_350+=int_get_hash_key(((int)self->mCreateVTable));
    result_350+=int_get_hash_key(((int)self->mDynamic));
    result_350+=int_get_hash_key(((int)self->mInline));
    result_350+=int_get_hash_key(((int)self->mNullValue));
    result_350+=int_get_hash_key(((int)self->mGuardValue));
    result_350+=int_get_hash_key(((int)self->mAsmName));
    result_350+=int_get_hash_key(((int)self->mTypedef));
    result_350+=int_get_hash_key(((int)self->mMultipleTypes));
    result_350+=int_get_hash_key(((int)self->mOriginIsArray));
    result_350+=int_get_hash_key(((int)self->mArrayNum));
    result_350+=int_get_hash_key(((int)self->mPointerNum));
    result_350+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_350+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_350+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_350+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_350+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_350+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_350+=int_get_hash_key(((int)self->mArrayPointerType));
    result_350+=int_get_hash_key(((int)self->mLambdaArray));
    result_350+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_350+=int_get_hash_key(((int)self->mParamTypes));
    result_350+=int_get_hash_key(((int)self->mParamNames));
    result_350+=int_get_hash_key(((int)self->mResultType));
    result_350+=int_get_hash_key(((int)self->mVarArgs));
    return result_350;
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
    if(    !list$1void$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
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
    if(    !list$1void$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
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
    if(    !list$1void$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1void$ph$p_equals(struct list$1void$ph* left, struct list$1void$ph* right){
struct list_item$1void$ph* it_351;
struct list_item$1void$ph* it2_352;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_351=left->head;
    it2_352=right->head;
    while(it_351!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_351->item, it2_352->item)) {
            return (_Bool)0;
        }
        it_351=it_351->next;
        it2_352=it2_352->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_353;
struct list_item$1sNode$ph* it2_354;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_353=left->head;
    it2_354=right->head;
    while(it_353!=((void*)0)) {
        if(        !sNode_equals(it_353->item,it2_354->item)) {
            return (_Bool)0;
        }
        it_353=it_353->next;
        it2_354=it2_354->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_355;
struct list_item$1char$ph* it2_356;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_355=left->head;
    it2_356=right->head;
    while(it_355!=((void*)0)) {
        if(        !string_equals(it_355->item,it2_356->item)) {
            return (_Bool)0;
        }
        it_355=it_355->next;
        it2_356=it2_356->next;
    }
    return (_Bool)1;
}

static struct list$1void$ph* list$1void$ph$p_clone(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__240;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1void$ph* result_359;
struct list_item$1void$ph* it_360;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1void$ph* __result_obj__243;
    if(    self==((void*)0)) {
        __result_obj__240 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__240,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__240;
    }
    result_359=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "./comelang.h", 1368, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    it_360=self->head;
    while(it_360!=((void*)0)) {
        if(        1) {
            list$1void$ph$p_add(result_359,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_360->item)));
        }
        else {
            list$1void$ph$p_add(result_359,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_360->item)));
        }
        it_360=it_360->next;
    }
    __result_obj__243 = come_increment_ref_count(result_359);
    come_call_finalizer3(result_359,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static unsigned int list$1void$ph$p_get_hash_key(struct list$1void$ph* self){
unsigned int result_358;
    result_358=0;
    result_358+=int_get_hash_key(((int)self->head));
    result_358+=int_get_hash_key(((int)self->tail));
    result_358+=int_get_hash_key(((int)self->len));
    result_358+=int_get_hash_key(((int)self->it));
    return result_358;
}

static struct list$1void$ph* list$1void$ph$pp_initialize(struct list$1void$ph* self){
struct list$1void$ph* __result_obj__241;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__241 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__241,list$1void$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__241;
}

static struct list$1void$ph* list$1void$ph$p_add(struct list$1void$ph* self, void* item){
void* __right_value270 = (void*)0;
struct list_item$1void$ph* litem_361;
void* __dec_obj27;
void* __right_value271 = (void*)0;
struct list_item$1void$ph* litem_362;
void* __dec_obj28;
void* __right_value272 = (void*)0;
struct list_item$1void$ph* litem_363;
void* __dec_obj29;
struct list$1void$ph* __result_obj__242;
    if(    self->len==0) {
        litem_361=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value270=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1387, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=((void*)0);
        litem_361->next=((void*)0);
        __dec_obj27=litem_361->item;
        litem_361->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_361;
        self->head=litem_361;
    }
    else if(    self->len==1) {
        litem_362=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value271=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1397, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_362->prev=self->head;
        litem_362->next=((void*)0);
        __dec_obj28=litem_362->item;
        litem_362->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_362;
        self->head->next=litem_362;
    }
    else {
        litem_363=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value272=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1407, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_363->prev=self->tail;
        litem_363->next=((void*)0);
        __dec_obj29=litem_363->item;
        litem_363->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj29,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_363;
        self->tail=litem_363;
    }
    self->len++;
    __result_obj__242 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__242;
}

static void list$1void$ph_finalize(struct list$1void$ph* self){
struct list_item$1void$ph* it_364;
struct list_item$1void$ph* prev_it_365;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        come_call_finalizer3(prev_it_365,list_item$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__244;
void* __right_value278 = (void*)0;
struct sNode* result_366;
struct sNode* __result_obj__245;
    if(    self==(void*)0) {
        __result_obj__244 = come_increment_ref_count((void*)0);
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count2(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
    }
    result_366=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_366->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_366->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_366->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_366->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_366->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_366->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_366->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_366->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_366->kind=self->kind;
    }
    __result_obj__245 = come_increment_ref_count(result_366);
    ((result_366) ? result_366 = come_decrement_ref_count2(result_366, ((struct sNode*)result_366)->finalize, ((struct sNode*)result_366)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count2(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__245;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__246;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sNode$ph* result_367;
struct list_item$1sNode$ph* it_368;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sNode$ph* __result_obj__249;
    if(    self==((void*)0)) {
        __result_obj__246 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__246,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__246;
    }
    result_367=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1368, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_368=self->head;
    while(it_368!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_367,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_368->item)));
        }
        else {
            list$1sNode$ph$p_add(result_367,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_368->item)));
        }
        it_368=it_368->next;
    }
    __result_obj__249 = come_increment_ref_count(result_367);
    come_call_finalizer3(result_367,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__247;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__247 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__247,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value286 = (void*)0;
struct list_item$1sNode$ph* litem_369;
struct sNode* __dec_obj38;
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_370;
struct sNode* __dec_obj39;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_371;
struct sNode* __dec_obj40;
struct list$1sNode$ph* __result_obj__248;
    if(    self->len==0) {
        litem_369=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value286=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1387, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=((void*)0);
        litem_369->next=((void*)0);
        __dec_obj38=litem_369->item;
        litem_369->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_369;
        self->head=litem_369;
    }
    else if(    self->len==1) {
        litem_370=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1397, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->head;
        litem_370->next=((void*)0);
        __dec_obj39=litem_370->item;
        litem_370->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_370;
        self->head->next=litem_370;
    }
    else {
        litem_371=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1407, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=self->tail;
        litem_371->next=((void*)0);
        __dec_obj40=litem_371->item;
        litem_371->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count2(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_371;
        self->tail=litem_371;
    }
    self->len++;
    __result_obj__248 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__248;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_372;
struct list_item$1sNode$ph* prev_it_373;
    it_372=self->head;
    while(it_372!=((void*)0)) {
        prev_it_373=it_372;
        it_372=it_372->next;
        come_call_finalizer3(prev_it_373,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__250;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1char$ph* result_374;
struct list_item$1char$ph* it_375;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1char$ph* __result_obj__252;
    if(    self==((void*)0)) {
        __result_obj__250 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__250,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__250;
    }
    result_374=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1368, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_375=self->head;
    while(it_375!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_374,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_375->item)));
        }
        else {
            list$1char$ph$p_add(result_374,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_375->item)));
        }
        it_375=it_375->next;
    }
    __result_obj__252 = come_increment_ref_count(result_374);
    come_call_finalizer3(result_374,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__252;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value296 = (void*)0;
struct list_item$1char$ph* litem_376;
char* __dec_obj44;
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_377;
char* __dec_obj45;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_378;
char* __dec_obj46;
struct list$1char$ph* __result_obj__251;
    if(    self->len==0) {
        litem_376=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value296=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1387, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=((void*)0);
        litem_376->next=((void*)0);
        __dec_obj44=litem_376->item;
        litem_376->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_376;
        self->head=litem_376;
    }
    else if(    self->len==1) {
        litem_377=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1397, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->head;
        litem_377->next=((void*)0);
        __dec_obj45=litem_377->item;
        litem_377->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_377;
        self->head->next=litem_377;
    }
    else {
        litem_378=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1407, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->tail;
        litem_378->next=((void*)0);
        __dec_obj46=litem_378->item;
        litem_378->item=(char*)come_increment_ref_count(item);
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_378;
        self->tail=litem_378;
    }
    self->len++;
    __result_obj__251 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_379;
struct list_item$1char$ph* prev_it_380;
    it_379=self->head;
    while(it_379!=((void*)0)) {
        prev_it_380=it_379;
        it_379=it_379->next;
        come_call_finalizer3(prev_it_380,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_381;
struct CVALUE* __dec_obj50;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_382;
struct CVALUE* __dec_obj51;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_383;
struct CVALUE* __dec_obj52;
struct list$1CVALUE$ph* __result_obj__254;
    if(    self->len==0) {
        litem_381=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1457, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=((void*)0);
        litem_381->next=((void*)0);
        __dec_obj50=litem_381->item;
        litem_381->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_381;
        self->head=litem_381;
    }
    else if(    self->len==1) {
        litem_382=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1467, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->head;
        litem_382->next=((void*)0);
        __dec_obj51=litem_382->item;
        litem_382->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_382;
        self->head->next=litem_382;
    }
    else {
        litem_383=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1477, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_383->prev=self->tail;
        litem_383->next=((void*)0);
        __dec_obj52=litem_383->item;
        litem_383->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj52,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_383;
        self->tail=litem_383;
    }
    self->len++;
    __result_obj__254 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__254;
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

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __right_value308 = (void*)0;
struct buffer* __dec_obj53;
struct sBufferNode* __result_obj__256;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj53=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj53,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result_obj__256 = come_increment_ref_count(self);
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__256,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__256;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__257;
    __result_obj__257 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sBufferNode"))));
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__257 = come_decrement_ref_count2(__result_obj__257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__257;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_384;
unsigned long  int size_385;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct buffer* buf_387;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* type2_388;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sType* any_type_389;
void* __right_value318 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var1 = (void*)0;
char* finalizer_name_390=0;
char* cloner_name_391=0;
char* get_hash_key_name_392=0;
char* equaler_name_393=0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* type2_394;
void* __right_value322 = (void*)0;
char* __dec_obj54;
void* __right_value323 = (void*)0;
struct sType* __dec_obj55;
_Bool __result_obj__258;
    value_384=(struct buffer*)come_increment_ref_count(self->value);
    size_385=self->size;
    come_value_386=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_387=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    type2_388=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    type2_388->mPointerNum++;
    any_type_389=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    any_type_389->mPointerNum=1;
    any_type_389->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value318=create_vtable((struct sType*)come_increment_ref_count(any_type_389),info)));
    finalizer_name_390=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_391=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_392=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_393=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    come_call_finalizer3(__right_value318,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_387,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_390,cloner_name_391,get_hash_key_name_392,equaler_name_393,((char*)(__right_value319=buffer_to_string(value_384))),size_385);
    (__right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_394=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer*",(_Bool)0,info));
    type2_394->mHeap=(_Bool)1;
    __dec_obj54=come_value_386->c_value;
    come_value_386->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_387));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj55=come_value_386->type;
    come_value_386->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_394));
    come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_386->var=((void*)0);
    append_object_to_right_values2(come_value_386,(struct sType*)come_increment_ref_count(type2_394),info,(_Bool)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_386));
    add_come_last_code(info,"%s",come_value_386->c_value);
    __result_obj__258 = (_Bool)1;
    come_call_finalizer3(value_384,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_387,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_389,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_390 = come_decrement_ref_count2(finalizer_name_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_391 = come_decrement_ref_count2(cloner_name_391, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_392 = come_decrement_ref_count2(get_hash_key_name_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_393 = come_decrement_ref_count2(equaler_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_394,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__258;
}

static void sBufferNode_finalize(struct sBufferNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple4$4char$phchar$phchar$phchar$ph$p_finalize(struct tuple4$4char$phchar$phchar$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        (self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        (self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNode$ph* exps, int sline, struct sInfo* info){
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj56;
void* __right_value326 = (void*)0;
struct list$1sNode$ph* __dec_obj57;
struct sSStringNode* __result_obj__259;
    ((struct sNodeBase*)(__right_value324=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value324,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj56=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=self->exps;
    self->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, exps));
    come_call_finalizer3(__dec_obj57,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__259 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__259,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__259;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __right_value327 = (void*)0;
char* __result_obj__260;
    __result_obj__260 = come_increment_ref_count(((char*)(__right_value327=__builtin_string("sSStringNode"))));
    (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__260 = come_decrement_ref_count2(__result_obj__260, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__260;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_395;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* buf_396;
struct list$1sNode$ph* o2_saved_397;
struct sNode* it_400;
void* __right_value332 = (void*)0;
struct sNode* obj_403;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_404;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sNode* node_412;
_Bool Value_413;
_Bool __result_obj__272;
void* __right_value346 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sType* type2_415;
void* __right_value349 = (void*)0;
char* __dec_obj65;
void* __right_value350 = (void*)0;
struct sType* __dec_obj66;
_Bool __result_obj__273;
    come_value_395=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_396=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_396,"xsprintf(\"");
    buffer_append_str(buf_396,self->value);
    buffer_append_str(buf_396,"\"");
    if(    list$1sNode$ph$p_length(self->exps)>0) {
        for(        o2_saved_397=(struct list$1sNode$ph*)come_increment_ref_count((self->exps)),it_400=list$1sNode$ph$p_begin((o2_saved_397));        !list$1sNode$ph$p_end((o2_saved_397));        it_400=list$1sNode$ph$p_next((o2_saved_397))        ){
            obj_403=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_400));
            params_404=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 115, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_404,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 116, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_400)))));
            node_412=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_403),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_404),((void*)0),0,((void*)0),info));
            Value_413=node_compile(node_412,info);
            if(            !Value_413) {
                __result_obj__272 = (_Bool)0;
                ((obj_403) ? obj_403 = come_decrement_ref_count2(obj_403, ((struct sNode*)obj_403)->finalize, ((struct sNode*)obj_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_404,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((node_412) ? node_412 = come_decrement_ref_count2(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(o2_saved_397,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__272;
            }
            else {
            }
            come_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_396,",");
            buffer_append_str(buf_396,come_value_414->c_value);
            ((obj_403) ? obj_403 = come_decrement_ref_count2(obj_403, ((struct sNode*)obj_403)->finalize, ((struct sNode*)obj_403)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(params_404,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((node_412) ? node_412 = come_decrement_ref_count2(node_412, ((struct sNode*)node_412)->finalize, ((struct sNode*)node_412)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_397,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_396,")");
    type2_415=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 134, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    type2_415->mHeap=(_Bool)1;
    __dec_obj65=come_value_395->c_value;
    come_value_395->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_396));
    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj66=come_value_395->type;
    come_value_395->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_415));
    come_call_finalizer3(__dec_obj66,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_395->var=((void*)0);
    append_object_to_right_values2(come_value_395,(struct sType*)come_increment_ref_count(type2_415),info,(_Bool)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_395));
    add_come_last_code(info,"%s",come_value_395->c_value);
    __result_obj__273 = (_Bool)1;
    come_call_finalizer3(come_value_395,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_396,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_415,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__273;
}

static void sSStringNode_finalize(struct sSStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        come_call_finalizer3(self->exps,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_398;
struct sNode* __result_obj__261;
struct sNode* __result_obj__262;
struct sNode* result_399;
struct sNode* __result_obj__263;
result_398 = (void*)0;
result_399 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_398,0,sizeof(struct sNode*));
        __result_obj__261 = result_398;
        return __result_obj__261;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__262 = self->it->item;
        return __result_obj__262;
    }
    memset(&result_399,0,sizeof(struct sNode*));
    __result_obj__263 = result_399;
    return __result_obj__263;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_401;
struct sNode* __result_obj__264;
struct sNode* __result_obj__265;
struct sNode* result_402;
struct sNode* __result_obj__266;
result_401 = (void*)0;
result_402 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_401,0,sizeof(struct sNode*));
        __result_obj__264 = result_401;
        return __result_obj__264;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__265 = self->it->item;
        return __result_obj__265;
    }
    memset(&result_402,0,sizeof(struct sNode*));
    __result_obj__266 = result_402;
    return __result_obj__266;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_initialize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__267;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__267,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__267;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_405;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_406;
    it_405=self->head;
    while(it_405!=((void*)0)) {
        prev_it_406=it_405;
        it_405=it_405->next;
        come_call_finalizer3(prev_it_406,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value335 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_407;
struct tuple2$2char$phsNode$ph* __dec_obj58;
void* __right_value336 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_408;
struct tuple2$2char$phsNode$ph* __dec_obj59;
void* __right_value337 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_409;
struct tuple2$2char$phsNode$ph* __dec_obj60;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__268;
    if(    self->len==0) {
        litem_407=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value335=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1387, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_407->prev=((void*)0);
        litem_407->next=((void*)0);
        __dec_obj58=litem_407->item;
        litem_407->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_407;
        self->head=litem_407;
    }
    else if(    self->len==1) {
        litem_408=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value336=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1397, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_408->prev=self->head;
        litem_408->next=((void*)0);
        __dec_obj59=litem_408->item;
        litem_408->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_408;
        self->head->next=litem_408;
    }
    else {
        litem_409=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value337=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1407, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_409->prev=self->tail;
        litem_409->next=((void*)0);
        __dec_obj60=litem_409->item;
        litem_409->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_409;
        self->tail=litem_409;
    }
    self->len++;
    __result_obj__268 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__268;
}

static void tuple2$2char$phsNode$ph_finalize(struct tuple2$2char$phsNode$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__269;
void* __right_value340 = (void*)0;
struct tuple2$2char$phsNode$ph* result_410;
void* __right_value341 = (void*)0;
char* __dec_obj61;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj62;
struct tuple2$2char$phsNode$ph* __result_obj__270;
    if(    self==(void*)0) {
        __result_obj__269 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__269,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__269;
    }
    result_410=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj61=result_410->v1;
        result_410->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj62=result_410->v2;
        result_410->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result_obj__270 = come_increment_ref_count(result_410);
    come_call_finalizer3(result_410,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__270,tuple2$2char$phsNode$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__270;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_411;
    result_411=0;
    result_411+=int_get_hash_key(((int)self->v1));
    result_411+=int_get_hash_key(((int)self->v2));
    return result_411;
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
char* __dec_obj63;
struct sNode* __dec_obj64;
struct tuple2$2char$phsNode$ph* __result_obj__271;
    __dec_obj63=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj64=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
    __result_obj__271 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__result_obj__271,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__271;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __right_value351 = (void*)0;
struct sCharNode* __result_obj__274;
    ((struct sNodeBase*)(__right_value351=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value351,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->value=value;
    __result_obj__274 = come_increment_ref_count(self);
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__274,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__274;
}

char* sCharNode_kind(struct sCharNode* self){
void* __right_value352 = (void*)0;
char* __result_obj__275;
    __result_obj__275 = come_increment_ref_count(((char*)(__right_value352=__builtin_string("sCharNode"))));
    (__right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__275 = come_decrement_ref_count2(__result_obj__275, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__275;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value_416;
void* __right_value355 = (void*)0;
char* __dec_obj67;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* __dec_obj68;
_Bool __result_obj__276;
    come_value_416=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 167, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj67=come_value_416->c_value;
    come_value_416->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj68=come_value_416->type;
    come_value_416->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 170, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj68,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_416->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_416));
    add_come_last_code(info,"%s",come_value_416->c_value);
    __result_obj__276 = (_Bool)1;
    come_call_finalizer3(come_value_416,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__276;
}

static void sCharNode_finalize(struct sCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __right_value358 = (void*)0;
struct sWCharNode* __result_obj__277;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->value=value;
    self->quote=quote;
    __result_obj__277 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__277,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__277;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __right_value359 = (void*)0;
char* __result_obj__278;
    __result_obj__278 = come_increment_ref_count(((char*)(__right_value359=__builtin_string("sWCharNode"))));
    (__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__278 = come_decrement_ref_count2(__result_obj__278, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__278;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_417;
void* __right_value362 = (void*)0;
char* __dec_obj69;
void* __right_value363 = (void*)0;
char* __dec_obj70;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* __dec_obj71;
_Bool __result_obj__279;
    come_value_417=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 198, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj69=come_value_417->c_value;
        come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj70=come_value_417->c_value;
        come_value_417->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj71=come_value_417->type;
    come_value_417->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj71,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_417->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_417));
    add_come_last_code(info,"%s",come_value_417->c_value);
    __result_obj__279 = (_Bool)1;
    come_call_finalizer3(come_value_417,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__279;
}

static void sWCharNode_finalize(struct sWCharNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __right_value366 = (void*)0;
unsigned int* __dec_obj72;
struct sWStringNode* __result_obj__280;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value366,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj72=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__280 = come_increment_ref_count(self);
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__280,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__280;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __right_value367 = (void*)0;
char* __result_obj__281;
    __result_obj__281 = come_increment_ref_count(((char*)(__right_value367=__builtin_string("sWStringNode"))));
    (__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count2(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_418;
void* __right_value370 = (void*)0;
char* __dec_obj73;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sType* __dec_obj74;
_Bool __result_obj__282;
    come_value_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 233, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj73=come_value_418->c_value;
    come_value_418->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj74=come_value_418->type;
    come_value_418->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 236, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_418->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_418));
    add_come_last_code(info,"%s",come_value_418->c_value);
    __result_obj__282 = (_Bool)1;
    come_call_finalizer3(come_value_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__282;
}

static void sWStringNode_finalize(struct sWStringNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
char* __dec_obj75;
struct sRegexNode* __result_obj__283;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj75=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result_obj__283 = come_increment_ref_count(self);
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    (str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__283,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__283;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __right_value375 = (void*)0;
char* __result_obj__284;
    __result_obj__284 = come_increment_ref_count(((char*)(__right_value375=__builtin_string("sRegexNode"))));
    (__right_value375 = come_decrement_ref_count2(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__284 = come_decrement_ref_count2(__result_obj__284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__284;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value381 = (void*)0;
struct sNode* obj_node_419;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_421;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sNode* node_422;
_Bool Value_423;
_Bool __result_obj__287;
_Bool __result_obj__288;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value377=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 265, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_419=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value377,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_421=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 267, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 269, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_419))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 270, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 271, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 272, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 273, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 274, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 275, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 276, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2char$phsNode$ph$ph$p_add(params_421,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 277, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_422=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_419),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_421),((void*)0),info->sline,((void*)0),info));
    Value_423=node_compile(node_422,info);
    if(    !Value_423) {
        __result_obj__287 = (_Bool)0;
        ((obj_node_419) ? obj_node_419 = come_decrement_ref_count2(obj_node_419, ((struct sNode*)obj_node_419)->finalize, ((struct sNode*)obj_node_419)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_421,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_422) ? node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__287;
    }
    else {
    }
    __result_obj__288 = (_Bool)1;
    ((obj_node_419) ? obj_node_419 = come_decrement_ref_count2(obj_node_419, ((struct sNode*)obj_node_419)->finalize, ((struct sNode*)obj_node_419)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(params_421,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_422) ? node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__288;
}

static void sRegexNode_finalize(struct sRegexNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        (self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
struct sStrNode* __result_obj__285;
void* __right_value378 = (void*)0;
struct sStrNode* result_420;
void* __right_value379 = (void*)0;
char* __dec_obj76;
void* __right_value380 = (void*)0;
char* __dec_obj77;
struct sStrNode* __result_obj__286;
    if(    self==(void*)0) {
        __result_obj__285 = (void*)0;
        return __result_obj__285;
    }
    result_420=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_420->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj76=result_420->sname;
        result_420->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_420->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj77=result_420->value;
        result_420->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__286 = result_420;
    come_call_finalizer3(result_420,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__286;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNode$ph* list_elements, struct sInfo* info){
void* __right_value420 = (void*)0;
struct list$1sNode$ph* __dec_obj78;
struct sListNode* __result_obj__289;
    ((struct sNodeBase*)(__right_value420=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value420,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj78=self->list_elements;
    self->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj78,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__289 = come_increment_ref_count(self);
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__289,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__289;
}

char* sListNode_kind(struct sListNode* self){
void* __right_value421 = (void*)0;
char* __result_obj__290;
    __result_obj__290 = come_increment_ref_count(((char*)(__right_value421=__builtin_string("sListNode"))));
    (__right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__290 = come_decrement_ref_count2(__result_obj__290, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__290;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNode$ph* list_elements_424;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1CVALUE$ph* params_425;
struct sType* list_element_type_428;
int n_429;
struct list$1sNode$ph* o2_saved_430;
struct sNode* it_431;
void* __right_value424 = (void*)0;
_Bool _if_conditional1;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sNode* value_node_432;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_433;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sNode* exp_434;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj79;
_Bool Value_435;
_Bool __result_obj__292;
_Bool Value_436;
_Bool __result_obj__293;
void* __right_value439 = (void*)0;
struct CVALUE* come_value_437;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_438=0;
char* Err_439=0;
_Bool _if_conditional2;
_Bool __result_obj__294;
void* __right_value442 = (void*)0;
struct sType* __dec_obj80;
void* __right_value443 = (void*)0;
struct sType* type_values_440;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* var_name_445;
void* __right_value449 = (void*)0;
struct sVar* var__446;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct buffer* source_447;
int i_448;
struct list$1CVALUE$ph* o2_saved_449;
struct CVALUE* it_452;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sType* list_type_458;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* obj_type_462;
char* fun_name_463;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var3 = (void*)0;
char* name_464=0;
struct sGenericsFun* generics_fun_465=0;
char* generics_fun_name_466;
void* __right_value464 = (void*)0;
struct sFun* fun_467;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
char* __dec_obj87;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_2_470=0;
char* Err_471=0;
_Bool _if_conditional3;
_Bool __result_obj__309;
void* __right_value469 = (void*)0;
struct sType* result_type_472;
struct sType* type_473;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct CVALUE* obj_value_474;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct buffer* num_string_475;
void* __right_value474 = (void*)0;
struct sType* type2_476;
void* __right_value475 = (void*)0;
char* type_name_477;
struct sType* any_type_478;
void* __right_value476 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var5 = (void*)0;
char* finalizer_name_479=0;
char* cloner_name_480=0;
char* get_hash_key_name_481=0;
char* equaler_name_482=0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* __dec_obj88;
void* __right_value479 = (void*)0;
struct sType* type3_483;
void* __right_value480 = (void*)0;
struct sType* __dec_obj89;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1CVALUE$ph* come_params_484;
void* __right_value483 = (void*)0;
_Bool _if_conditional4;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct CVALUE* come_value2_488;
void* __right_value487 = (void*)0;
char* __dec_obj90;
struct sType* __dec_obj91;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct CVALUE* come_value3_489;
void* __right_value490 = (void*)0;
char* __dec_obj92;
struct sType* __dec_obj93;
int j_490;
struct list$1CVALUE$ph* o2_saved_491;
struct CVALUE* it_492;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct CVALUE* come_value4_493;
void* __right_value493 = (void*)0;
char* __dec_obj94;
void* __right_value494 = (void*)0;
struct sType* __dec_obj95;
_Bool __result_obj__312;
    list_elements_424=self->list_elements;
    params_425=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 309, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_428=((void*)0);
    n_429=0;
    for(    o2_saved_430=(list_elements_424),it_431=list$1sNode$ph$p_begin((o2_saved_430));    !list$1sNode$ph$p_end((o2_saved_430));    it_431=list$1sNode$ph$p_next((o2_saved_430))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value424=it_431->kind(it_431->_protocol_obj))),"sWildCard"))),        (__right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            value_node_432=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value425=xsprintf("Value"))),info));
            (__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_433=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 317, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_433,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 318, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_432))));
            list$1tuple2$2char$phsNode$ph$ph$p_add(params_433,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 319, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_429,info)))));
            exp_434=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value436=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_432),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_433),((void*)0),0,((void*)0),info));
            (__right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj79=exp_434;
            exp_434=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_434,info));
            if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
            Value_435=node_compile(exp_434,info);
            if(            !Value_435) {
                __result_obj__292 = (_Bool)0;
                ((value_node_432) ? value_node_432 = come_decrement_ref_count2(value_node_432, ((struct sNode*)value_node_432)->finalize, ((struct sNode*)value_node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_433,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                ((exp_434) ? exp_434 = come_decrement_ref_count2(exp_434, ((struct sNode*)exp_434)->finalize, ((struct sNode*)exp_434)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(params_425,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__292;
            }
            else {
            }
            ((value_node_432) ? value_node_432 = come_decrement_ref_count2(value_node_432, ((struct sNode*)value_node_432)->finalize, ((struct sNode*)value_node_432)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(params_433,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((exp_434) ? exp_434 = come_decrement_ref_count2(exp_434, ((struct sNode*)exp_434)->finalize, ((struct sNode*)exp_434)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_436=node_compile(it_431,info);
            if(            !Value_436) {
                __result_obj__293 = (_Bool)0;
                come_call_finalizer3(params_425,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__293;
            }
            else {
            }
        }
        come_value_437=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_428) {
            multiple_assign_var2=((struct tuple2$2bool$char$ph*)(__right_value441=check_assign_type(((char*)(__right_value440=xsprintf("invalid list element type"))),list_element_type_428,come_value_437->type,come_value_437,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_1_438=multiple_assign_var2->v1;
            Err_439=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional2=(Err_439)),            (__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value441,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                __result_obj__294 = (_Bool)1;
                (Err_439 = come_decrement_ref_count2(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_425,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__294;
            }
            else {
            }
            (Err_439 = come_decrement_ref_count2(Err_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUE$ph$p_push_back(params_425,(struct CVALUE*)come_increment_ref_count(come_value_437));
        __dec_obj80=list_element_type_428;
        list_element_type_428=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_437->type));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_429++;
        come_call_finalizer3(come_value_437,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_440=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_428));
    list$1sNode$ph$p_push_back(type_values_440->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(params_425),info)));
    type_values_440->mHeap=(_Bool)0;
    static int list_value_num_444=0;
    var_name_445=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_444));
    add_variable_to_table(var_name_445,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_440)),info,(_Bool)0);
    var__446=get_variable_from_table(info->lv_table,var_name_445);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value450=make_define_var(type_values_440,var__446->mCValueName,(_Bool)0,info))));
    (__right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_447=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 362, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_447,"(");
    i_448=0;
    for(    o2_saved_449=(struct list$1CVALUE$ph*)come_increment_ref_count((params_425)),it_452=list$1CVALUE$ph$p_begin((o2_saved_449));    !list$1CVALUE$ph$p_end((o2_saved_449));    it_452=list$1CVALUE$ph$p_next((o2_saved_449))    ){
        if(        list_element_type_428->mHeap) {
            buffer_append_format(source_447,"%s[%d]=%s,\n",var__446->mCValueName,i_448,((struct CVALUE*)(__right_value453=list$1CVALUE$ph$p_operator_load_element(params_425,i_448)))->c_value);
            come_call_finalizer3(__right_value453,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_447,"%s[%d]=%s,\n",var__446->mCValueName,i_448,((struct CVALUE*)(__right_value454=list$1CVALUE$ph$p_operator_load_element(params_425,i_448)))->c_value);
            come_call_finalizer3(__right_value454,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_448++;
    }
    come_call_finalizer3(o2_saved_449,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list_type_458=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"list",(_Bool)0,info));
    list$1void$ph$p_push_back(list_type_458->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value460=come_call_cloner(sType_clone, list_element_type_428))))));
    come_call_finalizer3(__right_value460,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_462=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_458));
    fun_name_463="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2char$phsGenericsFun$p*)(__right_value463=make_generics_function(obj_type_462,(char*)come_increment_ref_count(__builtin_string(fun_name_463)),info,(_Bool)1)));
    name_464=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_465=multiple_assign_var3->v2;
    come_call_finalizer3(__right_value463,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_466=(char*)come_increment_ref_count(name_464);
    fun_467=((struct sFun*)((void*)(__right_value464=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_466,((void*)0)))));
    come_call_finalizer3(__right_value464,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_467==((void*)0)) {
        __dec_obj87=generics_fun_name_466;
        generics_fun_name_466=(char*)come_increment_ref_count(create_method_name(obj_type_462,(_Bool)0,((char*)(__right_value465=__builtin_string(fun_name_463))),info,(_Bool)1));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_467=((struct sFun*)((void*)(__right_value467=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_466,((void*)0)))));
        come_call_finalizer3(__right_value467,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_467==((void*)0)) {
            multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value468=err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_466,info->come_fun->mName)));
            come_exception_var_2_470=multiple_assign_var4->v1;
            Err_471=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            (_if_conditional3=(Err_471)),            come_call_finalizer3(__right_value468,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result_obj__309 = (_Bool)1;
                (Err_471 = come_decrement_ref_count2(Err_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_425,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_values_440,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_445 = come_decrement_ref_count2(var_name_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_447,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_466 = come_decrement_ref_count2(generics_fun_name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__309;
            }
            else {
            }
            (Err_471 = come_decrement_ref_count2(Err_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_472=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_467->mResultType));
    result_type_472->mStatic=(_Bool)0;
    type_473=list_type_458;
    obj_value_474=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 410, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_475=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 412, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_475,"1");
    type2_476=(struct sType*)come_increment_ref_count(solve_generics(type_473,type_473,info));
    type_name_477=(char*)come_increment_ref_count(make_type_name_string(type2_476,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_478=(struct sType*)come_increment_ref_count(type2_476);
    any_type_478->mPointerNum=1;
    any_type_478->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value476=create_vtable((struct sType*)come_increment_ref_count(any_type_478),info)));
    finalizer_name_479=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_480=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_481=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_482=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    come_call_finalizer3(__right_value476,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj88=obj_value_474->c_value;
    obj_value_474->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_477,type_name_477,((char*)(__right_value477=buffer_to_string(num_string_475))),info->sname,info->sline,type_name_477,finalizer_name_479,cloner_name_480,get_hash_key_name_481,equaler_name_482));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_483=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_476));
    type3_483->mPointerNum++;
    type3_483->mHeap=(_Bool)1;
    type2_476->mHeap=(_Bool)1;
    __dec_obj89=obj_value_474->type;
    obj_value_474->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_476));
    come_call_finalizer3(__dec_obj89,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_474->type->mPointerNum++;
    obj_value_474->var=((void*)0);
    append_object_to_right_values2(obj_value_474,(struct sType*)come_increment_ref_count(type3_483),info,(_Bool)0);
    come_params_484=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 438, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)((void*)(__right_value483=list$1void$ph$p_operator_load_element(fun_467->mParamTypes,0))))->mHeap&&obj_value_474->type->mHeap)),    come_call_finalizer3(__right_value483,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)((void*)(__right_value484=list$1void$ph$p_operator_load_element(fun_467->mParamTypes,0)))),obj_value_474->type,obj_value_474,info,(_Bool)1);
        come_call_finalizer3(__right_value484,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_484,(struct CVALUE*)come_increment_ref_count(obj_value_474));
    come_value2_488=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 445, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj90=come_value2_488->c_value;
    come_value2_488->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph$p_length(params_425)));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj91=come_value2_488->type;
    come_value2_488->type=((void*)0);
    come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_488->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_484,(struct CVALUE*)come_increment_ref_count(come_value2_488));
    come_value3_489=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 453, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj92=come_value3_489->c_value;
    come_value3_489->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__446->mCValueName));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value3_489->type;
    come_value3_489->type=((void*)0);
    come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_489->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_484,(struct CVALUE*)come_increment_ref_count(come_value3_489));
    buffer_append_str(source_447,generics_fun_name_466);
    buffer_append_str(source_447,"(");
    j_490=0;
    for(    o2_saved_491=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_484)),it_492=list$1CVALUE$ph$p_begin((o2_saved_491));    !list$1CVALUE$ph$p_end((o2_saved_491));    it_492=list$1CVALUE$ph$p_next((o2_saved_491))    ){
        buffer_append_str(source_447,it_492->c_value);
        if(        j_490!=list$1CVALUE$ph$p_length(come_params_484)-1) {
            buffer_append_str(source_447,",");
        }
        j_490++;
    }
    come_call_finalizer3(o2_saved_491,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_447,")");
    buffer_append_str(source_447,")");
    come_value4_493=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 479, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj94=come_value4_493->c_value;
    come_value4_493->c_value=(char*)come_increment_ref_count(buffer_to_string(source_447));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=come_value4_493->type;
    come_value4_493->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_472));
    come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_493->type->mStatic=(_Bool)0;
    come_value4_493->var=((void*)0);
    if(    result_type_472->mHeap) {
        append_object_to_right_values2(come_value4_493,(struct sType*)come_increment_ref_count(result_type_472),info,(_Bool)0);
    }
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_493));
    add_come_last_code(info,"%s",come_value4_493->c_value);
    __result_obj__312 = (_Bool)1;
    come_call_finalizer3(params_425,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_428,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_440,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_445 = come_decrement_ref_count2(var_name_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_447,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_458,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_464 = come_decrement_ref_count2(name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_466 = come_decrement_ref_count2(generics_fun_name_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_472,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_476,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_477 = come_decrement_ref_count2(type_name_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_479 = come_decrement_ref_count2(finalizer_name_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_480 = come_decrement_ref_count2(cloner_name_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_481 = come_decrement_ref_count2(get_hash_key_name_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_482 = come_decrement_ref_count2(equaler_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_484,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_493,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__312;
}

static void sListNode_finalize(struct sListNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        come_call_finalizer3(self->list_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_initialize(struct list$1CVALUE$ph* self){
struct list$1CVALUE$ph* __result_obj__291;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__291 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__291,list$1CVALUE$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__291;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_426;
struct list_item$1CVALUE$ph* prev_it_427;
    it_426=self->head;
    while(it_426!=((void*)0)) {
        prev_it_427=it_426;
        it_426=it_426->next;
        come_call_finalizer3(prev_it_427,list_item$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value444 = (void*)0;
struct list_item$1sNode$ph* litem_441;
struct sNode* __dec_obj81;
void* __right_value445 = (void*)0;
struct list_item$1sNode$ph* litem_442;
struct sNode* __dec_obj82;
void* __right_value446 = (void*)0;
struct list_item$1sNode$ph* litem_443;
struct sNode* __dec_obj83;
struct list$1sNode$ph* __result_obj__295;
    if(    self->len==0) {
        litem_441=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value444=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1457, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_441->prev=((void*)0);
        litem_441->next=((void*)0);
        __dec_obj81=litem_441->item;
        litem_441->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_441;
        self->head=litem_441;
    }
    else if(    self->len==1) {
        litem_442=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value445=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1467, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_442->prev=self->head;
        litem_442->next=((void*)0);
        __dec_obj82=litem_442->item;
        litem_442->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_442;
        self->head->next=litem_442;
    }
    else {
        litem_443=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value446=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1477, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_443->prev=self->tail;
        litem_443->next=((void*)0);
        __dec_obj83=litem_443->item;
        litem_443->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_443;
        self->tail=litem_443;
    }
    self->len++;
    __result_obj__295 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__295;
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUE$ph$p_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_450;
struct CVALUE* __result_obj__296;
struct CVALUE* __result_obj__297;
struct CVALUE* result_451;
struct CVALUE* __result_obj__298;
result_450 = (void*)0;
result_451 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_450,0,sizeof(struct CVALUE*));
        __result_obj__296 = result_450;
        return __result_obj__296;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__297 = self->it->item;
        return __result_obj__297;
    }
    memset(&result_451,0,sizeof(struct CVALUE*));
    __result_obj__298 = result_451;
    return __result_obj__298;
}

static _Bool list$1CVALUE$ph$p_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph$p_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_453;
struct CVALUE* __result_obj__299;
struct CVALUE* __result_obj__300;
struct CVALUE* result_454;
struct CVALUE* __result_obj__301;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_453,0,sizeof(struct CVALUE*));
        __result_obj__299 = result_453;
        return __result_obj__299;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__300 = self->it->item;
        return __result_obj__300;
    }
    memset(&result_454,0,sizeof(struct CVALUE*));
    __result_obj__301 = result_454;
    return __result_obj__301;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_455;
int i_456;
struct CVALUE* __result_obj__302;
struct CVALUE* default_value_457;
struct CVALUE* __result_obj__303;
default_value_457 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_455=self->head;
    i_456=0;
    while(it_455!=((void*)0)) {
        if(        position==i_456) {
            __result_obj__302 = come_increment_ref_count(it_455->item);
            come_call_finalizer3(__result_obj__302,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__302;
        }
        it_455=it_455->next;
        i_456++;
    }
    memset(&default_value_457,0,sizeof(struct CVALUE*));
    __result_obj__303 = come_increment_ref_count(default_value_457);
    come_call_finalizer3(default_value_457,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__303,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

static struct list$1void$ph* list$1void$ph$p_push_back(struct list$1void$ph* self, void* item){
void* __right_value457 = (void*)0;
struct list_item$1void$ph* litem_459;
void* __dec_obj84;
void* __right_value458 = (void*)0;
struct list_item$1void$ph* litem_460;
void* __dec_obj85;
void* __right_value459 = (void*)0;
struct list_item$1void$ph* litem_461;
void* __dec_obj86;
struct list$1void$ph* __result_obj__304;
    if(    self->len==0) {
        litem_459=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value457=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1457, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_459->prev=((void*)0);
        litem_459->next=((void*)0);
        __dec_obj84=litem_459->item;
        litem_459->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_459;
        self->head=litem_459;
    }
    else if(    self->len==1) {
        litem_460=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value458=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1467, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_460->prev=self->head;
        litem_460->next=((void*)0);
        __dec_obj85=litem_460->item;
        litem_460->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj85,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_460;
        self->head->next=litem_460;
    }
    else {
        litem_461=(struct list_item$1void$ph*)come_increment_ref_count(((struct list_item$1void$ph*)(__right_value459=(struct list_item$1void$ph*)come_calloc(1, sizeof(struct list_item$1void$ph)*(1), "./comelang.h", 1477, "struct list_item$1void$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_461->prev=self->tail;
        litem_461->next=((void*)0);
        __dec_obj86=litem_461->item;
        litem_461->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_461;
        self->tail=litem_461;
    }
    self->len++;
    __result_obj__304 = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__304;
}

static void tuple2$2char$phsGenericsFun$p$p_finalize(struct tuple2$2char$phsGenericsFun$p* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void* map$2void$phvoid$ph$p_at(struct map$2void$phvoid$ph* self, void* key, void* default_value){
unsigned int hash_468;
unsigned int it_469;
void* __result_obj__305;
void* __result_obj__306;
void* __result_obj__307;
void* __result_obj__308;
    hash_468=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_469=hash_468;
    while((_Bool)1) {
        if(        self->item_existance[it_469]) {
            if(            come_call_equals((void*)0, self->keys[it_469], key)) {
                __result_obj__305 = come_increment_ref_count(self->items[it_469]);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__305,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__305;
            }
            it_469++;
            if(            it_469>=self->size) {
                it_469=0;
            }
            else if(            it_469==hash_468) {
                __result_obj__306 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                come_call_finalizer3(__result_obj__306,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                return __result_obj__306;
            }
        }
        else {
            __result_obj__307 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(__result_obj__307,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__307;
        }
    }
    __result_obj__308 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__308,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__308;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void* list$1void$ph$p_operator_load_element(struct list$1void$ph* self, int position){
struct list_item$1void$ph* it_485;
int i_486;
void* __result_obj__310;
void* default_value_487;
void* __result_obj__311;
default_value_487 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_485=self->head;
    i_486=0;
    while(it_485!=((void*)0)) {
        if(        position==i_486) {
            __result_obj__310 = come_increment_ref_count(it_485->item);
            come_call_finalizer3(__result_obj__310,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            return __result_obj__310;
        }
        it_485=it_485->next;
        i_486++;
    }
    memset(&default_value_487,0,sizeof(void*));
    __result_obj__311 = come_increment_ref_count(((struct sType*)default_value_487));
    come_call_finalizer3(default_value_487,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    come_call_finalizer3(__result_obj__311,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    return __result_obj__311;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo* info){
void* __right_value495 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj96;
struct sTupleNode* __result_obj__313;
    ((struct sNodeBase*)(__right_value495=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value495,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj96=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj96,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __right_value496 = (void*)0;
char* __result_obj__314;
    __result_obj__314 = come_increment_ref_count(((char*)(__right_value496=__builtin_string("sTupleNode"))));
    (__right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__314 = come_decrement_ref_count2(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__314;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_496;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1void$ph* tuple_types_497;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1CVALUE$ph* tuple_values_498;
int n_499;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_500;
struct tuple2$2char$phsNode$ph* it_503;
struct tuple2$2char$phsNode$ph* multiple_assign_var6 = (void*)0;
char* name_506=0;
struct sNode* node_507=0;
void* __right_value501 = (void*)0;
_Bool _if_conditional5;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* value_node_508;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* exp_509;
_Bool Value_510;
_Bool __result_obj__321;
_Bool Value_511;
_Bool __result_obj__322;
void* __right_value506 = (void*)0;
struct CVALUE* come_value_512;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* type_514;
char* __dec_obj101;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sType* type_515;
struct list$1void$ph* o2_saved_516;
struct sType* it_519;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct CVALUE* obj_value_522;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct buffer* num_string_523;
void* __right_value522 = (void*)0;
struct sType* type2_524;
void* __right_value523 = (void*)0;
char* type_name_525;
struct sType* any_type_526;
void* __right_value524 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var7 = (void*)0;
char* finalizer_name_527=0;
char* cloner_name_528=0;
char* get_hash_key_name_529=0;
char* equaler_name_530=0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj102;
void* __right_value527 = (void*)0;
struct sType* type3_531;
void* __right_value528 = (void*)0;
struct sType* __dec_obj103;
void* __right_value529 = (void*)0;
struct sType* obj_type_532;
char* fun_name_533;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var8 = (void*)0;
char* name_534=0;
struct sGenericsFun* generics_fun_535=0;
char* generics_fun_name_536;
void* __right_value532 = (void*)0;
struct sFun* fun_537;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
char* __dec_obj104;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_3_538=0;
char* Err_539=0;
_Bool _if_conditional6;
_Bool __result_obj__331;
void* __right_value537 = (void*)0;
struct sType* result_type_540;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1CVALUE$ph* come_params_541;
void* __right_value540 = (void*)0;
_Bool _if_conditional7;
void* __right_value541 = (void*)0;
int i_542;
struct list$1CVALUE$ph* o2_saved_543;
struct CVALUE* it_544;
void* __right_value542 = (void*)0;
struct CVALUE* come_value_545;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
_Bool _if_conditional8;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* buf_546;
int j_547;
struct list$1CVALUE$ph* o2_saved_548;
struct CVALUE* it_549;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct CVALUE* come_value2_550;
void* __right_value550 = (void*)0;
char* __dec_obj105;
void* __right_value551 = (void*)0;
struct sType* __dec_obj106;
_Bool __result_obj__332;
    tuple_elements_496=self->tuple_elements;
    tuple_types_497=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 516, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    tuple_values_498=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 517, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_499=0;
    for(    o2_saved_500=(tuple_elements_496),it_503=list$1tuple2$2char$phsNode$ph$ph$p_begin((o2_saved_500));    !list$1tuple2$2char$phsNode$ph$ph$p_end((o2_saved_500));    it_503=list$1tuple2$2char$phsNode$ph$ph$p_next((o2_saved_500))    ){
        multiple_assign_var6=it_503;
        name_506=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_507=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value501=node_507->kind(node_507->_protocol_obj))),"sWildCard"))),        (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_508=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value502=xsprintf("Value"))),info));
            (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_509=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_508),(char*)come_increment_ref_count(xsprintf("v%d",n_499+1)),info));
            Value_510=node_compile(exp_509,info);
            if(            !Value_510) {
                __result_obj__321 = (_Bool)0;
                ((value_node_508) ? value_node_508 = come_decrement_ref_count2(value_node_508, ((struct sNode*)value_node_508)->finalize, ((struct sNode*)value_node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_509) ? exp_509 = come_decrement_ref_count2(exp_509, ((struct sNode*)exp_509)->finalize, ((struct sNode*)exp_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_507) ? node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(tuple_types_497,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_498,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__321;
            }
            else {
            }
            ((value_node_508) ? value_node_508 = come_decrement_ref_count2(value_node_508, ((struct sNode*)value_node_508)->finalize, ((struct sNode*)value_node_508)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_509) ? exp_509 = come_decrement_ref_count2(exp_509, ((struct sNode*)exp_509)->finalize, ((struct sNode*)exp_509)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            Value_511=node_compile(node_507,info);
            if(            !Value_511) {
                __result_obj__322 = (_Bool)0;
                (name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_507) ? node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(tuple_types_497,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_498,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__322;
            }
            else {
            }
        }
        come_value_512=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_498,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_512)));
        type_514=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_512->type));
        __dec_obj101=type_514->mTupleName;
        type_514->mTupleName=(char*)come_increment_ref_count(name_506);
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1void$ph$p_push_back(tuple_types_497,(struct sType*)come_increment_ref_count(type_514));
        n_499++;
        (name_506 = come_decrement_ref_count2(name_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_507) ? node_507 = come_decrement_ref_count2(node_507, ((struct sNode*)node_507)->finalize, ((struct sNode*)node_507)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_515=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 547, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value515=xsprintf("tuple%d",list$1void$ph$p_length(tuple_types_497)))),(_Bool)0,info));
    (__right_value515 = come_decrement_ref_count2(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_516=(struct list$1void$ph*)come_increment_ref_count((tuple_types_497)),it_519=((struct sType*)list$1void$ph$p_begin((o2_saved_516)));    !list$1void$ph$p_end((o2_saved_516));    it_519=((struct sType*)list$1void$ph$p_next((o2_saved_516)))    ){
        list$1void$ph$p_push_back(type_515->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value517=come_call_cloner(sType_clone, it_519))))));
        come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_516,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 553, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_523=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 555, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_523,"1");
    type2_524=(struct sType*)come_increment_ref_count(solve_generics(type_515,type_515,info));
    type_name_525=(char*)come_increment_ref_count(make_type_name_string(type2_524,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_526=(struct sType*)come_increment_ref_count(type2_524);
    any_type_526->mPointerNum=1;
    any_type_526->mHeap=(_Bool)1;
    multiple_assign_var7=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value524=create_vtable((struct sType*)come_increment_ref_count(any_type_526),info)));
    finalizer_name_527=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_528=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_529=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_530=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    come_call_finalizer3(__right_value524,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj102=obj_value_522->c_value;
    obj_value_522->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_525,type_name_525,((char*)(__right_value525=buffer_to_string(num_string_523))),info->sname,info->sline,type_name_525,finalizer_name_527,cloner_name_528,get_hash_key_name_529,equaler_name_530));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_531=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_524));
    type3_531->mPointerNum++;
    type3_531->mHeap=(_Bool)1;
    type2_524->mHeap=(_Bool)1;
    __dec_obj103=obj_value_522->type;
    obj_value_522->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_524));
    come_call_finalizer3(__dec_obj103,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_522->type->mPointerNum++;
    obj_value_522->var=((void*)0);
    append_object_to_right_values2(obj_value_522,(struct sType*)come_increment_ref_count(type3_531),info,(_Bool)0);
    obj_type_532=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_524));
    fun_name_533="initialize";
    multiple_assign_var8=((struct tuple2$2char$phsGenericsFun$p*)(__right_value531=make_generics_function(obj_type_532,(char*)come_increment_ref_count(__builtin_string(fun_name_533)),info,(_Bool)1)));
    name_534=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_535=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value531,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_536=(char*)come_increment_ref_count(name_534);
    fun_537=((struct sFun*)((void*)(__right_value532=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_536,((void*)0)))));
    come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_537==((void*)0)) {
        __dec_obj104=generics_fun_name_536;
        generics_fun_name_536=(char*)come_increment_ref_count(create_method_name(obj_type_532,(_Bool)0,((char*)(__right_value533=__builtin_string(fun_name_533))),info,(_Bool)1));
        __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_537=((struct sFun*)((void*)(__right_value535=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_536,((void*)0)))));
        come_call_finalizer3(__right_value535,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_537==((void*)0)) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value536=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_536,info->come_fun->mName)));
            come_exception_var_3_538=multiple_assign_var9->v1;
            Err_539=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional6=(Err_539)),            come_call_finalizer3(__right_value536,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result_obj__331 = (_Bool)1;
                (Err_539 = come_decrement_ref_count2(Err_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_497,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_498,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_525 = come_decrement_ref_count2(type_name_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(any_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
                (finalizer_name_527 = come_decrement_ref_count2(finalizer_name_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_528 = come_decrement_ref_count2(cloner_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_529 = come_decrement_ref_count2(get_hash_key_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_530 = come_decrement_ref_count2(equaler_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_534 = come_decrement_ref_count2(name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_536 = come_decrement_ref_count2(generics_fun_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__331;
            }
            else {
            }
            (Err_539 = come_decrement_ref_count2(Err_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_540=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_537->mResultType));
    result_type_540->mStatic=(_Bool)0;
    come_params_541=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 604, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional7=(((struct sType*)((void*)(__right_value540=list$1void$ph$p_operator_load_element(fun_537->mParamTypes,0))))->mHeap&&obj_value_522->type->mHeap)),    come_call_finalizer3(__right_value540,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)((void*)(__right_value541=list$1void$ph$p_operator_load_element(fun_537->mParamTypes,0)))),obj_value_522->type,obj_value_522,info,(_Bool)1);
        come_call_finalizer3(__right_value541,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_541,(struct CVALUE*)come_increment_ref_count(obj_value_522));
    i_542=1;
    for(    o2_saved_543=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_498)),it_544=list$1CVALUE$ph$p_begin((o2_saved_543));    !list$1CVALUE$ph$p_end((o2_saved_543));    it_544=list$1CVALUE$ph$p_next((o2_saved_543))    ){
        come_value_545=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_544));
        if(        (_if_conditional8=(((struct sType*)((void*)(__right_value543=list$1void$ph$p_operator_load_element(fun_537->mParamTypes,i_542))))&&((struct sType*)((void*)(__right_value544=list$1void$ph$p_operator_load_element(fun_537->mParamTypes,i_542))))->mHeap&&come_value_545->type->mHeap)),        come_call_finalizer3(__right_value543,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value544,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)((void*)(__right_value545=list$1void$ph$p_operator_load_element(fun_537->mParamTypes,i_542)))),come_value_545->type,come_value_545,info,(_Bool)1);
            come_call_finalizer3(__right_value545,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_541,(struct CVALUE*)come_increment_ref_count(come_value_545));
        i_542++;
        come_call_finalizer3(come_value_545,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_543,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_546,generics_fun_name_536);
    buffer_append_str(buf_546,"(");
    j_547=0;
    for(    o2_saved_548=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_541)),it_549=list$1CVALUE$ph$p_begin((o2_saved_548));    !list$1CVALUE$ph$p_end((o2_saved_548));    it_549=list$1CVALUE$ph$p_next((o2_saved_548))    ){
        buffer_append_str(buf_546,it_549->c_value);
        if(        j_547!=list$1CVALUE$ph$p_length(come_params_541)-1) {
            buffer_append_str(buf_546,",");
        }
        j_547++;
    }
    come_call_finalizer3(o2_saved_548,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_546,")");
    come_value2_550=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 640, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj105=come_value2_550->c_value;
    come_value2_550->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_546));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=come_value2_550->type;
    come_value2_550->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_540));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_550->type->mStatic=(_Bool)0;
    come_value2_550->var=((void*)0);
    if(    result_type_540->mHeap) {
        append_object_to_right_values2(come_value2_550,(struct sType*)come_increment_ref_count(result_type_540),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_550->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_550));
    __result_obj__332 = (_Bool)1;
    come_call_finalizer3(tuple_types_497,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_498,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_523,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_525 = come_decrement_ref_count2(type_name_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_526,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_527 = come_decrement_ref_count2(finalizer_name_527, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_528 = come_decrement_ref_count2(cloner_name_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_529 = come_decrement_ref_count2(get_hash_key_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_530 = come_decrement_ref_count2(equaler_name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_531,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_532,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_534 = come_decrement_ref_count2(name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_536 = come_decrement_ref_count2(generics_fun_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_540,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_541,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_550,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__332;
}

static void list$1tuple2$2char$phsNode$ph$ph_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_494;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_495;
    it_494=self->head;
    while(it_494!=((void*)0)) {
        prev_it_495=it_494;
        it_494=it_494->next;
        come_call_finalizer3(prev_it_495,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer3(self->tuple_elements,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_501;
struct tuple2$2char$phsNode$ph* __result_obj__315;
struct tuple2$2char$phsNode$ph* __result_obj__316;
struct tuple2$2char$phsNode$ph* result_502;
struct tuple2$2char$phsNode$ph* __result_obj__317;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_501,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__315 = result_501;
        return __result_obj__315;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__316 = self->it->item;
        return __result_obj__316;
    }
    memset(&result_502,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__317 = result_502;
    return __result_obj__317;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph$p_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph$p_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_504;
struct tuple2$2char$phsNode$ph* __result_obj__318;
struct tuple2$2char$phsNode$ph* __result_obj__319;
struct tuple2$2char$phsNode$ph* result_505;
struct tuple2$2char$phsNode$ph* __result_obj__320;
result_504 = (void*)0;
result_505 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_504,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__318 = result_504;
        return __result_obj__318;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__319 = self->it->item;
        return __result_obj__319;
    }
    memset(&result_505,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__320 = result_505;
    return __result_obj__320;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__323;
void* __right_value507 = (void*)0;
struct CVALUE* result_513;
void* __right_value508 = (void*)0;
char* __dec_obj97;
void* __right_value509 = (void*)0;
struct sType* __dec_obj98;
void* __right_value510 = (void*)0;
char* __dec_obj99;
void* __right_value511 = (void*)0;
char* __dec_obj100;
struct CVALUE* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__323 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__323,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__323;
    }
    result_513=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj97=result_513->c_value;
        result_513->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj98=result_513->type;
        result_513->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj98,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_513->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_513->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj99=result_513->c_value_without_right_value_objects;
        result_513->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj100=result_513->c_value_without_cast_object_value;
        result_513->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__324 = come_increment_ref_count(result_513);
    come_call_finalizer3(result_513,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

static int list$1void$ph$p_length(struct list$1void$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1void$ph$p_begin(struct list$1void$ph* self){
void* result_517;
void* __result_obj__325;
void* __result_obj__326;
void* result_518;
void* __result_obj__327;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(void*));
        __result_obj__325 = result_517;
        return __result_obj__325;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__326 = self->it->item;
        return __result_obj__326;
    }
    memset(&result_518,0,sizeof(void*));
    __result_obj__327 = result_518;
    return __result_obj__327;
}

static _Bool list$1void$ph$p_end(struct list$1void$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1void$ph$p_next(struct list$1void$ph* self){
void* result_520;
void* __result_obj__328;
void* __result_obj__329;
void* result_521;
void* __result_obj__330;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(void*));
        __result_obj__328 = result_520;
        return __result_obj__328;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__329 = self->it->item;
        return __result_obj__329;
    }
    memset(&result_521,0,sizeof(void*));
    __result_obj__330 = result_521;
    return __result_obj__330;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value552 = (void*)0;
struct list$1sNode$ph* __dec_obj107;
struct sSomeNode* __result_obj__333;
    ((struct sNodeBase*)(__right_value552=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value552,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj107=self->tuple_elements;
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj107,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__333 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __right_value553 = (void*)0;
char* __result_obj__334;
    __result_obj__334 = come_increment_ref_count(((char*)(__right_value553=__builtin_string("sSomeNode"))));
    (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__334 = come_decrement_ref_count2(__result_obj__334, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__334;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_551;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1void$ph* tuple_types_552;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1CVALUE$ph* tuple_values_553;
struct list$1sNode$ph* o2_saved_554;
struct sNode* it_555;
_Bool Value_556;
_Bool __result_obj__335;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_557;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* type_558;
struct list$1void$ph* o2_saved_559;
struct sType* it_560;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct CVALUE* obj_value_561;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct buffer* num_string_562;
void* __right_value569 = (void*)0;
struct sType* type2_563;
void* __right_value570 = (void*)0;
char* type_name_564;
void* __right_value571 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var10 = (void*)0;
char* finalizer_name_565=0;
char* cloner_name_566=0;
char* get_hash_key_name_567=0;
char* equaler_name_568=0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
char* __dec_obj108;
void* __right_value574 = (void*)0;
struct sType* type3_569;
void* __right_value575 = (void*)0;
struct sType* __dec_obj109;
void* __right_value576 = (void*)0;
struct sType* obj_type_570;
char* fun_name_571;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var11 = (void*)0;
char* name_572=0;
struct sGenericsFun* generics_fun_573=0;
char* generics_fun_name_574;
void* __right_value579 = (void*)0;
struct sFun* fun_575;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
char* __dec_obj110;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_4_576=0;
char* Err_577=0;
_Bool _if_conditional9;
_Bool __result_obj__336;
void* __right_value584 = (void*)0;
struct sType* result_type_578;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1CVALUE$ph* come_params_579;
void* __right_value587 = (void*)0;
_Bool _if_conditional10;
void* __right_value588 = (void*)0;
int i_580;
struct list$1CVALUE$ph* o2_saved_581;
struct CVALUE* it_582;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_583;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
_Bool _if_conditional11;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct buffer* buf_584;
int j_585;
struct list$1CVALUE$ph* o2_saved_586;
struct CVALUE* it_587;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct CVALUE* come_value2_588;
void* __right_value597 = (void*)0;
char* __dec_obj111;
void* __right_value598 = (void*)0;
struct sType* __dec_obj112;
_Bool __result_obj__337;
    tuple_elements_551=self->tuple_elements;
    tuple_types_552=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 677, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    tuple_values_553=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 678, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_554=(tuple_elements_551),it_555=list$1sNode$ph$p_begin((o2_saved_554));    !list$1sNode$ph$p_end((o2_saved_554));    it_555=list$1sNode$ph$p_next((o2_saved_554))    ){
        Value_556=node_compile(it_555,info);
        if(        !Value_556) {
            __result_obj__335 = (_Bool)0;
            come_call_finalizer3(tuple_types_552,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_553,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__335;
        }
        else {
        }
        come_value_557=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_553,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_557)));
        list$1void$ph$p_push_back(tuple_types_552,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_557->type)));
        come_call_finalizer3(come_value_557,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_558=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 692, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value562=xsprintf("tuple%d",list$1void$ph$p_length(tuple_types_552)))),(_Bool)0,info));
    (__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_559=(struct list$1void$ph*)come_increment_ref_count((tuple_types_552)),it_560=((struct sType*)list$1void$ph$p_begin((o2_saved_559)));    !list$1void$ph$p_end((o2_saved_559));    it_560=((struct sType*)list$1void$ph$p_next((o2_saved_559)))    ){
        list$1void$ph$p_push_back(type_558->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value564=come_call_cloner(sType_clone, it_560))))));
        come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_559,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_561=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 698, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_562=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 700, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_562,"1");
    type2_563=(struct sType*)come_increment_ref_count(solve_generics(type_558,type_558,info));
    type_name_564=(char*)come_increment_ref_count(make_type_name_string(type2_563,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var10=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value571=create_vtable((struct sType*)come_increment_ref_count(type2_563),info)));
    finalizer_name_565=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    cloner_name_566=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    get_hash_key_name_567=(char*)come_increment_ref_count(multiple_assign_var10->v3);
    equaler_name_568=(char*)come_increment_ref_count(multiple_assign_var10->v4);
    come_call_finalizer3(__right_value571,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj108=obj_value_561->c_value;
    obj_value_561->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_564,type_name_564,((char*)(__right_value572=buffer_to_string(num_string_562))),info->sname,info->sline,type_name_564));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_569=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_563));
    type3_569->mPointerNum++;
    type3_569->mHeap=(_Bool)1;
    type2_563->mHeap=(_Bool)1;
    __dec_obj109=obj_value_561->type;
    obj_value_561->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_563));
    come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_561->type->mPointerNum++;
    obj_value_561->var=((void*)0);
    append_object_to_right_values2(obj_value_561,(struct sType*)come_increment_ref_count(type3_569),info,(_Bool)0);
    obj_type_570=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_563));
    fun_name_571="initialize";
    multiple_assign_var11=((struct tuple2$2char$phsGenericsFun$p*)(__right_value578=make_generics_function(obj_type_570,(char*)come_increment_ref_count(__builtin_string(fun_name_571)),info,(_Bool)1)));
    name_572=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_573=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value578,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_574=(char*)come_increment_ref_count(name_572);
    fun_575=((struct sFun*)((void*)(__right_value579=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_574,((void*)0)))));
    come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_575==((void*)0)) {
        __dec_obj110=generics_fun_name_574;
        generics_fun_name_574=(char*)come_increment_ref_count(create_method_name(obj_type_570,(_Bool)0,((char*)(__right_value580=__builtin_string(fun_name_571))),info,(_Bool)1));
        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_575=((struct sFun*)((void*)(__right_value582=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_574,((void*)0)))));
        come_call_finalizer3(__right_value582,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_575==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value583=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_574,info->come_fun->mName)));
            come_exception_var_4_576=multiple_assign_var12->v1;
            Err_577=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_577)),            come_call_finalizer3(__right_value583,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result_obj__336 = (_Bool)1;
                (Err_577 = come_decrement_ref_count2(Err_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_552,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_553,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_562,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_563,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_564 = come_decrement_ref_count2(type_name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_565 = come_decrement_ref_count2(finalizer_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_566 = come_decrement_ref_count2(cloner_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_567 = come_decrement_ref_count2(get_hash_key_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_568 = come_decrement_ref_count2(equaler_name_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_569,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_572 = come_decrement_ref_count2(name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__336;
            }
            else {
            }
            (Err_577 = come_decrement_ref_count2(Err_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_578=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_575->mResultType));
    result_type_578->mStatic=(_Bool)0;
    come_params_579=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 745, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional10=(((struct sType*)((void*)(__right_value587=list$1void$ph$p_operator_load_element(fun_575->mParamTypes,0))))->mHeap&&obj_value_561->type->mHeap)),    come_call_finalizer3(__right_value587,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)((void*)(__right_value588=list$1void$ph$p_operator_load_element(fun_575->mParamTypes,0)))),obj_value_561->type,obj_value_561,info,(_Bool)1);
        come_call_finalizer3(__right_value588,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_579,(struct CVALUE*)come_increment_ref_count(obj_value_561));
    i_580=1;
    for(    o2_saved_581=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_553)),it_582=list$1CVALUE$ph$p_begin((o2_saved_581));    !list$1CVALUE$ph$p_end((o2_saved_581));    it_582=list$1CVALUE$ph$p_next((o2_saved_581))    ){
        come_value_583=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_582));
        if(        (_if_conditional11=(((struct sType*)((void*)(__right_value590=list$1void$ph$p_operator_load_element(fun_575->mParamTypes,i_580))))&&((struct sType*)((void*)(__right_value591=list$1void$ph$p_operator_load_element(fun_575->mParamTypes,i_580))))->mHeap&&come_value_583->type->mHeap)),        come_call_finalizer3(__right_value590,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value591,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)((void*)(__right_value592=list$1void$ph$p_operator_load_element(fun_575->mParamTypes,i_580)))),come_value_583->type,come_value_583,info,(_Bool)1);
            come_call_finalizer3(__right_value592,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_579,(struct CVALUE*)come_increment_ref_count(come_value_583));
        i_580++;
        come_call_finalizer3(come_value_583,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_581,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_584=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_584,generics_fun_name_574);
    buffer_append_str(buf_584,"(");
    j_585=0;
    for(    o2_saved_586=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_579)),it_587=list$1CVALUE$ph$p_begin((o2_saved_586));    !list$1CVALUE$ph$p_end((o2_saved_586));    it_587=list$1CVALUE$ph$p_next((o2_saved_586))    ){
        buffer_append_str(buf_584,it_587->c_value);
        if(        j_585!=list$1CVALUE$ph$p_length(come_params_579)-1) {
            buffer_append_str(buf_584,",");
        }
        j_585++;
    }
    come_call_finalizer3(o2_saved_586,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_584,")");
    come_value2_588=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj111=come_value2_588->c_value;
    come_value2_588->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_584));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=come_value2_588->type;
    come_value2_588->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_578));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_588->type->mStatic=(_Bool)0;
    come_value2_588->var=((void*)0);
    if(    result_type_578->mHeap) {
        append_object_to_right_values2(come_value2_588,(struct sType*)come_increment_ref_count(result_type_578),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_588->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_588));
    __result_obj__337 = (_Bool)1;
    come_call_finalizer3(tuple_types_552,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_553,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_562,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_563,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_564 = come_decrement_ref_count2(type_name_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_565 = come_decrement_ref_count2(finalizer_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_566 = come_decrement_ref_count2(cloner_name_566, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_567 = come_decrement_ref_count2(get_hash_key_name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_568 = come_decrement_ref_count2(equaler_name_568, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_569,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_570,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_572 = come_decrement_ref_count2(name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_574 = come_decrement_ref_count2(generics_fun_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_578,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_579,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_588,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__337;
}

static void sSomeNode_finalize(struct sSomeNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value599 = (void*)0;
struct sNullReturnValue* __result_obj__338;
    ((struct sNodeBase*)(__right_value599=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value599,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__338 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__338,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__338;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __right_value600 = (void*)0;
char* __result_obj__339;
    __result_obj__339 = come_increment_ref_count(((char*)(__right_value600=__builtin_string("sNullReturnValue"))));
    (__right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__339 = come_decrement_ref_count2(__result_obj__339, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__339;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct CVALUE* come_value_589;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct buffer* buf_590;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* var_name_592;
void* __right_value607 = (void*)0;
struct sType* result_type_593;
void* __right_value608 = (void*)0;
struct sType* result_type2_594;
struct sType* left_type_595;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct CVALUE* come_value2_596;
char* __dec_obj113;
struct sType* __dec_obj114;
    if(    info->come_fun) {
        come_value_589=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_590=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_591=0;
        num_591++;
        var_name_592=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value605=int_to_string(num_591)))));
        (__right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_593=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_594=(struct sType*)come_increment_ref_count(solve_generics(result_type_593,info->generics_type,info));
        left_type_595=(struct sType*)come_increment_ref_count(result_type2_594);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value609=make_define_var(left_type_595,var_name_592,(_Bool)0,info))));
        (__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_592,((char*)(__right_value610=make_type_name_string(left_type_595,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_596=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 834, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj113=come_value2_596->c_value;
        come_value2_596->c_value=(char*)come_increment_ref_count(var_name_592);
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=come_value2_596->type;
        come_value2_596->type=(struct sType*)come_increment_ref_count(result_type2_594);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_596->type->mStatic=(_Bool)0;
        come_value2_596->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_596));
        come_call_finalizer3(come_value_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_590,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_592 = come_decrement_ref_count2(var_name_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_593,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_594,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_595,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value617 = (void*)0;
struct sNode* __result_obj__342;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 851, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value614=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 851, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result_obj__342 = come_increment_ref_count(((struct sNode*)(__right_value617=_inf_value2)));
    come_call_finalizer3(__right_value614,sNullReturnValue_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value617) ? __right_value617 = come_decrement_ref_count2(__right_value617, ((struct sNode*)__right_value617)->finalize, ((struct sNode*)__right_value617)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count2(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__342;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
struct sNullReturnValue* __result_obj__340;
void* __right_value615 = (void*)0;
struct sNullReturnValue* result_597;
void* __right_value616 = (void*)0;
char* __dec_obj115;
struct sNullReturnValue* __result_obj__341;
    if(    self==(void*)0) {
        __result_obj__340 = (void*)0;
        return __result_obj__340;
    }
    result_597=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_597->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_597->sname;
        result_597->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_597->sline_real=self->sline_real;
    }
    __result_obj__341 = result_597;
    come_call_finalizer3(result_597,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__341;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value618 = (void*)0;
struct sNullReturnValueOfException* __result_obj__343;
    ((struct sNodeBase*)(__right_value618=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value618,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__343 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__343,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__343;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __right_value619 = (void*)0;
char* __result_obj__344;
    __result_obj__344 = come_increment_ref_count(((char*)(__right_value619=__builtin_string("sNullReturnValue"))));
    (__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__344 = come_decrement_ref_count2(__result_obj__344, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__344;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct CVALUE* come_value_598;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct buffer* buf_599;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
char* var_name_601;
void* __right_value626 = (void*)0;
struct sType* result_type_602;
void* __right_value627 = (void*)0;
struct sType* result_type2_603;
struct sType* __dec_obj116;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct sType* left_type_604;
void* __right_value630 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_5_605=0;
char* Err_606=0;
_Bool _if_conditional12;
_Bool __result_obj__345;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct CVALUE* come_value2_607;
char* __dec_obj117;
struct sType* __dec_obj118;
    if(    info->come_fun) {
        come_value_598=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 869, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_600=0;
        num_600++;
        var_name_601=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value624=int_to_string(num_600)))));
        (__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_603=(struct sType*)come_increment_ref_count(solve_generics(result_type_602,info->generics_type,info));
        if(        result_type2_603->mNoSolvedGenericsType) {
            __dec_obj116=result_type2_603;
            result_type2_603=(struct sType*)come_increment_ref_count(result_type2_603->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_604=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value628=list$1void$ph$p_operator_load_element(result_type2_603->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value628,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        left_type_604==((void*)0)||string_operator_not_equals(result_type2_603->mClass->mName,"tuple2")) {
            multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value630=err_msg(info,"function is not exception type")));
            come_exception_var_5_605=multiple_assign_var13->v1;
            Err_606=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional12=(Err_606)),            come_call_finalizer3(__right_value630,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                __result_obj__345 = (_Bool)1;
                (Err_606 = come_decrement_ref_count2(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_603,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__345;
            }
            else {
            }
            (Err_606 = come_decrement_ref_count2(Err_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value631=make_define_var(left_type_604,var_name_601,(_Bool)0,info))));
        (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_601,((char*)(__right_value632=make_type_name_string(left_type_604,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_607=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 897, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj117=come_value2_607->c_value;
        come_value2_607->c_value=(char*)come_increment_ref_count(var_name_601);
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj118=come_value2_607->type;
        come_value2_607->type=(struct sType*)come_increment_ref_count(left_type_604);
        come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_607->type->mStatic=(_Bool)0;
        come_value2_607->var=((void*)0);
        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_607));
        come_call_finalizer3(come_value_598,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_601 = come_decrement_ref_count2(var_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_602,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_603,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_604,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_607,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value639 = (void*)0;
struct sNode* __result_obj__348;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 914, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value636=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 914, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result_obj__348 = come_increment_ref_count(((struct sNode*)(__right_value639=_inf_value3)));
    come_call_finalizer3(__right_value636,sNullReturnValueOfException_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value639) ? __right_value639 = come_decrement_ref_count2(__right_value639, ((struct sNode*)__right_value639)->finalize, ((struct sNode*)__right_value639)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count2(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__348;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
struct sNullReturnValueOfException* __result_obj__346;
void* __right_value637 = (void*)0;
struct sNullReturnValueOfException* result_608;
void* __right_value638 = (void*)0;
char* __dec_obj119;
struct sNullReturnValueOfException* __result_obj__347;
    if(    self==(void*)0) {
        __result_obj__346 = (void*)0;
        return __result_obj__346;
    }
    result_608=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_608->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_608->sname;
        result_608->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_608->sline_real=self->sline_real;
    }
    __result_obj__347 = result_608;
    come_call_finalizer3(result_608,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __right_value640 = (void*)0;
struct sType* __dec_obj120;
struct sNullValue* __result_obj__349;
    ((struct sNodeBase*)(__right_value640=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value640,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj120=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__349 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__349,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__349;
}

char* sNullValue_kind(struct sNullValue* self){
void* __right_value641 = (void*)0;
char* __result_obj__350;
    __result_obj__350 = come_increment_ref_count(((char*)(__right_value641=__builtin_string("sNullValue"))));
    (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__350 = come_decrement_ref_count2(__result_obj__350, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__350;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_609;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct buffer* buf_610;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
char* var_name_612;
struct sType* left_type_613;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct CVALUE* come_value2_614;
char* __dec_obj121;
struct sType* __dec_obj122;
_Bool __result_obj__351;
    come_value_609=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 933, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_610=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 935, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    static int num_611=0;
    num_611++;
    var_name_612=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value646=int_to_string(num_611)))));
    (__right_value646 = come_decrement_ref_count2(__right_value646, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_613=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value648=make_define_var(left_type_613,var_name_612,(_Bool)0,info))));
    (__right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_612,((char*)(__right_value649=make_type_name_string(left_type_613,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_614=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj121=come_value2_614->c_value;
    come_value2_614->c_value=(char*)come_increment_ref_count(var_name_612);
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj122=come_value2_614->type;
    come_value2_614->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_614->type->mStatic=(_Bool)0;
    come_value2_614->var=((void*)0);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_614));
    __result_obj__351 = (_Bool)1;
    come_call_finalizer3(come_value_609,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_610,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_612 = come_decrement_ref_count2(var_name_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_type_613,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_614,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__351;
}

static void sNullValue_finalize(struct sNullValue* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value657 = (void*)0;
struct sNode* __result_obj__354;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 963, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value653=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 963, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result_obj__354 = come_increment_ref_count(((struct sNode*)(__right_value657=_inf_value4)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value653,sNullValue_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value657) ? __right_value657 = come_decrement_ref_count2(__right_value657, ((struct sNode*)__right_value657)->finalize, ((struct sNode*)__right_value657)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count2(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__354;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
struct sNullValue* __result_obj__352;
void* __right_value654 = (void*)0;
struct sNullValue* result_615;
void* __right_value655 = (void*)0;
char* __dec_obj123;
void* __right_value656 = (void*)0;
struct sType* __dec_obj124;
struct sNullValue* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = (void*)0;
        return __result_obj__352;
    }
    result_615=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_615->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj123=result_615->sname;
        result_615->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_615->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj124=result_615->type;
        result_615->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__353 = result_615;
    come_call_finalizer3(result_615,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNode$ph* tuple_elements, struct sInfo* info){
void* __right_value658 = (void*)0;
struct list$1sNode$ph* __dec_obj125;
struct sNoneNode* __result_obj__355;
    ((struct sNodeBase*)(__right_value658=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value658,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj125=self->tuple_elements;
    self->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj125,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__355 = come_increment_ref_count(self);
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__355,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__355;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __right_value659 = (void*)0;
char* __result_obj__356;
    __result_obj__356 = come_increment_ref_count(((char*)(__right_value659=__builtin_string("sNoneNode"))));
    (__right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__356 = come_decrement_ref_count2(__result_obj__356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__356;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNode$ph* tuple_elements_616;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1void$ph* tuple_types_617;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1CVALUE$ph* tuple_values_618;
int i_619;
struct list$1sNode$ph* o2_saved_620;
struct sNode* it_621;
_Bool Value_622;
_Bool __result_obj__357;
void* __right_value664 = (void*)0;
struct CVALUE* come_value_623;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* string_type_624;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_6_625=0;
char* Err_626=0;
_Bool _if_conditional13;
_Bool __result_obj__358;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sType* type_627;
struct list$1void$ph* o2_saved_628;
struct sType* it_629;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct CVALUE* obj_value_630;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct buffer* num_string_631;
void* __right_value679 = (void*)0;
struct sType* type2_632;
void* __right_value680 = (void*)0;
char* type_name_633;
void* __right_value681 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var15 = (void*)0;
char* finalizer_name_634=0;
char* cloner_name_635=0;
char* get_hash_key_name_636=0;
char* equaler_name_637=0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* __dec_obj126;
void* __right_value684 = (void*)0;
struct sType* type3_638;
void* __right_value685 = (void*)0;
struct sType* __dec_obj127;
void* __right_value686 = (void*)0;
struct sType* obj_type_639;
char* fun_name_640;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var16 = (void*)0;
char* name_641=0;
struct sGenericsFun* generics_fun_642=0;
char* generics_fun_name_643;
void* __right_value689 = (void*)0;
struct sFun* fun_644;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
char* __dec_obj128;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_7_645=0;
char* Err_646=0;
_Bool _if_conditional14;
_Bool __result_obj__359;
void* __right_value694 = (void*)0;
struct sType* result_type_647;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct list$1CVALUE$ph* come_params_648;
void* __right_value697 = (void*)0;
_Bool _if_conditional15;
void* __right_value698 = (void*)0;
struct list$1CVALUE$ph* o2_saved_649;
struct CVALUE* it_650;
void* __right_value699 = (void*)0;
struct CVALUE* come_value_651;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
_Bool _if_conditional16;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct buffer* buf_652;
int j_653;
struct list$1CVALUE$ph* o2_saved_654;
struct CVALUE* it_655;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct CVALUE* come_value2_656;
void* __right_value707 = (void*)0;
char* __dec_obj129;
void* __right_value708 = (void*)0;
struct sType* __dec_obj130;
_Bool __result_obj__360;
    tuple_elements_616=self->tuple_elements;
    tuple_types_617=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 983, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
    tuple_values_618=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 984, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_619=0;
    for(    o2_saved_620=(tuple_elements_616),it_621=list$1sNode$ph$p_begin((o2_saved_620));    !list$1sNode$ph$p_end((o2_saved_620));    it_621=list$1sNode$ph$p_next((o2_saved_620))    ){
        Value_622=node_compile(it_621,info);
        if(        !Value_622) {
            __result_obj__357 = (_Bool)0;
            come_call_finalizer3(tuple_types_617,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_618,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            return __result_obj__357;
        }
        else {
        }
        come_value_623=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUE$ph$p_push_back(tuple_values_618,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_623)));
        list$1void$ph$p_push_back(tuple_types_617,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_623->type)));
        if(        i_619==1) {
            string_type_624=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 999, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
            string_type_624->mHeap=(_Bool)1;
            multiple_assign_var14=((struct tuple2$2bool$char$ph*)(__right_value670=check_assign_type(((char*)(__right_value669=xsprintf("invalid none type"))),string_type_624,come_value_623->type,come_value_623,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_6_625=multiple_assign_var14->v1;
            Err_626=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional13=(Err_626)),            (__right_value669 = come_decrement_ref_count2(__right_value669, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value670,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result_obj__358 = (_Bool)1;
                come_call_finalizer3(string_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
                (Err_626 = come_decrement_ref_count2(Err_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_types_617,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_618,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__358;
            }
            else {
            }
            come_call_finalizer3(string_type_624,sType_finalize, 0, 0, 0, 0, (void*)0);
            (Err_626 = come_decrement_ref_count2(Err_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_619++;
        come_call_finalizer3(come_value_623,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_627=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1009, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value672=xsprintf("tuple%d",list$1void$ph$p_length(tuple_types_617)))),(_Bool)0,info));
    (__right_value672 = come_decrement_ref_count2(__right_value672, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_628=(struct list$1void$ph*)come_increment_ref_count((tuple_types_617)),it_629=((struct sType*)list$1void$ph$p_begin((o2_saved_628)));    !list$1void$ph$p_end((o2_saved_628));    it_629=((struct sType*)list$1void$ph$p_next((o2_saved_628)))    ){
        list$1void$ph$p_push_back(type_627->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value674=come_call_cloner(sType_clone, it_629))))));
        come_call_finalizer3(__right_value674,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_628,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_630=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1015, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_631=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1017, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_631,"1");
    type2_632=(struct sType*)come_increment_ref_count(solve_generics(type_627,type_627,info));
    type_name_633=(char*)come_increment_ref_count(make_type_name_string(type2_632,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var15=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value681=create_vtable((struct sType*)come_increment_ref_count(type2_632),info)));
    finalizer_name_634=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    cloner_name_635=(char*)come_increment_ref_count(multiple_assign_var15->v2);
    get_hash_key_name_636=(char*)come_increment_ref_count(multiple_assign_var15->v3);
    equaler_name_637=(char*)come_increment_ref_count(multiple_assign_var15->v4);
    come_call_finalizer3(__right_value681,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj126=obj_value_630->c_value;
    obj_value_630->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_633,type_name_633,((char*)(__right_value682=buffer_to_string(num_string_631))),info->sname,info->sline,type_name_633));
    __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_638=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_632));
    type3_638->mPointerNum++;
    type3_638->mHeap=(_Bool)1;
    type2_632->mHeap=(_Bool)1;
    __dec_obj127=obj_value_630->type;
    obj_value_630->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_632));
    come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_630->type->mPointerNum++;
    obj_value_630->var=((void*)0);
    append_object_to_right_values2(obj_value_630,(struct sType*)come_increment_ref_count(type3_638),info,(_Bool)0);
    obj_type_639=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_632));
    fun_name_640="initialize";
    multiple_assign_var16=((struct tuple2$2char$phsGenericsFun$p*)(__right_value688=make_generics_function(obj_type_639,(char*)come_increment_ref_count(__builtin_string(fun_name_640)),info,(_Bool)1)));
    name_641=(char*)come_increment_ref_count(multiple_assign_var16->v1);
    generics_fun_642=multiple_assign_var16->v2;
    come_call_finalizer3(__right_value688,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_643=(char*)come_increment_ref_count(name_641);
    fun_644=((struct sFun*)((void*)(__right_value689=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_643,((void*)0)))));
    come_call_finalizer3(__right_value689,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_644==((void*)0)) {
        __dec_obj128=generics_fun_name_643;
        generics_fun_name_643=(char*)come_increment_ref_count(create_method_name(obj_type_639,(_Bool)0,((char*)(__right_value690=__builtin_string(fun_name_640))),info,(_Bool)1));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_644=((struct sFun*)((void*)(__right_value692=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_643,((void*)0)))));
        come_call_finalizer3(__right_value692,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_644==((void*)0)) {
            multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value693=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_643,info->come_fun->mName)));
            come_exception_var_7_645=multiple_assign_var17->v1;
            Err_646=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_646)),            come_call_finalizer3(__right_value693,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                __result_obj__359 = (_Bool)1;
                (Err_646 = come_decrement_ref_count2(Err_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_617,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_618,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_632,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_633 = come_decrement_ref_count2(type_name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_634 = come_decrement_ref_count2(finalizer_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_635 = come_decrement_ref_count2(cloner_name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_636 = come_decrement_ref_count2(get_hash_key_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_637 = come_decrement_ref_count2(equaler_name_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_638,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_643 = come_decrement_ref_count2(generics_fun_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__359;
            }
            else {
            }
            (Err_646 = come_decrement_ref_count2(Err_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_647=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_644->mResultType));
    result_type_647->mStatic=(_Bool)0;
    come_params_648=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1062, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional15=(((struct sType*)((void*)(__right_value697=list$1void$ph$p_operator_load_element(fun_644->mParamTypes,0))))->mHeap&&obj_value_630->type->mHeap)),    come_call_finalizer3(__right_value697,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional15) {
        std_move(((struct sType*)((void*)(__right_value698=list$1void$ph$p_operator_load_element(fun_644->mParamTypes,0)))),obj_value_630->type,obj_value_630,info,(_Bool)1);
        come_call_finalizer3(__right_value698,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_648,(struct CVALUE*)come_increment_ref_count(obj_value_630));
    i_619=1;
    for(    o2_saved_649=(struct list$1CVALUE$ph*)come_increment_ref_count((tuple_values_618)),it_650=list$1CVALUE$ph$p_begin((o2_saved_649));    !list$1CVALUE$ph$p_end((o2_saved_649));    it_650=list$1CVALUE$ph$p_next((o2_saved_649))    ){
        come_value_651=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_650));
        if(        (_if_conditional16=(((struct sType*)((void*)(__right_value700=list$1void$ph$p_operator_load_element(fun_644->mParamTypes,i_619))))&&((struct sType*)((void*)(__right_value701=list$1void$ph$p_operator_load_element(fun_644->mParamTypes,i_619))))->mHeap&&come_value_651->type->mHeap)),        come_call_finalizer3(__right_value700,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value701,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional16) {
            std_move(((struct sType*)((void*)(__right_value702=list$1void$ph$p_operator_load_element(fun_644->mParamTypes,i_619)))),come_value_651->type,come_value_651,info,(_Bool)1);
            come_call_finalizer3(__right_value702,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUE$ph$p_push_back(come_params_648,(struct CVALUE*)come_increment_ref_count(come_value_651));
        i_619++;
        come_call_finalizer3(come_value_651,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_649,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buf_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1081, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_652,generics_fun_name_643);
    buffer_append_str(buf_652,"(");
    j_653=0;
    for(    o2_saved_654=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_648)),it_655=list$1CVALUE$ph$p_begin((o2_saved_654));    !list$1CVALUE$ph$p_end((o2_saved_654));    it_655=list$1CVALUE$ph$p_next((o2_saved_654))    ){
        buffer_append_str(buf_652,it_655->c_value);
        if(        j_653!=list$1CVALUE$ph$p_length(come_params_648)-1) {
            buffer_append_str(buf_652,",");
        }
        j_653++;
    }
    come_call_finalizer3(o2_saved_654,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_652,")");
    come_value2_656=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1098, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj129=come_value2_656->c_value;
    come_value2_656->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_652));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj130=come_value2_656->type;
    come_value2_656->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_647));
    come_call_finalizer3(__dec_obj130,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_656->type->mStatic=(_Bool)0;
    come_value2_656->var=((void*)0);
    if(    result_type_647->mHeap) {
        append_object_to_right_values2(come_value2_656,(struct sType*)come_increment_ref_count(result_type_647),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_656->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_656));
    __result_obj__360 = (_Bool)1;
    come_call_finalizer3(tuple_types_617,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_618,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_627,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_630,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_631,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_632,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_633 = come_decrement_ref_count2(type_name_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_634 = come_decrement_ref_count2(finalizer_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_635 = come_decrement_ref_count2(cloner_name_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_636 = come_decrement_ref_count2(get_hash_key_name_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_637 = come_decrement_ref_count2(equaler_name_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_638,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_641 = come_decrement_ref_count2(name_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_643 = come_decrement_ref_count2(generics_fun_name_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_648,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_656,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__360;
}

static void sNoneNode_finalize(struct sNoneNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        come_call_finalizer3(self->tuple_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo* info){
void* __right_value709 = (void*)0;
struct list$1sNode$ph* __dec_obj131;
struct list$1sNode$ph* __dec_obj132;
struct sMapNode* __result_obj__361;
    ((struct sNodeBase*)(__right_value709=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value709,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj131=self->map_key_elements;
    self->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj131,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj132=self->map_elements;
    self->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj132,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__361 = come_increment_ref_count(self);
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__361,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__361;
}

char* sMapNode_kind(struct sMapNode* self){
void* __right_value710 = (void*)0;
char* __result_obj__362;
    __result_obj__362 = come_increment_ref_count(((char*)(__right_value710=__builtin_string("sMapNode"))));
    (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__362 = come_decrement_ref_count2(__result_obj__362, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__362;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNode$ph* map_key_elements_657;
struct list$1sNode$ph* map_elements_658;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct list$1CVALUE$ph* key_params_659;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1CVALUE$ph* element_params_660;
struct sType* map_key_type_661;
struct sType* map_element_type_662;
int i_663;
void* __right_value715 = (void*)0;
struct sNode* key_elements_664;
void* __right_value716 = (void*)0;
struct sNode* elements_668;
void* __right_value717 = (void*)0;
_Bool _if_conditional17;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sNode* value_node_669;
struct sNode* exp_670;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_671;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sNode* __dec_obj133;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_672;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* __dec_obj134;
void* __right_value738 = (void*)0;
struct sNode* __dec_obj135;
_Bool Value_673;
_Bool __result_obj__365;
void* __right_value739 = (void*)0;
struct CVALUE* come_value_674;
void* __right_value740 = (void*)0;
struct sType* __dec_obj136;
_Bool Value_675;
_Bool __result_obj__366;
void* __right_value741 = (void*)0;
struct CVALUE* come_value_676;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_677=0;
char* Err_678=0;
_Bool _if_conditional18;
_Bool __result_obj__367;
void* __right_value744 = (void*)0;
struct sType* __dec_obj137;
void* __right_value745 = (void*)0;
_Bool _if_conditional19;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sNode* value_node_679;
struct sNode* exp2_680;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_681;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* __dec_obj138;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_682;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value766 = (void*)0;
struct sNode* __dec_obj140;
_Bool Value_683;
_Bool __result_obj__368;
void* __right_value767 = (void*)0;
struct CVALUE* come_value2_684;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_9_685=0;
char* Err_686=0;
_Bool _if_conditional20;
_Bool __result_obj__369;
void* __right_value770 = (void*)0;
struct sType* __dec_obj141;
_Bool Value_687;
_Bool __result_obj__370;
void* __right_value771 = (void*)0;
struct CVALUE* come_value2_688;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_10_689=0;
char* Err_690=0;
_Bool _if_conditional21;
_Bool __result_obj__371;
void* __right_value774 = (void*)0;
struct sType* __dec_obj142;
void* __right_value775 = (void*)0;
struct sType* key_type_values_692;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
char* var_name_693;
void* __right_value778 = (void*)0;
struct sVar* var__694;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sType* element_type_values_695;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
char* var_name2_696;
void* __right_value783 = (void*)0;
struct sVar* var2__697;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct buffer* source_698;
int i_699;
void* __right_value787 = (void*)0;
struct CVALUE* key_param_700;
void* __right_value788 = (void*)0;
struct CVALUE* element_param_701;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sType* map_type_702;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sType* obj_type_703;
char* fun_name_704;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var21 = (void*)0;
char* name_705=0;
struct sGenericsFun* generics_fun_706=0;
char* generics_fun_name_707;
void* __right_value796 = (void*)0;
struct sFun* fun_708;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
char* __dec_obj143;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var22 = (void*)0;
int come_exception_var_11_709=0;
char* Err_710=0;
_Bool _if_conditional22;
_Bool __result_obj__372;
void* __right_value801 = (void*)0;
struct sType* result_type_711;
struct sType* type_712;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct CVALUE* obj_value_713;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct buffer* num_string_714;
void* __right_value806 = (void*)0;
struct sType* type2_715;
void* __right_value807 = (void*)0;
char* type_name_716;
struct sType* any_type_717;
void* __right_value808 = (void*)0;
struct tuple4$4char$phchar$phchar$phchar$ph* multiple_assign_var23 = (void*)0;
char* finalizer_name_718=0;
char* cloner_name_719=0;
char* get_hash_key_name_720=0;
char* equaler_name_721=0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
char* __dec_obj144;
void* __right_value811 = (void*)0;
struct sType* type3_722;
void* __right_value812 = (void*)0;
struct sType* __dec_obj145;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1CVALUE$ph* come_params_723;
void* __right_value815 = (void*)0;
_Bool _if_conditional23;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct CVALUE* come_value2_724;
void* __right_value819 = (void*)0;
char* __dec_obj146;
struct sType* __dec_obj147;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct CVALUE* come_value3_725;
void* __right_value822 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct CVALUE* come_value4_726;
void* __right_value825 = (void*)0;
char* __dec_obj150;
struct sType* __dec_obj151;
int j_727;
struct list$1CVALUE$ph* o2_saved_728;
struct CVALUE* it_729;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct CVALUE* come_value5_730;
void* __right_value828 = (void*)0;
char* __dec_obj152;
void* __right_value829 = (void*)0;
struct sType* __dec_obj153;
_Bool __result_obj__373;
exp_670 = (void*)0;
exp2_680 = (void*)0;
    map_key_elements_657=self->map_key_elements;
    map_elements_658=self->map_elements;
    key_params_659=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1138, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_660=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1139, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_661=((void*)0);
    map_element_type_662=((void*)0);
    for(    i_663=0;    i_663<list$1sNode$ph$p_length(map_key_elements_657);    i_663++    ){
        key_elements_664=((struct sNode*)(__right_value715=list$1sNode$ph$p_operator_load_element(map_key_elements_657,i_663)));
        ((__right_value715) ? __right_value715 = come_decrement_ref_count2(__right_value715, ((struct sNode*)__right_value715)->finalize, ((struct sNode*)__right_value715)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        elements_668=((struct sNode*)(__right_value716=list$1sNode$ph$p_operator_load_element(map_elements_658,i_663)));
        ((__right_value716) ? __right_value716 = come_decrement_ref_count2(__right_value716, ((struct sNode*)__right_value716)->finalize, ((struct sNode*)__right_value716)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        (_if_conditional17=(string_operator_equals(((char*)(__right_value717=key_elements_664->kind(key_elements_664->_protocol_obj))),"sWildCard"))),        (__right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional17) {
            value_node_669=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value718=xsprintf("Value"))),info));
            (__right_value718 = come_decrement_ref_count2(__right_value718, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_671=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1152, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_671,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1153, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_669))));
                __dec_obj133=exp_670;
                exp_670=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value725=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_669),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_671),((void*)0),0,((void*)0),info));
                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value725 = come_decrement_ref_count2(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_671,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_672=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1158, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_672,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1159, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_670))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_672,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1160, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_663,info)))));
                __dec_obj134=exp_670;
                exp_670=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value736=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_670),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_672),((void*)0),0,((void*)0),info));
                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj135=exp_670;
                exp_670=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_670,info));
                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_672,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_673=node_compile(exp_670,info);
            if(            !Value_673) {
                __result_obj__365 = (_Bool)0;
                ((value_node_669) ? value_node_669 = come_decrement_ref_count2(value_node_669, ((struct sNode*)value_node_669)->finalize, ((struct sNode*)value_node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp_670) ? exp_670 = come_decrement_ref_count2(exp_670, ((struct sNode*)exp_670)->finalize, ((struct sNode*)exp_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__365;
            }
            else {
            }
            come_value_674=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUE$ph$p_push_back(key_params_659,(struct CVALUE*)come_increment_ref_count(come_value_674));
            __dec_obj136=map_key_type_661;
            map_key_type_661=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_674->type));
            come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_669) ? value_node_669 = come_decrement_ref_count2(value_node_669, ((struct sNode*)value_node_669)->finalize, ((struct sNode*)value_node_669)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp_670) ? exp_670 = come_decrement_ref_count2(exp_670, ((struct sNode*)exp_670)->finalize, ((struct sNode*)exp_670)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value_674,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_675=node_compile(key_elements_664,info);
            if(            !Value_675) {
                __result_obj__366 = (_Bool)0;
                come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__366;
            }
            else {
            }
            come_value_676=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_661) {
                multiple_assign_var18=((struct tuple2$2bool$char$ph*)(__right_value743=check_assign_type(((char*)(__right_value742=xsprintf("invalid map key type"))),map_key_type_661,come_value_676->type,come_value_676,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_8_677=multiple_assign_var18->v1;
                Err_678=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                (_if_conditional18=(Err_678)),                (__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value743,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result_obj__367 = (_Bool)1;
                    (Err_678 = come_decrement_ref_count2(Err_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__367;
                }
                else {
                }
                (Err_678 = come_decrement_ref_count2(Err_678, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(key_params_659,(struct CVALUE*)come_increment_ref_count(come_value_676));
            __dec_obj137=map_key_type_661;
            map_key_type_661=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_676->type));
            come_call_finalizer3(__dec_obj137,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value_676,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional19=(string_operator_equals(((char*)(__right_value745=elements_668->kind(elements_668->_protocol_obj))),"sWildCard"))),        (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional19) {
            value_node_679=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value746=xsprintf("Value"))),info));
            (__right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_681=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1198, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_681,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1199, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_679))));
                __dec_obj138=exp2_680;
                exp2_680=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value753=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_679),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_681),((void*)0),0,((void*)0),info));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_681,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_682=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1204, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_682,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1205, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_680))));
                list$1tuple2$2char$phsNode$ph$ph$p_add(params_682,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1206, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_663,info)))));
                __dec_obj139=exp2_680;
                exp2_680=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value764=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_680),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_682),((void*)0),0,((void*)0),info));
                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj140=exp2_680;
                exp2_680=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_680,info));
                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_682,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_683=node_compile(exp2_680,info);
            if(            !Value_683) {
                __result_obj__368 = (_Bool)0;
                ((value_node_679) ? value_node_679 = come_decrement_ref_count2(value_node_679, ((struct sNode*)value_node_679)->finalize, ((struct sNode*)value_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((exp2_680) ? exp2_680 = come_decrement_ref_count2(exp2_680, ((struct sNode*)exp2_680)->finalize, ((struct sNode*)exp2_680)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__368;
            }
            else {
            }
            come_value2_684=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_662) {
                multiple_assign_var19=((struct tuple2$2bool$char$ph*)(__right_value769=check_assign_type(((char*)(__right_value768=xsprintf("invalid map element type"))),map_element_type_662,come_value2_684->type,come_value2_684,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_9_685=multiple_assign_var19->v1;
                Err_686=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional20=(Err_686)),                (__right_value768 = come_decrement_ref_count2(__right_value768, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value769,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional20) {
                    __result_obj__369 = (_Bool)1;
                    (Err_686 = come_decrement_ref_count2(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((value_node_679) ? value_node_679 = come_decrement_ref_count2(value_node_679, ((struct sNode*)value_node_679)->finalize, ((struct sNode*)value_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((exp2_680) ? exp2_680 = come_decrement_ref_count2(exp2_680, ((struct sNode*)exp2_680)->finalize, ((struct sNode*)exp2_680)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    come_call_finalizer3(come_value2_684,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__369;
                }
                else {
                }
                (Err_686 = come_decrement_ref_count2(Err_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(element_params_660,(struct CVALUE*)come_increment_ref_count(come_value2_684));
            __dec_obj141=map_element_type_662;
            map_element_type_662=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_684->type));
            come_call_finalizer3(__dec_obj141,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_679) ? value_node_679 = come_decrement_ref_count2(value_node_679, ((struct sNode*)value_node_679)->finalize, ((struct sNode*)value_node_679)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((exp2_680) ? exp2_680 = come_decrement_ref_count2(exp2_680, ((struct sNode*)exp2_680)->finalize, ((struct sNode*)exp2_680)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(come_value2_684,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_687=node_compile(elements_668,info);
            if(            !Value_687) {
                __result_obj__370 = (_Bool)0;
                come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result_obj__370;
            }
            else {
            }
            come_value2_688=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_662) {
                multiple_assign_var20=((struct tuple2$2bool$char$ph*)(__right_value773=check_assign_type(((char*)(__right_value772=xsprintf("invalid map element type"))),map_element_type_662,come_value2_688->type,come_value2_688,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_10_689=multiple_assign_var20->v1;
                Err_690=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                (_if_conditional21=(Err_690)),                (__right_value772 = come_decrement_ref_count2(__right_value772, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value773,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result_obj__371 = (_Bool)1;
                    (Err_690 = come_decrement_ref_count2(Err_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value2_688,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result_obj__371;
                }
                else {
                }
                (Err_690 = come_decrement_ref_count2(Err_690, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUE$ph$p_push_back(element_params_660,(struct CVALUE*)come_increment_ref_count(come_value2_688));
            __dec_obj142=map_element_type_662;
            map_element_type_662=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_688->type));
            come_call_finalizer3(__dec_obj142,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value2_688,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_691=0;
    key_type_values_692=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_661));
    list$1sNode$ph$p_push_back(key_type_values_692->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(key_params_659),info)));
    key_type_values_692->mHeap=(_Bool)0;
    var_name_693=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_691));
    add_variable_to_table(var_name_693,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_692)),info,(_Bool)0);
    var__694=get_variable_from_table(info->lv_table,var_name_693);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value779=make_define_var(key_type_values_692,var__694->mCValueName,(_Bool)0,info))));
    (__right_value779 = come_decrement_ref_count2(__right_value779, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_695=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_662));
    list$1sNode$ph$p_push_back(element_type_values_695->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUE$ph$p_length(element_params_660),info)));
    element_type_values_695->mHeap=(_Bool)0;
    var_name2_696=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_691));
    add_variable_to_table(var_name2_696,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_695)),info,(_Bool)0);
    var2__697=get_variable_from_table(info->lv_table,var_name2_696);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value784=make_define_var(element_type_values_695,var2__697->mCValueName,(_Bool)0,info))));
    (__right_value784 = come_decrement_ref_count2(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1271, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_698,"(");
    for(    i_699=0;    i_699<list$1CVALUE$ph$p_length(key_params_659);    i_699++    ){
        key_param_700=((struct CVALUE*)(__right_value787=list$1CVALUE$ph$p_operator_load_element(key_params_659,i_699)));
        come_call_finalizer3(__right_value787,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_701=((struct CVALUE*)(__right_value788=list$1CVALUE$ph$p_operator_load_element(element_params_660,i_699)));
        come_call_finalizer3(__right_value788,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_661->mHeap) {
            buffer_append_format(source_698,"%s[%d]=%s,\n",var__694->mCValueName,i_699,key_param_700->c_value);
        }
        else {
            buffer_append_format(source_698,"%s[%d]=%s,\n",var__694->mCValueName,i_699,key_param_700->c_value);
        }
        if(        map_element_type_662->mHeap) {
            buffer_append_format(source_698,"%s[%d]=%s,\n",var2__697->mCValueName,i_699,element_param_701->c_value);
        }
        else {
            buffer_append_format(source_698,"%s[%d]=%s,\n",var2__697->mCValueName,i_699,element_param_701->c_value);
        }
    }
    map_type_702=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1296, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"map",(_Bool)0,info));
    list$1void$ph$p_push_back(map_type_702->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value791=come_call_cloner(sType_clone, map_key_type_661))))));
    come_call_finalizer3(__right_value791,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1void$ph$p_push_back(map_type_702->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value792=come_call_cloner(sType_clone, map_element_type_662))))));
    come_call_finalizer3(__right_value792,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_703=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_702));
    fun_name_704="initialize_with_values";
    multiple_assign_var21=((struct tuple2$2char$phsGenericsFun$p*)(__right_value795=make_generics_function(obj_type_703,(char*)come_increment_ref_count(__builtin_string(fun_name_704)),info,(_Bool)1)));
    name_705=(char*)come_increment_ref_count(multiple_assign_var21->v1);
    generics_fun_706=multiple_assign_var21->v2;
    come_call_finalizer3(__right_value795,tuple2$2char$phsGenericsFun$p$p_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_707=(char*)come_increment_ref_count(name_705);
    fun_708=((struct sFun*)((void*)(__right_value796=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_707,((void*)0)))));
    come_call_finalizer3(__right_value796,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_708==((void*)0)) {
        __dec_obj143=generics_fun_name_707;
        generics_fun_name_707=(char*)come_increment_ref_count(create_method_name(obj_type_703,(_Bool)0,((char*)(__right_value797=__builtin_string(fun_name_704))),info,(_Bool)1));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value797 = come_decrement_ref_count2(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_708=((struct sFun*)((void*)(__right_value799=map$2void$phvoid$ph$p_at(info->funcs,generics_fun_name_707,((void*)0)))));
        come_call_finalizer3(__right_value799,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_708==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2int$char$ph*)(__right_value800=err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_707,info->come_fun->mName)));
            come_exception_var_11_709=multiple_assign_var22->v1;
            Err_710=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional22=(Err_710)),            come_call_finalizer3(__right_value800,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional22) {
                __result_obj__372 = (_Bool)1;
                (Err_710 = come_decrement_ref_count2(Err_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(key_type_values_692,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_693 = come_decrement_ref_count2(var_name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(element_type_values_695,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name2_696 = come_decrement_ref_count2(var_name2_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_705 = come_decrement_ref_count2(name_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_707 = come_decrement_ref_count2(generics_fun_name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__372;
            }
            else {
            }
            (Err_710 = come_decrement_ref_count2(Err_710, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_711=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_708->mResultType));
    result_type_711->mStatic=(_Bool)0;
    type_712=map_type_702;
    obj_value_713=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1325, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_714=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1327, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_714,"1");
    type2_715=(struct sType*)come_increment_ref_count(solve_generics(type_712,type_712,info));
    type_name_716=(char*)come_increment_ref_count(make_type_name_string(type2_715,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_717=(struct sType*)come_increment_ref_count(type2_715);
    any_type_717->mPointerNum=1;
    any_type_717->mHeap=(_Bool)1;
    multiple_assign_var23=((struct tuple4$4char$phchar$phchar$phchar$ph*)(__right_value808=create_vtable((struct sType*)come_increment_ref_count(any_type_717),info)));
    finalizer_name_718=(char*)come_increment_ref_count(multiple_assign_var23->v1);
    cloner_name_719=(char*)come_increment_ref_count(multiple_assign_var23->v2);
    get_hash_key_name_720=(char*)come_increment_ref_count(multiple_assign_var23->v3);
    equaler_name_721=(char*)come_increment_ref_count(multiple_assign_var23->v4);
    come_call_finalizer3(__right_value808,tuple4$4char$phchar$phchar$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj144=obj_value_713->c_value;
    obj_value_713->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_716,type_name_716,((char*)(__right_value809=buffer_to_string(num_string_714))),info->sname,info->sline,type_name_716,finalizer_name_718,cloner_name_719,get_hash_key_name_720,equaler_name_721));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value809 = come_decrement_ref_count2(__right_value809, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_722=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_715));
    type3_722->mPointerNum++;
    type3_722->mHeap=(_Bool)1;
    type2_715->mHeap=(_Bool)1;
    __dec_obj145=obj_value_713->type;
    obj_value_713->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_715));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_713->type->mPointerNum++;
    obj_value_713->var=((void*)0);
    append_object_to_right_values2(obj_value_713,(struct sType*)come_increment_ref_count(type3_722),info,(_Bool)0);
    come_params_723=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph$p_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "06str.c", 1353, "struct list$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional23=(((struct sType*)((void*)(__right_value815=list$1void$ph$p_operator_load_element(fun_708->mParamTypes,0))))->mHeap&&obj_value_713->type->mHeap)),    come_call_finalizer3(__right_value815,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional23) {
        std_move(((struct sType*)((void*)(__right_value816=list$1void$ph$p_operator_load_element(fun_708->mParamTypes,0)))),obj_value_713->type,obj_value_713,info,(_Bool)1);
        come_call_finalizer3(__right_value816,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUE$ph$p_push_back(come_params_723,(struct CVALUE*)come_increment_ref_count(obj_value_713));
    come_value2_724=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1360, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj146=come_value2_724->c_value;
    come_value2_724->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUE$ph$p_length(key_params_659)));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value2_724->type;
    come_value2_724->type=((void*)0);
    come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_724->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_723,(struct CVALUE*)come_increment_ref_count(come_value2_724));
    come_value3_725=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1368, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj148=come_value3_725->c_value;
    come_value3_725->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__694->mCValueName));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value3_725->type;
    come_value3_725->type=((void*)0);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_725->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_723,(struct CVALUE*)come_increment_ref_count(come_value3_725));
    come_value4_726=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1376, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj150=come_value4_726->c_value;
    come_value4_726->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__697->mCValueName));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value4_726->type;
    come_value4_726->type=((void*)0);
    come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_726->var=((void*)0);
    list$1CVALUE$ph$p_push_back(come_params_723,(struct CVALUE*)come_increment_ref_count(come_value4_726));
    buffer_append_str(source_698,generics_fun_name_707);
    buffer_append_str(source_698,"(");
    j_727=0;
    for(    o2_saved_728=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_723)),it_729=list$1CVALUE$ph$p_begin((o2_saved_728));    !list$1CVALUE$ph$p_end((o2_saved_728));    it_729=list$1CVALUE$ph$p_next((o2_saved_728))    ){
        buffer_append_str(source_698,it_729->c_value);
        if(        j_727!=list$1CVALUE$ph$p_length(come_params_723)-1) {
            buffer_append_str(source_698,",");
        }
        j_727++;
    }
    come_call_finalizer3(o2_saved_728,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_698,")");
    buffer_append_str(source_698,")");
    come_value5_730=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj152=come_value5_730->c_value;
    come_value5_730->c_value=(char*)come_increment_ref_count(buffer_to_string(source_698));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value5_730->type;
    come_value5_730->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_711));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_730->type->mStatic=(_Bool)0;
    come_value5_730->var=((void*)0);
    if(    result_type_711->mHeap) {
        append_object_to_right_values2(come_value5_730,(struct sType*)come_increment_ref_count(result_type_711),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_730->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_730));
    __result_obj__373 = (_Bool)1;
    come_call_finalizer3(key_params_659,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_660,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_661,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_692,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_693 = come_decrement_ref_count2(var_name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(element_type_values_695,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name2_696 = come_decrement_ref_count2(var_name2_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_698,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_702,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_705 = come_decrement_ref_count2(name_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_707 = come_decrement_ref_count2(generics_fun_name_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_713,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_714,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_715,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_716 = come_decrement_ref_count2(type_name_716, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_717,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_718 = come_decrement_ref_count2(finalizer_name_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_719 = come_decrement_ref_count2(cloner_name_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_720 = come_decrement_ref_count2(get_hash_key_name_720, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_721 = come_decrement_ref_count2(equaler_name_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_722,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_723,list$1CVALUE$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_724,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_725,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_726,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_730,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__373;
}

static void sMapNode_finalize(struct sMapNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        come_call_finalizer3(self->map_key_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        come_call_finalizer3(self->map_elements,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_665;
int i_666;
struct sNode* __result_obj__363;
struct sNode* default_value_667;
struct sNode* __result_obj__364;
default_value_667 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_665=self->head;
    i_666=0;
    while(it_665!=((void*)0)) {
        if(        position==i_666) {
            __result_obj__363 = come_increment_ref_count(it_665->item);
            ((__result_obj__363) ? __result_obj__363 = come_decrement_ref_count2(__result_obj__363, ((struct sNode*)__result_obj__363)->finalize, ((struct sNode*)__result_obj__363)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__363;
        }
        it_665=it_665->next;
        i_666++;
    }
    memset(&default_value_667,0,sizeof(struct sNode*));
    __result_obj__364 = come_increment_ref_count(default_value_667);
    ((default_value_667) ? default_value_667 = come_decrement_ref_count2(default_value_667, ((struct sNode*)default_value_667)->finalize, ((struct sNode*)default_value_667)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__364) ? __result_obj__364 = come_decrement_ref_count2(__result_obj__364, ((struct sNode*)__result_obj__364)->finalize, ((struct sNode*)__result_obj__364)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__364;
}

struct sNode* expression_node_v96(struct sInfo* info){
int sline_real_731;
int sline_732;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct list$1sNode$ph* exps_733;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* value_734;
char* head_of_last_line_735;
int len_736;
void* __right_value834 = (void*)0;
struct sNode* exp_737;
int sline2_738;
void* __right_value835 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c1_739=0;
char* Err_740=0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value843 = (void*)0;
struct sNode* __result_obj__376;
int sline_real_742;
int sline_743;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct buffer* value_744;
char* p_745;
int sline_746;
int sline2_747;
void* __right_value846 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c2_748=0;
char* Err_749=0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value850 = (void*)0;
struct sNode* __result_obj__377;
int sline_real_750;
int sline_751;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct buffer* value_752;
unsigned long  int size_753;
char* p_754;
int sline_755;
int len_756;
int sline2_757;
void* __right_value853 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c3_758=0;
char* Err_759=0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value859 = (void*)0;
struct sNode* __result_obj__380;
int sline_real_761;
int sline_762;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct buffer* buf_763;
void* __right_value862 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c4_764=0;
char* Err_765=0;
_Bool global_766;
_Bool ignore_case_767;
_Bool catch_exception_768;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value866 = (void*)0;
struct sNode* obj_769;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_770;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* method_block_771;
int method_block_sline_772;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1void$ph* method_generics_types_773;
void* __right_value908 = (void*)0;
struct sNode* node_774;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* __dec_obj159;
struct sNode* __result_obj__381;
int sline_real_775;
int sline_776;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct buffer* value_777;
char* p_778;
int sline_779;
int len_780;
int sline2_781;
void* __right_value913 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c5_782=0;
char* Err_783=0;
_Bool global_784;
_Bool ignore_case_785;
_Bool catch_exception_786;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value917 = (void*)0;
struct sNode* obj_787;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_788;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct buffer* method_block_789;
int method_block_sline_790;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct list$1void$ph* method_generics_types_791;
void* __right_value959 = (void*)0;
struct sNode* node_792;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sNode* __dec_obj160;
struct sNode* __result_obj__382;
int sline_real_793;
int c_794;
int n_795;
int n_796;
unsigned long long int n_799;
void* __right_value962 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c6_800=0;
char* Err_801=0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value967 = (void*)0;
struct sNode* __result_obj__385;
int sline_real_803;
unsigned int c_804;
_Bool quote_805;
int n_806;
int n_807;
unsigned long long int n_810;
unsigned char p2_811;
int size_812;
void* __right_value968 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_c7_814=0;
char* Err_815=0;
void* __right_value969 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_816=0;
char* Err_817=0;
void* __right_value970 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_c9_818=0;
char* Err_819=0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value975 = (void*)0;
struct sNode* __result_obj__388;
int sline_real_821;
int sline_822;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct buffer* value_823;
char* p_824;
int sline_825;
int sline2_826;
void* __right_value978 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c10_827=0;
char* Err_828=0;
int len_829;
void* __right_value979 = (void*)0;
unsigned int* wstr_830;
char* str_831;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value985 = (void*)0;
struct sNode* __result_obj__391;
int sline_real_833;
int sline_834;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct list$1sNode$ph* exps_835;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct buffer* value_836;
char* p_837;
int sline_838;
int len_839;
void* __right_value990 = (void*)0;
struct sNode* exp_840;
int sline2_841;
void* __right_value991 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c11_842=0;
char* Err_843=0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value995 = (void*)0;
struct sNode* __result_obj__392;
int sline_real_844;
char* p_845;
_Bool no_comma_846;
void* __right_value996 = (void*)0;
struct sNode* node_847;
char* p2_848;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct buffer* first_element_source_849;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct list$1sNode$ph* list_elements_850;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct list$1sNode$ph* map_keys_851;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct list$1sNode$ph* map_elements_852;
_Bool no_comma_853;
void* __right_value1005 = (void*)0;
struct sNode* node2_854;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1012 = (void*)0;
struct sNode* __result_obj__395;
_Bool no_comma_856;
void* __right_value1013 = (void*)0;
struct sNode* node2_857;
void* __right_value1014 = (void*)0;
struct sNode* node3_858;
void* __right_value1015 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c12_859=0;
char* Err_860=0;
void* __right_value1016 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var36 = (void*)0;
int come_exception_var_c13_861=0;
char* Err_862=0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1019 = (void*)0;
struct sNode* __result_obj__396;
_Bool no_comma_863;
void* __right_value1020 = (void*)0;
struct sNode* node2_864;
void* __right_value1021 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var37 = (void*)0;
int come_exception_var_c14_865=0;
char* Err_866=0;
void* __right_value1022 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c15_867=0;
char* Err_868=0;
void* __right_value1023 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var39 = (void*)0;
int come_exception_var_c16_869=0;
char* Err_870=0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1029 = (void*)0;
struct sNode* __result_obj__399;
void* __right_value1030 = (void*)0;
struct sNode* node_872;
struct sNode* __result_obj__400;
struct sNode* __result_obj__401;
memset(&c_794, 0, sizeof(int));
memset(&c_804, 0, sizeof(unsigned int));
memset(&quote_805, 0, sizeof(_Bool));
memset(&size_812, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_731=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_732=info->sline;
        exps_733=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 1432, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_734=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1433, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        head_of_last_line_735=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_735) {
                    buffer_trim(value_734,info->p-head_of_last_line_735);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_734,37);
                buffer_append_char(value_734,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_734,92);
                buffer_append_char(value_734,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_734,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_736=0;
                    while(xisdigit(*info->p)&&len_736<3) {
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        len_736++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_734,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_737=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_733,(struct sNode*)come_increment_ref_count(exp_737));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_734,"%s");
                    ((exp_737) ? exp_737 = come_decrement_ref_count2(exp_737, ((struct sNode*)exp_737)->finalize, ((struct sNode*)exp_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_734,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_738=info->sline;
                info->sline=sline_732;
                multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value835=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c1_739=multiple_assign_var24->v1;
                Err_740=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                ((Err_740)?(puts(Err_740),exit(0)):(0));
                come_call_finalizer3(__right_value835,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_740 = come_decrement_ref_count2(Err_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_734,92);
                    buffer_append_char(value_734,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_735=info->p;
                }
                else {
                    buffer_append_char(value_734,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_731;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1572, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value838=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1572, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_734)),(struct list$1sNode$ph*)come_increment_ref_count(exps_733),sline_732,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result_obj__376 = come_increment_ref_count(((struct sNode*)(__right_value843=_inf_value5)));
        come_call_finalizer3(exps_733,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_734,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value838,sSStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value843) ? __right_value843 = come_decrement_ref_count2(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__376) ? __result_obj__376 = come_decrement_ref_count2(__result_obj__376, ((struct sNode*)__result_obj__376)->finalize, ((struct sNode*)__result_obj__376)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__376;
        come_call_finalizer3(exps_733,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_734,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_742=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_743=info->sline;
        value_744=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1582, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_745=info->p;
                sline_746=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_745;
                    info->sline=sline_746;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_744,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_744,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_744,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_747=info->sline;
                info->sline=sline_743;
                multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value846=err_msg(info,"close \" to make c string value")));
                come_exception_var_c2_748=multiple_assign_var25->v1;
                Err_749=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_749)?(puts(Err_749),exit(0)):(0));
                come_call_finalizer3(__right_value846,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                info->sline=sline2_747;
                exit(2);
                (Err_749 = come_decrement_ref_count2(Err_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_744,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_742;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1635, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value849=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1635, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_744)),sline_743,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result_obj__377 = come_increment_ref_count(((struct sNode*)(__right_value850=_inf_value6)));
        come_call_finalizer3(value_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value849,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value850) ? __right_value850 = come_decrement_ref_count2(__right_value850, ((struct sNode*)__right_value850)->finalize, ((struct sNode*)__right_value850)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__377) ? __result_obj__377 = come_decrement_ref_count2(__result_obj__377, ((struct sNode*)__result_obj__377)->finalize, ((struct sNode*)__result_obj__377)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__377;
        come_call_finalizer3(value_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_750=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_751=info->sline;
        value_752=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1645, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        size_753=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_752,*info->p);
                info->p++;
                p_754=info->p;
                sline_755=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_754;
                    info->sline=sline_755;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_752,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_756=0;
                    while(xisdigit(*info->p)&&len_756<3) {
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        len_756++;
                    }
                    size_753++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_752,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                    }
                    size_753++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 110:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 116:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 114:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 118:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 102:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 97:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 98:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        case 92:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                        default:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        size_753++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_757=info->sline;
                info->sline=sline_751;
                multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value853=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c3_758=multiple_assign_var26->v1;
                Err_759=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                ((Err_759)?(puts(Err_759),exit(0)):(0));
                come_call_finalizer3(__right_value853,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_759 = come_decrement_ref_count2(Err_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_752,*info->p);
                info->p++;
                size_753++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_750;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1772, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value855=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1772, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_752),size_753,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result_obj__380 = come_increment_ref_count(((struct sNode*)(__right_value859=_inf_value7)));
        come_call_finalizer3(value_752,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value855,sBufferNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value859) ? __right_value859 = come_decrement_ref_count2(__right_value859, ((struct sNode*)__right_value859)->finalize, ((struct sNode*)__right_value859)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        come_call_finalizer3(value_752,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_761=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_762=info->sline;
        buf_763=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1781, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_763,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value862=err_msg(info,"require closing / for regex")));
                come_exception_var_c4_764=multiple_assign_var27->v1;
                Err_765=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_765)?(puts(Err_765),exit(0)):(0));
                come_call_finalizer3(__right_value862,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(5);
                (Err_765 = come_decrement_ref_count2(Err_765, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_char(buf_763,*info->p);
                info->p++;
            }
        }
        global_766=(_Bool)0;
        ignore_case_767=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_766=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_767=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_768=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_768=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1825, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value865=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1825, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_763)),sline_762,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_769=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value865,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        params_770=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1827, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1829, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_769))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1830, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_767)?(((struct sNode*)(__right_value873=create_int_node(1,info)))):(((struct sNode*)(__right_value874=create_int_node(0,info)))))))));
        ((__right_value873) ? __right_value873 = come_decrement_ref_count2(__right_value873, ((struct sNode*)__right_value873)->finalize, ((struct sNode*)__right_value873)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value874) ? __right_value874 = come_decrement_ref_count2(__right_value874, ((struct sNode*)__right_value874)->finalize, ((struct sNode*)__right_value874)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1831, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1832, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_766)?(((struct sNode*)(__right_value882=create_int_node(1,info)))):(((struct sNode*)(__right_value883=create_int_node(0,info)))))))));
        ((__right_value882) ? __right_value882 = come_decrement_ref_count2(__right_value882, ((struct sNode*)__right_value882)->finalize, ((struct sNode*)__right_value882)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value883) ? __right_value883 = come_decrement_ref_count2(__right_value883, ((struct sNode*)__right_value883)->finalize, ((struct sNode*)__right_value883)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1833, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1834, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1835, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1836, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_770,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1837, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_771=((void*)0);
        method_block_sline_772=info->sline;
        method_generics_types_773=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 1843, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        node_774=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_769),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_770),method_block_771,method_block_sline_772,method_generics_types_773,info));
        if(        !catch_exception_768) {
            __dec_obj159=node_774;
            node_774=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_774)),info));
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_761;
        __result_obj__381 = come_increment_ref_count(node_774);
        come_call_finalizer3(buf_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_769) ? obj_769 = come_decrement_ref_count2(obj_769, ((struct sNode*)obj_769)->finalize, ((struct sNode*)obj_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_770,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_773,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_774) ? node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        come_call_finalizer3(buf_763,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_769) ? obj_769 = come_decrement_ref_count2(obj_769, ((struct sNode*)obj_769)->finalize, ((struct sNode*)obj_769)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_770,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_773,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_774) ? node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_775=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_776=info->sline;
        value_777=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1861, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_778=info->p;
                sline_779=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_778;
                    info->sline=sline_779;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_777,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_780=0;
                    while(xisdigit(*info->p)&&len_780<3) {
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        len_780++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_777,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_777,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_781=info->sline;
                info->sline=sline_776;
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value913=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c5_782=multiple_assign_var28->v1;
                Err_783=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_783)?(puts(Err_783),exit(0)):(0));
                come_call_finalizer3(__right_value913,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_783 = come_decrement_ref_count2(Err_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_777,*info->p);
                info->p++;
            }
        }
        global_784=(_Bool)0;
        ignore_case_785=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_784=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_785=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_786=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_786=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1992, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value916=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1992, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_777)),sline_776,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_787=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value916,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
        params_788=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 1994, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1996, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_787))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1997, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_785)?(((struct sNode*)(__right_value924=create_int_node(1,info)))):(((struct sNode*)(__right_value925=create_int_node(0,info)))))))));
        ((__right_value924) ? __right_value924 = come_decrement_ref_count2(__right_value924, ((struct sNode*)__right_value924)->finalize, ((struct sNode*)__right_value924)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value925) ? __right_value925 = come_decrement_ref_count2(__right_value925, ((struct sNode*)__right_value925)->finalize, ((struct sNode*)__right_value925)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1998, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 1999, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_784)?(((struct sNode*)(__right_value933=create_int_node(1,info)))):(((struct sNode*)(__right_value934=create_int_node(0,info)))))))));
        ((__right_value933) ? __right_value933 = come_decrement_ref_count2(__right_value933, ((struct sNode*)__right_value933)->finalize, ((struct sNode*)__right_value933)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__right_value934) ? __right_value934 = come_decrement_ref_count2(__right_value934, ((struct sNode*)__right_value934)->finalize, ((struct sNode*)__right_value934)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2000, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2001, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2002, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2003, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2char$phsNode$ph$ph$p_add(params_788,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2004, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_789=((void*)0);
        method_block_sline_790=info->sline;
        method_generics_types_791=(struct list$1void$ph*)come_increment_ref_count(list$1void$ph$pp_initialize((struct list$1void$ph*)come_increment_ref_count((struct list$1void$ph*)come_calloc(1, sizeof(struct list$1void$ph)*(1), "06str.c", 2010, "struct list$1void$ph*", list$1void$ph$p_finalize, list$1void$ph$p_clone, list$1void$ph$p_get_hash_key, list$1void$ph$p_equals))));
        node_792=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_787),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_788),method_block_789,method_block_sline_790,method_generics_types_791,info));
        if(        !catch_exception_786) {
            __dec_obj160=node_792;
            node_792=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_792)),info));
            if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_775;
        __result_obj__382 = come_increment_ref_count(node_792);
        come_call_finalizer3(value_777,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_787) ? obj_787 = come_decrement_ref_count2(obj_787, ((struct sNode*)obj_787)->finalize, ((struct sNode*)obj_787)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_788,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_791,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_792) ? node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count2(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__382;
        come_call_finalizer3(value_777,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_787) ? obj_787 = come_decrement_ref_count2(obj_787, ((struct sNode*)obj_787)->finalize, ((struct sNode*)obj_787)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(params_788,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_791,list$1void$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((node_792) ? node_792 = come_decrement_ref_count2(node_792, ((struct sNode*)node_792)->finalize, ((struct sNode*)node_792)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==39) {
        sline_real_793=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_795=0;
                while(xisdigit(*info->p)) {
                    n_795=n_795*8+*info->p-48;
                    info->p++;
                }
                c_794=n_795;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_794=10;
                    info->p++;
                    break;
                    case 116:
                    c_794=9;
                    info->p++;
                    break;
                    case 114:
                    c_794=13;
                    info->p++;
                    break;
                    case 97:
                    c_794=7;
                    info->p++;
                    break;
                    case 102:
                    c_794=12;
                    info->p++;
                    break;
                    case 118:
                    c_794=11;
                    info->p++;
                    break;
                    case 98:
                    c_794=8;
                    info->p++;
                    break;
                    case 92:
                    c_794=92;
                    info->p++;
                    break;
                    case 48:
                    c_794=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_796=0;
                        while(xisdigit(*info->p)) {
                            n_796=n_796*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_794=n_796;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_797[128];
                        memset(&buf_797, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_797,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_798[2];
                            memset(&buf2_798, 0, sizeof(char)                            *(2)                            );
                            buf2_798[0]=*info->p;
                            buf2_798[1]=0;
                            info->p++;
                            strncat(buf_797,buf2_798,128);
                        }
                        n_799=strtoll(buf_797,((void*)0),0);
                        c_794=n_799;
                    }
                    break;
                    default:
                    c_794=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_794=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value962=err_msg(info,"close \' to make character value")));
            come_exception_var_c6_800=multiple_assign_var29->v1;
            Err_801=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            ((Err_801)?(puts(Err_801),exit(0)):(0));
            come_call_finalizer3(__right_value962,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            (Err_801 = come_decrement_ref_count2(Err_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_793;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2139, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value964=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2139, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_794,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result_obj__385 = come_increment_ref_count(((struct sNode*)(__right_value967=_inf_value10)));
            come_call_finalizer3(__right_value964,sCharNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value967) ? __right_value967 = come_decrement_ref_count2(__right_value967, ((struct sNode*)__right_value967)->finalize, ((struct sNode*)__right_value967)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__385) ? __result_obj__385 = come_decrement_ref_count2(__result_obj__385, ((struct sNode*)__result_obj__385)->finalize, ((struct sNode*)__result_obj__385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__385;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_803=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_805=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_806=0;
                while(xisdigit(*info->p)) {
                    n_806=n_806*8+*info->p-48;
                    info->p++;
                }
                c_804=n_806;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_804=10;
                    info->p++;
                    break;
                    case 116:
                    c_804=9;
                    info->p++;
                    break;
                    case 114:
                    c_804=13;
                    info->p++;
                    break;
                    case 97:
                    c_804=7;
                    info->p++;
                    break;
                    case 92:
                    c_804=92;
                    info->p++;
                    break;
                    case 48:
                    c_804=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_807=0;
                        while(xisdigit(*info->p)) {
                            n_807=n_807*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_804=n_807;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_808[128];
                        memset(&buf_808, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_808,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_809[2];
                            memset(&buf2_809, 0, sizeof(char)                            *(2)                            );
                            buf2_809[0]=*info->p;
                            buf2_809[1]=0;
                            info->p++;
                            strncat(buf_808,buf2_809,128);
                        }
                        n_810=strtoll(buf_808,((void*)0),0);
                        c_804=n_810;
                    }
                    break;
                    default:
                    c_804=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_805=(_Bool)0;
            p2_811=*(unsigned char*)info->p;
            if(            p2_811>127) {
                char str_813[4+1];
                memset(&str_813, 0, sizeof(char)                *(4+1)                );
                size_812=((p2_811&128)>>7)+((p2_811&64)>>6)+((p2_811&32)>>5)+((p2_811&16)>>4);
                if(                size_812>4) {
                    multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value968=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_exception_var_c7_814=multiple_assign_var30->v1;
                    Err_815=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                    ((Err_815)?(puts(Err_815),exit(0)):(0));
                    come_call_finalizer3(__right_value968,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    info->err_num++;
                    (Err_815 = come_decrement_ref_count2(Err_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    memcpy(str_813,info->p,size_812);
                    str_813[size_812]=0;
                    if(                    mbtowc(&c_804,str_813,size_812)<0) {
                        perror("mbtowc");
                        multiple_assign_var31=((struct tuple2$2int$char$ph*)(__right_value969=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_exception_var_c8_816=multiple_assign_var31->v1;
                        Err_817=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        ((Err_817)?(puts(Err_817),exit(0)):(0));
                        come_call_finalizer3(__right_value969,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        info->err_num++;
                        (Err_817 = come_decrement_ref_count2(Err_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        info->p+=size_812;
                    }
                }
            }
            else {
                c_804=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value970=err_msg(info,"close \' to make character value")));
            come_exception_var_c9_818=multiple_assign_var32->v1;
            Err_819=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_819)?(puts(Err_819),exit(0)):(0));
            come_call_finalizer3(__right_value970,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            info->err_num++;
            (Err_819 = come_decrement_ref_count2(Err_819, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_803;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2281, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value972=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2281, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_804,quote_805,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result_obj__388 = come_increment_ref_count(((struct sNode*)(__right_value975=_inf_value11)));
            come_call_finalizer3(__right_value972,sWCharNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value975) ? __right_value975 = come_decrement_ref_count2(__right_value975, ((struct sNode*)__right_value975)->finalize, ((struct sNode*)__right_value975)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__388) ? __result_obj__388 = come_decrement_ref_count2(__result_obj__388, ((struct sNode*)__result_obj__388)->finalize, ((struct sNode*)__result_obj__388)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__388;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_821=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_822=info->sline;
        value_823=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2292, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_824=info->p;
                sline_825=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_824;
                    info->sline=sline_825;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_823,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_823,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_823,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_826=info->sline;
                info->sline=sline_822;
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value978=err_msg(info,"close \" to make c string value")));
                come_exception_var_c10_827=multiple_assign_var33->v1;
                Err_828=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_828)?(puts(Err_828),exit(0)):(0));
                come_call_finalizer3(__right_value978,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_828 = come_decrement_ref_count2(Err_828, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_823,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_829=value_823->len;
        wstr_830=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_829+1)), "06str.c", 2343, "unsigned int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_831=value_823->buf;
        if(        mbstowcs(wstr_830,str_831,len_829+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_830[len_829]=0;
        info->sline_real=sline_real_821;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2355, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value981=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2355, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_830),sline_822,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result_obj__391 = come_increment_ref_count(((struct sNode*)(__right_value985=_inf_value12)));
        come_call_finalizer3(value_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_830 = come_decrement_ref_count2(wstr_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value981,sWStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value985) ? __right_value985 = come_decrement_ref_count2(__right_value985, ((struct sNode*)__right_value985)->finalize, ((struct sNode*)__right_value985)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__391) ? __result_obj__391 = come_decrement_ref_count2(__result_obj__391, ((struct sNode*)__result_obj__391)->finalize, ((struct sNode*)__result_obj__391)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__391;
        come_call_finalizer3(value_823,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_830 = come_decrement_ref_count2(wstr_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_833=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_834=info->sline;
        exps_835=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2365, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_836=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2366, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_837=info->p;
                sline_838=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_837;
                    info->sline=sline_838;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_836,37);
                buffer_append_char(value_836,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_836,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_839=0;
                    while(xisdigit(*info->p)&&len_839<3) {
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        len_839++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_836,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_840=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNode$ph$p_add(exps_835,(struct sNode*)come_increment_ref_count(exp_840));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_836,"%s");
                    ((exp_840) ? exp_840 = come_decrement_ref_count2(exp_840, ((struct sNode*)exp_840)->finalize, ((struct sNode*)exp_840)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_836,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_841=info->sline;
                info->sline=sline_834;
                multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value991=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c11_842=multiple_assign_var34->v1;
                Err_843=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                ((Err_843)?(puts(Err_843),exit(0)):(0));
                come_call_finalizer3(__right_value991,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_843 = come_decrement_ref_count2(Err_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_836,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_833;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2514, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value994=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2514, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_836)),(struct list$1sNode$ph*)come_increment_ref_count(exps_835),sline_834,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result_obj__392 = come_increment_ref_count(((struct sNode*)(__right_value995=_inf_value13)));
        come_call_finalizer3(exps_835,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value994,sSStringNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value995) ? __right_value995 = come_decrement_ref_count2(__right_value995, ((struct sNode*)__right_value995)->finalize, ((struct sNode*)__right_value995)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__392) ? __result_obj__392 = come_decrement_ref_count2(__result_obj__392, ((struct sNode*)__result_obj__392)->finalize, ((struct sNode*)__result_obj__392)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__392;
        come_call_finalizer3(exps_835,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_836,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_844=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_845=info->p;
        no_comma_846=info->no_comma;
        info->no_comma=(_Bool)1;
        node_847=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_846;
        p2_848=info->p;
        first_element_source_849=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2533, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(first_element_source_849,p_845,p2_848-p_845);
        buffer_append_char(first_element_source_849,0);
        list_elements_850=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2538, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_851=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2540, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_852=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2541, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(map_keys_851,(struct sNode*)come_increment_ref_count(node_847));
            no_comma_853=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_854=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_853;
            list$1sNode$ph$p_push_back(map_elements_852,(struct sNode*)come_increment_ref_count(node2_854));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2564, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1007=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2564, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_851),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_852),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result_obj__395 = come_increment_ref_count(((struct sNode*)(__right_value1012=_inf_value14)));
                ((node2_854) ? node2_854 = come_decrement_ref_count2(node2_854, ((struct sNode*)node2_854)->finalize, ((struct sNode*)node2_854)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(first_element_source_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_850,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_851,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_852,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1007,sMapNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value1012) ? __right_value1012 = come_decrement_ref_count2(__right_value1012, ((struct sNode*)__right_value1012)->finalize, ((struct sNode*)__right_value1012)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__395) ? __result_obj__395 = come_decrement_ref_count2(__result_obj__395, ((struct sNode*)__result_obj__395)->finalize, ((struct sNode*)__result_obj__395)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__395;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_856=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_857=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_856;
                    list$1sNode$ph$p_push_back(map_keys_851,(struct sNode*)come_increment_ref_count(node2_857));
                    expected_next_character(58,info);
                    no_comma_856=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_858=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_856;
                    list$1sNode$ph$p_push_back(map_elements_852,(struct sNode*)come_increment_ref_count(node3_858));
                    if(                    *info->p==0) {
                        multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value1015=err_msg(info,"invalid source end")));
                        come_exception_var_c12_859=multiple_assign_var35->v1;
                        Err_860=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        ((Err_860)?(puts(Err_860),exit(0)):(0));
                        come_call_finalizer3(__right_value1015,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_860 = come_decrement_ref_count2(Err_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_857) ? node2_857 = come_decrement_ref_count2(node2_857, ((struct sNode*)node2_857)->finalize, ((struct sNode*)node2_857)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        ((node3_858) ? node3_858 = come_decrement_ref_count2(node3_858, ((struct sNode*)node3_858)->finalize, ((struct sNode*)node3_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        break;
                    }
                    else {
                        multiple_assign_var36=((struct tuple2$2int$char$ph*)(__right_value1016=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_exception_var_c13_861=multiple_assign_var36->v1;
                        Err_862=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                        ((Err_862)?(puts(Err_862),exit(0)):(0));
                        come_call_finalizer3(__right_value1016,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_862 = come_decrement_ref_count2(Err_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_857) ? node2_857 = come_decrement_ref_count2(node2_857, ((struct sNode*)node2_857)->finalize, ((struct sNode*)node2_857)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node3_858) ? node3_858 = come_decrement_ref_count2(node3_858, ((struct sNode*)node3_858)->finalize, ((struct sNode*)node3_858)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2609, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1018=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2609, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(map_keys_851),(struct list$1sNode$ph*)come_increment_ref_count(map_elements_852),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result_obj__396 = come_increment_ref_count(((struct sNode*)(__right_value1019=_inf_value15)));
                ((node2_854) ? node2_854 = come_decrement_ref_count2(node2_854, ((struct sNode*)node2_854)->finalize, ((struct sNode*)node2_854)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(first_element_source_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_850,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_851,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_852,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1018,sMapNode_finalize, 0, 1, 0, 0, (void*)0);
                ((__right_value1019) ? __right_value1019 = come_decrement_ref_count2(__right_value1019, ((struct sNode*)__right_value1019)->finalize, ((struct sNode*)__right_value1019)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__396) ? __result_obj__396 = come_decrement_ref_count2(__result_obj__396, ((struct sNode*)__result_obj__396)->finalize, ((struct sNode*)__result_obj__396)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__396;
            }
            ((node2_854) ? node2_854 = come_decrement_ref_count2(node2_854, ((struct sNode*)node2_854)->finalize, ((struct sNode*)node2_854)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(list_elements_850,(struct sNode*)come_increment_ref_count(node_847));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNode$ph$p_push_back(list_elements_850,(struct sNode*)come_increment_ref_count(node_847));
            while((_Bool)1) {
                no_comma_863=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_864=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_863;
                list$1sNode$ph$p_push_back(list_elements_850,(struct sNode*)come_increment_ref_count(node2_864));
                if(                *info->p==0) {
                    multiple_assign_var37=((struct tuple2$2int$char$ph*)(__right_value1021=err_msg(info,"invalid source end")));
                    come_exception_var_c14_865=multiple_assign_var37->v1;
                    Err_866=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                    ((Err_866)?(puts(Err_866),exit(0)):(0));
                    come_call_finalizer3(__right_value1021,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_866 = come_decrement_ref_count2(Err_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_864) ? node2_864 = come_decrement_ref_count2(node2_864, ((struct sNode*)node2_864)->finalize, ((struct sNode*)node2_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
                else {
                    multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1022=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_exception_var_c15_867=multiple_assign_var38->v1;
                    Err_868=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_868)?(puts(Err_868),exit(0)):(0));
                    come_call_finalizer3(__right_value1022,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_868 = come_decrement_ref_count2(Err_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_864) ? node2_864 = come_decrement_ref_count2(node2_864, ((struct sNode*)node2_864)->finalize, ((struct sNode*)node2_864)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
        }
        else {
            multiple_assign_var39=((struct tuple2$2int$char$ph*)(__right_value1023=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_exception_var_c16_869=multiple_assign_var39->v1;
            Err_870=(char*)come_increment_ref_count(multiple_assign_var39->v2);
            ((Err_870)?(puts(Err_870),exit(0)):(0));
            come_call_finalizer3(__right_value1023,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_870 = come_decrement_ref_count2(Err_870, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sNode$ph$p_length(list_elements_850)>0) {
            info->sline_real=sline_real_844;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2661, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1025=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2661, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(list_elements_850),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result_obj__399 = come_increment_ref_count(((struct sNode*)(__right_value1029=_inf_value16)));
            ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            come_call_finalizer3(first_element_source_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_850,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_851,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_852,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1025,sListNode_finalize, 0, 1, 0, 0, (void*)0);
            ((__right_value1029) ? __right_value1029 = come_decrement_ref_count2(__right_value1029, ((struct sNode*)__right_value1029)->finalize, ((struct sNode*)__right_value1029)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__399) ? __result_obj__399 = come_decrement_ref_count2(__result_obj__399, ((struct sNode*)__result_obj__399)->finalize, ((struct sNode*)__result_obj__399)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__399;
        }
        else {
        }
        ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(first_element_source_849,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_850,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_851,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_852,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_872=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result_obj__400 = come_increment_ref_count(node_872);
        ((node_872) ? node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__400) ? __result_obj__400 = come_decrement_ref_count2(__result_obj__400, ((struct sNode*)__result_obj__400)->finalize, ((struct sNode*)__result_obj__400)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__400;
        ((node_872) ? node_872 = come_decrement_ref_count2(node_872, ((struct sNode*)node_872)->finalize, ((struct sNode*)node_872)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    __result_obj__401 = come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__401) ? __result_obj__401 = come_decrement_ref_count2(__result_obj__401, ((struct sNode*)__result_obj__401)->finalize, ((struct sNode*)__result_obj__401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__401;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
struct sSStringNode* __result_obj__374;
void* __right_value839 = (void*)0;
struct sSStringNode* result_741;
void* __right_value840 = (void*)0;
char* __dec_obj154;
void* __right_value841 = (void*)0;
char* __dec_obj155;
void* __right_value842 = (void*)0;
struct list$1sNode$ph* __dec_obj156;
struct sSStringNode* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = (void*)0;
        return __result_obj__374;
    }
    result_741=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_741->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj154=result_741->sname;
        result_741->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_741->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj155=result_741->value;
        result_741->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj156=result_741->exps;
        result_741->exps=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->exps));
        come_call_finalizer3(__dec_obj156,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__375 = result_741;
    come_call_finalizer3(result_741,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__375;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
struct sBufferNode* __result_obj__378;
void* __right_value856 = (void*)0;
struct sBufferNode* result_760;
void* __right_value857 = (void*)0;
char* __dec_obj157;
void* __right_value858 = (void*)0;
struct buffer* __dec_obj158;
struct sBufferNode* __result_obj__379;
    if(    self==(void*)0) {
        __result_obj__378 = (void*)0;
        return __result_obj__378;
    }
    result_760=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_760->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj157=result_760->sname;
        result_760->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj158=result_760->value;
        result_760->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_760->size=self->size;
    }
    __result_obj__379 = result_760;
    come_call_finalizer3(result_760,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__379;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
struct sCharNode* __result_obj__383;
void* __right_value965 = (void*)0;
struct sCharNode* result_802;
void* __right_value966 = (void*)0;
char* __dec_obj161;
struct sCharNode* __result_obj__384;
    if(    self==(void*)0) {
        __result_obj__383 = (void*)0;
        return __result_obj__383;
    }
    result_802=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_802->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_802->sname;
        result_802->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_802->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_802->value=self->value;
    }
    __result_obj__384 = result_802;
    come_call_finalizer3(result_802,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__384;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
struct sWCharNode* __result_obj__386;
void* __right_value973 = (void*)0;
struct sWCharNode* result_820;
void* __right_value974 = (void*)0;
char* __dec_obj162;
struct sWCharNode* __result_obj__387;
    if(    self==(void*)0) {
        __result_obj__386 = (void*)0;
        return __result_obj__386;
    }
    result_820=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_820->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_820->sname;
        result_820->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_820->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_820->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_820->quote=self->quote;
    }
    __result_obj__387 = result_820;
    come_call_finalizer3(result_820,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__387;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
struct sWStringNode* __result_obj__389;
void* __right_value982 = (void*)0;
struct sWStringNode* result_832;
void* __right_value983 = (void*)0;
char* __dec_obj163;
void* __right_value984 = (void*)0;
unsigned int* __dec_obj164;
struct sWStringNode* __result_obj__390;
    if(    self==(void*)0) {
        __result_obj__389 = (void*)0;
        return __result_obj__389;
    }
    result_832=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_832->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_832->sname;
        result_832->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_832->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj164=result_832->value;
        result_832->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__390 = result_832;
    come_call_finalizer3(result_832,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__390;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
struct sMapNode* __result_obj__393;
void* __right_value1008 = (void*)0;
struct sMapNode* result_855;
void* __right_value1009 = (void*)0;
char* __dec_obj165;
void* __right_value1010 = (void*)0;
struct list$1sNode$ph* __dec_obj166;
void* __right_value1011 = (void*)0;
struct list$1sNode$ph* __dec_obj167;
struct sMapNode* __result_obj__394;
    if(    self==(void*)0) {
        __result_obj__393 = (void*)0;
        return __result_obj__393;
    }
    result_855=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_855->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj165=result_855->sname;
        result_855->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_855->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj166=result_855->map_key_elements;
        result_855->map_key_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj166,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj167=result_855->map_elements;
        result_855->map_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->map_elements));
        come_call_finalizer3(__dec_obj167,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__394 = result_855;
    come_call_finalizer3(result_855,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__394;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
struct sListNode* __result_obj__397;
void* __right_value1026 = (void*)0;
struct sListNode* result_871;
void* __right_value1027 = (void*)0;
char* __dec_obj168;
void* __right_value1028 = (void*)0;
struct list$1sNode$ph* __dec_obj169;
struct sListNode* __result_obj__398;
    if(    self==(void*)0) {
        __result_obj__397 = (void*)0;
        return __result_obj__397;
    }
    result_871=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_871->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_871->sname;
        result_871->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_871->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj169=result_871->list_elements;
        result_871->list_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->list_elements));
        come_call_finalizer3(__dec_obj169,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__398 = result_871;
    come_call_finalizer3(result_871,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__398;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements_873;
char* p_874;
char* name_875;
void* __right_value1033 = (void*)0;
char* __dec_obj170;
_Bool no_comma_876;
void* __right_value1034 = (void*)0;
struct sNode* node_877;
void* __right_value1035 = (void*)0;
struct sNode* __dec_obj171;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c17_881=0;
char* Err_882=0;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1052 = (void*)0;
struct sNode* __result_obj__407;
name_875 = (void*)0;
    tuple_elements_873=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "06str.c", 2676, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_874=info->p;
        if(        named_tuple) {
            __dec_obj170=name_875;
            name_875=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_876=info->no_comma;
        info->no_comma=(_Bool)1;
        node_877=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj171=node_877;
        node_877=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_877),info));
        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_876;
        list$1tuple2$2char$phsNode$ph$ph$p_push_back(tuple_elements_873,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "06str.c", 2695, "struct tuple2$2char$phsNode$ph", tuple2$2char$phsNode$ph_finalize, tuple2$2char$phsNode$ph_clone, tuple2$2char$phsNode$ph_get_hash_key, tuple2$2char$phsNode$ph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_875)),(struct sNode*)come_increment_ref_count(node_877))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_875 = come_decrement_ref_count2(name_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_877) ? node_877 = come_decrement_ref_count2(node_877, ((struct sNode*)node_877)->finalize, ((struct sNode*)node_877)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        else {
            multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1042=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_exception_var_c17_881=multiple_assign_var40->v1;
            Err_882=(char*)come_increment_ref_count(multiple_assign_var40->v2);
            ((Err_882)?(puts(Err_882),exit(0)):(0));
            come_call_finalizer3(__right_value1042,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(2);
            (Err_882 = come_decrement_ref_count2(Err_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (name_875 = come_decrement_ref_count2(name_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_877) ? node_877 = come_decrement_ref_count2(node_877, ((struct sNode*)node_877)->finalize, ((struct sNode*)node_877)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2712, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1044=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2712, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(tuple_elements_873),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result_obj__407 = come_increment_ref_count(((struct sNode*)(__right_value1052=_inf_value17)));
    come_call_finalizer3(tuple_elements_873,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1044,sTupleNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1052) ? __right_value1052 = come_decrement_ref_count2(__right_value1052, ((struct sNode*)__right_value1052)->finalize, ((struct sNode*)__right_value1052)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__407) ? __result_obj__407 = come_decrement_ref_count2(__result_obj__407, ((struct sNode*)__result_obj__407)->finalize, ((struct sNode*)__result_obj__407)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__407;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value1036 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_878;
struct tuple2$2char$phsNode$ph* __dec_obj172;
void* __right_value1037 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_879;
struct tuple2$2char$phsNode$ph* __dec_obj173;
void* __right_value1038 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_880;
struct tuple2$2char$phsNode$ph* __dec_obj174;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__402;
    if(    self->len==0) {
        litem_878=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1036=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1457, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_878->prev=((void*)0);
        litem_878->next=((void*)0);
        __dec_obj172=litem_878->item;
        litem_878->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj172,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_878;
        self->head=litem_878;
    }
    else if(    self->len==1) {
        litem_879=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1037=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1467, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_879->prev=self->head;
        litem_879->next=((void*)0);
        __dec_obj173=litem_879->item;
        litem_879->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj173,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_879;
        self->head->next=litem_879;
    }
    else {
        litem_880=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value1038=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1477, "struct list_item$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_880->prev=self->tail;
        litem_880->next=((void*)0);
        __dec_obj174=litem_880->item;
        litem_880->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj174,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_880;
        self->tail=litem_880;
    }
    self->len++;
    __result_obj__402 = self;
    come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__402;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
struct sTupleNode* __result_obj__403;
void* __right_value1045 = (void*)0;
struct sTupleNode* result_883;
void* __right_value1046 = (void*)0;
char* __dec_obj175;
void* __right_value1051 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj176;
struct sTupleNode* __result_obj__406;
    if(    self==(void*)0) {
        __result_obj__403 = (void*)0;
        return __result_obj__403;
    }
    result_883=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_883->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_883->sname;
        result_883->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_883->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj176=result_883->tuple_elements;
        result_883->tuple_elements=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj176,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__406 = result_883;
    come_call_finalizer3(result_883,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__406;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__404;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_884;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_885;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__405;
    if(    self==((void*)0)) {
        __result_obj__404 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__404,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__404;
    }
    result_884=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph$p_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2char$phsNode$ph$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_885=self->head;
    while(it_885!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_884,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_885->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph$p_add(result_884,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_885->item)));
        }
        it_885=it_885->next;
    }
    __result_obj__405 = come_increment_ref_count(result_884);
    come_call_finalizer3(result_884,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__405,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__405;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
struct list$1sNode$ph* tuple_elements_886;
struct sNode* node_887;
void* __right_value1055 = (void*)0;
struct sNode* node2_888;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1061 = (void*)0;
struct sNode* __result_obj__410;
    tuple_elements_886=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2717, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_887=(struct sNode*)come_increment_ref_count(exp);
    list$1sNode$ph$p_push_back(tuple_elements_886,(struct sNode*)come_increment_ref_count(node_887));
    node2_888=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph$p_push_back(tuple_elements_886,(struct sNode*)come_increment_ref_count(node2_888));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2727, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1057=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2727, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_886),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result_obj__410 = come_increment_ref_count(((struct sNode*)(__right_value1061=_inf_value18)));
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(tuple_elements_886,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_887) ? node_887 = come_decrement_ref_count2(node_887, ((struct sNode*)node_887)->finalize, ((struct sNode*)node_887)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_888) ? node2_888 = come_decrement_ref_count2(node2_888, ((struct sNode*)node2_888)->finalize, ((struct sNode*)node2_888)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1057,sSomeNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1061) ? __right_value1061 = come_decrement_ref_count2(__right_value1061, ((struct sNode*)__right_value1061)->finalize, ((struct sNode*)__right_value1061)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__410) ? __result_obj__410 = come_decrement_ref_count2(__result_obj__410, ((struct sNode*)__result_obj__410)->finalize, ((struct sNode*)__result_obj__410)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__410;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
struct sSomeNode* __result_obj__408;
void* __right_value1058 = (void*)0;
struct sSomeNode* result_889;
void* __right_value1059 = (void*)0;
char* __dec_obj177;
void* __right_value1060 = (void*)0;
struct list$1sNode$ph* __dec_obj178;
struct sSomeNode* __result_obj__409;
    if(    self==(void*)0) {
        __result_obj__408 = (void*)0;
        return __result_obj__408;
    }
    result_889=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_889->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj177=result_889->sname;
        result_889->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_889->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj178=result_889->tuple_elements;
        result_889->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj178,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__409 = result_889;
    come_call_finalizer3(result_889,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__409;
}

struct sNode* parse_some(struct sInfo* info){
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct list$1sNode$ph* tuple_elements_890;
void* __right_value1064 = (void*)0;
struct sNode* node_891;
void* __right_value1065 = (void*)0;
struct sNode* __dec_obj179;
void* __right_value1066 = (void*)0;
struct sNode* node2_892;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1069 = (void*)0;
struct sNode* __result_obj__411;
    tuple_elements_890=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2732, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_891=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj179=node_891;
    node_891=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_891),info));
    if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNode$ph$p_push_back(tuple_elements_890,(struct sNode*)come_increment_ref_count(node_891));
    node2_892=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNode$ph$p_push_back(tuple_elements_890,(struct sNode*)come_increment_ref_count(node2_892));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1068=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2745, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_890),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result_obj__411 = come_increment_ref_count(((struct sNode*)(__right_value1069=_inf_value19)));
    come_call_finalizer3(tuple_elements_890,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_891) ? node_891 = come_decrement_ref_count2(node_891, ((struct sNode*)node_891)->finalize, ((struct sNode*)node_891)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_892) ? node2_892 = come_decrement_ref_count2(node2_892, ((struct sNode*)node2_892)->finalize, ((struct sNode*)node2_892)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1068,sSomeNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1069) ? __right_value1069 = come_decrement_ref_count2(__right_value1069, ((struct sNode*)__right_value1069)->finalize, ((struct sNode*)__right_value1069)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__411) ? __result_obj__411 = come_decrement_ref_count2(__result_obj__411, ((struct sNode*)__result_obj__411)->finalize, ((struct sNode*)__result_obj__411)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__411;
}

struct sNode* parse_none(struct sInfo* info){
void* __right_value1070 = (void*)0;
void* __right_value1071 = (void*)0;
struct list$1sNode$ph* tuple_elements_893;
void* __right_value1072 = (void*)0;
struct sNode* node_894;
void* __right_value1073 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value1074 = (void*)0;
struct sNode* node2_895;
struct sNode* node3_896;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1080 = (void*)0;
struct sNode* __result_obj__414;
    tuple_elements_893=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "06str.c", 2750, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_894=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj180=node_894;
    node_894=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_894),info));
    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_895=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNode$ph$p_push_back(tuple_elements_893,(struct sNode*)come_increment_ref_count(node2_895));
    node3_896=(struct sNode*)come_increment_ref_count(node_894);
    list$1sNode$ph$p_push_back(tuple_elements_893,(struct sNode*)come_increment_ref_count(node3_896));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2765, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1076=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2765, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNode$ph*)come_increment_ref_count(tuple_elements_893),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result_obj__414 = come_increment_ref_count(((struct sNode*)(__right_value1080=_inf_value20)));
    come_call_finalizer3(tuple_elements_893,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((node_894) ? node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node2_895) ? node2_895 = come_decrement_ref_count2(node2_895, ((struct sNode*)node2_895)->finalize, ((struct sNode*)node2_895)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((node3_896) ? node3_896 = come_decrement_ref_count2(node3_896, ((struct sNode*)node3_896)->finalize, ((struct sNode*)node3_896)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value1076,sNoneNode_finalize, 0, 1, 0, 0, (void*)0);
    ((__right_value1080) ? __right_value1080 = come_decrement_ref_count2(__right_value1080, ((struct sNode*)__right_value1080)->finalize, ((struct sNode*)__right_value1080)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count2(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__414;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
struct sNoneNode* __result_obj__412;
void* __right_value1077 = (void*)0;
struct sNoneNode* result_897;
void* __right_value1078 = (void*)0;
char* __dec_obj181;
void* __right_value1079 = (void*)0;
struct list$1sNode$ph* __dec_obj182;
struct sNoneNode* __result_obj__413;
    if(    self==(void*)0) {
        __result_obj__412 = (void*)0;
        return __result_obj__412;
    }
    result_897=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_897->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_897->sname;
        result_897->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_897->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj182=result_897->tuple_elements;
        result_897->tuple_elements=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj182,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__413 = result_897;
    come_call_finalizer3(result_897,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__413;
}

