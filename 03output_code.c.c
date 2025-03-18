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
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
void show_type(struct sType* type, struct sInfo* info);
static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
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
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sType* get_no_solved_type(struct sType* type);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
char* output_function(struct sFun* fun, struct sInfo* info);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);
static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
_Bool output_source_file(struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
_Bool output_header_file(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);
void add_last_code_to_source(struct sInfo* info);
void add_last_code_to_source_with_comma(struct sInfo* info);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo* info);
static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail);
static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);
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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static){
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_274;
char* class_name_275;
void* __right_value233 = (void*)0;
char* __result_obj__197;
void* __right_value234 = (void*)0;
struct CVALUE* come_value_276;
void* __right_value235 = (void*)0;
char* result_type_str_281;
int j_282;
struct list$1sType$ph* o2_saved_283;
struct sType* it_286;
void* __right_value236 = (void*)0;
char* param_type_str_289;
void* __right_value237 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_290=0;
char* Err_291=0;
void* __right_value238 = (void*)0;
char* __result_obj__204;
int i_292;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* __result_obj__205;
    buf_274=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "struct buffer*"))));
    class_name_275=type->mClass->mName;
    if(    type->mAlignas) {
        if(        !node_compile(type->mAlignas,info)) {
            printf("_Alignas error\n");
            __result_obj__197 = come_increment_ref_count(((char*)(__right_value233=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_274,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__197;
        }
        come_value_276=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf_274,"_Alignas(%s) ",come_value_276->c_value);
        /*c*/ come_call_finalizer3(come_value_276,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    type->mStatic&&!no_static) {
        buffer_append_str(buf_274,"static ");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_274,"_Atomic(");
    }
    if(    type->mConstant) {
        buffer_append_str(buf_274,"const ");
    }
    if(    type->mUnsigned) {
        buffer_append_str(buf_274,"unsigned ");
    }
    if(    type->mShort) {
        buffer_append_str(buf_274,"short ");
    }
    if(    string_operator_equals(type->mOriginalTypeName,"va_list")) {
        buffer_append_str(buf_274,"va_list");
    }
    else if(    string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_274,"__builtin_va_list");
    }
    else if(    charp_operator_equals(class_name_275,"__builtin_va_list")) {
        if(        in_header) {
            buffer_append_str(buf_274,class_name_275);
        }
        else {
            buffer_append_str(buf_274,"va_list");
        }
    }
    else if(    type->mClass->mStruct) {
        buffer_append_str(buf_274,"struct ");
        buffer_append_str(buf_274,class_name_275);
    }
    else if(    type->mClass->mUnion) {
        buffer_append_str(buf_274,"union ");
        buffer_append_str(buf_274,class_name_275);
    }
    else if(    type->mClass->mEnum) {
        buffer_append_str(buf_274,"enum ");
        buffer_append_str(buf_274,class_name_275);
    }
    else if(    type->mLongLong) {
        if(        charp_operator_equals(class_name_275,"int")) {
            buffer_append_str(buf_274,"long long int");
        }
        else if(        charp_operator_equals(class_name_275,"long")) {
            buffer_append_str(buf_274,"long long");
        }
    }
    else if(    type->mLong) {
        buffer_append_str(buf_274,"long ");
        if(        charp_operator_equals(class_name_275,"int")) {
            buffer_append_str(buf_274," int");
        }
        else if(        charp_operator_equals(class_name_275,"long")) {
            buffer_append_str(buf_274," long");
        }
        else if(        charp_operator_equals(class_name_275,"double")) {
            buffer_append_str(buf_274," double");
        }
    }
    else if(    charp_operator_equals(class_name_275,"long")) {
        buffer_append_str(buf_274,"long");
    }
    else if(    charp_operator_equals(class_name_275,"__uint128_t")) {
        buffer_append_str(buf_274,"__uint128_t");
    }
    else if(    charp_operator_equals(class_name_275,"bool")) {
        buffer_append_str(buf_274,"_Bool");
    }
    else if(    charp_operator_equals(class_name_275,"lambda")) {
        result_type_str_281=(char*)come_increment_ref_count(make_type_name_string(type->mResultType,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
        buffer_append_str(buf_274,result_type_str_281);
        buffer_append_str(buf_274," (*)(");
        j_282=0;
        for(        o2_saved_283=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_286=list$1sType$ph_begin((o2_saved_283));        !list$1sType$ph_end((o2_saved_283));        it_286=list$1sType$ph_next((o2_saved_283))        ){
            param_type_str_289=(char*)come_increment_ref_count(make_type_name_string(it_286,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
            buffer_append_str(buf_274,param_type_str_289);
            if(            j_282!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_274,",");
            }
            j_282++;
            (param_type_str_289 = come_decrement_ref_count(param_type_str_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_283,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_274,")");
        (result_type_str_281 = come_decrement_ref_count(result_type_str_281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        class_name_275==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value237=err_msg(info,"class name is null")));
            come_exception_var_c1_290=multiple_assign_var1->v1;
            Err_291=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_291)?(puts(Err_291),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value237,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__204 = come_increment_ref_count(((char*)(__right_value238=__builtin_string(""))));
            (Err_291 = come_decrement_ref_count(Err_291, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_274,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__204;
            (Err_291 = come_decrement_ref_count(Err_291, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(buf_274,class_name_275);
    }
    if(    charp_operator_not_equals(class_name_275,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        for(        i_292=0;        i_292<type->mPointerNum;        i_292++        ){
            buffer_append_str(buf_274,"*");
        }
    }
    if(    array_cast_pointer&&list$1sNode$ph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_274,"*");
    }
    if(    type->mRestrict) {
        buffer_append_str(buf_274,"restrict");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_274,")");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_274,((char*)(__right_value239=charp_operator_add(" ",type->mAttribute))));
        (__right_value239 = come_decrement_ref_count(__right_value239, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__205 = come_increment_ref_count(((char*)(__right_value240=buffer_to_string(buf_274))));
    /*c*/ come_call_finalizer3(buf_274,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value240 = come_decrement_ref_count(__right_value240, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__205;
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
struct list_item$1sType$ph* it_277;
struct list_item$1sType$ph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*c*/ come_call_finalizer3(prev_it_278,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_279;
struct list_item$1sNode$ph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        /*c*/ come_call_finalizer3(prev_it_280,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_284;
struct sType* __result_obj__198;
struct sType* __result_obj__199;
struct sType* result_285;
struct sType* __result_obj__200;
result_284 = (void*)0;
result_285 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_284,0,sizeof(struct sType*));
        __result_obj__198 = result_284;
        return __result_obj__198;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__199 = self->it->item;
        return __result_obj__199;
    }
    memset(&result_285,0,sizeof(struct sType*));
    __result_obj__200 = result_285;
    return __result_obj__200;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_287;
struct sType* __result_obj__201;
struct sType* __result_obj__202;
struct sType* result_288;
struct sType* __result_obj__203;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_287,0,sizeof(struct sType*));
        __result_obj__201 = result_287;
        return __result_obj__201;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__202 = self->it->item;
        return __result_obj__202;
    }
    memset(&result_288,0,sizeof(struct sType*));
    __result_obj__203 = result_288;
    return __result_obj__203;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct buffer* buf_293;
char* class_name_294;
int i_295;
void* __right_value243 = (void*)0;
struct sType* gtype_296;
void* __right_value244 = (void*)0;
int i_300;
int i_301;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
char* __result_obj__208;
    buf_293=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 153, "struct buffer*"))));
    class_name_294=type->mClass->mName;
    buffer_append_str(buf_293,class_name_294);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        buffer_append_str(buf_293,"<");
        for(        i_295=0;        i_295<list$1sType$ph_length(type->mGenericsTypes);        i_295++        ){
            gtype_296=((struct sType*)(__right_value243=list$1sType$ph$p_operator_load_element(type->mGenericsTypes,i_295)));
            /*c*/ come_call_finalizer3(__right_value243,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_str(buf_293,((char*)(__right_value244=make_come_type_name_string(gtype_296,info))));
            (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_295!=list$1sType$ph_length(type->mGenericsTypes)-1) {
                buffer_append_str(buf_293,",");
            }
        }
        buffer_append_str(buf_293,">");
    }
    if(    charp_operator_not_equals(class_name_294,"lambda")) {
        for(        i_300=0;        i_300<type->mPointerNum;        i_300++        ){
            buffer_append_str(buf_293,"*");
        }
    }
    if(    list$1sNode$ph_length(type->mArrayNum)>0) {
        for(        i_301=0;        i_301<list$1sNode$ph_length(type->mArrayNum);        i_301++        ){
            buffer_append_str(buf_293,"[]");
        }
    }
    if(    type->mHeap) {
        buffer_append_str(buf_293,"%");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_293,((char*)(__right_value245=charp_operator_add(" ",type->mAttribute))));
        (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__208 = come_increment_ref_count(((char*)(__right_value246=buffer_to_string(buf_293))));
    /*c*/ come_call_finalizer3(buf_293,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__208 = come_decrement_ref_count(__result_obj__208, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__208;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_297;
int i_298;
struct sType* __result_obj__206;
struct sType* default_value_299;
struct sType* __result_obj__207;
default_value_299 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_297=self->head;
    i_298=0;
    while(it_297!=((void*)0)) {
        if(        position==i_298) {
            __result_obj__206 = come_increment_ref_count(it_297->item);
            /*c*/ come_call_finalizer3(__result_obj__206,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__206;
        }
        it_297=it_297->next;
        i_298++;
    }
    memset(&default_value_299,0,sizeof(struct sType*));
    __result_obj__207 = come_increment_ref_count(default_value_299);
    /*c*/ come_call_finalizer3(default_value_299,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

void show_type(struct sType* type, struct sInfo* info){
void* __right_value247 = (void*)0;
    puts(((char*)(__right_value247=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct buffer* buf_302;
void* __right_value250 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_303=0;
char* Err_304=0;
void* __right_value251 = (void*)0;
char* __result_obj__209;
int i_305;
struct list$1sType$ph* o2_saved_306;
struct sType* it_307;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* __result_obj__210;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
int i_308;
int i_309;
struct list$1sType$ph* o2_saved_310;
struct sType* it_311;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __result_obj__211;
void* __right_value262 = (void*)0;
char* __result_obj__212;
    buf_302=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 204, "struct buffer*"))));
    if(    type->mResultType==((void*)0)) {
        multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value250=err_msg(info,"invalid lambda type")));
        come_exception_var_c2_303=multiple_assign_var2->v1;
        Err_304=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        ((Err_304)?(puts(Err_304),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value250,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__209 = come_increment_ref_count(((char*)(__right_value251=__builtin_string(""))));
        (Err_304 = come_decrement_ref_count(Err_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__209;
        (Err_304 = come_decrement_ref_count(Err_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")) {
        buffer_append_format(buf_302,"(*%s)(",var_name);
        i_305=0;
        for(        o2_saved_306=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_307=list$1sType$ph_begin((o2_saved_306));        !list$1sType$ph_end((o2_saved_306));        it_307=list$1sType$ph_next((o2_saved_306))        ){
            buffer_append_str(buf_302,((char*)(__right_value252=make_type_name_string(it_307,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_305!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_302,",");
            }
            i_305++;
        }
        /*c*/ come_call_finalizer3(o2_saved_306,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_302,")");
        if(        type->mAttribute) {
            buffer_append_str(buf_302,((char*)(__right_value253=charp_operator_add(" ",type->mAttribute))));
            (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__210 = come_increment_ref_count(((char*)(__right_value255=make_lambda_type_name_string(type->mResultType,((char*)(__right_value254=buffer_to_string(buf_302))),info))));
        /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value255 = come_decrement_ref_count(__right_value255, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__210;
    }
    else {
        if(        type->mLambdaArray) {
            if(            type->mLambdaArrayNum==0) {
                buffer_append_format(buf_302,"%s (*%s[])(",((char*)(__right_value256=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name);
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_302,"%s (*%s[%d])(",((char*)(__right_value257=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name,type->mLambdaArrayNum);
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append_format(buf_302,"%s ",((char*)(__right_value258=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            type->mFunctionPointerNum>1) {
                buffer_append_str(buf_302,"(");
                for(                i_308=0;                i_308<type->mFunctionPointerNum;                i_308++                ){
                    buffer_append_str(buf_302,"*");
                }
                buffer_append_format(buf_302,"%s)(",var_name);
            }
            else {
                buffer_append_format(buf_302,"(*%s)(",var_name);
            }
        }
        i_309=0;
        for(        o2_saved_310=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_311=list$1sType$ph_begin((o2_saved_310));        !list$1sType$ph_end((o2_saved_310));        it_311=list$1sType$ph_next((o2_saved_310))        ){
            buffer_append_str(buf_302,((char*)(__right_value259=make_type_name_string(it_311,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_309!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_302,",");
            }
            i_309++;
        }
        /*c*/ come_call_finalizer3(o2_saved_310,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_302,")");
        if(        type->mAttribute) {
            buffer_append_str(buf_302,((char*)(__right_value260=charp_operator_add(" ",type->mAttribute))));
            (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__211 = come_increment_ref_count(((char*)(__right_value261=buffer_to_string(buf_302))));
        /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value261 = come_decrement_ref_count(__right_value261, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__211;
    }
    __result_obj__212 = come_increment_ref_count(((char*)(__right_value262=buffer_to_string(buf_302))));
    /*c*/ come_call_finalizer3(buf_302,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct buffer* buf_312;
void* __right_value303 = (void*)0;
struct sType* type2_313;
void* __right_value304 = (void*)0;
char* str_337;
void* __right_value305 = (void*)0;
char* str_338;
void* __right_value306 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_339=0;
char* Err_340=0;
void* __right_value307 = (void*)0;
char* __result_obj__228;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_341;
void* __right_value309 = (void*)0;
char* type_str_342;
void* __right_value310 = (void*)0;
char* type_str_343;
struct list$1sNode$ph* o2_saved_344;
struct sNode* it_347;
void* __right_value311 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_350=0;
char* Err_351=0;
void* __right_value312 = (void*)0;
char* __result_obj__235;
void* __right_value313 = (void*)0;
struct CVALUE* cvalue_352;
void* __right_value314 = (void*)0;
char* type_str_353;
void* __right_value315 = (void*)0;
char* __result_obj__236;
void* __right_value316 = (void*)0;
char* __result_obj__237;
    buf_312=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 281, "struct buffer*"))));
    type2_313=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type2_313->mArrayPointerType) {
        type2_313->mPointerNum--;
    }
    if(    string_operator_equals(type2_313->mClass->mName,"lambda")&&type2_313->mAsmName!=((void*)0)&&string_operator_not_equals(type2_313->mAsmName,"")) {
        str_337=(char*)come_increment_ref_count(header_lambda(type2_313,(char*)come_increment_ref_count(type2_313->mAsmName),info));
        buffer_append_str(buf_312,str_337);
        (str_337 = come_decrement_ref_count(str_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    string_operator_equals(type2_313->mClass->mName,"lambda")) {
        str_338=(char*)come_increment_ref_count(make_lambda_type_name_string(type2_313,name,info));
        buffer_append_str(buf_312,str_338);
        (str_338 = come_decrement_ref_count(str_338, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    type2_313->mSizeNum!=((void*)0)) {
        if(        !node_compile(type2_313->mSizeNum,info)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value306=err_msg(info,"invalid bit field number")));
            come_exception_var_c3_339=multiple_assign_var3->v1;
            Err_340=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_340)?(puts(Err_340),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value306,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__228 = come_increment_ref_count(((char*)(__right_value307=__builtin_string(""))));
            (Err_340 = come_decrement_ref_count(Err_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_312,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_313,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__228;
            (Err_340 = come_decrement_ref_count(Err_340, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_value_341=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        type_str_342=(char*)come_increment_ref_count(make_type_name_string(type2_313,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_format(buf_312,"%s ",type_str_342);
        buffer_append_format(buf_312,"%s:%s",name,come_value_341->c_value);
        if(        type2_313->mAsmName!=((void*)0)&&string_operator_not_equals(type2_313->mAsmName,"")) {
            buffer_append_format(buf_312," __asm__(\"%s\")",type2_313->mAsmName);
        }
        if(        type2_313->mAsmName!=((void*)0)&&string_operator_not_equals(type2_313->mAsmName,"")) {
            buffer_append_format(buf_312," __asm__(\"%s\")",type2_313->mAsmName);
        }
        /*c*/ come_call_finalizer3(come_value_341,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_str_342 = come_decrement_ref_count(type_str_342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(type2_313->mArrayNum)>0) {
        type_str_343=(char*)come_increment_ref_count(make_type_name_string(type2_313,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(buf_312,type_str_343);
        buffer_append_str(buf_312," ");
        buffer_append_str(buf_312,name);
        for(        o2_saved_344=(struct list$1sNode$ph*)come_increment_ref_count((type2_313->mArrayNum)),it_347=list$1sNode$ph_begin((o2_saved_344));        !list$1sNode$ph_end((o2_saved_344));        it_347=list$1sNode$ph_next((o2_saved_344))        ){
            if(            !node_compile(it_347,info)) {
                multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value311=err_msg(info,"invalid array number")));
                come_exception_var_c4_350=multiple_assign_var4->v1;
                Err_351=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_351)?(puts(Err_351),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value311,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__235 = come_increment_ref_count(((char*)(__right_value312=__builtin_string(""))));
                (Err_351 = come_decrement_ref_count(Err_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(o2_saved_344,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_str_343 = come_decrement_ref_count(type_str_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_312,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_313,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__235;
                (Err_351 = come_decrement_ref_count(Err_351, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            cvalue_352=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf_312,"[%s]",cvalue_352->c_value);
            /*c*/ come_call_finalizer3(cvalue_352,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_344,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        type2_313->mArrayPointerType) {
            buffer_append_str(buf_312,"[]");
        }
        if(        type2_313->mAsmName!=((void*)0)&&string_operator_not_equals(type2_313->mAsmName,"")) {
            buffer_append_format(buf_312," __asm__(\"%s\")",type2_313->mAsmName);
        }
        (type_str_343 = come_decrement_ref_count(type_str_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type_str_353=(char*)come_increment_ref_count(make_type_name_string(type2_313,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        string_operator_equals(type_str_353,"")) {
            __result_obj__236 = come_increment_ref_count(((char*)(__right_value315=__builtin_string(""))));
            (type_str_353 = come_decrement_ref_count(type_str_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_312,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_313,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__236 = come_decrement_ref_count(__result_obj__236, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__236;
        }
        buffer_append_str(buf_312,type_str_353);
        buffer_append_str(buf_312," ");
        buffer_append_str(buf_312,name);
        if(        type2_313->mArrayPointerType) {
            buffer_append_str(buf_312,"[]");
        }
        if(        type2_313->mAsmName!=((void*)0)&&string_operator_not_equals(type2_313->mAsmName,"")) {
            buffer_append_format(buf_312," __asm__(\"%s\")",type2_313->mAsmName);
        }
        (type_str_353 = come_decrement_ref_count(type_str_353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__237 = come_increment_ref_count(((char*)(__right_value316=buffer_to_string(buf_312))));
    /*c*/ come_call_finalizer3(buf_312,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_313,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__237 = come_decrement_ref_count(__result_obj__237, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__237;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__213;
void* __right_value265 = (void*)0;
struct sType* result_314;
void* __right_value266 = (void*)0;
struct sType* __dec_obj23;
void* __right_value267 = (void*)0;
struct sType* __dec_obj24;
void* __right_value275 = (void*)0;
struct list$1sType$ph* __dec_obj28;
void* __right_value276 = (void*)0;
struct sType* __dec_obj29;
void* __right_value277 = (void*)0;
struct sType* __dec_obj30;
void* __right_value279 = (void*)0;
struct sNode* __dec_obj31;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value281 = (void*)0;
char* __dec_obj33;
void* __right_value282 = (void*)0;
char* __dec_obj34;
void* __right_value283 = (void*)0;
char* __dec_obj35;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __dec_obj39;
void* __right_value292 = (void*)0;
char* __dec_obj40;
void* __right_value293 = (void*)0;
struct list$1sType$ph* __dec_obj41;
void* __right_value301 = (void*)0;
struct list$1char$ph* __dec_obj45;
void* __right_value302 = (void*)0;
struct sType* __dec_obj46;
struct sType* __result_obj__227;
    if(    self==(void*)0) {
        __result_obj__213 = (void*)0;
        return __result_obj__213;
    }
    result_314=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_314->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj23=result_314->mOriginalLoadVarType,
        result_314->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj24=result_314->mChannelType,
        result_314->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj28=result_314->mGenericsTypes,
        result_314->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj28,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj29=result_314->mNoSolvedGenericsType,
        result_314->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj29,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj30=result_314->mAnyOriginalType,
        result_314->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj31=result_314->mSizeNum,
        result_314->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj32=result_314->mAlignas,
        result_314->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj33=result_314->mTupleName,
        result_314->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj34=result_314->mAttribute,
        result_314->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_314->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_314->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_314->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_314->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_314->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_314->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_314->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_314->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_314->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_314->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_314->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_314->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_314->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_314->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_314->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_314->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_314->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_314->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_314->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_314->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_314->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_314->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_314->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_314->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_314->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj35=result_314->mAsmName,
        result_314->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_314->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_314->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj39=result_314->mArrayNum,
        result_314->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_314->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj40=result_314->mOriginalTypeName,
        result_314->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_314->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_314->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_314->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj41=result_314->mParamTypes,
        result_314->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj45=result_314->mParamNames,
        result_314->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj45,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj46=result_314->mResultType,
        result_314->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_314->mVarArgs=self->mVarArgs;
    }
    __result_obj__227 = result_314;
    /*c*/ come_call_finalizer3(result_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__214;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct list$1sType$ph* result_315;
struct list_item$1sType$ph* it_316;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1sType$ph* __result_obj__217;
    if(    self==((void*)0)) {
        __result_obj__214 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__214,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__214;
    }
    result_315=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1185, "struct list$1sType$ph*"))));
    it_316=self->head;
    while(it_316!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_315,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_316->item)));
        }
        else {
            list$1sType$ph_add(result_315,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_316->item)));
        }
        it_316=it_316->next;
    }
    __result_obj__217 = come_increment_ref_count(result_315);
    /*c*/ come_call_finalizer3(result_315,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__217,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__217;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__215;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__215 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__215,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value270 = (void*)0;
struct list_item$1sType$ph* litem_317;
struct sType* __dec_obj25;
void* __right_value271 = (void*)0;
struct list_item$1sType$ph* litem_318;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_319;
struct sType* __dec_obj27;
struct list$1sType$ph* __result_obj__216;
    if(    self->len==0) {
        litem_317=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value270=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1204, "struct list_item$1sType$ph*"))));
        litem_317->prev=((void*)0);
        litem_317->next=((void*)0);
        __dec_obj25=litem_317->item,
        litem_317->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_317;
        self->head=litem_317;
    }
    else if(    self->len==1) {
        litem_318=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value271=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1214, "struct list_item$1sType$ph*"))));
        litem_318->prev=self->head;
        litem_318->next=((void*)0);
        __dec_obj26=litem_318->item,
        litem_318->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_318;
        self->head->next=litem_318;
    }
    else {
        litem_319=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1224, "struct list_item$1sType$ph*"))));
        litem_319->prev=self->tail;
        litem_319->next=((void*)0);
        __dec_obj27=litem_319->item,
        litem_319->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_319;
        self->tail=litem_319;
    }
    self->len++;
    __result_obj__216 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_320;
struct list_item$1sType$ph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        /*c*/ come_call_finalizer3(prev_it_321,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__218;
void* __right_value278 = (void*)0;
struct sNode* result_322;
struct sNode* __result_obj__219;
    if(    self==(void*)0) {
        __result_obj__218 = come_increment_ref_count((void*)0);
        ((__result_obj__218) ? __result_obj__218 = come_decrement_ref_count(__result_obj__218, ((struct sNode*)__result_obj__218)->finalize, ((struct sNode*)__result_obj__218)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__218;
    }
    result_322=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_322->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_322->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_322->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_322->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_322->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_322->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_322->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_322->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_322->kind=self->kind;
    }
    __result_obj__219 = come_increment_ref_count(result_322);
    ((result_322) ? result_322 = come_decrement_ref_count(result_322, ((struct sNode*)result_322)->finalize, ((struct sNode*)result_322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__219) ? __result_obj__219 = come_decrement_ref_count(__result_obj__219, ((struct sNode*)__result_obj__219)->finalize, ((struct sNode*)__result_obj__219)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__219;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__220;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1sNode$ph* result_323;
struct list_item$1sNode$ph* it_324;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1sNode$ph* __result_obj__223;
    if(    self==((void*)0)) {
        __result_obj__220 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__220,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__220;
    }
    result_323=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1185, "struct list$1sNode$ph*"))));
    it_324=self->head;
    while(it_324!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_323,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_324->item)));
        }
        else {
            list$1sNode$ph_add(result_323,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_324->item)));
        }
        it_324=it_324->next;
    }
    __result_obj__223 = come_increment_ref_count(result_323);
    /*c*/ come_call_finalizer3(result_323,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__223,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__223;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__221;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__221 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value286 = (void*)0;
struct list_item$1sNode$ph* litem_325;
struct sNode* __dec_obj36;
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_326;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_327;
struct sNode* __dec_obj38;
struct list$1sNode$ph* __result_obj__222;
    if(    self->len==0) {
        litem_325=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value286=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1204, "struct list_item$1sNode$ph*"))));
        litem_325->prev=((void*)0);
        litem_325->next=((void*)0);
        __dec_obj36=litem_325->item,
        litem_325->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj36 ? __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_325;
        self->head=litem_325;
    }
    else if(    self->len==1) {
        litem_326=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1214, "struct list_item$1sNode$ph*"))));
        litem_326->prev=self->head;
        litem_326->next=((void*)0);
        __dec_obj37=litem_326->item,
        litem_326->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_326;
        self->head->next=litem_326;
    }
    else {
        litem_327=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1224, "struct list_item$1sNode$ph*"))));
        litem_327->prev=self->tail;
        litem_327->next=((void*)0);
        __dec_obj38=litem_327->item,
        litem_327->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_327;
        self->tail=litem_327;
    }
    self->len++;
    __result_obj__222 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__222;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_328;
struct list_item$1sNode$ph* prev_it_329;
    it_328=self->head;
    while(it_328!=((void*)0)) {
        prev_it_329=it_328;
        it_328=it_328->next;
        /*c*/ come_call_finalizer3(prev_it_329,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__224;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1char$ph* result_330;
struct list_item$1char$ph* it_331;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1char$ph* __result_obj__226;
    if(    self==((void*)0)) {
        __result_obj__224 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__224,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__224;
    }
    result_330=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1185, "struct list$1char$ph*"))));
    it_331=self->head;
    while(it_331!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_330,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_331->item)));
        }
        else {
            list$1char$ph_add(result_330,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_331->item)));
        }
        it_331=it_331->next;
    }
    __result_obj__226 = come_increment_ref_count(result_330);
    /*c*/ come_call_finalizer3(result_330,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value296 = (void*)0;
struct list_item$1char$ph* litem_332;
char* __dec_obj42;
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_333;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_334;
char* __dec_obj44;
struct list$1char$ph* __result_obj__225;
    if(    self->len==0) {
        litem_332=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value296=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1204, "struct list_item$1char$ph*"))));
        litem_332->prev=((void*)0);
        litem_332->next=((void*)0);
        __dec_obj42=litem_332->item,
        litem_332->item=(char*)come_increment_ref_count(item);
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_332;
        self->head=litem_332;
    }
    else if(    self->len==1) {
        litem_333=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1214, "struct list_item$1char$ph*"))));
        litem_333->prev=self->head;
        litem_333->next=((void*)0);
        __dec_obj43=litem_333->item,
        litem_333->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_333;
        self->head->next=litem_333;
    }
    else {
        litem_334=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1224, "struct list_item$1char$ph*"))));
        litem_334->prev=self->tail;
        litem_334->next=((void*)0);
        __dec_obj44=litem_334->item,
        litem_334->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_334;
        self->tail=litem_334;
    }
    self->len++;
    __result_obj__225 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__225;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_335;
struct list_item$1char$ph* prev_it_336;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        /*c*/ come_call_finalizer3(prev_it_336,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_345;
struct sNode* __result_obj__229;
struct sNode* __result_obj__230;
struct sNode* result_346;
struct sNode* __result_obj__231;
result_345 = (void*)0;
result_346 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_345,0,sizeof(struct sNode*));
        __result_obj__229 = result_345;
        return __result_obj__229;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__230 = self->it->item;
        return __result_obj__230;
    }
    memset(&result_346,0,sizeof(struct sNode*));
    __result_obj__231 = result_346;
    return __result_obj__231;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_348;
struct sNode* __result_obj__232;
struct sNode* __result_obj__233;
struct sNode* result_349;
struct sNode* __result_obj__234;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_348,0,sizeof(struct sNode*));
        __result_obj__232 = result_348;
        return __result_obj__232;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__233 = self->it->item;
        return __result_obj__233;
    }
    memset(&result_349,0,sizeof(struct sNode*));
    __result_obj__234 = result_349;
    return __result_obj__234;
}

struct sType* get_no_solved_type(struct sType* type){
struct sType* result_354;
struct sType* __dec_obj47;
void* __right_value317 = (void*)0;
struct sType* __dec_obj48;
int i_355;
struct list$1sType$ph* o2_saved_356;
struct sType* it_357;
void* __right_value321 = (void*)0;
struct sType* __result_obj__241;
result_354 = (void*)0;
    if(    type->mNoSolvedGenericsType) {
        __dec_obj47=result_354,
        result_354=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj48=result_354,
        result_354=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_355=0;
    for(    o2_saved_356=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_357=list$1sType$ph_begin((o2_saved_356));    !list$1sType$ph_end((o2_saved_356));    it_357=list$1sType$ph_next((o2_saved_356))    ){
        list$1sType$ph$p_operator_store_element(result_354->mGenericsTypes,i_355,(struct sType*)come_increment_ref_count(get_no_solved_type(it_357)));
        i_355++;
    }
    /*c*/ come_call_finalizer3(o2_saved_356,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__241 = come_increment_ref_count(result_354);
    /*c*/ come_call_finalizer3(result_354,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_358;
int i_359;
struct sType* default_value_360;
struct list$1sType$ph* __result_obj__239;
struct list_item$1sType$ph* it_364;
int i_365;
struct sType* __dec_obj52;
struct list$1sType$ph* __result_obj__240;
default_value_360 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_358=self->len;
        for(        i_359=0;        i_359<position-len_358;        i_359++        ){
            memset(&default_value_360,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_360));
            /*c*/ come_call_finalizer3(default_value_360,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__239 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__239;
    }
    it_364=self->head;
    i_365=0;
    while(it_364!=((void*)0)) {
        if(        position==i_365) {
            __dec_obj52=it_364->item,
            it_364->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj52,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_364=it_364->next;
        i_365++;
    }
    __result_obj__240 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value318 = (void*)0;
struct list_item$1sType$ph* litem_361;
struct sType* __dec_obj49;
void* __right_value319 = (void*)0;
struct list_item$1sType$ph* litem_362;
struct sType* __dec_obj50;
void* __right_value320 = (void*)0;
struct list_item$1sType$ph* litem_363;
struct sType* __dec_obj51;
struct list$1sType$ph* __result_obj__238;
    if(    self->len==0) {
        litem_361=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value318=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1274, "struct list_item$1sType$ph*"))));
        litem_361->prev=((void*)0);
        litem_361->next=((void*)0);
        __dec_obj49=litem_361->item,
        litem_361->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_361;
        self->head=litem_361;
    }
    else if(    self->len==1) {
        litem_362=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value319=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1284, "struct list_item$1sType$ph*"))));
        litem_362->prev=self->head;
        litem_362->next=((void*)0);
        __dec_obj50=litem_362->item,
        litem_362->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_362;
        self->head->next=litem_362;
    }
    else {
        litem_363=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value320=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1294, "struct list_item$1sType$ph*"))));
        litem_363->prev=self->tail;
        litem_363->next=((void*)0);
        __dec_obj51=litem_363->item,
        litem_363->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_363;
        self->tail=litem_363;
    }
    self->len++;
    __result_obj__238 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
}

char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info){
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct buffer* buf_366;
int i_367;
void* __right_value324 = (void*)0;
char* __result_obj__242;
void* __right_value325 = (void*)0;
struct sType* no_solved_type_368;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct buffer* buf_369;
char* class_name_370;
int i_371;
void* __right_value328 = (void*)0;
struct sType* gtype_372;
void* __right_value329 = (void*)0;
int i_373;
int i_374;
void* __right_value330 = (void*)0;
char* __result_obj__243;
    if(    original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")) {
        buf_366=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 390, "struct buffer*"))));
        buffer_append_str(buf_366,type->mOriginalTypeName);
        for(        i_367=0;        i_367<type->mOriginalTypeNamePointerNum;        i_367++        ){
            buffer_append_str(buf_366,"*");
        }
        if(        type->mOriginalTypeNameHeap) {
            buffer_append_str(buf_366,"%");
        }
        __result_obj__242 = come_increment_ref_count(((char*)(__right_value324=buffer_to_string(buf_366))));
        /*c*/ come_call_finalizer3(buf_366,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__242;
        /*c*/ come_call_finalizer3(buf_366,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        no_solved_type_368=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
        buf_369=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 405, "struct buffer*"))));
        class_name_370=no_solved_type_368->mClass->mName;
        buffer_append_str(buf_369,class_name_370);
        if(        list$1sType$ph_length(no_solved_type_368->mGenericsTypes)>0) {
            buffer_append_str(buf_369,"<");
            for(            i_371=0;            i_371<list$1sType$ph_length(no_solved_type_368->mGenericsTypes);            i_371++            ){
                gtype_372=((struct sType*)(__right_value328=list$1sType$ph$p_operator_load_element(no_solved_type_368->mGenericsTypes,i_371)));
                /*c*/ come_call_finalizer3(__right_value328,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                buffer_append_str(buf_369,((char*)(__right_value329=make_come_type_name_string_no_solved(gtype_372,(_Bool)1,info))));
                (__right_value329 = come_decrement_ref_count(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                i_371!=list$1sType$ph_length(no_solved_type_368->mGenericsTypes)-1) {
                    buffer_append_str(buf_369,",");
                }
            }
            buffer_append_str(buf_369,">");
        }
        if(        charp_operator_not_equals(class_name_370,"lambda")) {
            for(            i_373=0;            i_373<no_solved_type_368->mPointerNum;            i_373++            ){
                buffer_append_str(buf_369,"*");
            }
        }
        if(        list$1sNode$ph_length(no_solved_type_368->mArrayNum)>0) {
            for(            i_374=0;            i_374<list$1sNode$ph_length(no_solved_type_368->mArrayNum);            i_374++            ){
                buffer_append_str(buf_369,"[]");
            }
        }
        if(        no_solved_type_368->mHeap) {
            buffer_append_str(buf_369,"%");
        }
        __result_obj__243 = come_increment_ref_count(((char*)(__right_value330=buffer_to_string(buf_369))));
        /*c*/ come_call_finalizer3(no_solved_type_368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_369,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__243;
        /*c*/ come_call_finalizer3(no_solved_type_368,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_369,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info){
void* __right_value331 = (void*)0;
char* type_name_375;
void* __right_value332 = (void*)0;
char* __result_obj__244;
    type_name_375=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(type,original_type_name,info));
    __result_obj__244 = come_increment_ref_count(((char*)(__right_value332=xsprintf("%s %s",type_name_375,name))));
    (type_name_375 = come_decrement_ref_count(type_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info){
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct buffer* header_376;
void* __right_value335 = (void*)0;
char* result_type_name_377;
void* __right_value336 = (void*)0;
char* impl_name_378;
int i_379;
void* __right_value337 = (void*)0;
struct sType* param_type_380;
void* __right_value338 = (void*)0;
char* param_name_384;
void* __right_value339 = (void*)0;
char* default_parametor_385;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __result_obj__247;
    header_376=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 455, "struct buffer*"))));
    result_type_name_377=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(fun->mResultType,(_Bool)0,info));
    if(    impl_type) {
        impl_name_378=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(impl_type,(_Bool)0,info));
        buffer_append_format(header_376,"extern %s %s::%s(",result_type_name_377,impl_name_378,base_fun_name);
        (impl_name_378 = come_decrement_ref_count(impl_name_378, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(header_376,"extern %s %s(",result_type_name_377,base_fun_name);
    }
    for(    i_379=0;    i_379<list$1sType$ph_length(fun->mParamTypes);    i_379++    ){
        param_type_380=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(fun->mParamTypes,i_379));
        param_name_384=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(fun->mParamNames,i_379));
        default_parametor_385=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(fun->mParamDefaultParametors,i_379));
        if(        default_parametor_385) {
            buffer_append_format(header_376,"%s %s=%s",((char*)(__right_value340=make_come_type_name_string_no_solved(param_type_380,(_Bool)0,info))),param_name_384,default_parametor_385);
            (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(header_376,"%s %s",((char*)(__right_value341=make_come_type_name_string_no_solved(param_type_380,(_Bool)0,info))),param_name_384);
            (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_379!=list$1sType$ph_length(fun->mParamTypes)-1) {
            buffer_append_str(header_376,",");
        }
        /*c*/ come_call_finalizer3(param_type_380,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_384 = come_decrement_ref_count(param_name_384, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (default_parametor_385 = come_decrement_ref_count(default_parametor_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    version_==-1||version_==0) {
        buffer_append_str(header_376,");\n");
    }
    else {
        buffer_append_format(header_376,") version %d;\n",version_);
    }
    __result_obj__247 = come_increment_ref_count(((char*)(__right_value342=buffer_to_string(header_376))));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(impl_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(header_376,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_name_377 = come_decrement_ref_count(result_type_name_377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_381;
int i_382;
char* __result_obj__245;
char* default_value_383;
char* __result_obj__246;
default_value_383 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_381=self->head;
    i_382=0;
    while(it_381!=((void*)0)) {
        if(        position==i_382) {
            __result_obj__245 = come_increment_ref_count(it_381->item);
            (__result_obj__245 = come_decrement_ref_count(__result_obj__245, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__245;
        }
        it_381=it_381->next;
        i_382++;
    }
    memset(&default_value_383,0,sizeof(char*));
    __result_obj__246 = come_increment_ref_count(default_value_383);
    (default_value_383 = come_decrement_ref_count(default_value_383, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__246 = come_decrement_ref_count(__result_obj__246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__246;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct buffer* output_386;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct buffer* output2_387;
int i_388;
struct list$1sType$ph* o2_saved_389;
struct sType* it_390;
void* __right_value347 = (void*)0;
char* name_391;
void* __right_value348 = (void*)0;
char* str_392;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* str_393;
void* __right_value351 = (void*)0;
struct sType* base_result_type_394;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1sNode$ph* __dec_obj53;
void* __right_value354 = (void*)0;
char* result_type_str_395;
int i_396;
struct list$1sType$ph* o2_saved_397;
struct sType* it_398;
void* __right_value355 = (void*)0;
char* name_399;
void* __right_value356 = (void*)0;
char* str_400;
void* __right_value357 = (void*)0;
struct sNode* node_401;
void* __right_value358 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_405=0;
char* Err_406=0;
void* __right_value359 = (void*)0;
char* __result_obj__250;
void* __right_value360 = (void*)0;
struct CVALUE* cvalue_407;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* result_type_str_408;
int i_409;
struct list$1sType$ph* o2_saved_410;
struct sType* it_411;
void* __right_value363 = (void*)0;
char* name_412;
void* __right_value364 = (void*)0;
char* str_413;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
char* __result_obj__251;
    output_386=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 496, "struct buffer*"))));
    if(    fun->mResultType->mResultType) {
        output2_387=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 498, "struct buffer*"))));
        buffer_append_str(output2_387,fun->mName);
        buffer_append_str(output2_387,"(");
        i_388=0;
        for(        o2_saved_389=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_390=list$1sType$ph_begin((o2_saved_389));        !list$1sType$ph_end((o2_saved_389));        it_390=list$1sType$ph_next((o2_saved_389))        ){
            name_391=((char*)(__right_value347=list$1char$ph$p_operator_load_element(fun->mParamNames,i_388)));
            (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_392=(char*)come_increment_ref_count(make_define_var(it_390,name_391,(_Bool)0,info));
            buffer_append_str(output2_387,str_392);
            if(            i_388==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output2_387,", ...");
                }
            }
            else {
                buffer_append_str(output2_387,", ");
            }
            i_388++;
            (str_392 = come_decrement_ref_count(str_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_389,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_387,")");
        str_393=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value349=buffer_to_string(output2_387))),info));
        (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic) {
            buffer_append_str(output_386,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_386,"inline ");
        }
        buffer_append_str(output_386,str_393);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value351=buffer_to_string(output_386))));
        (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(output2_387,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_393 = come_decrement_ref_count(str_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_394=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj53=base_result_type_394->mArrayNum,
        base_result_type_394->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 552, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj53,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_395=(char*)come_increment_ref_count(make_type_name_string(base_result_type_394,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_386,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_386,"inline ");
        }
        buffer_append_str(output_386,result_type_str_395);
        buffer_append_str(output_386," (*");
        buffer_append_str(output_386,fun->mName);
        buffer_append_str(output_386,"(");
        i_396=0;
        for(        o2_saved_397=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_398=list$1sType$ph_begin((o2_saved_397));        !list$1sType$ph_end((o2_saved_397));        it_398=list$1sType$ph_next((o2_saved_397))        ){
            name_399=((char*)(__right_value355=list$1char$ph$p_operator_load_element(fun->mParamNames,i_396)));
            (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_400=(char*)come_increment_ref_count(make_define_var(it_398,name_399,(_Bool)0,info));
            buffer_append_str(output_386,str_400);
            if(            i_396==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_386,", ...");
                }
            }
            else {
                buffer_append_str(output_386,", ");
            }
            i_396++;
            (str_400 = come_decrement_ref_count(str_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_397,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_401=((struct sNode*)(__right_value357=list$1sNode$ph$p_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value357) ? __right_value357 = come_decrement_ref_count(__right_value357, ((struct sNode*)__right_value357)->finalize, ((struct sNode*)__right_value357)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_401,info)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value358=err_msg(info,"invalid array number")));
            come_exception_var_c5_405=multiple_assign_var5->v1;
            Err_406=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_406)?(puts(Err_406),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value358,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__250 = come_increment_ref_count(((char*)(__right_value359=__builtin_string(""))));
            (Err_406 = come_decrement_ref_count(Err_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(base_result_type_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_395 = come_decrement_ref_count(result_type_str_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_386,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__250;
            (Err_406 = come_decrement_ref_count(Err_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        cvalue_407=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_386,"))[%s]",cvalue_407->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value361=buffer_to_string(output_386))));
        (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(base_result_type_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_395 = come_decrement_ref_count(result_type_str_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_407,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_408=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_386,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_386,"inline ");
        }
        buffer_append_str(output_386,result_type_str_408);
        buffer_append_str(output_386," ");
        buffer_append_str(output_386,fun->mName);
        buffer_append_str(output_386,"(");
        i_409=0;
        for(        o2_saved_410=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_411=list$1sType$ph_begin((o2_saved_410));        !list$1sType$ph_end((o2_saved_410));        it_411=list$1sType$ph_next((o2_saved_410))        ){
            name_412=((char*)(__right_value363=list$1char$ph$p_operator_load_element(fun->mParamNames,i_409)));
            (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_413=(char*)come_increment_ref_count(make_define_var(it_411,name_412,(_Bool)0,info));
            buffer_append_str(output_386,str_413);
            if(            i_409==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_386,", ...");
                }
            }
            else {
                buffer_append_str(output_386,", ");
            }
            i_409++;
            (str_413 = come_decrement_ref_count(str_413, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_410,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output_386,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value365=buffer_to_string(output_386))));
        (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        (result_type_str_408 = come_decrement_ref_count(result_type_str_408, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buffer_append_str(output_386,"{\n");
    buffer_append_str(output_386,((char*)(__right_value366=buffer_to_string(fun->mSourceHead))));
    (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_386,((char*)(__right_value367=buffer_to_string(fun->mSourceHead2))));
    (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_386,((char*)(__right_value368=buffer_to_string(fun->mSource))));
    (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_386,"}\n");
    __result_obj__251 = come_increment_ref_count(((char*)(__right_value369=buffer_to_string(output_386))));
    /*c*/ come_call_finalizer3(output_386,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__251;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_402;
int i_403;
struct sNode* __result_obj__248;
struct sNode* default_value_404;
struct sNode* __result_obj__249;
default_value_404 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_402=self->head;
    i_403=0;
    while(it_402!=((void*)0)) {
        if(        position==i_403) {
            __result_obj__248 = come_increment_ref_count(it_402->item);
            ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__248;
        }
        it_402=it_402->next;
        i_403++;
    }
    memset(&default_value_404,0,sizeof(struct sNode*));
    __result_obj__249 = come_increment_ref_count(default_value_404);
    ((default_value_404) ? default_value_404 = come_decrement_ref_count(default_value_404, ((struct sNode*)default_value_404)->finalize, ((struct sNode*)default_value_404)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__249) ? __result_obj__249 = come_decrement_ref_count(__result_obj__249, ((struct sNode*)__result_obj__249)->finalize, ((struct sNode*)__result_obj__249)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__249;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct buffer* output_414;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct buffer* output2_415;
int i_416;
struct list$1sType$ph* o2_saved_417;
struct sType* it_418;
void* __right_value374 = (void*)0;
char* name_419;
void* __right_value375 = (void*)0;
char* str_420;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
char* str_421;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* base_result_type_422;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct list$1sNode$ph* __dec_obj54;
void* __right_value382 = (void*)0;
char* result_type_str_423;
int i_424;
struct list$1sType$ph* o2_saved_425;
struct sType* it_426;
void* __right_value383 = (void*)0;
char* name_427;
void* __right_value384 = (void*)0;
char* str_428;
void* __right_value385 = (void*)0;
struct sNode* node_429;
void* __right_value386 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_430=0;
char* Err_431=0;
void* __right_value387 = (void*)0;
char* __result_obj__252;
void* __right_value388 = (void*)0;
struct CVALUE* cvalue_432;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
char* result_type_str_433;
int i_434;
struct list$1sType$ph* o2_saved_435;
struct sType* it_436;
void* __right_value392 = (void*)0;
char* name_437;
void* __right_value393 = (void*)0;
char* str_438;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* __result_obj__253;
    output_414=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 678, "struct buffer*"))));
    if(    fun->mResultType->mResultType) {
        output2_415=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 681, "struct buffer*"))));
        buffer_append_str(output2_415,fun->mName);
        buffer_append_str(output2_415,"(");
        i_416=0;
        for(        o2_saved_417=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_418=list$1sType$ph_begin((o2_saved_417));        !list$1sType$ph_end((o2_saved_417));        it_418=list$1sType$ph_next((o2_saved_417))        ){
            name_419=((char*)(__right_value374=list$1char$ph$p_operator_load_element(fun->mParamNames,i_416)));
            (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_420=(char*)come_increment_ref_count(make_define_var(it_418,name_419,(_Bool)0,info));
            buffer_append_str(output2_415,str_420);
            if(            i_416!=list$1sType$ph_length(fun->mParamTypes)-1) {
                buffer_append_str(output2_415,", ");
            }
            i_416++;
            (str_420 = come_decrement_ref_count(str_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_417,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_415,")");
        str_421=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value376=buffer_to_string(output2_415))),info));
        (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic) {
            buffer_append_str(output_414,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_414,"inline ");
        }
        buffer_append_str(output_414,str_421);
        if(        string_operator_not_equals(fun->mFunAttribute,"")) {
            buffer_append_str(output_414,((char*)(__right_value379=xsprintf(" \%s ",((char*)(__right_value378=string_to_string(fun->mFunAttribute)))))));
            (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(output_414,";\n");
        /*c*/ come_call_finalizer3(output2_415,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_421 = come_decrement_ref_count(str_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_422=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj54=base_result_type_422->mArrayNum,
        base_result_type_422->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 717, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj54,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_423=(char*)come_increment_ref_count(make_type_name_string(base_result_type_422,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_414,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_414,"inline ");
        }
        buffer_append_str(output_414,result_type_str_423);
        buffer_append_str(output_414," (*");
        buffer_append_str(output_414,fun->mName);
        buffer_append_str(output_414,"(");
        i_424=0;
        for(        o2_saved_425=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_426=list$1sType$ph_begin((o2_saved_425));        !list$1sType$ph_end((o2_saved_425));        it_426=list$1sType$ph_next((o2_saved_425))        ){
            name_427=((char*)(__right_value383=list$1char$ph$p_operator_load_element(fun->mParamNames,i_424)));
            (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_428=(char*)come_increment_ref_count(make_define_var(it_426,name_427,(_Bool)0,info));
            buffer_append_str(output_414,str_428);
            if(            i_424==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_414,", ...");
                }
            }
            else {
                buffer_append_str(output_414,", ");
            }
            i_424++;
            (str_428 = come_decrement_ref_count(str_428, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_425,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_429=((struct sNode*)(__right_value385=list$1sNode$ph$p_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value385) ? __right_value385 = come_decrement_ref_count(__right_value385, ((struct sNode*)__right_value385)->finalize, ((struct sNode*)__right_value385)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_429,info)) {
            multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value386=err_msg(info,"invalid array number")));
            come_exception_var_c6_430=multiple_assign_var6->v1;
            Err_431=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            ((Err_431)?(puts(Err_431),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value386,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__252 = come_increment_ref_count(((char*)(__right_value387=__builtin_string(""))));
            (Err_431 = come_decrement_ref_count(Err_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(base_result_type_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_423 = come_decrement_ref_count(result_type_str_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_414,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__252 = come_decrement_ref_count(__result_obj__252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__252;
            (Err_431 = come_decrement_ref_count(Err_431, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        cvalue_432=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_414,"))[%s]",cvalue_432->c_value);
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_414,((char*)(__right_value390=xsprintf("\%s ",((char*)(__right_value389=string_to_string(fun->mAttribute)))))));
            (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_format(output_414,";\n");
        /*c*/ come_call_finalizer3(base_result_type_422,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_423 = come_decrement_ref_count(result_type_str_423, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_432,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_433=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_414,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_414,"inline ");
        }
        buffer_append_str(output_414,result_type_str_433);
        buffer_append_str(output_414," ");
        buffer_append_str(output_414,fun->mName);
        buffer_append_str(output_414,"(");
        i_434=0;
        for(        o2_saved_435=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_436=list$1sType$ph_begin((o2_saved_435));        !list$1sType$ph_end((o2_saved_435));        it_436=list$1sType$ph_next((o2_saved_435))        ){
            name_437=((char*)(__right_value392=list$1char$ph$p_operator_load_element(fun->mParamNames,i_434)));
            (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_438=(char*)come_increment_ref_count(make_define_var(it_436,name_437,(_Bool)0,info));
            buffer_append_str(output_414,str_438);
            if(            i_434==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_414,", ...");
                }
            }
            else {
                buffer_append_str(output_414,", ");
            }
            i_434++;
            (str_438 = come_decrement_ref_count(str_438, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_435,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        string_operator_not_equals(fun->mFunAttribute,"")) {
            buffer_append_str(output_414,((char*)(__right_value395=xsprintf(") \%s;\n",((char*)(__right_value394=string_to_string(fun->mFunAttribute)))))));
            (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_str(output_414,");\n");
        }
        (result_type_str_433 = come_decrement_ref_count(result_type_str_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__253 = come_increment_ref_count(((char*)(__right_value396=buffer_to_string(output_414))));
    /*c*/ come_call_finalizer3(output_414,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__253 = come_decrement_ref_count(__result_obj__253, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct buffer* output_439;
void* __right_value399 = (void*)0;
char* result_type_str_440;
int i_441;
struct list$1sType$ph* o2_saved_442;
struct sType* it_443;
void* __right_value400 = (void*)0;
char* name_444;
void* __right_value401 = (void*)0;
char* str_445;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
char* __result_obj__254;
    output_439=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03output_code.c", 812, "struct buffer*"))));
    result_type_str_440=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    buffer_append_str(output_439,result_type_str_440);
    buffer_append_str(output_439," ");
    buffer_append_str(output_439,name);
    buffer_append_str(output_439,"(");
    i_441=0;
    for(    o2_saved_442=(struct list$1sType$ph*)come_increment_ref_count((lambda_type->mParamTypes)),it_443=list$1sType$ph_begin((o2_saved_442));    !list$1sType$ph_end((o2_saved_442));    it_443=list$1sType$ph_next((o2_saved_442))    ){
        name_444=((char*)(__right_value400=list$1char$ph$p_operator_load_element(lambda_type->mParamNames,i_441)));
        (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        str_445=(char*)come_increment_ref_count(make_define_var(it_443,name_444,(_Bool)0,info));
        buffer_append_str(output_439,str_445);
        if(        i_441==list$1sType$ph_length(lambda_type->mParamTypes)-1) {
            if(            lambda_type->mVarArgs) {
                buffer_append_str(output_439,", ...");
            }
        }
        else {
            buffer_append_str(output_439,", ");
        }
        i_441++;
        (str_445 = come_decrement_ref_count(str_445, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_442,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    lambda_type->mAttribute) {
        buffer_append_str(output_439,((char*)(__right_value403=string_operator_add(((char*)(__right_value402=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(output_439,");\n");
    }
    __result_obj__254 = come_increment_ref_count(((char*)(__right_value404=buffer_to_string(output_439))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(output_439,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_str_440 = come_decrement_ref_count(result_type_str_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__254 = come_decrement_ref_count(__result_obj__254, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__254;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* msg2_446;
va_list args_447;
int len_448;
int i_449;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
msg2_446 = (void*)0;
memset(&args_447, 0, sizeof(va_list));
memset(&i_449, 0, sizeof(int));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_447,msg);
    len_448=vasprintf(&msg2_446,msg,args_447);
    __builtin_va_end(args_447);
    if(    info->come_fun) {
        for(        i_449=0;        i_449<info->block_level;        i_449++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value405=xsprintf("%s",msg2_446))));
        (__right_value405 = come_decrement_ref_count(__right_value405, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value406=xsprintf("%s",msg2_446))));
        (__right_value406 = come_decrement_ref_count(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    free(msg2_446);
    /*c*/ come_call_finalizer3((&args_447),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_450;
va_list args_451;
int len_452;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
_Bool _if_conditional1;
void* __right_value409 = (void*)0;
void* __right_value415 = (void*)0;
msg2_450 = (void*)0;
memset(&args_451, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_451,msg);
        len_452=vasprintf(&msg2_450,msg,args_451);
        __builtin_va_end(args_451);
        if(        (_if_conditional1=(((char*)(__right_value408=map$2char$phchar$ph$p_operator_load_element(info->module->mHeader,((char*)(__right_value407=__builtin_string(id))))))==((void*)0))),        (__right_value407 = come_decrement_ref_count(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            map$2char$phchar$ph$p_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_450)));
        }
        free(msg2_450);
        /*c*/ come_call_finalizer3((&args_451),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_453;
unsigned int hash_454;
unsigned int it_455;
char* __result_obj__255;
char* __result_obj__256;
char* __result_obj__257;
char* __result_obj__258;
default_value_453 = (void*)0;
    memset(&default_value_453,0,sizeof(char*));
    hash_454=string_get_hash_key(((char*)key))%self->size;
    it_455=hash_454;
    while((_Bool)1) {
        if(        self->item_existance[it_455]) {
            if(            string_equals(self->keys[it_455],key)) {
                __result_obj__255 = come_increment_ref_count(self->items[it_455]);
                (default_value_453 = come_decrement_ref_count(default_value_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__255;
            }
            it_455++;
            if(            it_455>=self->size) {
                it_455=0;
            }
            else if(            it_455==hash_454) {
                __result_obj__256 = come_increment_ref_count(default_value_453);
                (default_value_453 = come_decrement_ref_count(default_value_453, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__256 = come_decrement_ref_count(__result_obj__256, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__256;
            }
        }
        else {
            __result_obj__257 = come_increment_ref_count(default_value_453);
            (default_value_453 = come_decrement_ref_count(default_value_453, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__257 = come_decrement_ref_count(__result_obj__257, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__257;
        }
    }
    __result_obj__258 = come_increment_ref_count(default_value_453);
    (default_value_453 = come_decrement_ref_count(default_value_453, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__258 = come_decrement_ref_count(__result_obj__258, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__258;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_473;
unsigned int it_474;
_Bool same_key_exist_491;
char* it2_494;
struct map$2char$phchar$ph* __result_obj__279;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_473=string_get_hash_key(((char*)key))%self->size;
    it_474=hash_473;
    while((_Bool)1) {
        if(        self->item_existance[it_474]) {
            if(            string_equals(self->keys[it_474],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_474]);
                    (self->keys[it_474] = come_decrement_ref_count(self->keys[it_474], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_474]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_474]);
                    self->keys[it_474]=key;
                }
                if(                1) {
                    (self->items[it_474] = come_decrement_ref_count(self->items[it_474], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_474]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_474]=item;
                }
                break;
            }
            it_474++;
            if(            it_474>=self->size) {
                it_474=0;
            }
            else if(            it_474==hash_473) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_474]=(_Bool)1;
            if(            1) {
                self->keys[it_474]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_474]=key;
            }
            if(            1) {
                self->items[it_474]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_474]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_491=(_Bool)0;
    for(    it2_494=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_494=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_494,key)) {
            same_key_exist_491=(_Bool)1;
        }
    }
    if(    !same_key_exist_491) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__279 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__279;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_456;
void* __right_value410 = (void*)0;
char** keys_457;
void* __right_value411 = (void*)0;
char** items_458;
void* __right_value412 = (void*)0;
_Bool* item_existance_459;
int len_460;
char* it_463;
char* default_value_466;
void* __right_value413 = (void*)0;
char* it2_467;
unsigned int hash_470;
int n_471;
char* default_value_472;
void* __right_value414 = (void*)0;
default_value_466 = (void*)0;
default_value_472 = (void*)0;
    size_456=self->size*10;
    keys_457=(char**)come_increment_ref_count(((char**)(__right_value410=(char**)come_calloc(1, sizeof(char*)*(1*(size_456)), "./comelang.h", 2328, "char**"))));
    items_458=(char**)come_increment_ref_count(((char**)(__right_value411=(char**)come_calloc(1, sizeof(char*)*(1*(size_456)), "./comelang.h", 2329, "char**"))));
    item_existance_459=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value412=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_456)), "./comelang.h", 2330, "_Bool*"))));
    len_460=0;
    for(    it_463=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_463=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_466,0,sizeof(char*));
        it2_467=((char*)(__right_value413=map$2char$phchar$ph_at(self,it_463,(char*)come_increment_ref_count(default_value_466))));
        (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_470=string_get_hash_key(((char*)it_463))%size_456;
        n_471=hash_470;
        while((_Bool)1) {
            if(            item_existance_459[n_471]) {
                n_471++;
                if(                n_471>=size_456) {
                    n_471=0;
                }
                else if(                n_471==hash_470) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_459[n_471]=(_Bool)1;
                keys_457[n_471]=it_463;
                items_458[n_471]=((char*)(__right_value414=map$2char$phchar$ph_at(self,it_463,(char*)come_increment_ref_count(default_value_472))));
                (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_460++;
                (default_value_472 = come_decrement_ref_count(default_value_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_472 = come_decrement_ref_count(default_value_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_466 = come_decrement_ref_count(default_value_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_457;
    self->items=items_458;
    self->item_existance=item_existance_459;
    self->size=size_456;
    self->len=len_460;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_461;
char* __result_obj__259;
char* __result_obj__260;
char* result_462;
char* __result_obj__261;
result_461 = (void*)0;
result_462 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_461,0,sizeof(char*));
        __result_obj__259 = result_461;
        return __result_obj__259;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__260 = self->key_list->it->item;
        return __result_obj__260;
    }
    memset(&result_462,0,sizeof(char*));
    __result_obj__261 = result_462;
    return __result_obj__261;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_464;
char* __result_obj__262;
char* __result_obj__263;
char* result_465;
char* __result_obj__264;
result_464 = (void*)0;
result_465 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_464,0,sizeof(char*));
        __result_obj__262 = result_464;
        return __result_obj__262;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__263 = self->key_list->it->item;
        return __result_obj__263;
    }
    memset(&result_465,0,sizeof(char*));
    __result_obj__264 = result_465;
    return __result_obj__264;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_468;
unsigned int it_469;
char* __result_obj__265;
char* __result_obj__266;
char* __result_obj__267;
char* __result_obj__268;
    hash_468=string_get_hash_key(((char*)key))%self->size;
    it_469=hash_468;
    while((_Bool)1) {
        if(        self->item_existance[it_469]) {
            if(            string_equals(self->keys[it_469],key)) {
                __result_obj__265 = come_increment_ref_count(self->items[it_469]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__265 = come_decrement_ref_count(__result_obj__265, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__265;
            }
            it_469++;
            if(            it_469>=self->size) {
                it_469=0;
            }
            else if(            it_469==hash_468) {
                __result_obj__266 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__266 = come_decrement_ref_count(__result_obj__266, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__266;
            }
        }
        else {
            __result_obj__267 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__267 = come_decrement_ref_count(__result_obj__267, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__267;
        }
    }
    __result_obj__268 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__268 = come_decrement_ref_count(__result_obj__268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__268;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_475;
struct list_item$1char$ph* it_476;
struct list$1char$ph* __result_obj__272;
    it2_475=0;
    it_476=self->head;
    while(it_476!=((void*)0)) {
        if(        string_equals(it_476->item,item)) {
            list$1char$ph_delete(self,it2_475,it2_475+1);
            break;
        }
        it2_475++;
        it_476=it_476->next;
    }
    __result_obj__272 = self;
    return __result_obj__272;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_477;
struct list$1char$ph* __result_obj__269;
struct list_item$1char$ph* it_480;
int i_481;
struct list_item$1char$ph* prev_it_482;
struct list_item$1char$ph* it_483;
int i_484;
struct list_item$1char$ph* prev_it_485;
struct list_item$1char$ph* it_486;
struct list_item$1char$ph* head_prev_it_487;
struct list_item$1char$ph* tail_it_488;
int i_489;
struct list_item$1char$ph* prev_it_490;
struct list$1char$ph* __result_obj__271;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_477=tail;
        tail=head;
        head=tmp_477;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__269 = self;
        return __result_obj__269;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_480=self->head;
        i_481=0;
        while(it_480!=((void*)0)) {
            if(            i_481<tail) {
                prev_it_482=it_480;
                it_480=it_480->next;
                i_481++;
                /*c*/ come_call_finalizer3(prev_it_482,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_481==tail) {
                self->head=it_480;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_480=it_480->next;
                i_481++;
            }
        }
    }
    else if(    tail==self->len) {
        it_483=self->head;
        i_484=0;
        while(it_483!=((void*)0)) {
            if(            i_484==head) {
                self->tail=it_483->prev;
                self->tail->next=((void*)0);
            }
            if(            i_484>=head) {
                prev_it_485=it_483;
                it_483=it_483->next;
                i_484++;
                /*c*/ come_call_finalizer3(prev_it_485,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_483=it_483->next;
                i_484++;
            }
        }
    }
    else {
        it_486=self->head;
        head_prev_it_487=((void*)0);
        tail_it_488=((void*)0);
        i_489=0;
        while(it_486!=((void*)0)) {
            if(            i_489==head) {
                head_prev_it_487=it_486->prev;
            }
            if(            i_489==tail) {
                tail_it_488=it_486;
            }
            if(            i_489>=head&&i_489<tail) {
                prev_it_490=it_486;
                it_486=it_486->next;
                i_489++;
                /*c*/ come_call_finalizer3(prev_it_490,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_486=it_486->next;
                i_489++;
            }
        }
        if(        head_prev_it_487!=((void*)0)) {
            head_prev_it_487->next=tail_it_488;
        }
        if(        tail_it_488!=((void*)0)) {
            tail_it_488->prev=head_prev_it_487;
        }
    }
    __result_obj__271 = self;
    return __result_obj__271;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_478;
struct list_item$1char$ph* prev_it_479;
struct list$1char$ph* __result_obj__270;
    it_478=self->head;
    while(it_478!=((void*)0)) {
        prev_it_479=it_478;
        it_478=it_478->next;
        /*c*/ come_call_finalizer3(prev_it_479,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__270 = self;
    return __result_obj__270;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_492;
char* __result_obj__273;
char* __result_obj__274;
char* result_493;
char* __result_obj__275;
result_492 = (void*)0;
result_493 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_492,0,sizeof(char*));
        __result_obj__273 = result_492;
        return __result_obj__273;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__274 = self->it->item;
        return __result_obj__274;
    }
    memset(&result_493,0,sizeof(char*));
    __result_obj__275 = result_493;
    return __result_obj__275;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_495;
char* __result_obj__276;
char* __result_obj__277;
char* result_496;
char* __result_obj__278;
result_495 = (void*)0;
result_496 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_495,0,sizeof(char*));
        __result_obj__276 = result_495;
        return __result_obj__276;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__277 = self->it->item;
        return __result_obj__277;
    }
    memset(&result_496,0,sizeof(char*));
    __result_obj__278 = result_496;
    return __result_obj__278;
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_497;
va_list args_498;
int len_499;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
_Bool _if_conditional2;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
msg2_497 = (void*)0;
memset(&args_498, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_498,msg);
        len_499=vasprintf(&msg2_497,msg,args_498);
        __builtin_va_end(args_498);
        if(        (_if_conditional2=(((char*)(__right_value417=map$2char$phchar$ph$p_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value416=__builtin_string(id))))))==((void*)0))),        (__right_value416 = come_decrement_ref_count(__right_value416, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value417 = come_decrement_ref_count(__right_value417, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional2) {
            map$2char$phchar$ph$p_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_497)));
        }
        free(msg2_497);
        /*c*/ come_call_finalizer3((&args_498),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_source_file(struct sInfo* info){
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sFun* main_fun_500;
_Bool main_module_504;
void* __right_value422 = (void*)0;
char* output_file_name_505;
struct _IO_FILE* f_506;
_Bool __exception_result_var_b1;
struct map$2char$phbuffer$ph* o2_saved_507;
char* it_510;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct buffer* buf_513;
void* __right_value425 = (void*)0;
struct map$2char$phbuffer$ph* o2_saved_519;
char* it_520;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* buf_521;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct map$2char$phsFun$ph* o2_saved_522;
char* it_525;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sFun* it2_528;
void* __right_value432 = (void*)0;
char* header_529;
struct map$2char$phchar$ph* o2_saved_532;
char* it_533;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
char* str_534;
struct map$2char$phsFun$ph* o2_saved_537;
char* it_538;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct sFun* it2_539;
void* __right_value437 = (void*)0;
char* output_540;
struct map$2char$phsFun$ph* o2_saved_541;
char* it_542;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* it2_543;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
int n_544;
void* __right_value443 = (void*)0;
char* output_545;
_Bool __result_obj__300;
    main_fun_500=((struct sFun*)(__right_value421=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value420=xsprintf("main"))))));
    (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value421,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    main_module_504=(_Bool)0;
    if(    main_fun_500) {
        if(        !main_fun_500->mExternal) {
            main_module_504=(_Bool)1;
        }
    }
    output_file_name_505=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f_506=fopen(output_file_name_505,"w");
    if(    f_506==((void*)0)) {
        (come_push_stackframe("03output_code.c", 934, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f_506,"/// previous struct definition ///\n");
    for(    o2_saved_507=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->previous_struct_definition)),it_510=map$2char$phbuffer$ph_begin((o2_saved_507));    !map$2char$phbuffer$ph_end((o2_saved_507));    it_510=map$2char$phbuffer$ph_next((o2_saved_507))    ){
        buf_513=((struct buffer*)(__right_value424=map$2char$phbuffer$ph$p_operator_load_element(info->previous_struct_definition,((char*)(__right_value423=__builtin_string(it_510))))));
        (__right_value423 = come_decrement_ref_count(__right_value423, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value424,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_506,"%s\n",((char*)(__right_value425=buffer_to_string(buf_513))));
        (__right_value425 = come_decrement_ref_count(__right_value425, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_507,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_506,"/// struct definition ///\n");
    for(    o2_saved_519=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->struct_definition)),it_520=map$2char$phbuffer$ph_begin((o2_saved_519));    !map$2char$phbuffer$ph_end((o2_saved_519));    it_520=map$2char$phbuffer$ph_next((o2_saved_519))    ){
        buf_521=((struct buffer*)(__right_value427=map$2char$phbuffer$ph$p_operator_load_element(info->struct_definition,((char*)(__right_value426=__builtin_string(it_520))))));
        (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value427,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_506,"%s\n",((char*)(__right_value428=buffer_to_string(buf_521))));
        (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_519,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_506,"// source head\n");
    fprintf(f_506,"%s\n",((char*)(__right_value429=buffer_to_string(info->module->mSourceHead))));
    (__right_value429 = come_decrement_ref_count(__right_value429, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fprintf(f_506,"// header function\n");
    for(    o2_saved_522=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_525=map$2char$phsFun$ph_begin((o2_saved_522));    !map$2char$phsFun$ph_end((o2_saved_522));    it_525=map$2char$phsFun$ph_next((o2_saved_522))    ){
        it2_528=((struct sFun*)(__right_value431=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value430=__builtin_string(it_525))))));
        (__right_value430 = come_decrement_ref_count(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value431,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        header_529=(char*)come_increment_ref_count(header_function(it2_528,info));
        if(        it2_528->mInline) {
        }
        else if(        string_operator_not_equals(it_525,"__builtin_va_start")&&string_operator_not_equals(it_525,"__builtin_va_end")) {
            fprintf(f_506,"%s",header_529,it_525);
        }
        (header_529 = come_decrement_ref_count(header_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_522,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_506,"// uniq global variable\n");
    if(    main_module_504) {
        for(        o2_saved_532=(struct map$2char$phchar$ph*)come_increment_ref_count((info->uniq_definition)),it_533=map$2char$phchar$ph_begin((o2_saved_532));        !map$2char$phchar$ph_end((o2_saved_532));        it_533=map$2char$phchar$ph_next((o2_saved_532))        ){
            str_534=((char*)(__right_value434=map$2char$phchar$ph$p_operator_load_element(info->uniq_definition,((char*)(__right_value433=__builtin_string(it_533))))));
            (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            fprintf(f_506,"%s\n",str_534);
        }
        /*c*/ come_call_finalizer3(o2_saved_532,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    fprintf(f_506,"// inline function\n");
    for(    o2_saved_537=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_538=map$2char$phsFun$ph_begin((o2_saved_537));    !map$2char$phsFun$ph_end((o2_saved_537));    it_538=map$2char$phsFun$ph_next((o2_saved_537))    ){
        it2_539=((struct sFun*)(__right_value436=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value435=__builtin_string(it_538))))));
        (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value436,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        it2_539->mInline) {
            output_540=(char*)come_increment_ref_count(output_function(it2_539,info));
            fprintf(f_506,"%s",output_540);
            (output_540 = come_decrement_ref_count(output_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_537,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_506,"\n");
    fprintf(f_506,"// body function\n");
    for(    o2_saved_541=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_542=map$2char$phsFun$ph_begin((o2_saved_541));    !map$2char$phsFun$ph_end((o2_saved_541));    it_542=map$2char$phsFun$ph_next((o2_saved_541))    ){
        it2_543=((struct sFun*)(__right_value439=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value438=__builtin_string(it_542))))));
        (__right_value438 = come_decrement_ref_count(__right_value438, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value439,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        n_544=string_length(((char*)(__right_value440=buffer_to_string(it2_543->mSourceHead))))+string_length(((char*)(__right_value441=buffer_to_string(it2_543->mSourceHead2))))+string_length(((char*)(__right_value442=buffer_to_string(it2_543->mSource))));
        (__right_value440 = come_decrement_ref_count(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value441 = come_decrement_ref_count(__right_value441, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value442 = come_decrement_ref_count(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        it2_543->mExternal) {
        }
        else if(        !main_module_504&&it2_543->mUniq) {
        }
        else if(        it2_543->mInline) {
        }
        else {
            output_545=(char*)come_increment_ref_count(output_function(it2_543,info));
            fprintf(f_506,"%s",output_545);
            fprintf(f_506,"\n");
            (output_545 = come_decrement_ref_count(output_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_541,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fclose(f_506);
    __result_obj__300 = (_Bool)1;
    (output_file_name_505 = come_decrement_ref_count(output_file_name_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__300;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_501;
unsigned int hash_502;
unsigned int it_503;
struct sFun* __result_obj__280;
struct sFun* __result_obj__281;
struct sFun* __result_obj__282;
struct sFun* __result_obj__283;
default_value_501 = (void*)0;
    memset(&default_value_501,0,sizeof(struct sFun*));
    hash_502=string_get_hash_key(((char*)key))%self->size;
    it_503=hash_502;
    while((_Bool)1) {
        if(        self->item_existance[it_503]) {
            if(            string_equals(self->keys[it_503],key)) {
                __result_obj__280 = come_increment_ref_count(self->items[it_503]);
                /*c*/ come_call_finalizer3(default_value_501,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__280,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__280;
            }
            it_503++;
            if(            it_503>=self->size) {
                it_503=0;
            }
            else if(            it_503==hash_502) {
                __result_obj__281 = come_increment_ref_count(default_value_501);
                /*c*/ come_call_finalizer3(default_value_501,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__281,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__281;
            }
        }
        else {
            __result_obj__282 = come_increment_ref_count(default_value_501);
            /*c*/ come_call_finalizer3(default_value_501,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__282,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__282;
        }
    }
    __result_obj__283 = come_increment_ref_count(default_value_501);
    /*c*/ come_call_finalizer3(default_value_501,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__283,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
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

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_508;
char* __result_obj__284;
char* __result_obj__285;
char* result_509;
char* __result_obj__286;
result_508 = (void*)0;
result_509 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_508,0,sizeof(char*));
        __result_obj__284 = result_508;
        return __result_obj__284;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__285 = self->key_list->it->item;
        return __result_obj__285;
    }
    memset(&result_509,0,sizeof(char*));
    __result_obj__286 = result_509;
    return __result_obj__286;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_511;
char* __result_obj__287;
char* __result_obj__288;
char* result_512;
char* __result_obj__289;
result_511 = (void*)0;
result_512 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_511,0,sizeof(char*));
        __result_obj__287 = result_511;
        return __result_obj__287;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__288 = self->key_list->it->item;
        return __result_obj__288;
    }
    memset(&result_512,0,sizeof(char*));
    __result_obj__289 = result_512;
    return __result_obj__289;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_514;
unsigned int hash_515;
unsigned int it_516;
struct buffer* __result_obj__290;
struct buffer* __result_obj__291;
struct buffer* __result_obj__292;
struct buffer* __result_obj__293;
default_value_514 = (void*)0;
    memset(&default_value_514,0,sizeof(struct buffer*));
    hash_515=string_get_hash_key(((char*)key))%self->size;
    it_516=hash_515;
    while((_Bool)1) {
        if(        self->item_existance[it_516]) {
            if(            string_equals(self->keys[it_516],key)) {
                __result_obj__290 = come_increment_ref_count(self->items[it_516]);
                /*c*/ come_call_finalizer3(default_value_514,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__290,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__290;
            }
            it_516++;
            if(            it_516>=self->size) {
                it_516=0;
            }
            else if(            it_516==hash_515) {
                __result_obj__291 = come_increment_ref_count(default_value_514);
                /*c*/ come_call_finalizer3(default_value_514,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__291,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__291;
            }
        }
        else {
            __result_obj__292 = come_increment_ref_count(default_value_514);
            /*c*/ come_call_finalizer3(default_value_514,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__292,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__292;
        }
    }
    __result_obj__293 = come_increment_ref_count(default_value_514);
    /*c*/ come_call_finalizer3(default_value_514,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__293,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_517;
int i_518;
    for(    i_517=0;    i_517<self->size;    i_517++    ){
        if(        self->item_existance[i_517]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_517],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_518=0;    i_518<self->size;    i_518++    ){
        if(        self->item_existance[i_518]) {
            if(            1) {
                (self->keys[i_518] = come_decrement_ref_count(self->keys[i_518], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_523;
char* __result_obj__294;
char* __result_obj__295;
char* result_524;
char* __result_obj__296;
result_523 = (void*)0;
result_524 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_523,0,sizeof(char*));
        __result_obj__294 = result_523;
        return __result_obj__294;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__295 = self->key_list->it->item;
        return __result_obj__295;
    }
    memset(&result_524,0,sizeof(char*));
    __result_obj__296 = result_524;
    return __result_obj__296;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_526;
char* __result_obj__297;
char* __result_obj__298;
char* result_527;
char* __result_obj__299;
result_526 = (void*)0;
result_527 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_526,0,sizeof(char*));
        __result_obj__297 = result_526;
        return __result_obj__297;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__298 = self->key_list->it->item;
        return __result_obj__298;
    }
    memset(&result_527,0,sizeof(char*));
    __result_obj__299 = result_527;
    return __result_obj__299;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_530;
int i_531;
    for(    i_530=0;    i_530<self->size;    i_530++    ){
        if(        self->item_existance[i_530]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_530],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_531=0;    i_531<self->size;    i_531++    ){
        if(        self->item_existance[i_531]) {
            if(            1) {
                (self->keys[i_531] = come_decrement_ref_count(self->keys[i_531], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_535;
int i_536;
    for(    i_535=0;    i_535<self->size;    i_535++    ){
        if(        self->item_existance[i_535]) {
            if(            1) {
                (self->items[i_535] = come_decrement_ref_count(self->items[i_535], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_536=0;    i_536<self->size;    i_536++    ){
        if(        self->item_existance[i_536]) {
            if(            1) {
                (self->keys[i_536] = come_decrement_ref_count(self->keys[i_536], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name_546;
struct _IO_FILE* f_547;
struct map$2char$phchar$ph* o2_saved_548;
char* it_549;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* item_550;
struct map$2char$phchar$ph* o2_saved_551;
char* it_552;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* item_553;
_Bool __result_obj__301;
    output_file_name_546=(char*)come_increment_ref_count(info->output_file_name);
    f_547=fopen(output_file_name_546,"a");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_547,"#ifndef __COMMON_H__\n");
        fprintf(f_547,"#define __COMMON_H__\n");
        fprintf(f_547,"#include <comelang.h>\n");
    }
    for(    o2_saved_548=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeaderStructs)),it_549=map$2char$phchar$ph_begin((o2_saved_548));    !map$2char$phchar$ph_end((o2_saved_548));    it_549=map$2char$phchar$ph_next((o2_saved_548))    ){
        item_550=(char*)come_increment_ref_count(map$2char$phchar$ph$p_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value444=__builtin_string(it_549)))));
        (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_547,"%s",item_550);
        (item_550 = come_decrement_ref_count(item_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_548,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    o2_saved_551=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeader)),it_552=map$2char$phchar$ph_begin((o2_saved_551));    !map$2char$phchar$ph_end((o2_saved_551));    it_552=map$2char$phchar$ph_next((o2_saved_551))    ){
        item_553=(char*)come_increment_ref_count(map$2char$phchar$ph$p_operator_load_element(info->module->mHeader,((char*)(__right_value446=__builtin_string(it_552)))));
        (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_547,"%s",item_553);
        (item_553 = come_decrement_ref_count(item_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_551,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_547,"\n");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_547,"#endif\n");
    }
    fclose(f_547);
    __result_obj__301 = (_Bool)1;
    (output_file_name_546 = come_decrement_ref_count(output_file_name_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__301;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* msg2_554;
va_list args_555;
int len_556;
msg2_554 = (void*)0;
memset(&args_555, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_555,code);
    len_556=vasprintf(&msg2_554,code,args_555);
    __builtin_va_end(args_555);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_554);
    }
    free(msg2_554);
    /*c*/ come_call_finalizer3((&args_555),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* msg2_557;
va_list args_558;
int len_559;
msg2_557 = (void*)0;
memset(&args_558, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_558,code);
    len_559=vasprintf(&msg2_557,code,args_558);
    __builtin_va_end(args_558);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_557);
    }
    free(msg2_557);
    /*c*/ come_call_finalizer3((&args_558),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
char* __dec_obj55;
char* __dec_obj56;
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        add_last_code_to_source_with_comma(info);
    }
    else {
        if(        info->module->mLastCode) {
            add_come_code(info,"%s;\n",info->module->mLastCode);
            __dec_obj55=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        info->module->mLastCode2) {
            add_come_code(info,"%s;\n",info->module->mLastCode2);
            __dec_obj56=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __dec_obj57;
char* __dec_obj58;
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->module->mLastCode) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj57=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->module->mLastCode2) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj58=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* msg2_560;
va_list args_561;
int len_562;
void* __right_value448 = (void*)0;
char* __dec_obj59;
msg2_560 = (void*)0;
memset(&args_561, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_561,msg);
    len_562=vasprintf(&msg2_560,msg,args_561);
    __builtin_va_end(args_561);
    __dec_obj59=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2_560));
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_560);
    /*c*/ come_call_finalizer3((&args_561),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* msg2_563;
va_list args_564;
int len_565;
void* __right_value449 = (void*)0;
char* __dec_obj60;
msg2_563 = (void*)0;
memset(&args_564, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_564,msg);
    len_565=vasprintf(&msg2_563,msg,args_564);
    __builtin_va_end(args_564);
    __dec_obj60=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2_563));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_563);
    /*c*/ come_call_finalizer3((&args_564),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUE$ph_delete(info->stack,-value,-1);
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail){
int tmp_566;
struct list$1CVALUE$ph* __result_obj__302;
struct list_item$1CVALUE$ph* it_569;
int i_570;
struct list_item$1CVALUE$ph* prev_it_571;
struct list_item$1CVALUE$ph* it_572;
int i_573;
struct list_item$1CVALUE$ph* prev_it_574;
struct list_item$1CVALUE$ph* it_575;
struct list_item$1CVALUE$ph* head_prev_it_576;
struct list_item$1CVALUE$ph* tail_it_577;
int i_578;
struct list_item$1CVALUE$ph* prev_it_579;
struct list$1CVALUE$ph* __result_obj__304;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_566=tail;
        tail=head;
        head=tmp_566;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__302 = self;
        return __result_obj__302;
    }
    if(    head==0&&tail==self->len) {
        list$1CVALUE$ph_reset(self);
    }
    else if(    head==0) {
        it_569=self->head;
        i_570=0;
        while(it_569!=((void*)0)) {
            if(            i_570<tail) {
                prev_it_571=it_569;
                it_569=it_569->next;
                i_570++;
                /*c*/ come_call_finalizer3(prev_it_571,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_570==tail) {
                self->head=it_569;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_569=it_569->next;
                i_570++;
            }
        }
    }
    else if(    tail==self->len) {
        it_572=self->head;
        i_573=0;
        while(it_572!=((void*)0)) {
            if(            i_573==head) {
                self->tail=it_572->prev;
                self->tail->next=((void*)0);
            }
            if(            i_573>=head) {
                prev_it_574=it_572;
                it_572=it_572->next;
                i_573++;
                /*c*/ come_call_finalizer3(prev_it_574,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_572=it_572->next;
                i_573++;
            }
        }
    }
    else {
        it_575=self->head;
        head_prev_it_576=((void*)0);
        tail_it_577=((void*)0);
        i_578=0;
        while(it_575!=((void*)0)) {
            if(            i_578==head) {
                head_prev_it_576=it_575->prev;
            }
            if(            i_578==tail) {
                tail_it_577=it_575;
            }
            if(            i_578>=head&&i_578<tail) {
                prev_it_579=it_575;
                it_575=it_575->next;
                i_578++;
                /*c*/ come_call_finalizer3(prev_it_579,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_575=it_575->next;
                i_578++;
            }
        }
        if(        head_prev_it_576!=((void*)0)) {
            head_prev_it_576->next=tail_it_577;
        }
        if(        tail_it_577!=((void*)0)) {
            tail_it_577->prev=head_prev_it_576;
        }
    }
    __result_obj__304 = self;
    return __result_obj__304;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_567;
struct list_item$1CVALUE$ph* prev_it_568;
struct list$1CVALUE$ph* __result_obj__303;
    it_567=self->head;
    while(it_567!=((void*)0)) {
        prev_it_568=it_567;
        it_567=it_567->next;
        /*c*/ come_call_finalizer3(prev_it_568,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__303 = self;
    return __result_obj__303;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __dec_obj61;
void* __right_value450 = (void*)0;
void* __right_value456 = (void*)0;
struct CVALUE* result_580;
void* __right_value457 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_585=0;
char* Err_586=0;
struct CVALUE* __result_obj__309;
    __dec_obj61=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_580=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, ((struct CVALUE*)(__right_value450=list$1CVALUE$ph$p_operator_load_element(info->stack,offset)))));
    /*c*/ come_call_finalizer3(__right_value450,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    result_580==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value457=err_msg(info,"invalid stack value")));
        come_exception_var_c7_585=multiple_assign_var7->v1;
        Err_586=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_586)?(puts(Err_586),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value457,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_586 = come_decrement_ref_count(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
    __result_obj__309 = come_increment_ref_count(result_580);
    /*c*/ come_call_finalizer3(result_580,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_581;
int i_582;
struct CVALUE* __result_obj__305;
struct CVALUE* default_value_583;
struct CVALUE* __result_obj__306;
default_value_583 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_581=self->head;
    i_582=0;
    while(it_581!=((void*)0)) {
        if(        position==i_582) {
            __result_obj__305 = come_increment_ref_count(it_581->item);
            /*c*/ come_call_finalizer3(__result_obj__305,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__305;
        }
        it_581=it_581->next;
        i_582++;
    }
    memset(&default_value_583,0,sizeof(struct CVALUE*));
    __result_obj__306 = come_increment_ref_count(default_value_583);
    /*c*/ come_call_finalizer3(default_value_583,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__307;
void* __right_value451 = (void*)0;
struct CVALUE* result_584;
void* __right_value452 = (void*)0;
char* __dec_obj62;
void* __right_value453 = (void*)0;
struct sType* __dec_obj63;
void* __right_value454 = (void*)0;
char* __dec_obj64;
void* __right_value455 = (void*)0;
char* __dec_obj65;
struct CVALUE* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__307,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__307;
    }
    result_584=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj62=result_584->c_value,
        result_584->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj63=result_584->type,
        result_584->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj63,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_584->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_584->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj64=result_584->c_value_without_right_value_objects,
        result_584->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj65=result_584->c_value_without_cast_object_value,
        result_584->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__308 = come_increment_ref_count(result_584);
    /*c*/ come_call_finalizer3(result_584,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__308,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj66;
char* __dec_obj67;
    __dec_obj66=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj67=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
}

